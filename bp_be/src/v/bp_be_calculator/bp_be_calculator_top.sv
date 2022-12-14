/**
 *
 * Name:
 *   bp_be_calculator_top.v
 *
 * Description:
 *
 * Notes:
 *   Should subdivide this module into a few helper modules to reduce complexity. Perhaps
 *     issuer, exe_pipe, completion_pipe, status_gen?
 *   Exception aggregation could be simplified with constants and more thought. Should fix
 *     once code is more stable, fixing in cleanup could cause regressions
 */
//Guangzhe's update
`include "bp_common_defines.svh"
`include "bp_be_defines.svh"

module bp_be_calculator_top
 import bp_common_pkg::*;
 import bp_be_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
    `declare_bp_proc_params(bp_params_p)
    `declare_bp_core_if_widths(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p)
    `declare_bp_cache_engine_if_widths(paddr_width_p, ctag_width_p, dcache_sets_p, dcache_assoc_p, dword_width_gp, dcache_block_width_p, dcache_fill_width_p, dcache)

   // Generated parameters
   , localparam cfg_bus_width_lp        = `bp_cfg_bus_width(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p)
   , localparam dispatch_pkt_width_lp   = `bp_be_dispatch_pkt_width(vaddr_width_p)
   , localparam branch_pkt_width_lp     = `bp_be_branch_pkt_width(vaddr_width_p)
   , localparam commit_pkt_width_lp     = `bp_be_commit_pkt_width(vaddr_width_p, paddr_width_p)
   , localparam ptw_fill_pkt_width_lp   = `bp_be_ptw_fill_pkt_width(vaddr_width_p, paddr_width_p)
   , localparam wb_pkt_width_lp         = `bp_be_wb_pkt_width(vaddr_width_p)
   , localparam decode_info_width_lp    = `bp_be_decode_info_width

   // From BP BE specifications
   , localparam pipe_stage_els_lp = 5
   )
 (input                                             clk_i
  , input                                           reset_i

  , input [cfg_bus_width_lp-1:0]                    cfg_bus_i

  // Calculator - Checker interface
  // dispatch_pkt1_i
  , input [dispatch_pkt_width_lp-1:0]               dispatch_pkt1_i
  , input [dispatch_pkt_width_lp-1:0]               dispatch_pkt2_i

  , output logic                                    idiv_ready_o
  , output logic                                    fdiv_ready_o
  , output logic                                    mem_ready_o
  , output logic                                    ptw_busy_o
  , output logic [decode_info_width_lp-1:0]         decode_info_o
  , input                                           cmd_full_n_i

  , output logic [commit_pkt_width_lp-1:0]          commit_pkt_o, commit_pkt2_o
  , output logic [branch_pkt_width_lp-1:0]          br_pkt_o
  , output logic [wb_pkt_width_lp-1:0]              iwb_pkt_o, iwb_pkt_o2
  , output logic [wb_pkt_width_lp-1:0]              fwb_pkt_o, fwb_pkt_o2
  , output logic [ptw_fill_pkt_width_lp-1:0]        ptw_fill_pkt_o

  , input                                           debug_irq_i
  , input                                           timer_irq_i
  , input                                           software_irq_i
  , input                                           m_external_irq_i
  , input                                           s_external_irq_i
  , output logic                                    irq_waiting_o
  , output logic                                    irq_pending_o

  , output logic [dcache_req_width_lp-1:0]          cache_req_o
  , output logic                                    cache_req_v_o
  , input                                           cache_req_yumi_i
  , input                                           cache_req_busy_i
  , output logic [dcache_req_metadata_width_lp-1:0] cache_req_metadata_o
  , output logic                                    cache_req_metadata_v_o
  , input                                           cache_req_critical_tag_i
  , input                                           cache_req_critical_data_i
  , input                                           cache_req_complete_i
  , input                                           cache_req_credits_full_i
  , input                                           cache_req_credits_empty_i

  , input                                           data_mem_pkt_v_i
  , input [dcache_data_mem_pkt_width_lp-1:0]        data_mem_pkt_i
  , output logic                                    data_mem_pkt_yumi_o
  , output logic [dcache_block_width_p-1:0]         data_mem_o

  , input                                           tag_mem_pkt_v_i
  , input [dcache_tag_mem_pkt_width_lp-1:0]         tag_mem_pkt_i
  , output logic                                    tag_mem_pkt_yumi_o
  , output logic [dcache_tag_info_width_lp-1:0]     tag_mem_o

  , input                                           stat_mem_pkt_v_i
  , input [dcache_stat_mem_pkt_width_lp-1:0]        stat_mem_pkt_i
  , output logic                                    stat_mem_pkt_yumi_o
  , output logic [dcache_stat_info_width_lp-1:0]    stat_mem_o
  );

  // Declare parameterizable structs
  `declare_bp_cfg_bus_s(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p);
  `declare_bp_be_internal_if_structs(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);

  // Fixed casting - Noah
  `bp_cast_i(bp_be_dispatch_pkt_s, dispatch_pkt1);
  // ?? is this correct
  `bp_cast_i(bp_be_dispatch_pkt_s, dispatch_pkt2);
  `bp_cast_o(bp_be_commit_pkt_s, commit_pkt);
  `bp_cast_o(bp_be_commit_pkt_s, commit_pkt2);


  // Pipeline stage registers
  bp_be_exc_stage_s      [pipe_stage_els_lp  :0] exc_stage_n;
  bp_be_exc_stage_s      [pipe_stage_els_lp-1:0] exc_stage_r;

  bp_be_exc_stage_s      [pipe_stage_els_lp  :0] exc_stage_n1;
  bp_be_exc_stage_s      [pipe_stage_els_lp-1:0] exc_stage_r1;
  bp_be_exc_stage_s      [pipe_stage_els_lp  :0] exc_stage_n2;
  bp_be_exc_stage_s      [pipe_stage_els_lp-1:0] exc_stage_r2;

  bp_be_wb_pkt_s [pipe_stage_els_lp  :0] comp_stage_n, comp_stage_n1, comp_stage_n2;

  bp_be_wb_pkt_s [pipe_stage_els_lp-1:0] comp_stage_r, comp_stage_r1, comp_stage_r2;

  bp_be_ptw_fill_pkt_s ptw_fill_pkt;
  bp_be_trans_info_s   trans_info_lo;
  rv64_frm_e           frm_dyn_lo;

  bp_be_wb_pkt_s long_iwb_pkt, long_fwb_pkt;

  logic pipe_mem_dtlb_store_miss_lo;
  logic pipe_mem_dtlb_load_miss_lo;
  logic pipe_mem_dcache_miss_lo, pipe_mem_dcache_fail_lo;
  logic pipe_mem_fencei_clean_lo, pipe_mem_fencei_dirty_lo;
  logic pipe_mem_load_misaligned_lo;
  logic pipe_mem_load_access_fault_lo;
  logic pipe_mem_load_page_fault_lo;
  logic pipe_mem_store_misaligned_lo;
  logic pipe_mem_store_access_fault_lo;
  logic pipe_mem_store_page_fault_lo;

  logic pipe_sys_illegal_instr_lo, pipe_sys_csrw_lo;

  logic pipe_ctl_data_lo_v, pipe_int_data_lo_v, pipe_aux_data_lo_v, pipe_mem_early_data_lo_v, pipe_mem_final_data_lo_v, pipe_sys_data_lo_v, pipe_mul_data_lo_v, pipe_fma_data_lo_v;
  logic pipe_long_idata_lo_v, pipe_long_idata_lo_yumi, pipe_long_fdata_lo_v, pipe_long_fdata_lo_yumi;
  logic [dpath_width_gp-1:0] pipe_ctl_data_lo, pipe_int_data_lo, pipe_aux_data_lo, pipe_mem_early_data_lo, pipe_mem_final_data_lo, pipe_sys_data_lo, pipe_mul_data_lo, pipe_fma_data_lo;
  rv64_fflags_s pipe_aux_fflags_lo, pipe_mem_early_fflags_lo, pipe_fma_fflags_lo;

  bp_be_wb_pkt_s pipe_mem_late_iwb_pkt;
  logic pipe_mem_late_iwb_pkt_v, pipe_mem_late_iwb_pkt_yumi;
  bp_be_wb_pkt_s pipe_mem_late_fwb_pkt;
  logic pipe_mem_late_fwb_pkt_v, pipe_mem_late_fwb_pkt_yumi;

  // Generating match vector for bypass
  logic [2:0][pipe_stage_els_lp-1:0] match1_rs1;
  logic [2:0][pipe_stage_els_lp-1:0] match1_rs2;
  logic [2:0][pipe_stage_els_lp-1:0] match2_rs1; 
  logic [2:0][pipe_stage_els_lp-1:0] match2_rs2;
  logic [pipe_stage_els_lp-1:0][dpath_width_gp-1:0] forward_data1;
  logic [pipe_stage_els_lp-1:0][dpath_width_gp-1:0] forward_data2;
  for (genvar i = 0; i < pipe_stage_els_lp; i++)
    begin : forward_match
      // ?? also double match_rs to match_rs2
      //Yes this needs to be doubled

      //valid dispatch in queue and not fp and int write, and dispatch's fma rs addr is actively being computed
      //same for fp
      //tries to detect if upcoming fma instr are being written to and we need to wait
      assign match1_rs1[0][i] = ((i < 4) & dispatch_pkt1_cast_i.queue_v & ~dispatch_pkt1_cast_i.rs1_fp_v & (comp_stage_r1[i].ird_w_v) & ((dispatch_pkt1_cast_i.instr.t.fmatype.rs1_addr == comp_stage_r1[i].rd_addr)))
                              || ((i > 0) & dispatch_pkt1_cast_i.queue_v & dispatch_pkt1_cast_i.rs1_fp_v & (comp_stage_r1[i].frd_w_v) & ((dispatch_pkt1_cast_i.instr.t.fmatype.rs1_addr == comp_stage_r1[i].rd_addr)));
      assign match1_rs1[1][i] = ((i < 4) & dispatch_pkt1_cast_i.queue_v & ~dispatch_pkt1_cast_i.rs2_fp_v & (comp_stage_r1[i].ird_w_v) & ((dispatch_pkt1_cast_i.instr.t.fmatype.rs2_addr == comp_stage_r1[i].rd_addr)))
                              || ((i > 0) & dispatch_pkt1_cast_i.queue_v & dispatch_pkt1_cast_i.rs2_fp_v & (comp_stage_r1[i].frd_w_v) & ((dispatch_pkt1_cast_i.instr.t.fmatype.rs2_addr == comp_stage_r1[i].rd_addr)));
      assign match1_rs1[2][i] = ((i > 0) & dispatch_pkt1_cast_i.queue_v & dispatch_pkt1_cast_i.rs3_fp_v & (comp_stage_r1[i].frd_w_v)
       & ((dispatch_pkt1_cast_i.instr.t.fmatype.rs3_addr == comp_stage_r1[i].rd_addr)));

      assign match1_rs2[0][i] = ((i < 4) & dispatch_pkt1_cast_i.queue_v & ~dispatch_pkt1_cast_i.rs1_fp_v & (comp_stage_r2[i].ird_w_v) & ((dispatch_pkt1_cast_i.instr.t.fmatype.rs1_addr == comp_stage_r2[i].rd_addr)))
                              || ((i > 0) & dispatch_pkt1_cast_i.queue_v & dispatch_pkt1_cast_i.rs1_fp_v & (comp_stage_r2[i].frd_w_v) & ((dispatch_pkt1_cast_i.instr.t.fmatype.rs1_addr == comp_stage_r2[i].rd_addr)));
      assign match1_rs2[1][i] = ((i < 4) & dispatch_pkt1_cast_i.queue_v & ~dispatch_pkt1_cast_i.rs2_fp_v & (comp_stage_r2[i].ird_w_v) & ((dispatch_pkt1_cast_i.instr.t.fmatype.rs2_addr == comp_stage_r2[i].rd_addr)))
                              || ((i > 0) & dispatch_pkt1_cast_i.queue_v & dispatch_pkt1_cast_i.rs2_fp_v & (comp_stage_r2[i].frd_w_v) & ((dispatch_pkt1_cast_i.instr.t.fmatype.rs2_addr == comp_stage_r2[i].rd_addr)));
      assign match1_rs2[2][i] = ((i > 0) & dispatch_pkt1_cast_i.queue_v & dispatch_pkt1_cast_i.rs3_fp_v & (comp_stage_r2[i].frd_w_v)
       & ((dispatch_pkt1_cast_i.instr.t.fmatype.rs3_addr == comp_stage_r2[i].rd_addr)));



      assign match2_rs1[0][i] = ((i < 4) & dispatch_pkt2_cast_i.queue_v & ~dispatch_pkt2_cast_i.rs1_fp_v & (comp_stage_r1[i].ird_w_v) & ((dispatch_pkt2_cast_i.instr.t.fmatype.rs1_addr == comp_stage_r1[i].rd_addr)))
                              || ((i > 0) & dispatch_pkt2_cast_i.queue_v & dispatch_pkt2_cast_i.rs1_fp_v & (comp_stage_r1[i].frd_w_v) & ((dispatch_pkt2_cast_i.instr.t.fmatype.rs1_addr == comp_stage_r1[i].rd_addr)));
      assign match2_rs1[1][i] = ((i < 4) & dispatch_pkt2_cast_i.queue_v & ~dispatch_pkt2_cast_i.rs2_fp_v & (comp_stage_r1[i].ird_w_v) & ((dispatch_pkt2_cast_i.instr.t.fmatype.rs2_addr == comp_stage_r1[i].rd_addr)))
                              || ((i > 0) & dispatch_pkt2_cast_i.queue_v & dispatch_pkt2_cast_i.rs2_fp_v & (comp_stage_r1[i].frd_w_v) & ((dispatch_pkt2_cast_i.instr.t.fmatype.rs2_addr == comp_stage_r1[i].rd_addr)));
      assign match2_rs1[2][i] = ((i > 0) & dispatch_pkt2_cast_i.queue_v & dispatch_pkt2_cast_i.rs3_fp_v & (comp_stage_r1[i].frd_w_v)
       & ((dispatch_pkt2_cast_i.instr.t.fmatype.rs3_addr == comp_stage_r1[i].rd_addr)));

      assign match2_rs2[0][i] = ((i < 4) & dispatch_pkt2_cast_i.queue_v & ~dispatch_pkt2_cast_i.rs1_fp_v & (comp_stage_r2[i].ird_w_v) & ((dispatch_pkt2_cast_i.instr.t.fmatype.rs1_addr == comp_stage_r2[i].rd_addr)))
                              || ((i > 0) & dispatch_pkt2_cast_i.queue_v & dispatch_pkt2_cast_i.rs1_fp_v & (comp_stage_r2[i].frd_w_v) & ((dispatch_pkt2_cast_i.instr.t.fmatype.rs1_addr == comp_stage_r2[i].rd_addr)));
      assign match2_rs2[1][i] = ((i < 4) & dispatch_pkt2_cast_i.queue_v & ~dispatch_pkt2_cast_i.rs2_fp_v & (comp_stage_r2[i].ird_w_v) & ((dispatch_pkt2_cast_i.instr.t.fmatype.rs2_addr == comp_stage_r2[i].rd_addr)))
                              || ((i > 0) & dispatch_pkt2_cast_i.queue_v & dispatch_pkt2_cast_i.rs2_fp_v & (comp_stage_r2[i].frd_w_v) & ((dispatch_pkt2_cast_i.instr.t.fmatype.rs2_addr == comp_stage_r2[i].rd_addr)));
      assign match2_rs2[2][i] = ((i > 0) & dispatch_pkt2_cast_i.queue_v & dispatch_pkt2_cast_i.rs3_fp_v & (comp_stage_r2[i].frd_w_v)
       & ((dispatch_pkt2_cast_i.instr.t.fmatype.rs3_addr == comp_stage_r2[i].rd_addr)));

      assign forward_data1[i] = comp_stage_n1[i+1].rd_data;
      assign forward_data2[i] = comp_stage_n2[i+1].rd_data;
    end

  logic [2:0][dpath_width_gp-1:0] bypass_rs;
  logic [2:0][dpath_width_gp-1:0] bypass2_rs;
  //?? wire [2:0][dpath_width_gp-1:0] dispatch_data2 = {dispatch_pkt2_cast_i.imm, dispatch_pkt2_cast_i.rs2, dispatch_pkt2_cast_i.rs1};
  wire [2:0][dpath_width_gp-1:0] dispatch_data2 = {dispatch_pkt2_cast_i.imm, dispatch_pkt2_cast_i.rs2, dispatch_pkt2_cast_i.rs1};
  wire [2:0][dpath_width_gp-1:0] dispatch_data = {dispatch_pkt1_cast_i.imm, dispatch_pkt1_cast_i.rs2, dispatch_pkt1_cast_i.rs1};
  for (genvar i = 0; i < 3; i++)
    begin : pencode
      logic [pipe_stage_els_lp:0] match1_rs1_onehot, match1_rs2_onehot, match1_rs_onehot;
      logic [pipe_stage_els_lp:0] match2_rs1_onehot, match2_rs2_onehot, match2_rs_onehot;
      logic [pipe_stage_els_lp-1:0][dpath_width_gp-1:0] forward_data_final1, forward_data_final2;
      //peform one hot encoding on elements to find where values are hidden
      bsg_priority_encode_one_hot_out
       #(.width_p(pipe_stage_els_lp+1), .lo_to_hi_p(1))
       pencode1_oh1
        (.i({1'b1, match1_rs1[i]})
         ,.o(match1_rs1_onehot)
         ,.v_o()
         );

      bsg_priority_encode_one_hot_out
       #(.width_p(pipe_stage_els_lp+1), .lo_to_hi_p(1))
       pencode1_oh2
        (.i({1'b1, match1_rs2[i]})
         ,.o(match1_rs2_onehot)
         ,.v_o()
         );

      assign forward_data_final1 = (match1_rs1[i] != 0) ? forward_data1 : forward_data2;
      assign match1_rs_onehot = (match1_rs1[i] != 0) ? match1_rs1_onehot : match1_rs2_onehot;
      bsg_mux_one_hot
       #(.width_p(dpath_width_gp), .els_p(pipe_stage_els_lp+1))
       fwd_mux_oh1
        (.data_i({dispatch_data[i], forward_data_final1})
         ,.sel_one_hot_i(match1_rs_onehot)
         ,.data_o(bypass_rs[i])
         );

     bsg_priority_encode_one_hot_out
       #(.width_p(pipe_stage_els_lp+1), .lo_to_hi_p(1))
       pencode2_oh1
        (.i({1'b1, match2_rs1[i]})
         ,.o(match2_rs1_onehot)
         ,.v_o()
         );

      bsg_priority_encode_one_hot_out
       #(.width_p(pipe_stage_els_lp+1), .lo_to_hi_p(1))
       pencode2_oh2
        (.i({1'b1, match2_rs2[i]})
         ,.o(match2_rs2_onehot)
         ,.v_o()
         );

      assign forward_data_final2 = (match2_rs1[i] != 0) ? forward_data1 : forward_data2;
      assign match2_rs_onehot = (match2_rs1[i] != 0) ? match2_rs1_onehot : match2_rs2_onehot;
      bsg_mux_one_hot
       #(.width_p(dpath_width_gp), .els_p(pipe_stage_els_lp+1))
       fwd_mux_oh2
        (.data_i({dispatch_data2[i], forward_data_final2})
         ,.sel_one_hot_i(match2_rs_onehot)
         ,.data_o(bypass2_rs[i])
         );
    end

  // Override operands with bypass data
  // !!double the reservation
  // !!wire int_reservation = reservation1.decode.pipe_int ? reservation1 : reservation2;
  // reservation_n1
  bp_be_dispatch_pkt_s reservation_n_1, reservation_r_1;
  always_comb
    begin
      reservation_n_1        = dispatch_pkt1_i;
      reservation_n_1.rs1    = bypass_rs[0];
      reservation_n_1.rs2    = bypass_rs[1];
      reservation_n_1.imm    = bypass_rs[2];
    end
  bp_be_dispatch_pkt_s reservation_n_2, reservation_r_2;
  always_comb
    begin
      reservation_n_2        = dispatch_pkt2_i;
      reservation_n_2.rs1    = bypass2_rs[0];
      reservation_n_2.rs2    = bypass2_rs[1];
      reservation_n_2.imm    = bypass2_rs[2];
    end

  bp_be_dispatch_pkt_s  ctl_reservation, sys_reservation, int_reservation, aux_reservation, mem_reservation, fma_reservation, long_reservation;
  always_comb
    begin
      ctl_reservation = reservation_r_1.decode.pipe_ctl_v ? reservation_r_1 : reservation_r_2.decode.pipe_ctl_v ? reservation_r_2 : reservation_r_1;
      sys_reservation = reservation_r_1.decode.pipe_sys_v ? reservation_r_1 : reservation_r_2.decode.pipe_sys_v ? reservation_r_2 : reservation_r_1;
      int_reservation = reservation_r_1.decode.pipe_int_v ? reservation_r_1 : reservation_r_2.decode.pipe_int_v ? reservation_r_2 : reservation_r_1;
      aux_reservation = reservation_r_1.decode.pipe_aux_v ? reservation_r_1 : reservation_r_2;
      mem_reservation = (reservation_r_1.decode.pipe_mem_early_v || reservation_r_1.decode.pipe_mem_final_v)  ? reservation_r_1 :
      (reservation_r_2.decode.pipe_mem_early_v || reservation_r_2.decode.pipe_mem_final_v) ? reservation_r_2 : reservation_r_1;
      fma_reservation = (reservation_r_1.decode.pipe_fma_v || reservation_r_1.decode.pipe_mul_v) ? reservation_r_1 
      : (reservation_r_2.decode.pipe_fma_v || reservation_r_2.decode.pipe_mul_v) ? reservation_r_2 : reservation_r_1;
      long_reservation = reservation_r_1.decode.pipe_long_v ? reservation_r_1 : reservation_r_2.decode.pipe_long_v ? reservation_r_2 : reservation_r_1;
    end
  //?? wire injection2 = dispatch_pkt2_cast_i.v & ~dispatch_pkt2_cast_i.queue_v;
  wire injection = dispatch_pkt1_cast_i.v & ~dispatch_pkt1_cast_i.queue_v;
  wire injection2 = dispatch_pkt2_cast_i.v & ~dispatch_pkt2_cast_i.queue_v;

  bsg_dff
   #(.width_p(dispatch_pkt_width_lp))
   reservation_reg_1
    (.clk_i(clk_i)
     ,.data_i(reservation_n_1)
     ,.data_o(reservation_r_1)
     );

  bsg_dff
   #(.width_p(dispatch_pkt_width_lp))
   reservation_reg_2
    (.clk_i(clk_i)
     ,.data_i(reservation_n_2)
     ,.data_o(reservation_r_2)
     );


  // Control pipe: 1 cycle latency
  bp_be_pipe_ctl
   #(.bp_params_p(bp_params_p))
   pipe_ctl
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.reservation_i(ctl_reservation)
     ,.flush_i(commit_pkt_cast_o.npc_w_v)

     ,.data_o(pipe_ctl_data_lo)
     ,.br_pkt_o(br_pkt_o)
     ,.v_o(pipe_ctl_data_lo_v)
     );

  // Computation pipelines
  // System pipe: 1 cycle latency
  bp_be_pipe_sys
   #(.bp_params_p(bp_params_p))
   pipe_sys
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.cfg_bus_i(cfg_bus_i)

     ,.reservation_i(reservation_r_1)
     ,.reservation_i2(reservation_r_2)
     ,.flush_i(commit_pkt_cast_o.npc_w_v)

     ,.retire_v_i(exc_stage_r1[2].v)
     ,.retire_v_i2(exc_stage_r2[2].v)
     ,.retire_queue_v_i(exc_stage_r1[2].queue_v)
     ,.retire_queue_v_i2(exc_stage_r2[2].queue_v)
     ,.retire_data_i(comp_stage_r1[2].rd_data)
     ,.retire_data_i2(comp_stage_r2[2].rd_data)
     ,.retire_exception_i(exc_stage_r1[2].exc)
     ,.retire_exception_i2(exc_stage_r2[2].exc)
     ,.retire_special_i(exc_stage_r1[2].spec)
     ,.retire_special_i2(exc_stage_r2[2].spec)
     ,.commit_pkt_o(commit_pkt_cast_o)
     ,.commit_pkt_o2(commit_pkt2_cast_o)
     ,.iwb_pkt_i(iwb_pkt_o)
     ,.fwb_pkt_i(fwb_pkt_o)
     ,.iwb_pkt_i2(iwb_pkt_o2)
     ,.fwb_pkt_i2(fwb_pkt_o2)

     ,.debug_irq_i(debug_irq_i)
     ,.timer_irq_i(timer_irq_i)
     ,.software_irq_i(software_irq_i)
     ,.m_external_irq_i(m_external_irq_i)
     ,.s_external_irq_i(s_external_irq_i)
     ,.irq_pending_o(irq_pending_o)
     ,.irq_waiting_o(irq_waiting_o)

     ,.illegal_instr_o(pipe_sys_illegal_instr_lo)
     ,.csrw_o(pipe_sys_csrw_lo)
     ,.data_o(pipe_sys_data_lo)
     ,.v_o(pipe_sys_data_lo_v)

     ,.decode_info_o(decode_info_o)
     ,.trans_info_o(trans_info_lo)
     ,.frm_dyn_o(frm_dyn_lo)
     );


  // Integer pipe: 1 cycle latency
  bp_be_pipe_int
   #(.bp_params_p(bp_params_p))
   pipe_int
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

      //!! reservation replacement
     ,.reservation_i(int_reservation)
     ,.flush_i(commit_pkt_cast_o.npc_w_v)

     ,.data_o(pipe_int_data_lo)
     ,.v_o(pipe_int_data_lo_v)
     );

  // Aux pipe: 2 cycle latency
  bp_be_pipe_aux
   #(.bp_params_p(bp_params_p))
   pipe_aux
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.reservation_i(aux_reservation)
     ,.flush_i(commit_pkt_cast_o.npc_w_v)
     ,.frm_dyn_i(frm_dyn_lo)

     ,.data_o(pipe_aux_data_lo)
     ,.fflags_o(pipe_aux_fflags_lo)
     ,.v_o(pipe_aux_data_lo_v)
     );

  // Memory pipe: 2/3 cycle latency
  bp_be_pipe_mem
   #(.bp_params_p(bp_params_p))
   pipe_mem
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.cfg_bus_i(cfg_bus_i)

     ,.flush_i(commit_pkt_cast_o.npc_w_v)
     ,.sfence_i(commit_pkt_cast_o.sfence)

     ,.reservation_i(mem_reservation)
     ,.ready_o(mem_ready_o)

     ,.commit_pkt_i(commit_pkt_cast_o)
     ,.ptw_fill_pkt_o(ptw_fill_pkt_o)
     ,.ptw_busy_o(ptw_busy_o)

     ,.cache_req_o(cache_req_o)
     ,.cache_req_v_o(cache_req_v_o)
     ,.cache_req_yumi_i(cache_req_yumi_i)
     ,.cache_req_busy_i(cache_req_busy_i)
     ,.cache_req_metadata_o(cache_req_metadata_o)
     ,.cache_req_metadata_v_o(cache_req_metadata_v_o)
     ,.cache_req_critical_tag_i(cache_req_critical_tag_i)
     ,.cache_req_critical_data_i(cache_req_critical_data_i)
     ,.cache_req_complete_i(cache_req_complete_i)
     ,.cache_req_credits_full_i(cache_req_credits_full_i)
     ,.cache_req_credits_empty_i(cache_req_credits_empty_i)

     ,.data_mem_pkt_i(data_mem_pkt_i)
     ,.data_mem_pkt_v_i(data_mem_pkt_v_i)
     ,.data_mem_pkt_yumi_o(data_mem_pkt_yumi_o)
     ,.data_mem_o(data_mem_o)

     ,.tag_mem_pkt_i(tag_mem_pkt_i)
     ,.tag_mem_pkt_v_i(tag_mem_pkt_v_i)
     ,.tag_mem_pkt_yumi_o(tag_mem_pkt_yumi_o)
     ,.tag_mem_o(tag_mem_o)

     ,.stat_mem_pkt_i(stat_mem_pkt_i)
     ,.stat_mem_pkt_v_i(stat_mem_pkt_v_i)
     ,.stat_mem_pkt_yumi_o(stat_mem_pkt_yumi_o)
     ,.stat_mem_o(stat_mem_o)

     ,.tlb_store_miss_v_o(pipe_mem_dtlb_store_miss_lo)
     ,.tlb_load_miss_v_o(pipe_mem_dtlb_load_miss_lo)
     ,.cache_fail_v_o(pipe_mem_dcache_fail_lo)
     ,.cache_miss_v_o(pipe_mem_dcache_miss_lo)
     ,.fencei_clean_v_o(pipe_mem_fencei_clean_lo)
     ,.fencei_dirty_v_o(pipe_mem_fencei_dirty_lo)
     ,.load_misaligned_v_o(pipe_mem_load_misaligned_lo)
     ,.load_access_fault_v_o(pipe_mem_load_access_fault_lo)
     ,.load_page_fault_v_o(pipe_mem_load_page_fault_lo)
     ,.store_misaligned_v_o(pipe_mem_store_misaligned_lo)
     ,.store_access_fault_v_o(pipe_mem_store_access_fault_lo)
     ,.store_page_fault_v_o(pipe_mem_store_page_fault_lo)

     ,.early_data_o(pipe_mem_early_data_lo)
     ,.early_fflags_o(pipe_mem_early_fflags_lo)
     ,.early_v_o(pipe_mem_early_data_lo_v)

     ,.final_data_o(pipe_mem_final_data_lo)
     ,.final_v_o(pipe_mem_final_data_lo_v)

     ,.late_iwb_pkt_o(pipe_mem_late_iwb_pkt)
     ,.late_iwb_pkt_v_o(pipe_mem_late_iwb_pkt_v)
     ,.late_iwb_pkt_yumi_i(pipe_mem_late_iwb_pkt_yumi)
     ,.late_fwb_pkt_o(pipe_mem_late_fwb_pkt)
     ,.late_fwb_pkt_v_o(pipe_mem_late_fwb_pkt_v)
     ,.late_fwb_pkt_yumi_i(pipe_mem_late_fwb_pkt_yumi)

     ,.trans_info_i(trans_info_lo)
     );

  // Floating point pipe: 3/4 cycle latency
  bp_be_pipe_fma
   #(.bp_params_p(bp_params_p))
   pipe_fma
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.reservation_i(fma_reservation)
     ,.flush_i(commit_pkt_cast_o.npc_w_v)
     ,.frm_dyn_i(frm_dyn_lo)

     ,.imul_data_o(pipe_mul_data_lo)
     ,.imul_v_o(pipe_mul_data_lo_v)
     ,.fma_data_o(pipe_fma_data_lo)
     ,.fma_fflags_o(pipe_fma_fflags_lo)
     ,.fma_v_o(pipe_fma_data_lo_v)
     );

  // Variable length pipeline, used for long (potentially scoreboarded operations)
  bp_be_pipe_long
   #(.bp_params_p(bp_params_p))
   pipe_long
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.reservation_i(long_reservation)
     ,.flush_i(commit_pkt_cast_o.npc_w_v)
     ,.iready_o(idiv_ready_o)
     ,.fready_o(fdiv_ready_o)
     ,.frm_dyn_i(frm_dyn_lo)

     ,.iwb_pkt_o(long_iwb_pkt)
     ,.iwb_v_o(pipe_long_idata_lo_v)
     ,.iwb_yumi_i(pipe_long_idata_lo_yumi)

     ,.fwb_pkt_o(long_fwb_pkt)
     ,.fwb_v_o(pipe_long_fdata_lo_v)
     ,.fwb_yumi_i(pipe_long_fdata_lo_yumi)
     );

  // If a pipeline has completed an instruction (pipe_xxx_v), then mux in the calculated result.
  // Else, mux in the previous stage of the completion pipe. Since we are single issue and have
  //   static latencies, we cannot have two pipelines complete at the same time.
  always_comb
    begin
      for (integer i = 0; i <= pipe_stage_els_lp; i++)
        begin : comp_stage
          // Normally, shift down in the pipe
          //integer reg file
          //floating reg file
          //so this is for R type function which is register functions with two regs and a destination
          comp_stage_n[i] = (i == 0)
            ? '{ird_w_v    : reservation_n_1.decode.irf_w_v | reservation_n_2.decode.irf_w_v
                ,frd_w_v   : reservation_n_1.decode.frf_w_v | reservation_n_2.decode.frf_w_v
                ,fflags_w_v: reservation_n_1.decode.fflags_w_v | reservation_n_2.decode.fflags_w_v
                ,rd_addr   : (reservation_n_1.decode.irf_w_v | reservation_n_1.decode.frf_w_v | reservation_n_1.decode.fflags_w_v) ? reservation_n_1.instr.t.rtype.rd_addr : reservation_n_2.instr.t.rtype.rd_addr 
                ,default: '0
                }
            : comp_stage_r[i-1];
        end
      // Injected instructions can carry a payload in rs2
      comp_stage_n[0].rd_data    |= injection                ? dispatch_pkt1_cast_i.rs2  : injection2 ? dispatch_pkt2_cast_i.rs2 : '0;
      comp_stage_n[1].rd_data    |= pipe_int_data_lo_v       ? pipe_int_data_lo         : '0;
      comp_stage_n[1].rd_data    |= pipe_ctl_data_lo_v       ? pipe_ctl_data_lo         : '0;
      comp_stage_n[1].rd_data    |= pipe_sys_data_lo_v       ? pipe_sys_data_lo         : '0;
      comp_stage_n[2].rd_data    |= pipe_mem_early_data_lo_v ? pipe_mem_early_data_lo   : '0;
      comp_stage_n[2].rd_data    |= pipe_aux_data_lo_v       ? pipe_aux_data_lo         : '0;
      comp_stage_n[3].rd_data    |= pipe_mem_final_data_lo_v ? pipe_mem_final_data_lo   : '0;
      comp_stage_n[3].rd_data    |= pipe_mul_data_lo_v       ? pipe_mul_data_lo         : '0;
      comp_stage_n[4].rd_data    |= pipe_fma_data_lo_v       ? pipe_fma_data_lo         : '0;

      comp_stage_n[2].fflags     |= pipe_mem_early_data_lo_v ? pipe_mem_early_fflags_lo : '0;
      comp_stage_n[2].fflags     |= pipe_aux_data_lo_v       ? pipe_aux_fflags_lo       : '0;
      comp_stage_n[4].fflags     |= pipe_fma_data_lo_v       ? pipe_fma_fflags_lo       : '0;

      comp_stage_n[0].ird_w_v    &= exc_stage_n[0].v;
      comp_stage_n[1].ird_w_v    &= exc_stage_n[1].v;
      comp_stage_n[2].ird_w_v    &= exc_stage_n[2].v;
      comp_stage_n[3].ird_w_v    &= exc_stage_n[3].v;

      comp_stage_n[0].frd_w_v    &= exc_stage_n[0].v;
      comp_stage_n[1].frd_w_v    &= exc_stage_n[1].v;
      comp_stage_n[2].frd_w_v    &= exc_stage_n[2].v;
      comp_stage_n[3].frd_w_v    &= exc_stage_n[3].v;

      comp_stage_n[0].fflags_w_v &= exc_stage_n[0].v;
      comp_stage_n[1].fflags_w_v &= exc_stage_n[1].v;
      comp_stage_n[2].fflags_w_v &= exc_stage_n[2].v;
      comp_stage_n[3].fflags_w_v &= exc_stage_n[3].v;

      // writeback to reg if dcache didnt miss
      comp_stage_n[2].ird_w_v    &= ~pipe_mem_dcache_miss_lo;
      comp_stage_n[2].frd_w_v    &= ~pipe_mem_dcache_miss_lo;
    end
  
  bsg_dff
   #(.width_p($bits(bp_be_wb_pkt_s)*pipe_stage_els_lp))
   comp_stage_reg
    (.clk_i(clk_i)
     ,.data_i(comp_stage_n[0+:pipe_stage_els_lp])
     ,.data_o(comp_stage_r)
     );


  bp_be_dispatch_pkt_s [pipe_stage_els_lp-1:0] comp_stage_pkt1;
  always_comb
    begin
      for (integer i = 0; i <= pipe_stage_els_lp; i++)
        begin : comp_stage1
          // Normally, shift down in the pipe
          //integer reg file
          //floating reg file
          //so this is for R type function which is register functions with two regs and a destination
          // comp_stage_pkt1[i] = (1==0) ? reservation_n_1 : comp_stage_pkt1[i-1];
          comp_stage_n1[i] = (i == 0)
            ? '{ird_w_v    : reservation_n_1.decode.irf_w_v
                ,frd_w_v   : reservation_n_1.decode.frf_w_v
                ,fflags_w_v: reservation_n_1.decode.fflags_w_v
                ,rd_addr   : reservation_n_1.instr.t.rtype.rd_addr
                ,default: '0
                }
            : comp_stage_r1[i-1];
        end
      // Injected instructions can carry a payload in rs2
      comp_stage_n1[0].rd_data    |= injection                ? dispatch_pkt1_cast_i.rs2  : '0;
      comp_stage_n1[1].rd_data    |= (pipe_int_data_lo_v & comp_stage_pkt1[1].decode.pipe_int_v)       ? pipe_int_data_lo         : '0;
      comp_stage_n1[1].rd_data    |= (pipe_ctl_data_lo_v & comp_stage_pkt1[1].decode.pipe_ctl_v)     ? pipe_ctl_data_lo         : '0;
      comp_stage_n1[1].rd_data    |= (pipe_sys_data_lo_v & comp_stage_pkt1[1].decode.pipe_sys_v)       ? pipe_sys_data_lo         : '0;
      comp_stage_n1[2].rd_data    |= (pipe_mem_early_data_lo_v & comp_stage_pkt1[2].decode.pipe_mem_early_v) ? pipe_mem_early_data_lo   : '0;
      comp_stage_n1[2].rd_data    |= (pipe_aux_data_lo_v & comp_stage_pkt1[2].decode.pipe_aux_v)      ? pipe_aux_data_lo         : '0;
      comp_stage_n1[3].rd_data    |= (pipe_mem_final_data_lo_v & comp_stage_pkt1[3].decode.pipe_mem_final_v) ? pipe_mem_final_data_lo   : '0;
      comp_stage_n1[3].rd_data    |= (pipe_mul_data_lo_v & comp_stage_pkt1[3].decode.pipe_mul_v)      ? pipe_mul_data_lo         : '0;
      comp_stage_n1[4].rd_data    |= (pipe_fma_data_lo_v & comp_stage_pkt1[4].decode.pipe_fma_v)       ? pipe_fma_data_lo         : '0;

      comp_stage_n1[2].fflags     |= (pipe_mem_early_data_lo_v & comp_stage_pkt1[2].decode.pipe_mem_early_v) ? pipe_mem_early_fflags_lo : '0;
      comp_stage_n1[2].fflags     |= (pipe_aux_data_lo_v & comp_stage_pkt1[2].decode.pipe_aux_v)       ? pipe_aux_fflags_lo       : '0;
      comp_stage_n1[4].fflags     |= (pipe_fma_data_lo_v & comp_stage_pkt1[4].decode.pipe_fma_v)       ? pipe_fma_fflags_lo       : '0;

      comp_stage_n1[0].ird_w_v    &= exc_stage_n1[0].v;
      comp_stage_n1[1].ird_w_v    &= exc_stage_n1[1].v;
      comp_stage_n1[2].ird_w_v    &= exc_stage_n1[2].v;
      comp_stage_n1[3].ird_w_v    &= exc_stage_n1[3].v;

      comp_stage_n1[0].frd_w_v    &= exc_stage_n1[0].v;
      comp_stage_n1[1].frd_w_v    &= exc_stage_n1[1].v;
      comp_stage_n1[2].frd_w_v    &= exc_stage_n1[2].v;
      comp_stage_n1[3].frd_w_v    &= exc_stage_n1[3].v;

      comp_stage_n1[0].fflags_w_v &= exc_stage_n1[0].v;
      comp_stage_n1[1].fflags_w_v &= exc_stage_n1[1].v;
      comp_stage_n1[2].fflags_w_v &= exc_stage_n1[2].v;
      comp_stage_n1[3].fflags_w_v &= exc_stage_n1[3].v;

      // writeback to reg if dcache didnt miss
      comp_stage_n1[2].ird_w_v    &= (~pipe_mem_dcache_miss_lo & (comp_stage_pkt1[2].decode.pipe_mem_early_v | comp_stage_pkt1[2].decode.pipe_mem_final_v));
      comp_stage_n1[2].frd_w_v    &= (~pipe_mem_dcache_miss_lo & (comp_stage_pkt1[2].decode.pipe_mem_early_v | comp_stage_pkt1[2].decode.pipe_mem_final_v));
    end

