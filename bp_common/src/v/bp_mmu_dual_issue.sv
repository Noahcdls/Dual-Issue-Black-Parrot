/*
 * bp_mmu.v
 */

`include "bp_common_defines.svh"

module bp_mmu_dual_issue
 import bp_common_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)
   , parameter `BSG_INV_PARAM(tlb_els_4k_p)
   , parameter `BSG_INV_PARAM(tlb_els_1g_p)

   , localparam entry_width_lp = `bp_pte_leaf_width(paddr_width_p)
   )
  (input                                              clk_i
   , input                                            reset_i

   , input                                            flush_i //these wires from the fe_cmd stream
   , input [1:0]                                      priv_mode_i
   , input                                            trans_en_i
   , input                                            sum_i
   , input                                            mxr_i
   , input                                            uncached_mode_i
   , input                                            nonspec_mode_i
   , input [hio_width_p-1:0]                          hio_mask_i

   , input                                            w_v_i
   , input [vtag_width_p-1:0]                         w_vtag_i
   , input [entry_width_lp-1:0]                       w_entry_i//only 1 write from fe_cmd

   , input                                            r_v_i1, r_vi_2//can ready out 2 though
   , input                                            r_instr_i1, r_instr_i2
   , input                                            r_load_i,//set to 0 in top
   , input                                            r_store_i
   , input [dword_width_gp-1:0]                       r_eaddr_i1, r_eaddr_i2//two addresses
   , input [1:0]                                      r_size_i

   , output logic                                     r_v_o, r_v_o2//valid out need 2
   , output logic [ptag_width_p-1:0]                  r_ptag_o, r_ptag_o2//output two tags
   , output logic                                     r_instr_miss_o1,r_instr_miss_o2//output two misses
   , output logic                                     r_load_miss_o
   , output logic                                     r_store_miss_o
   , output logic                                     r_uncached_o1, r_uncached_o2//double
   , output logic                                     r_nonidem_o1, r_nonidem_o2//double
   , output logic                                     r_dram_o1, r_dram_o2//double
   , output logic                                     r_instr_access_fault_o
   , output logic                                     r_load_access_fault_o
   , output logic                                     r_store_access_fault_o
   , output logic                                     r_instr_misaligned_o1, r_instr_misaligned_o2//double
   , output logic                                     r_load_misaligned_o
   , output logic                                     r_store_misaligned_o
   , output logic                                     r_instr_page_fault_o1, r_instr_page_fault_o2//double
   , output logic                                     r_load_page_fault_o
   , output logic                                     r_store_page_fault_o
   );

  `declare_bp_core_if(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);

  logic trans_en_r, r_v_r, r_instr_r, r_load_r, r_store_r, sum_r, mxr_r;
  logic [1:0] priv_mode_r;
  bsg_dff_reset
   #(.width_p(9))
   r_v_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.data_i({mxr_i, sum_i, priv_mode_i, trans_en_i, r_v_i, r_instr_i, r_load_i, r_store_i})
     ,.data_o({mxr_r, sum_r, priv_mode_r, trans_en_r, r_v_r, r_instr_r, r_load_r, r_store_r})
     );

  logic [etag_width_p-1:0] r_etag_r,r_etag_r2;
  wire [etag_width_p-1:0] r_etag_li = r_eaddr_i[dword_width_gp-1-:etag_width_p];
  wire [etag_width_p-1:0] r_etag_li2 = r_eaddr_i2[dword_width_gp-1-:etag_width_p];


  bsg_dff_reset
   #(.width_p(etag_width_p))
   etag_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.data_i(r_etag_li)
     ,.data_o(r_etag_r)
     );

  bsg_dff_reset
   #(.width_p(etag_width_p))
   etag_reg2
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.data_i(r_etag_li2)
     ,.data_o(r_etag_r2)
     );

  logic tlb_bypass_r, tlb_bypass_r2;
  wire tlb_bypass = ~w_v_i & (r_etag_li[0+:vtag_width_p] == r_etag_r[0+:vtag_width_p]) & r_v_r & trans_en_r & trans_en_i;
  wire tlb_bypass2 = ~w_v_i & (r_etag_li2[0+:vtag_width_p] == r_etag_r2[0+:vtag_width_p]) & r_v_r & trans_en_r & trans_en_i;


  bsg_dff_reset
   #(.width_p(1))
   tlb_bypass_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.data_i(tlb_bypass)
     ,.data_o(tlb_bypass_r)
     );

  bsg_dff_reset
   #(.width_p(1))
   tlb_bypass_reg2
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.data_i(tlb_bypass2)
     ,.data_o(tlb_bypass_r2)
     );

  logic tlb_r_v_lo, tlb_r_v_lo2;
  bp_pte_leaf_s tlb_r_entry_lo,tlb_r_entry_lo2;
  wire [vtag_width_p-1:0] w_vtag_li = w_v_i ? w_vtag_i : r_eaddr_i[vaddr_width_p-1-:vtag_width_p];
  // wire [vtag_width_p-1:0] w_vtag_li2 = w_v_i ? w_vtag_i : r_eaddr_i[vaddr_width_p-1-:vtag_width_p];
  //the actual tlb that needs to be changed
  bp_tlb
   #(.bp_params_p(bp_params_p), .els_4k_p(tlb_els_4k_p), .els_1g_p(tlb_els_1g_p))
   tlb
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.flush_i(flush_i)

     ,.v_i((r_v_i | w_v_i) & trans_en_i & ~tlb_bypass)
     ,.w_i(w_v_i)
     ,.vtag_i(w_vtag_li)
     ,.entry_i(w_entry_i)

     ,.v_o(tlb_r_v_lo)
     ,.entry_o(tlb_r_entry_lo)
     );







  bp_pte_leaf_s tlb_r_entry_r;
  logic tlb_r_v_r;
  bsg_dff_en_bypass
   #(.width_p(1+$bits(bp_pte_leaf_s)))
   entry_reg
    (.clk_i(clk_i)
     ,.en_i(~tlb_bypass_r)
     ,.data_i({tlb_r_v_lo, tlb_r_entry_lo})
     ,.data_o({tlb_r_v_r, tlb_r_entry_r})
     );

  bp_pte_leaf_s passthrough_entry, tlb_entry_lo;
  assign passthrough_entry = '{ptag: r_etag_r[0+:ptag_width_p], default: '0};
  assign tlb_entry_lo      = trans_en_r ? tlb_r_entry_r : passthrough_entry;
  wire tlb_v_lo            = trans_en_r ? tlb_r_v_r : r_v_r;

  wire ptag_v_lo                  = tlb_v_lo;
  wire [ptag_width_p-1:0] ptag_lo = tlb_entry_lo.ptag;
  logic ptag_uncached_lo, ptag_nonidem_lo, ptag_dram_lo;
  bp_pma
   #(.bp_params_p(bp_params_p))
   pma
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.ptag_v_i(ptag_v_lo)
     ,.ptag_i(ptag_lo)
     ,.uncached_mode_i(uncached_mode_i)
     ,.nonspec_mode_i(nonspec_mode_i)

     ,.uncached_o(ptag_uncached_lo)
     ,.nonidem_o(ptag_nonidem_lo)
     ,.dram_o(ptag_dram_lo)
     );

  // Fault if higher bits of eaddr do not match vaddr MSB
  wire eaddr_fault_v = ~&r_etag_r[etag_width_p-1:vtag_width_p-1] & |r_etag_r[etag_width_p-1:vtag_width_p-1];
  // Fault if hio bit is not enabled and we're accessing that hio
  wire hio_fault_v = (r_instr_r & ptag_lo[ptag_width_p-1-:hio_width_p] != '0)
    || (ptag_lo[ptag_width_p-1-:hio_width_p] & ~hio_mask_i);

  // Access faults
  wire instr_access_fault_v = r_instr_r & hio_fault_v;
  wire load_access_fault_v  = r_load_r  & hio_fault_v;
  wire store_access_fault_v = r_store_r & hio_fault_v;
  wire any_access_fault_v   = |{instr_access_fault_v, load_access_fault_v, store_access_fault_v};

  // Page faults
  wire instr_exe_page_fault_v  = tlb_v_lo & ~tlb_entry_lo.x;
  wire instr_priv_page_fault_v = tlb_v_lo & (((priv_mode_r == `PRIV_MODE_S) & tlb_entry_lo.u)
                                             | ((priv_mode_r == `PRIV_MODE_U) & ~tlb_entry_lo.u)
                                            );
  wire data_priv_page_fault = tlb_v_lo & (((priv_mode_r == `PRIV_MODE_S) & ~sum_r & tlb_entry_lo.u)
                                           | ((priv_mode_r == `PRIV_MODE_U) & ~tlb_entry_lo.u)
                                          );
  wire data_read_page_fault  = tlb_v_lo & ~(tlb_entry_lo.r | (tlb_entry_lo.x & mxr_r));
  wire data_write_page_fault = tlb_v_lo & ~(tlb_entry_lo.w & tlb_entry_lo.d);
  wire instr_page_fault_v = trans_en_r & r_instr_r & (instr_priv_page_fault_v | instr_exe_page_fault_v);
  wire load_page_fault_v  = trans_en_r & r_load_r & (data_priv_page_fault | data_read_page_fault  | eaddr_fault_v);
  wire store_page_fault_v = trans_en_r & r_store_r & (data_priv_page_fault | data_write_page_fault | eaddr_fault_v);
  wire any_page_fault_v   = |{instr_page_fault_v, load_page_fault_v, store_page_fault_v};

  // This logic only works for 8-byte words max.
  logic r_misaligned_n, r_misaligned_r;
  always_comb
    case (r_size_i)
      2'b01: r_misaligned_n = |r_eaddr_i[0+:1];
      2'b10: r_misaligned_n = |r_eaddr_i[0+:2];
      2'b11: r_misaligned_n = |r_eaddr_i[0+:3];
      default: r_misaligned_n = '0;
    endcase
  always_ff @(posedge clk_i)
    r_misaligned_r <= r_misaligned_n;

  assign r_v_o                   = r_v_r &  tlb_v_lo & ~any_access_fault_v & ~any_page_fault_v;
  assign r_ptag_o                = ptag_lo;
  assign r_instr_miss_o          = r_v_r & ~tlb_v_lo & r_instr_r & ~any_access_fault_v & ~any_page_fault_v;
  assign r_load_miss_o           = r_v_r & ~tlb_v_lo & r_load_r  & ~any_access_fault_v & ~any_page_fault_v;
  assign r_store_miss_o          = r_v_r & ~tlb_v_lo & r_store_r & ~any_access_fault_v & ~any_page_fault_v;
  assign r_uncached_o            = r_v_r &  tlb_v_lo & ptag_uncached_lo;
  assign r_nonidem_o             = r_v_r &  tlb_v_lo & ptag_nonidem_lo;
  assign r_dram_o                = r_v_r &  tlb_v_lo & ptag_dram_lo;
  assign r_instr_misaligned_o    = r_v_r & r_misaligned_r & r_instr_r;
  assign r_load_misaligned_o     = r_v_r & r_misaligned_r & r_load_r;
  assign r_store_misaligned_o    = r_v_r & r_misaligned_r & r_store_r;
  assign r_instr_access_fault_o  = r_v_r & instr_access_fault_v;
  assign r_load_access_fault_o   = r_v_r & load_access_fault_v;
  assign r_store_access_fault_o  = r_v_r & store_access_fault_v;
  assign r_instr_page_fault_o    = r_v_r & instr_page_fault_v;
  assign r_load_page_fault_o     = r_v_r & load_page_fault_v;
  assign r_store_page_fault_o    = r_v_r & store_page_fault_v;

endmodule

`BSG_ABSTRACT_MODULE(bp_mmu)

