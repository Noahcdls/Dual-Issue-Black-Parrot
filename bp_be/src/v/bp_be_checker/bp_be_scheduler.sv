/**
 *
 * Name:
 *   bp_be_scheduler.v
 *
 * Description:
 *   Schedules instruction issue from the FE queue to the Calculator.
 *
 * Notes:
 *   It might make sense to use an enum for RISC-V opcodes rather than `defines.
 *   Floating point instruction decoding is not implemented, so we do not predecode.
 *
 * Modifications: 
 *   1. doubled outputs: isd_status_o, dispatch_pkt_o
 *   2. doubled inputs: dispatch_v_i, fe_queue_i, fe_queue_v_i
 *   3. Fetch Interfaces doubled (fe_queue_i, fe_queue_v_i) to match Front End modifications
 *   4. doubled internal ports: preissue_pkt, issue_pkt
 *   5. Calculator's bandwidth to be decided 
 *   6. cmd_full_i, credits_full_i, credits_empty_i to be decided
 *   7. Issue Queue modified 
 *   8. Reg file modified
 *   9. iwb_pkt_i, fwb_pkt_i, ptw_fill_pkt_i to be decided
 */

`include "bp_common_defines.svh"
`include "bp_be_defines.svh"

module bp_be_scheduler
 import bp_common_pkg::*;
 import bp_be_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)

   // Generated parameters
   , localparam cfg_bus_width_lp = `bp_cfg_bus_width(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p)
   , localparam fe_queue_width_lp = `bp_fe_queue_width(vaddr_width_p, branch_metadata_fwd_width_p)
   , localparam issue_pkt_width_lp = `bp_be_issue_pkt_width(vaddr_width_p, branch_metadata_fwd_width_p)
   , localparam dispatch_pkt_width_lp = `bp_be_dispatch_pkt_width(vaddr_width_p)
   , localparam isd_status_width_lp = `bp_be_isd_status_width(vaddr_width_p, branch_metadata_fwd_width_p)
   , localparam commit_pkt_width_lp = `bp_be_commit_pkt_width(vaddr_width_p, paddr_width_p)
   , localparam ptw_fill_pkt_width_lp = `bp_be_ptw_fill_pkt_width(vaddr_width_p, paddr_width_p)
   , localparam decode_info_width_lp = `bp_be_decode_info_width
   , localparam wb_pkt_width_lp     = `bp_be_wb_pkt_width(vaddr_width_p)
   )
  (input                               clk_i
   , input                             reset_i
   , input [cfg_bus_width_lp-1:0]      cfg_bus_i

    // to detector & director
  , output [isd_status_width_lp-1:0]   isd_status1_o, isd_status2_o
    // from director
  , input [vaddr_width_p-1:0]          expected_npc_i
  , input                              poison_isd_i
    // from detector
  , input                              dispatch_v1_i, dispatch_v2_i
  , input                              interrupt_v_i
    // from director
  , input                              suppress_iss_i
  , input                              unfreeze_i
    // from calculator
  , input [decode_info_width_lp-1:0]   decode_info_i

  // Fetch interface
  , input [fe_queue_width_lp-1:0]      fe_queue1_i, fe_queue2_i
  , input                              fe_queue_v1_i, fe_queue_v2_i
  , output                             fe_queue_ready_o

  // Dispatch interface 
  , output [dispatch_pkt_width_lp-1:0] dispatch_pkt1_o, dispatch_pkt2_o

  // from calculator
  , input [commit_pkt_width_lp-1:0]    commit_pkt_i
  , input [wb_pkt_width_lp-1:0]        iwb_pkt_i
  , input [wb_pkt_width_lp-1:0]        fwb_pkt_i
  , input [ptw_fill_pkt_width_lp-1:0]  ptw_fill_pkt_i
  );

  // Declare parameterizable structures
  `declare_bp_cfg_bus_s(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p);
  `declare_bp_core_if(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);
  `declare_bp_be_internal_if_structs(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);

  `bp_cast_o(bp_be_isd_status_s, isd_status1);
  `bp_cast_o(bp_be_isd_status_s, isd_status2);
  `bp_cast_i(bp_be_ptw_fill_pkt_s, ptw_fill_pkt);
  `bp_cast_i(bp_be_commit_pkt_s, commit_pkt);
  `bp_cast_i(bp_be_wb_pkt_s, iwb_pkt);
  `bp_cast_i(bp_be_wb_pkt_s, fwb_pkt);
  `bp_cast_i(bp_cfg_bus_s, cfg_bus);

  bp_fe_queue_s fe_queue1_lo, fe_queue2_lo; //doubled
  logic fe_queue_yumi1_li, fe_queue_yumi2_li; // doubled
  logic fe_queue_v_lo; // no need to be doubled for now
  wire fe_queue_clr_li  = suppress_iss_i; // no need to be doubled for now
  wire fe_queue_deq_li  = commit_pkt_cast_i.queue_v;
  wire fe_queue_roll_li = commit_pkt_cast_i.npc_w_v;
  bp_be_issue_pkt_s preissue_pkt1, issue_pkt1, preissue_pkt2, issue_pkt2; //doubled
  

  bp_be_issue_queue
   #(.bp_params_p(bp_params_p))
   fe_queue_fifo
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.clr_v_i(fe_queue_clr_li) // from director
     ,.deq_v_i(fe_queue_deq_li) // from calculator
     ,.roll_v_i(fe_queue_roll_li) // from calculator
     
     // from Fe
     ,.fe_queue1_i(fe_queue1_i)
     ,.fe_queue2_i(fe_queue2_i)
     ,.fe_queue_v1_i(fe_queue_v1_i)
     ,.fe_queue_v2_i(fe_queue_v2_i)
     ,.fe_queue_ready_o(fe_queue_ready_o)

     ,.fe_queue1_o(fe_queue1_lo)
     ,.fe_queue2_o(fe_queue2_lo)
     ,.fe_queue_v_o(fe_queue_v_lo)
     ,.fe_queue_yumi1_i(fe_queue_yumi1_li)
     ,.fe_queue_yumi2_i(fe_queue_yumi2_li)

     ,.preissue_pkt1_o(preissue_pkt1)
     ,.preissue_pkt2_o(preissue_pkt2)
     ,.issue_pkt1_o(issue_pkt1)
     ,.issue_pkt2_o(issue_pkt2)
     );

  logic [dword_width_gp-1:0] irf1_rs1, irf1_rs2, irf2_rs1, irf2_rs2;// doubled
  bp_be_regfile
  #(.bp_params_p(bp_params_p), .read_ports_p(2), .zero_x0_p(1), .data_width_p(dword_width_gp))
   int_regfile
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.rd_w_v_i(iwb_pkt_cast_i.ird_w_v)
     ,.rd_addr_i(iwb_pkt_cast_i.rd_addr)
     ,.rd_data_i(iwb_pkt_cast_i.rd_data[0+:dword_width_gp])

     ,.rs_r_v_i({preissue_pkt1.irs2_v, preissue_pkt2.irs1_v, preissue_pkt1.irs2_v, preissue_pkt2.irs1_v})
     ,.rs_addr_i({preissue_pkt1.rs2_addr, preissue_pkt2.rs1_addr, preissue_pkt1.rs2_addr, preissue_pkt2.rs1_addr})
     ,.rs_data_o({irf1_rs2, irf1_rs1, irf2_rs2, irf2_rs1})
     );

  logic [dpath_width_gp-1:0] frf1_rs1, frf1_rs2, frf1_rs3, frf2_rs1, frf2_rs2, frf2_rs3;// doubled
  bp_be_regfile
  #(.bp_params_p(bp_params_p), .read_ports_p(3), .zero_x0_p(0), .data_width_p(dpath_width_gp))
   fp_regfile
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.rd_w_v_i(fwb_pkt_cast_i.frd_w_v)
     ,.rd_addr_i(fwb_pkt_cast_i.rd_addr)
     ,.rd_data_i(fwb_pkt_cast_i.rd_data)

     ,.rs_r_v_i({preissue_pkt1.frs3_v, preissue_pkt1.frs2_v, preissue_pkt1.frs1_v, preissue_pkt2.frs3_v, preissue_pkt2.frs2_v, preissue_pkt2.frs1_v})
     ,.rs_addr_i({preissue_pkt1.rs3_addr, preissue_pkt1.rs2_addr, preissue_pkt1.rs1_addr, preissue_pkt2.rs3_addr, preissue_pkt2.rs2_addr, preissue_pkt2.rs1_addr})
     ,.rs_data_o({frf1_rs3, frf1_rs2, frf1_rs1, frf2_rs3, frf2_rs2, frf2_rs1})
     );

  // Decode the dispatched instruction (all doubled)
  bp_be_decode_s instr_decoded1, instr_decoded2;
  logic [dword_width_gp-1:0] decoded_imm1_lo, decoded_imm2_lo;
  logic illegal_instr1_lo, illegal_instr2_lo;
  logic ecall_m1_lo, ecall_s1_lo, ecall_u1_lo;
  logic ecall_m2_lo, ecall_s2_lo, ecall_u2_lo;
  logic ebreak1_lo, dbreak1_lo, ebreak2_lo, dbreak2_lo;
  logic dret1_lo, mret1_lo, sret1_lo;
  logic dret2_lo, mret2_lo, sret2_lo;
  logic wfi1_lo, sfence_vma1_lo, wfi2_lo, sfence_vma2_lo;
  
  bp_be_instr_decoder
   #(.bp_params_p(bp_params_p))
   instr_decoder
    (.instr_i(fe_queue1_lo.msg.fetch.instr)
     ,.instr_i(fe_queue2_lo.msg.fetch.instr)
     
     ,.decode_info_i(decode_info_i)

     ,.decode1_o(instr_decoded1)
     ,.decode2_o(instr_decoded2)

     ,.imm1_o(decoded_imm1_lo)
     ,.imm2_o(decoded_imm2_lo)

     ,.illegal_instr1_o(illegal_instr1_lo)
     ,.illegal_instr2_o(illegal_instr2_lo)
     
     ,.ecall_m1_o(ecall_m1_lo)
     ,.ecall_s1_o(ecall_s1_lo)
     ,.ecall_u1_o(ecall_u1_lo)
     ,.ebreak1_o(ebreak1_lo)
     ,.dbreak1_o(dbreak1_lo)
     ,.dret1_o(dret1_lo)
     ,.mret1_o(mret1_lo)
     ,.sret1_o(sret1_lo)
     ,.wfi1_o(wfi1_lo)
     ,.sfence_vma1_o(sfence_vma1_lo)

     ,.ecall_m2_o(ecall_m2_lo)
     ,.ecall_s2_o(ecall_s2_lo)
     ,.ecall_u2_o(ecall_u2_lo)
     ,.ebreak2_o(ebreak2_lo)
     ,.dbreak2_o(dbreak2_lo)
     ,.dret2_o(dret2_lo)
     ,.mret2_o(mret2_lo)
     ,.sret2_o(sret2_lo)
     ,.wfi2_o(wfi2_lo)
     ,.sfence_vma2_o(sfence_vma2_lo)
     );
  //doubled
  // exception not instruction
  wire fe_exc_not_instr1_li = fe_queue_yumi1_li & (fe_queue1_lo.msg_type == e_fe_exception);
  wire fe_exc_not_instr2_li = fe_queue_yumi2_li & (fe_queue2_lo.msg_type == e_fe_exception);

  //doubled
  // exception vaddr
  wire [vaddr_width_p-1:0] fe_exc_vaddr1_li = fe_queue1_lo.msg.exception.vaddr;
  wire [vaddr_width_p-1:0] fe_exc_vaddr1_li = fe_queue2_lo.msg.exception.vaddr;
  
  // no need to be doubled for now
  // back end exception vaddr and data
  // also backend has exception not instr
  wire be_exc_not_instr_li = ptw_fill_pkt_cast_i.v | interrupt_v_i | unfreeze_i;
  wire [vaddr_width_p-1:0] be_exc_vaddr_li = ptw_fill_pkt_cast_i.vaddr;
  wire [dpath_width_gp-1:0] be_exc_data_li = ptw_fill_pkt_cast_i.entry;
  
  //doubled
  // instruction not exception
  wire fe_instr_not_exc1_li = fe_queue_yumi1_li & (fe_queue1_lo.msg_type == e_fe_fetch);
  wire fe_instr_not_exc2_li = fe_queue_yumi2_li & (fe_queue2_lo.msg_type == e_fe_fetch);
  
  // no need to be doubled for now
  assign fe_queue_yumi1_li = ~suppress_iss_i & fe_queue_v_lo & dispatch_v1_i & ~be_exc_not_instr_li;
  assign fe_queue_yumi2_li = ~suppress_iss_i & fe_queue_v_lo & dispatch_v2_i & ~be_exc_not_instr_li;
  

  bp_be_dispatch_pkt_s dispatch_pkt1, dispatch_pkt2;// doubled

  always_comb
    begin
      // Calculator status ISD stage (doubled)
      isd_status1_cast_o = '0;
      isd_status1_cast_o.v        = fe_queue_yumi1_li;
      isd_status1_cast_o.pc       = fe_queue1_lo.msg.fetch.pc;
      isd_status1_cast_o.branch_metadata_fwd = fe_queue1_lo.msg.fetch.branch_metadata_fwd;
      isd_status1_cast_o.fence_v  = fe_queue_v_lo & issue_pkt1.fence_v;
      isd_status1_cast_o.csr_v    = fe_queue_v_lo & issue_pkt1.csr_v;
      isd_status1_cast_o.mem_v    = fe_queue_v_lo & issue_pkt1.mem_v;
      isd_status1_cast_o.long_v   = fe_queue_v_lo & issue_pkt1.long_v;
      isd_status1_cast_o.irs1_v   = fe_queue_v_lo & issue_pkt1.irs1_v;
      isd_status1_cast_o.frs1_v   = fe_queue_v_lo & issue_pkt1.frs1_v;
      isd_status1_cast_o.rs1_addr = fe_queue1_lo.msg.fetch.instr.t.fmatype.rs1_addr;
      isd_status1_cast_o.irs2_v   = fe_queue_v_lo & issue_pkt1.irs2_v;
      isd_status1_cast_o.frs2_v   = fe_queue_v_lo & issue_pkt1.frs2_v;
      isd_status1_cast_o.rs2_addr = fe_queue1_lo.msg.fetch.instr.t.fmatype.rs2_addr;
      isd_status1_cast_o.frs3_v   = fe_queue_v_lo & issue_pkt1.frs3_v;
      isd_status1_cast_o.rs3_addr = fe_queue1_lo.msg.fetch.instr.t.fmatype.rs3_addr;
      isd_status1_cast_o.rd_addr  = fe_queue1_lo.msg.fetch.instr.t.fmatype.rd_addr;
      isd_status1_cast_o.iwb_v    = instr_decoded1.irf_w_v;
      isd_status1_cast_o.fwb_v    = instr_decoded1.frf_w_v;

      isd_status2_cast_o = '0;
      isd_status2_cast_o.v        = fe_queue_yumi2_li;
      isd_status2_cast_o.pc       = fe_queue2_lo.msg.fetch.pc;
      isd_status2_cast_o.branch_metadata_fwd = fe_queue2_lo.msg.fetch.branch_metadata_fwd;
      isd_status2_cast_o.fence_v  = fe_queue_v_lo & issue_pkt2.fence_v;
      isd_status2_cast_o.csr_v    = fe_queue_v_lo & issue_pkt2.csr_v;
      isd_status2_cast_o.mem_v    = fe_queue_v_lo & issue_pkt2.mem_v;
      isd_status2_cast_o.long_v   = fe_queue_v_lo & issue_pkt2.long_v;
      isd_status2_cast_o.irs1_v   = fe_queue_v_lo & issue_pkt2.irs1_v;
      isd_status2_cast_o.frs1_v   = fe_queue_v_lo & issue_pkt2.frs1_v;
      isd_status2_cast_o.rs1_addr = fe_queue2_lo.msg.fetch.instr.t.fmatype.rs1_addr;
      isd_status2_cast_o.irs2_v   = fe_queue_v_lo & issue_pkt2.irs2_v;
      isd_status2_cast_o.frs2_v   = fe_queue_v_lo & issue_pkt2.frs2_v;
      isd_status2_cast_o.rs2_addr = fe_queue2_lo.msg.fetch.instr.t.fmatype.rs2_addr;
      isd_status2_cast_o.frs3_v   = fe_queue_v_lo & issue_pkt2.frs3_v;
      isd_status2_cast_o.rs3_addr = fe_queue2_lo.msg.fetch.instr.t.fmatype.rs3_addr;
      isd_status2_cast_o.rd_addr  = fe_queue2_lo.msg.fetch.instr.t.fmatype.rd_addr;
      isd_status2_cast_o.iwb_v    = instr_decoded2.irf_w_v;
      isd_status2_cast_o.fwb_v    = instr_decoded2.frf_w_v;

      // Form dispatch packet (doubled)
      dispatch_pkt1 = '0;
      dispatch_pkt1.v        = (fe_queue_yumi1_li & ~poison_isd_i) || be_exc_not_instr_li;
      dispatch_pkt1.queue_v  = fe_queue_yumi1_li;
      dispatch_pkt1.pc       = expected_npc_i;
      dispatch_pkt1.instr    = fe_queue1_lo.msg.fetch.instr;

      dispatch_pkt2 = '0;
      dispatch_pkt2.v        = (fe_queue_yumi2_li & ~poison_isd_i) || be_exc_not_instr_li;
      dispatch_pkt2.queue_v  = fe_queue_yumi2_li;
      dispatch_pkt2.pc       = expected_npc_i;
      dispatch_pkt2.instr    = fe_queue2_lo.msg.fetch.instr;
      
      // If register injection is critical, can be done after bypass (doubled)
      dispatch_pkt1.rs1_fp_v = issue_pkt1.frs1_v;
      dispatch_pkt1.rs1      = be_exc_not_instr_li ? be_exc_vaddr_li : issue_pkt1.frs1_v ? frf1_rs1 : irf1_rs1;
      dispatch_pkt1.rs2_fp_v = issue_pkt1.frs2_v;
      dispatch_pkt1.rs2      = be_exc_not_instr_li ? be_exc_data_li  : issue_pkt1.frs2_v ? frf1_rs2 : irf1_rs2;
      dispatch_pkt1.rs3_fp_v = issue_pkt1.frs3_v;
      dispatch_pkt1.imm      = be_exc_not_instr_li ? '0              : issue_pkt1.frs3_v ? frf1_rs3 : decoded_imm1_lo;
      dispatch_pkt1.decode   = (fe_exc_not_instr1_li || be_exc_not_instr_li || illegal_instr1_lo) ? '0 : instr_decoded1;

      dispatch_pkt2.rs1_fp_v = issue_pkt2.frs1_v;
      dispatch_pkt2.rs1      = be_exc_not_instr_li ? be_exc_vaddr_li : issue_pkt2.frs1_v ? frf2_rs1 : irf2_rs1;
      dispatch_pkt2.rs2_fp_v = issue_pkt2.frs2_v;
      dispatch_pkt2.rs2      = be_exc_not_instr_li ? be_exc_data_li  : issue_pkt2.frs2_v ? frf2_rs2 : irf2_rs2;
      dispatch_pkt2.rs3_fp_v = issue_pkt2.frs3_v;
      dispatch_pkt2.imm      = be_exc_not_instr_li ? '0              : issue_pkt2.frs3_v ? frf2_rs3 : decoded_imm2_lo;
      dispatch_pkt2.decode   = (fe_exc_not_instr2_li || be_exc_not_instr_li || illegal_instr2_lo) ? '0 : instr_decoded2;

      //doubled
      dispatch_pkt1.exception.instr_access_fault |=
        fe_exc_not_instr1_li & fe_queue1_lo.msg.exception.exception_code inside {e_instr_access_fault};
      dispatch_pkt1.exception.instr_misaligned   |=
        fe_exc_not_instr1_li & fe_queue1_lo.msg.exception.exception_code inside {e_instr_misaligned};
      dispatch_pkt1.exception.instr_page_fault   |=
        fe_exc_not_instr1_li & fe_queue1_lo.msg.exception.exception_code inside {e_instr_page_fault};
      dispatch_pkt1.exception.itlb_miss          |=
        fe_exc_not_instr1_li & fe_queue1_lo.msg.exception.exception_code inside {e_itlb_miss};
      dispatch_pkt1.exception.icache_miss        |=
        fe_exc_not_instr1_li & fe_queue1_lo.msg.exception.exception_code inside {e_icache_miss};

      dispatch_pkt2.exception.instr_access_fault |=
        fe_exc_not_instr2_li & fe_queue2_lo.msg.exception.exception_code inside {e_instr_access_fault};
      dispatch_pkt2.exception.instr_misaligned   |=
        fe_exc_not_instr2_li & fe_queue2_lo.msg.exception.exception_code inside {e_instr_misaligned};
      dispatch_pkt2.exception.instr_page_fault   |=
        fe_exc_not_instr2_li & fe_queue2_lo.msg.exception.exception_code inside {e_instr_page_fault};
      dispatch_pkt2.exception.itlb_miss          |=
        fe_exc_not_instr2_li & fe_queue2_lo.msg.exception.exception_code inside {e_itlb_miss};
      dispatch_pkt2.exception.icache_miss        |=
        fe_exc_not_instr2_li & fe_queue2_lo.msg.exception.exception_code inside {e_icache_miss};      

      //doubled
      dispatch_pkt1.exception.instr_page_fault |= be_exc_not_instr_li & ptw_fill_pkt_cast_i.instr_page_fault_v;
      dispatch_pkt1.exception.load_page_fault  |= be_exc_not_instr_li & ptw_fill_pkt_cast_i.load_page_fault_v;
      dispatch_pkt1.exception.store_page_fault |= be_exc_not_instr_li & ptw_fill_pkt_cast_i.store_page_fault_v;
      dispatch_pkt1.exception.itlb_fill        |= be_exc_not_instr_li & ptw_fill_pkt_cast_i.itlb_fill_v;
      dispatch_pkt1.exception.dtlb_fill        |= be_exc_not_instr_li & ptw_fill_pkt_cast_i.dtlb_fill_v;
      dispatch_pkt1.exception._interrupt       |= be_exc_not_instr_li & interrupt_v_i & ~unfreeze_i;
      dispatch_pkt1.exception.unfreeze         |= be_exc_not_instr_li & unfreeze_i;

      dispatch_pkt2.exception.instr_page_fault |= be_exc_not_instr_li & ptw_fill_pkt_cast_i.instr_page_fault_v;
      dispatch_pkt2.exception.load_page_fault  |= be_exc_not_instr_li & ptw_fill_pkt_cast_i.load_page_fault_v;
      dispatch_pkt2.exception.store_page_fault |= be_exc_not_instr_li & ptw_fill_pkt_cast_i.store_page_fault_v;
      dispatch_pkt2.exception.itlb_fill        |= be_exc_not_instr_li & ptw_fill_pkt_cast_i.itlb_fill_v;
      dispatch_pkt2.exception.dtlb_fill        |= be_exc_not_instr_li & ptw_fill_pkt_cast_i.dtlb_fill_v;
      dispatch_pkt2.exception._interrupt       |= be_exc_not_instr_li & interrupt_v_i & ~unfreeze_i;
      dispatch_pkt2.exception.unfreeze         |= be_exc_not_instr_li & unfreeze_i;


      //doubled
      dispatch_pkt1.exception.illegal_instr |= fe_instr_not_exc1_li & illegal_instr1_lo;
      dispatch_pkt1.exception.ecall_m       |= fe_instr_not_exc1_li & ecall_m1_lo;
      dispatch_pkt1.exception.ecall_s       |= fe_instr_not_exc1_li & ecall_s1_lo;
      dispatch_pkt1.exception.ecall_u       |= fe_instr_not_exc1_li & ecall_u1_lo;
      dispatch_pkt1.exception.ebreak        |= fe_instr_not_exc1_li & ebreak1_lo;
      dispatch_pkt1.special.dbreak          |= fe_instr_not_exc1_li & dbreak1_lo;
      dispatch_pkt1.special.dret            |= fe_instr_not_exc1_li & dret1_lo;
      dispatch_pkt1.special.mret            |= fe_instr_not_exc1_li & mret1_lo;
      dispatch_pkt1.special.sret            |= fe_instr_not_exc1_li & sret1_lo;
      dispatch_pkt1.special.wfi             |= fe_instr_not_exc1_li & wfi1_lo;
      dispatch_pkt1.special.sfence_vma      |= fe_instr_not_exc1_li & sfence_vma1_lo;

      dispatch_pkt2.exception.illegal_instr |= fe_instr_not_exc2_li & illegal_instr2_lo;
      dispatch_pkt2.exception.ecall_m       |= fe_instr_not_exc2_li & ecall_m2_lo;
      dispatch_pkt2.exception.ecall_s       |= fe_instr_not_exc2_li & ecall_s2_lo;
      dispatch_pkt2.exception.ecall_u       |= fe_instr_not_exc2_li & ecall_u2_lo;
      dispatch_pkt2.exception.ebreak        |= fe_instr_not_exc2_li & ebreak2_lo;
      dispatch_pkt2.special.dbreak          |= fe_instr_not_exc2_li & dbreak2_lo;
      dispatch_pkt2.special.dret            |= fe_instr_not_exc2_li & dret2_lo;
      dispatch_pkt2.special.mret            |= fe_instr_not_exc2_li & mret2_lo;
      dispatch_pkt2.special.sret            |= fe_instr_not_exc2_li & sret2_lo;
      dispatch_pkt2.special.wfi             |= fe_instr_not_exc2_li & wfi2_lo;
      dispatch_pkt2.special.sfence_vma      |= fe_instr_not_exc2_li & sfence_vma2_lo;
    end
  assign dispatch_pkt1_o = dispatch_pkt1;
  assign dispatch_pkt2_o = dispatch_pkt2;

endmodule