// assign comp_stage_pkt1[0] = reservation_n_1;
  bsg_dff
   #(.width_p($bits(bp_be_dispatch_pkt_s)*(pipe_stage_els_lp-1)))
   comp_stage_pktreg1
    (.clk_i(clk_i)
     ,.data_i({comp_stage_pkt1[3], comp_stage_pkt1[2], comp_stage_pkt1[1], reservation_n_1})
     ,.data_o({comp_stage_pkt1[4], comp_stage_pkt1[3], comp_stage_pkt1[2], comp_stage_pkt1[1]})
     );

  bsg_dff
   #(.width_p($bits(bp_be_wb_pkt_s)*pipe_stage_els_lp))
   comp_stage_reg1
    (.clk_i(clk_i)
     ,.data_i(comp_stage_n1[0+:pipe_stage_els_lp])
     ,.data_o(comp_stage_r1)
     );

  bp_be_dispatch_pkt_s [pipe_stage_els_lp-1:0] comp_stage_pkt2;
  always_comb
    begin
      for (integer i = 0; i <= pipe_stage_els_lp; i++)
        begin : comp_stage2
          // Normally, shift down in the pipe
          //integer reg file
          //floating reg file
          //so this is for R type function which is register functions with two regs and a destination
          // comp_stage_pkt2[i] = (1==0) ? reservation_n_2 : comp_stage_pkt2[i-1];
          comp_stage_n2[i] = (i == 0)
            ? '{ird_w_v    : reservation_n_2.decode.irf_w_v
                ,frd_w_v   : reservation_n_2.decode.frf_w_v
                ,fflags_w_v: reservation_n_2.decode.fflags_w_v
                ,rd_addr   : reservation_n_2.instr.t.rtype.rd_addr
                ,default: '0
                }
            : comp_stage_r2[i-1];
        end
      // Injected instructions can carry a payload in rs2
      comp_stage_n2[0].rd_data    |= injection                ? dispatch_pkt2_cast_i.rs2  : '0;
      comp_stage_n2[1].rd_data    |= (pipe_int_data_lo_v & comp_stage_pkt2[1].decode.pipe_int_v)       ? pipe_int_data_lo         : '0;
      comp_stage_n2[1].rd_data    |= (pipe_ctl_data_lo_v & comp_stage_pkt2[1].decode.pipe_ctl_v)     ? pipe_ctl_data_lo         : '0;
      comp_stage_n2[1].rd_data    |= (pipe_sys_data_lo_v & comp_stage_pkt2[1].decode.pipe_sys_v)       ? pipe_sys_data_lo         : '0;
      comp_stage_n2[2].rd_data    |= (pipe_mem_early_data_lo_v & comp_stage_pkt2[2].decode.pipe_mem_early_v) ? pipe_mem_early_data_lo   : '0;
      comp_stage_n2[2].rd_data    |= (pipe_aux_data_lo_v & comp_stage_pkt2[2].decode.pipe_aux_v)      ? pipe_aux_data_lo         : '0;
      comp_stage_n2[3].rd_data    |= (pipe_mem_final_data_lo_v & comp_stage_pkt2[3].decode.pipe_mem_final_v) ? pipe_mem_final_data_lo   : '0;
      comp_stage_n2[3].rd_data    |= (pipe_mul_data_lo_v & comp_stage_pkt2[3].decode.pipe_mul_v)      ? pipe_mul_data_lo         : '0;
      comp_stage_n2[4].rd_data    |= (pipe_fma_data_lo_v & comp_stage_pkt2[4].decode.pipe_fma_v)       ? pipe_fma_data_lo         : '0;

      comp_stage_n2[2].fflags     |= (pipe_mem_early_data_lo_v & comp_stage_pkt2[2].decode.pipe_mem_early_v) ? pipe_mem_early_fflags_lo : '0;
      comp_stage_n2[2].fflags     |= (pipe_aux_data_lo_v & comp_stage_pkt2[2].decode.pipe_aux_v)       ? pipe_aux_fflags_lo       : '0;
      comp_stage_n2[4].fflags     |= (pipe_fma_data_lo_v & comp_stage_pkt2[4].decode.pipe_fma_v)       ? pipe_fma_fflags_lo       : '0;

      comp_stage_n2[0].ird_w_v    &= exc_stage_n2[0].v;
      comp_stage_n2[1].ird_w_v    &= exc_stage_n2[1].v;
      comp_stage_n2[2].ird_w_v    &= exc_stage_n2[2].v;
      comp_stage_n2[3].ird_w_v    &= exc_stage_n2[3].v;

      comp_stage_n2[0].frd_w_v    &= exc_stage_n2[0].v;
      comp_stage_n2[1].frd_w_v    &= exc_stage_n2[1].v;
      comp_stage_n2[2].frd_w_v    &= exc_stage_n2[2].v;
      comp_stage_n2[3].frd_w_v    &= exc_stage_n2[3].v;

      comp_stage_n2[0].fflags_w_v &= exc_stage_n2[0].v;
      comp_stage_n2[1].fflags_w_v &= exc_stage_n2[1].v;
      comp_stage_n2[2].fflags_w_v &= exc_stage_n2[2].v;
      comp_stage_n2[3].fflags_w_v &= exc_stage_n2[3].v;

      // writeback to reg if dcache didnt miss
      comp_stage_n2[2].ird_w_v    &= (~pipe_mem_dcache_miss_lo & (comp_stage_pkt2[2].decode.pipe_mem_early_v | comp_stage_pkt2[2].decode.pipe_mem_final_v));
      comp_stage_n2[2].frd_w_v    &= (~pipe_mem_dcache_miss_lo & (comp_stage_pkt2[2].decode.pipe_mem_early_v | comp_stage_pkt2[2].decode.pipe_mem_final_v));
    end

  bsg_dff
   #(.width_p($bits(bp_be_wb_pkt_s)*pipe_stage_els_lp))
   comp_stage_reg2
    (.clk_i(clk_i)
     ,.data_i(comp_stage_n2[0+:pipe_stage_els_lp])
     ,.data_o(comp_stage_r2)
     );
  bsg_dff
   #(.width_p($bits(bp_be_dispatch_pkt_s)*(pipe_stage_els_lp-1)))
   comp_stage_pktreg2
    (.clk_i(clk_i)
     ,.data_i({comp_stage_pkt2[3], comp_stage_pkt2[2], comp_stage_pkt2[1], reservation_n_2})
     ,.data_o({comp_stage_pkt2[4], comp_stage_pkt2[3], comp_stage_pkt2[2], comp_stage_pkt2[1]})
     );

  always_comb
    begin
      // Exception aggregation
      for (integer i = 0; i <= pipe_stage_els_lp; i++)
        begin : exc_stage
          // Normally, shift down in the pipe
          exc_stage_n[i] = (i == 0) ? '0 : exc_stage_r[i-1];
        end
          exc_stage_n[0].v                       = reservation_n_1.v | reservation_n_2.v;
          exc_stage_n[0].v                      &= ~commit_pkt_cast_o.npc_w_v;
          exc_stage_n[1].v                      &= ~commit_pkt_cast_o.npc_w_v;
          exc_stage_n[2].v                      &= ~commit_pkt_cast_o.npc_w_v;
          exc_stage_n[3].v                      &= commit_pkt_cast_o.instret;

          exc_stage_n[0].queue_v                 = reservation_n_1.queue_v | reservation_n_2.queue_v;
          exc_stage_n[0].queue_v                &= ~commit_pkt_cast_o.npc_w_v;
          exc_stage_n[1].queue_v                &= ~commit_pkt_cast_o.npc_w_v;
          exc_stage_n[2].queue_v                &= ~commit_pkt_cast_o.npc_w_v;
          exc_stage_n[3].queue_v                &= ~commit_pkt_cast_o.npc_w_v;

          //special and exception hold a bits for particular cases that we might as well combine
          exc_stage_n[0].spec                   |= (reservation_n_1.special | reservation_n_2.special);
          exc_stage_n[0].exc                    |= (reservation_n_1.exception | reservation_n_2.exception);

          exc_stage_n[1].exc.illegal_instr      |= pipe_sys_illegal_instr_lo;
          exc_stage_n[1].spec.csrw              |= pipe_sys_csrw_lo & comp_stage_n1;

          exc_stage_n[1].exc.dtlb_store_miss    |= pipe_mem_dtlb_store_miss_lo;
          exc_stage_n[1].exc.dtlb_load_miss     |= pipe_mem_dtlb_load_miss_lo;
          exc_stage_n[1].exc.load_misaligned    |= pipe_mem_load_misaligned_lo;
          exc_stage_n[1].exc.load_access_fault  |= pipe_mem_load_access_fault_lo;
          exc_stage_n[1].exc.load_page_fault    |= pipe_mem_load_page_fault_lo;
          exc_stage_n[1].exc.store_misaligned   |= pipe_mem_store_misaligned_lo;
          exc_stage_n[1].exc.store_access_fault |= pipe_mem_store_access_fault_lo;
          exc_stage_n[1].exc.store_page_fault   |= pipe_mem_store_page_fault_lo;

          exc_stage_n[2].exc.dcache_fail        |= pipe_mem_dcache_fail_lo;
          exc_stage_n[2].spec.dcache_miss       |= pipe_mem_dcache_miss_lo;
          exc_stage_n[2].spec.fencei_clean      |= pipe_mem_fencei_clean_lo;
          exc_stage_n[2].exc.fencei_dirty       |= pipe_mem_fencei_dirty_lo;
          exc_stage_n[2].exc.cmd_full           |= |{exc_stage_r[2].exc, exc_stage_r[2].spec} & cmd_full_n_i;
    end

  // Exception pipeline
  bsg_dff
   #(.width_p($bits(bp_be_exc_stage_s)*pipe_stage_els_lp))
   exc_stage_reg
    (.clk_i(clk_i)
     ,.data_i(exc_stage_n[0+:pipe_stage_els_lp])
     ,.data_o(exc_stage_r)
     );


  always_comb
    begin
      // Exception aggregation
      for (integer i = 0; i <= pipe_stage_els_lp; i++)
        begin : exc_stage1
          // Normally, shift down in the pipe
          exc_stage_n1[i] = (i == 0) ? '0 : exc_stage_r[i-1];
        end
          //no npc writes from bad branching or csr states and none from reservation
          exc_stage_n1[0].v                       = reservation_n_1.v;
          exc_stage_n1[0].v                      &= ~commit_pkt_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n1[1].v                      &= ~commit_pkt_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n1[2].v                      &= ~commit_pkt_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          //after instr is all done that the instr returns properly
          exc_stage_n1[3].v                      &= commit_pkt_cast_o.instret;
          //reservation is indeed queued so it can be saved and returned
          exc_stage_n1[0].queue_v                 = reservation_n_1.queue_v;
          exc_stage_n1[0].queue_v                &= ~commit_pkt_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n1[1].queue_v                &= ~commit_pkt_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n1[2].queue_v                &= ~commit_pkt_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n1[3].queue_v                &= ~commit_pkt_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;

          //special and exception hold a bits for particular cases that we might as well combine
          exc_stage_n1[0].spec                   |= (reservation_n_1.special);
          exc_stage_n1[0].exc                    |= (reservation_n_1.exception);
          //csr exceptions occur if they are legit inputs to pipe_sys_v since they need te be valid in csr of pipe_sys
          exc_stage_n1[1].exc.illegal_instr      |= pipe_sys_illegal_instr_lo & comp_stage_pkt1[1].decode.pipe_sys_v;
          exc_stage_n1[1].spec.csrw              |= pipe_sys_csrw_lo & comp_stage_pkt1[1].decode.pipe_sys_v;
          //memory related exceptions which we need to pass our pkt to
          exc_stage_n1[1].exc.dtlb_store_miss    |= pipe_mem_dtlb_store_miss_lo & (comp_stage_pkt1[1].decode.pipe_mem_early_v ||  comp_stage_pkt1[1].decode.pipe_mem_final_v);
          exc_stage_n1[1].exc.dtlb_load_miss     |= pipe_mem_dtlb_load_miss_lo & (comp_stage_pkt1[1].decode.pipe_mem_early_v ||  comp_stage_pkt1[1].decode.pipe_mem_final_v);
          exc_stage_n1[1].exc.load_misaligned    |= pipe_mem_load_misaligned_lo & (comp_stage_pkt1[1].decode.pipe_mem_early_v ||  comp_stage_pkt1[1].decode.pipe_mem_final_v);
          exc_stage_n1[1].exc.load_access_fault  |= pipe_mem_load_access_fault_lo & (comp_stage_pkt1[1].decode.pipe_mem_early_v ||  comp_stage_pkt1[1].decode.pipe_mem_final_v);
          exc_stage_n1[1].exc.load_page_fault    |= pipe_mem_load_page_fault_lo & (comp_stage_pkt1[1].decode.pipe_mem_early_v ||  comp_stage_pkt1[1].decode.pipe_mem_final_v);
          exc_stage_n1[1].exc.store_misaligned   |= pipe_mem_store_misaligned_lo & (comp_stage_pkt1[1].decode.pipe_mem_early_v ||  comp_stage_pkt1[1].decode.pipe_mem_final_v);
          exc_stage_n1[1].exc.store_access_fault |= pipe_mem_store_access_fault_lo & (comp_stage_pkt1[1].decode.pipe_mem_early_v ||  comp_stage_pkt1[1].decode.pipe_mem_final_v);
          exc_stage_n1[1].exc.store_page_fault   |= pipe_mem_store_page_fault_lo & (comp_stage_pkt1[1].decode.pipe_mem_early_v ||  comp_stage_pkt1[1].decode.pipe_mem_final_v);

          exc_stage_n1[2].exc.dcache_fail        |= pipe_mem_dcache_fail_lo & (comp_stage_pkt1[2].decode.pipe_mem_early_v ||  comp_stage_pkt1[2].decode.pipe_mem_final_v);
          exc_stage_n1[2].spec.dcache_miss       |= pipe_mem_dcache_miss_lo & (comp_stage_pkt1[2].decode.pipe_mem_early_v ||  comp_stage_pkt1[2].decode.pipe_mem_final_v);
          exc_stage_n1[2].spec.fencei_clean      |= pipe_mem_fencei_clean_lo & (comp_stage_pkt1[2].decode.pipe_mem_early_v ||  comp_stage_pkt1[2].decode.pipe_mem_final_v);
          exc_stage_n1[2].exc.fencei_dirty       |= pipe_mem_fencei_dirty_lo & (comp_stage_pkt1[2].decode.pipe_mem_early_v ||  comp_stage_pkt1[2].decode.pipe_mem_final_v);
          exc_stage_n1[2].exc.cmd_full           |= |{exc_stage_r1[2].exc, exc_stage_r1[2].spec} & cmd_full_n_i;
    end

  // Exception pipeline 1
  bsg_dff
   #(.width_p($bits(bp_be_exc_stage_s)*pipe_stage_els_lp))
   exc_stage_reg1
    (.clk_i(clk_i)
     ,.data_i(exc_stage_n1[0+:pipe_stage_els_lp])
     ,.data_o(exc_stage_r1)
     );

  always_comb
    begin
      // Exception aggregation
      for (integer i = 0; i <= pipe_stage_els_lp; i++)
        begin : exc_stage1
          // Normally, shift down in the pipe
          exc_stage_n1[i] = (i == 0) ? '0 : exc_stage_r[i-1];
        end
          exc_stage_n2[0].v                       = reservation_n_2.v;
          exc_stage_n2[0].v                      &= ~commit_pkt2_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n2[1].v                      &= ~commit_pkt2_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n2[2].v                      &= ~commit_pkt2_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n2[3].v                      &= commit_pkt2_cast_o.instret;

          exc_stage_n2[0].queue_v                 = reservation_n_2.queue_v;
          exc_stage_n2[0].queue_v                &= ~commit_pkt2_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n2[1].queue_v                &= ~commit_pkt2_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n2[2].queue_v                &= ~commit_pkt2_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;
          exc_stage_n2[3].queue_v                &= ~commit_pkt2_cast_o.npc_w_v & ~commit_pkt2_cast_o.npc_w_v;

          //special and exception hold a bits for particular cases that we might as well combine
          exc_stage_n2[0].spec                   |= (reservation_n_2.special);
          exc_stage_n2[0].exc                    |= (reservation_n_2.exception);
          //csr exceptions occur if they are legit inputs to pipe_sys_v since they need te be valid in csr of pipe_sys
          exc_stage_n2[1].exc.illegal_instr      |= pipe_sys_illegal_instr_lo & comp_stage_pkt2[1].decode.pipe_sys_v;
          exc_stage_n2[1].spec.csrw              |= pipe_sys_csrw_lo & comp_stage_pkt2[1].decode.pipe_sys_v;
          //memory related exceptions which we need to pass our pkt to
          exc_stage_n2[1].exc.dtlb_store_miss    |= pipe_mem_dtlb_store_miss_lo & (comp_stage_pkt2[1].decode.pipe_mem_early_v ||  comp_stage_pkt2[1].decode.pipe_mem_final_v);
          exc_stage_n2[1].exc.dtlb_load_miss     |= pipe_mem_dtlb_load_miss_lo & (comp_stage_pkt2[1].decode.pipe_mem_early_v ||  comp_stage_pkt2[1].decode.pipe_mem_final_v);
          exc_stage_n2[1].exc.load_misaligned    |= pipe_mem_load_misaligned_lo & (comp_stage_pkt2[1].decode.pipe_mem_early_v ||  comp_stage_pkt2[1].decode.pipe_mem_final_v);
          exc_stage_n2[1].exc.load_access_fault  |= pipe_mem_load_access_fault_lo & (comp_stage_pkt2[1].decode.pipe_mem_early_v ||  comp_stage_pkt2[1].decode.pipe_mem_final_v);
          exc_stage_n2[1].exc.load_page_fault    |= pipe_mem_load_page_fault_lo & (comp_stage_pkt2[1].decode.pipe_mem_early_v ||  comp_stage_pkt2[1].decode.pipe_mem_final_v);
          exc_stage_n2[1].exc.store_misaligned   |= pipe_mem_store_misaligned_lo & (comp_stage_pkt2[1].decode.pipe_mem_early_v ||  comp_stage_pkt2[1].decode.pipe_mem_final_v);
          exc_stage_n2[1].exc.store_access_fault |= pipe_mem_store_access_fault_lo & (comp_stage_pkt2[1].decode.pipe_mem_early_v ||  comp_stage_pkt2[1].decode.pipe_mem_final_v);
          exc_stage_n2[1].exc.store_page_fault   |= pipe_mem_store_page_fault_lo & (comp_stage_pkt2[1].decode.pipe_mem_early_v ||  comp_stage_pkt2[1].decode.pipe_mem_final_v);

          exc_stage_n2[2].exc.dcache_fail        |= pipe_mem_dcache_fail_lo & (comp_stage_pkt2[2].decode.pipe_mem_early_v ||  comp_stage_pkt2[2].decode.pipe_mem_final_v);
          exc_stage_n2[2].spec.dcache_miss       |= pipe_mem_dcache_miss_lo & (comp_stage_pkt2[2].decode.pipe_mem_early_v ||  comp_stage_pkt2[2].decode.pipe_mem_final_v);
          exc_stage_n2[2].spec.fencei_clean      |= pipe_mem_fencei_clean_lo & (comp_stage_pkt2[2].decode.pipe_mem_early_v ||  comp_stage_pkt2[2].decode.pipe_mem_final_v);
          exc_stage_n2[2].exc.fencei_dirty       |= pipe_mem_fencei_dirty_lo & (comp_stage_pkt2[2].decode.pipe_mem_early_v ||  comp_stage_pkt2[2].decode.pipe_mem_final_v);
          exc_stage_n2[2].exc.cmd_full           |= |{exc_stage_r2[2].exc, exc_stage_r2[2].spec} & cmd_full_n_i;
    end

  // Exception pipeline 2
  bsg_dff
   #(.width_p($bits(bp_be_exc_stage_s)*pipe_stage_els_lp))
   exc_stage_reg2
    (.clk_i(clk_i)
     ,.data_i(exc_stage_n2[0+:pipe_stage_els_lp])
     ,.data_o(exc_stage_r2)
     );




  assign pipe_mem_late_iwb_pkt_yumi = pipe_mem_late_iwb_pkt_v & (~comp_stage_r1[3].ird_w_v || ~comp_stage_r2[3].ird_w_v);
  assign pipe_mem_late_fwb_pkt_yumi = pipe_mem_late_fwb_pkt_v & (~comp_stage_r1[4].frd_w_v || ~comp_stage_r2[4].frd_w_v);

  assign pipe_long_idata_lo_yumi = pipe_long_idata_lo_v & ~pipe_mem_late_iwb_pkt_v & (~comp_stage_r1[3].ird_w_v || ~comp_stage_r2[3].ird_w_v);
  assign pipe_long_fdata_lo_yumi = pipe_long_fdata_lo_v & ~pipe_mem_late_fwb_pkt_v & ((~comp_stage_r1[4].frd_w_v & ~comp_stage_r1[4].fflags_w_v) || (~comp_stage_r2[4].frd_w_v & ~comp_stage_r2[4].fflags_w_v));

  assign iwb_pkt_o = (pipe_mem_late_iwb_pkt_yumi & ~comp_stage_r1[3].ird_w_v) ? pipe_mem_late_iwb_pkt : (pipe_long_idata_lo_yumi & (~comp_stage_r1[4].frd_w_v & ~comp_stage_r1[4].fflags_w_v)) ? long_iwb_pkt : comp_stage_r1[3];
  assign iwb_pkt_o2 = (pipe_mem_late_iwb_pkt_yumi & ~comp_stage_r2[3].ird_w_v) ? pipe_mem_late_iwb_pkt : (pipe_long_idata_lo_yumi & (~comp_stage_r2[4].frd_w_v & ~comp_stage_r2[4].fflags_w_v)) ? long_iwb_pkt : comp_stage_r2[3];
  assign fwb_pkt_o = (pipe_mem_late_fwb_pkt_yumi & ~comp_stage_r1[4].frd_w_v) ? pipe_mem_late_fwb_pkt : (pipe_long_fdata_lo_yumi & (~comp_stage_r1[4].frd_w_v & ~comp_stage_r1[4].fflags_w_v)) ? long_fwb_pkt : comp_stage_r1[4];
  assign fwb_pkt_o2 = (pipe_mem_late_fwb_pkt_yumi & ~comp_stage_r2[4].frd_w_v) ? pipe_mem_late_fwb_pkt : (pipe_long_fdata_lo_yumi & (~comp_stage_r2[4].frd_w_v & ~comp_stage_r2[4].fflags_w_v)) ? long_fwb_pkt : comp_stage_r2[4];

endmodule