/**
 *
 * Name:
 *   bp_be_detector.v
 *
 * Description:
 *
 *
 * Notes:
 *   We should get rid of the magic numbers here and replace with constants based on pipeline
 *     stages. However, like the calculator, this is a high risk change that should be postponed
 *
 * Modifications: 
 *   1. doubled outputs: dispatch_v_o
 *   2. doubled inputs: isd_status_i
 *   3. Calculator's bandwidth to be decided ()
 *   4. cmd_full_i, credits_full_i, credits_empty_i to be decided
 *
 */

`include "bp_common_defines.svh"
`include "bp_be_defines.svh"

module bp_be_detector
 import bp_common_pkg::*;
 import bp_be_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)

   // Generated parameters
   , localparam cfg_bus_width_lp = `bp_cfg_bus_width(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p)
   , localparam isd_status_width_lp = `bp_be_isd_status_width(vaddr_width_p, branch_metadata_fwd_width_p)
   , localparam dispatch_pkt_width_lp = `bp_be_dispatch_pkt_width(vaddr_width_p)
   , localparam commit_pkt_width_lp = `bp_be_commit_pkt_width(vaddr_width_p, paddr_width_p)
   , localparam wb_pkt_width_lp     = `bp_be_wb_pkt_width(vaddr_width_p)
   )
  (input                               clk_i
   , input                             reset_i

   , input [cfg_bus_width_lp-1:0]      cfg_bus_i

   // Dependency information
   , input [isd_status_width_lp-1:0]   isd_status_i, isd_status2_i
   , input                             cmd_full_i
   , input                             credits_full_i
   , input                             credits_empty_i
   , input                             idiv_ready_i
   , input                             fdiv_ready_i
   , input                             mem_ready_i
   , input                             ptw_busy_i
   , input                             irq_pending_i

   // Pipeline control signals from the checker to the calculator
   , output logic                      dispatch_v_o, dispatch_v_o2//we can send the dispatch out
   , output logic                      interrupt_v_o//interrupt to stop sys
   , input [dispatch_pkt_width_lp-1:0] dispatch_pkt_i, dispatch_pkt2_i
   , input [commit_pkt_width_lp-1:0]   commit_pkt_i, commit_pkt2_i//commits
   , input [wb_pkt_width_lp-1:0]       iwb_pkt_i, iwb_pkt2_i //writeback for int
   , input [wb_pkt_width_lp-1:0]       fwb_pkt_i, fwb_pkt2_i//floating writeback
   );

  `declare_bp_cfg_bus_s(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p);
  `declare_bp_be_internal_if_structs(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);

  `bp_cast_i(bp_cfg_bus_s, cfg_bus);
  `bp_cast_i(bp_be_isd_status_s, isd_status);
  `bp_cast_i(bp_be_isd_status_s, isd_status2);
  `bp_cast_i(bp_be_dispatch_pkt_s, dispatch_pkt);
  `bp_cast_i(bp_be_dispatch_pkt_s, dispatch_pkt2)
  `bp_cast_i(bp_be_commit_pkt_s, commit_pkt);
  `bp_cast_i(bp_be_commit_pkt_s, commit_pkt2);
  `bp_cast_i(bp_be_wb_pkt_s, iwb_pkt);
  `bp_cast_i(bp_be_wb_pkt_s, fwb_pkt);
  `bp_cast_i(bp_be_wb_pkt_s, iwb_pkt2);
  `bp_cast_i(bp_be_wb_pkt_s, fwb_pkt2);

  // Integer data hazards
  logic irs1_sb_raw_haz1_v, irs2_sb_raw_haz1_v;
  logic irs1_sb_raw_haz2_v, irs2_sb_raw_haz2_v;
  logic ird_sb_waw_haz1_v, ird_sb_waw_haz2_v;
  logic [2:0] irs1_data_haz1_v , irs2_data_haz1_v;
  logic [2:0] irs1_data_haz2_v , irs2_data_haz2_v;
  // Floating point data hazards
  logic frs1_sb_raw_haz1_v, frs2_sb_raw_haz1_v, frs3_sb_raw_haz1_v;
  logic frs1_sb_raw_haz2_v, frs2_sb_raw_haz2_v, frs3_sb_raw_haz2_v;
  logic frd_sb_waw_haz1_v, frd_sb_waw_haz2_v;
  logic [2:0] frs1_data_haz1_v , frs2_data_haz1_v, frs3_data_haz1_v;
  logic [2:0] frs1_data_haz2_v , frs2_data_haz2_v, frs3_data_haz2_v;

  logic [2:0] rs1_match_vector1, rs2_match_vector1, rs3_match_vector1;
  logic [2:0] rs1_match_vector2, rs2_match_vector2, rs3_match_vector2;

  bp_be_dep_status_s [3:0] dep_status_r; // should have the same width as dispatch_pkt

  logic fence_haz1_v, fence_haz2_v, cmd_haz_v, fflags_haz1_v, fflags_haz2_v, csr_haz1_v, csr_haz2_v;
  logic data_haz1_v, control_haz1_v, struct_haz1_v;
  logic data_haz2_v, control_haz2_v, struct_haz2_v;
  logic long_haz1_v, long_haz2_v;
  logic mem_in_pipe_v;

  wire [reg_addr_width_gp-1:0] score_rd_li  = commit_pkt_cast_i.dcache_miss
    ? commit_pkt_cast_i.instr.t.fmatype.rd_addr
    : commit_pkt2_cast_i.dcache_miss
    ? commit_pkt2_cast_i.instr.t.fmatype.rd_addr
    : dispatch_pkt_cast_i.instr.t.fmatype.rd_addr;
  wire [reg_addr_width_gp-1:0] score_rd_li2  = commit_pkt_cast_i.dcache_miss
    ? commit_pkt_cast_i.instr.t.fmatype.rd_addr
    : commit_pkt2_cast_i.dcache_miss
    ? commit_pkt2_cast_i.instr.t.fmatype.rd_addr
    : dispatch_pkt2_cast_i.instr.t.fmatype.rd_addr;

  wire [reg_addr_width_gp-1:0] score_rs1_li = dispatch_pkt_cast_i.instr.t.fmatype.rs1_addr;
  wire [reg_addr_width_gp-1:0] score_rs2_li = dispatch_pkt_cast_i.instr.t.fmatype.rs2_addr;
  wire [reg_addr_width_gp-1:0] score_rs3_li = dispatch_pkt_cast_i.instr.t.fmatype.rs3_addr;

  wire [reg_addr_width_gp-1:0] score_rs1_li2 = dispatch_pkt2_cast_i.instr.t.fmatype.rs1_addr;
  wire [reg_addr_width_gp-1:0] score_rs2_li2 = dispatch_pkt2_cast_i.instr.t.fmatype.rs2_addr;
  wire [reg_addr_width_gp-1:0] score_rs3_li2 = dispatch_pkt2_cast_i.instr.t.fmatype.rs3_addr;

//clear address writes
  wire [reg_addr_width_gp-1:0] clear_ird_li = iwb_pkt_cast_i.rd_addr;
  wire [reg_addr_width_gp-1:0] clear_frd_li = fwb_pkt_cast_i.rd_addr;
  wire [reg_addr_width_gp-1:0] clear_ird_li2 = iwb_pkt2_cast_i.rd_addr;
  wire [reg_addr_width_gp-1:0] clear_frd_li2 = fwb_pkt2_cast_i.rd_addr;

  logic [1:0] irs_match_lo, irs_match_lo2;
  logic       ird_match_lo, ird_match_lo2;

  //late wb will occur due to a mult or div which takes mult cycles hence late wb
  //should add for both dispatches as at least one of these will use the multiply
  //so long as data dependenciesa are not an issue
  wire score_int_v_li = (dispatch_pkt_cast_i.v & dispatch_pkt_cast_i.decode.late_iwb_v)
    || (commit_pkt_cast_i.dcache_miss & commit_pkt_cast_i.instr.t.fmatype.opcode inside {`RV64_LOAD_OP, `RV64_AMO_OP})
    || (commit_pkt2_cast_i.dcache_miss & commit_pkt2_cast_i.instr.t.fmatype.opcode inside {`RV64_LOAD_OP, `RV64_AMO_OP});
  wire score_int_v_li2 = (dispatch_pkt2_cast_i.v & dispatch_pkt2_cast_i.decode.late_iwb_v)
    || (commit_pkt_cast_i.dcache_miss & commit_pkt_cast_i.instr.t.fmatype.opcode inside {`RV64_LOAD_OP, `RV64_AMO_OP})
    || (commit_pkt2_cast_i.dcache_miss & commit_pkt2_cast_i.instr.t.fmatype.opcode inside {`RV64_LOAD_OP, `RV64_AMO_OP});
  wire clear_int_v_li = (iwb_pkt_cast_i.ird_w_v & iwb_pkt_cast_i.late);
  wire clear_int_v_li2 = (iwb_pkt2_cast_i.ird_w_v & iwb_pkt2_cast_i.late);
  // integer scoreboard
  // I tried making an updated scoreboard so that may be helpful with dependencies btwn instr - Noah 
  //also maybe figure out how to add other dispatch into score board
  // FMA also stands for fused multiply add - a*b+c so scoreboards add also for long instr


//ADD TWO CLEARS ONTO THE BOARD
  bp_be_scoreboard_di
   #(.bp_params_p(bp_params_p), .num_rs_p(2))
   int_scoreboard_di
  (.clk_i(clk_i)
   ,.reset_i(reset_i)

   ,.score_v_i(score_int_v_li), .score_v_i2(score_int_v_li2)
   ,.score_rd_i(score_rd_li), .score_rd_i2(score_rd_li2)

   ,.clear_v_i(clear_int_v_li)
   ,.clear_v_i2(clear_int_v_li2)
   ,.clear_rd_i(clear_ird_li)
   ,.clear_rd_i2(clear_ird_li2)

   ,.rs_i1({score_rs2_li, score_rs1_li})
   ,.rs_i2({score_rs2_li2, score_rs1_li2})
   ,.rd_i(score_rd_li), .rd_i2(score_rd_li2)

   ,.rs_match_o1(irs_match_lo), .rs_match_o2(irs_match_lo2)
   ,.rd_match_o1(ird_match_lo), .rd_match_o2(ird_match_lo2)
   );

  logic [2:0] frs_match_lo, frs_match_lo2;
  logic       frd_match_lo, frd_match_lo2;
  wire score_fp_v_li = (dispatch_pkt_cast_i.v & dispatch_pkt_cast_i.decode.late_fwb_v)
    || (commit_pkt_cast_i.dcache_miss & commit_pkt_cast_i.instr.t.fmatype.opcode == `RV64_FLOAD_OP);
  wire score_fp_v_li2 = (dispatch_pkt2_cast_i.v & dispatch_pkt2_cast_i.decode.late_fwb_v)
    || (commit_pkt_cast_i.dcache_miss & commit_pkt_cast_i.instr.t.fmatype.opcode == `RV64_FLOAD_OP);
  wire clear_fp_v_li = fwb_pkt_cast_i.frd_w_v & fwb_pkt_cast_i.late;
  wire clear_fp_v_li2 = fwb_pkt2_cast_i.frd_w_v & fwb_pkt2_cast_i.late;
  //Float point scoreboard
  bp_be_scoreboard_di
   #(.bp_params_p(bp_params_p), .num_rs_p(3))
   fp_scoreboard_di
  (.clk_i(clk_i)
   ,.reset_i(reset_i)

   ,.score_v_i(score_fp_v_li), .score_v_i2(score_fp_v_li2)
   ,.score_rd_i(score_rd_li), .score_rd_i2(score_rd_li2)

   ,.clear_v_i(clear_fp_v_li)
   ,.clear_v_i2(clear_fp_v_li2)
   ,.clear_rd_i(clear_frd_li)
   ,.clear_rd_i2(clear_frd_li2)

   ,.rs_i1({score_rs3_li, score_rs2_li, score_rs1_li})
   ,.rs_i2({score_rs3_li2, score_rs2_li2, score_rs1_li2})
   ,.rd_i(score_rd_li), .rd_i2(score_rd_li2)

   ,.rs_match_o1(frs_match_lo), .rs_match_o2(frs_match_lo2)
   ,.rd_match_o1(frd_match_lo), .rd_match_o2(frd_match_lo2)
   );

  always_comb
    begin
      // Generate matches for rs1, rs2. rs3
      // 3 stages because we only care about ex1, ex2, and iwb dependencies. fwb dependencies
      //   can be handled through forwarding
      for (integer i = 0; i < 3; i++)
        begin
          rs1_match_vector1[i] = (isd_status1_cast_i.rs1_addr == dep_status_r[i].rd_addr);
          rs2_match_vector1[i] = (isd_status1_cast_i.rs2_addr == dep_status_r[i].rd_addr);
          rs3_match_vector1[i] = (isd_status1_cast_i.rs3_addr == dep_status_r[i].rd_addr);
          rs1_match_vector2[i] = (isd_status2_cast_i.rs1_addr == dep_status_r[i].rd_addr);
          rs2_match_vector2[i] = (isd_status2_cast_i.rs2_addr == dep_status_r[i].rd_addr);
          rs3_match_vector2[i] = (isd_status2_cast_i.rs3_addr == dep_status_r[i].rd_addr);
        end

      // Detect scoreboard hazards
      irs1_sb_raw_haz1_v = (isd_status1_cast_i.irs1_v & irs_match_lo[0]) & (isd_status1_cast_i.rs1_addr != '0);
      irs2_sb_raw_haz1_v = (isd_status1_cast_i.irs2_v & irs_match_lo[1]) & (isd_status1_cast_i.rs2_addr != '0);
      ird_sb_waw_haz1_v = (isd_status1_cast_i.iwb_v & ird_match_lo) & (isd_status1_cast_i.rd_addr != '0);

      irs1_sb_raw_haz2_v = (isd_status2_cast_i.irs1_v & irs_match_lo2[0]) & (isd_status2_cast_i.rs1_addr != '0);
      irs2_sb_raw_haz2_v = (isd_status2_cast_i.irs2_v & irs_match_lo2[1]) & (isd_status2_cast_i.rs2_addr != '0);
      ird_sb_waw_haz2_v = (isd_status2_cast_i.iwb_v & ird_match_lo2) & (isd_status2_cast_i.rd_addr != '0);

      frs1_sb_raw_haz1_v = (isd_status1_cast_i.frs1_v & frs_match_lo[0]);
      frs2_sb_raw_haz1_v = (isd_status1_cast_i.frs2_v & frs_match_lo[1]);
      frs3_sb_raw_haz1_v = (isd_status1_cast_i.frs3_v & frs_match_lo[2]);

      frs1_sb_raw_haz2_v = (isd_status2_cast_i.frs1_v & frs_match_lo2[0]);
      frs2_sb_raw_haz2_v = (isd_status2_cast_i.frs2_v & frs_match_lo2[1]);
      frs3_sb_raw_haz2_v = (isd_status2_cast_i.frs3_v & frs_match_lo2[2]);

      frd_sb_waw_haz1_v = (isd_status1_cast_i.fwb_v & frd_match_lo);
      frd_sb_waw_haz2_v = (isd_status2_cast_i.fwb_v & frd_match_lo2);

      // Detect integer and float data hazards for EX1
      irs1_data_haz1_v[0] = (isd_status1_cast_i.irs1_v & rs1_match_vector1[0])
                           & (isd_status1_cast_i.rs1_addr != '0)
                           & (dep_status_r[0].aux_iwb_v | dep_status_r[0].mul_iwb_v | dep_status_r[0].emem_iwb_v | dep_status_r[0].fmem_iwb_v);

      irs2_data_haz1_v[0] = (isd_status1_cast_i.irs2_v & rs2_match_vector1[0])
                           & (isd_status1_cast_i.rs2_addr != '0)
                           & (dep_status_r[0].aux_iwb_v | dep_status_r[0].mul_iwb_v | dep_status_r[0].emem_iwb_v | dep_status_r[0].fmem_iwb_v);

      frs1_data_haz1_v[0] = (isd_status1_cast_i.frs1_v & rs1_match_vector1[0])
                           & (dep_status_r[0].aux_fwb_v | dep_status_r[0].emem_fwb_v | dep_status_r[0].fmem_fwb_v | dep_status_r[0].fma_fwb_v);

      frs2_data_haz1_v[0] = (isd_status1_cast_i.frs2_v & rs2_match_vector1[0])
                           & (dep_status_r[0].aux_fwb_v | dep_status_r[0].emem_fwb_v | dep_status_r[0].fmem_fwb_v | dep_status_r[0].fma_fwb_v);

      frs3_data_haz1_v[0] = (isd_status1_cast_i.frs3_v & rs3_match_vector1[0])
                           & (dep_status_r[0].aux_fwb_v | dep_status_r[0].emem_fwb_v | dep_status_r[0].fmem_fwb_v | dep_status_r[0].fma_fwb_v);

      irs1_data_haz2_v[0] = (isd_status2_cast_i.irs1_v & rs1_match_vector2[0])
                           & (isd_status2_cast_i.rs1_addr != '0)
                           & (dep_status_r[0].aux_iwb_v | dep_status_r[0].mul_iwb_v | dep_status_r[0].emem_iwb_v | dep_status_r[0].fmem_iwb_v);

      irs2_data_haz2_v[0] = (isd_status2_cast_i.irs2_v & rs2_match_vector2[0])
                           & (isd_status2_cast_i.rs2_addr != '0)
                           & (dep_status_r[0].aux_iwb_v | dep_status_r[0].mul_iwb_v | dep_status_r[0].emem_iwb_v | dep_status_r[0].fmem_iwb_v);

      frs1_data_haz2_v[0] = (isd_status2_cast_i.frs1_v & rs1_match_vector2[0])
                           & (dep_status_r[0].aux_fwb_v | dep_status_r[0].emem_fwb_v | dep_status_r[0].fmem_fwb_v | dep_status_r[0].fma_fwb_v);

      frs2_data_haz2_v[0] = (isd_status2_cast_i.frs2_v & rs2_match_vector2[0])
                           & (dep_status_r[0].aux_fwb_v | dep_status_r[0].emem_fwb_v | dep_status_r[0].fmem_fwb_v | dep_status_r[0].fma_fwb_v);

      frs3_data_haz2_v[0] = (isd_status2_cast_i.frs3_v & rs3_match_vector2[0])
                           & (dep_status_r[0].aux_fwb_v | dep_status_r[0].emem_fwb_v | dep_status_r[0].fmem_fwb_v | dep_status_r[0].fma_fwb_v);                           

      // Detect integer and float data hazards for EX2
      irs1_data_haz1_v[1] = (isd_status1_cast_i.irs1_v & rs1_match_vector1[1])
                           & (isd_status1_cast_i.rs1_addr != '0)
                           & (dep_status_r[1].fmem_iwb_v | dep_status_r[1].mul_iwb_v);

      irs2_data_haz1_v[1] = (isd_status1_cast_i.irs2_v & rs2_match_vector1[1])
                           & (isd_status1_cast_i.rs2_addr != '0)
                           & (dep_status_r[1].fmem_iwb_v | dep_status_r[1].mul_iwb_v);

      frs1_data_haz1_v[1] = (isd_status1_cast_i.frs1_v & rs1_match_vector1[1])
                           & (dep_status_r[1].fmem_fwb_v | dep_status_r[1].fma_fwb_v);

      frs2_data_haz1_v[1] = (isd_status1_cast_i.frs2_v & rs2_match_vector1[1])
                           & (dep_status_r[1].fmem_fwb_v | dep_status_r[1].fma_fwb_v);

      frs3_data_haz1_v[1] = (isd_status1_cast_i.frs3_v & rs3_match_vector1[1])
                           & (dep_status_r[1].fmem_fwb_v | dep_status_r[1].fma_fwb_v);

      irs1_data_haz2_v[1] = (isd_status2_cast_i.irs1_v & rs1_match_vector2[1])
                           & (isd_status2_cast_i.rs1_addr != '0)
                           & (dep_status_r[1].fmem_iwb_v | dep_status_r[1].mul_iwb_v);

      irs2_data_haz2_v[1] = (isd_status2_cast_i.irs2_v & rs2_match_vector2[1])
                           & (isd_status2_cast_i.rs2_addr != '0)
                           & (dep_status_r[1].fmem_iwb_v | dep_status_r[1].mul_iwb_v);

      frs1_data_haz2_v[1] = (isd_status2_cast_i.frs1_v & rs1_match_vector2[1])
                           & (dep_status_r[1].fmem_fwb_v | dep_status_r[1].fma_fwb_v);

      frs2_data_haz2_v[1] = (isd_status2_cast_i.frs2_v & rs2_match_vector2[1])
                           & (dep_status_r[1].fmem_fwb_v | dep_status_r[1].fma_fwb_v);

      frs3_data_haz2_v[1] = (isd_status2_cast_i.frs3_v & rs3_match_vector2[1])
                           & (dep_status_r[1].fmem_fwb_v | dep_status_r[1].fma_fwb_v);                     



      irs1_data_haz1_v[2] = '0;
      irs1_data_haz2_v[2] = '0;

      irs2_data_haz1_v[2] = '0;
      irs2_data_haz2_v[2] = '0;

      frs1_data_haz1_v[2] = (isd_status1_cast_i.frs1_v & rs1_match_vector1[2])
                           & (dep_status_r[2].fma_fwb_v);

      frs2_data_haz1_v[2] = (isd_status1_cast_i.frs2_v & rs2_match_vector1[2])
                           & (dep_status_r[2].fma_fwb_v);

      frs3_data_haz1_v[2] = (isd_status1_cast_i.frs3_v & rs3_match_vector1[2])
                           & (dep_status_r[2].fma_fwb_v);
      frs1_data_haz2_v[2] = (isd_status2_cast_i.frs1_v & rs1_match_vector2[2])
                           & (dep_status_r[2].fma_fwb_v);

      frs2_data_haz2_v[2] = (isd_status2_cast_i.frs2_v & rs2_match_vector2[2])
                           & (dep_status_r[2].fma_fwb_v);

      frs3_data_haz2_v[2] = (isd_status2_cast_i.frs3_v & rs3_match_vector2[2])
                           & (dep_status_r[2].fma_fwb_v);


      mem_in_pipe_v      = dep_status_r[0].mem_v | dep_status_r[1].mem_v | dep_status_r[2].mem_v;
      fence_haz1_v        = (isd_status1_cast_i.fence_v & (~credits_empty_i | mem_in_pipe_v | ~mem_ready_i))
                           | (isd_status1_cast_i.mem_v & credits_full_i);
      fence_haz2_v        = (isd_status2_cast_i.fence_v & (~credits_empty_i | mem_in_pipe_v | ~mem_ready_i))
                           | (isd_status2_cast_i.mem_v & credits_full_i);                     
      cmd_haz_v          = cmd_full_i;

      // TODO: Pessimistic, could have a separate fflags r/w_v
      fflags_haz1_v = isd_status1_cast_i.csr_v
                     & ((dep_status_r[0].fflags_w_v)
                        | (dep_status_r[1].fflags_w_v)
                        | (dep_status_r[2].fflags_w_v)
                        | (dep_status_r[3].fflags_w_v)
                        | ~fdiv_ready_i
                        );

      fflags_haz2_v = isd_status2_cast_i.csr_v
                     & ((dep_status_r[0].fflags_w_v)
                        | (dep_status_r[1].fflags_w_v)
                        | (dep_status_r[2].fflags_w_v)
                        | (dep_status_r[3].fflags_w_v)
                        | ~fdiv_ready_i
                        );
      // TODO: This is pessimistic. Could instead flush currently
      //   executing instructions on trap, and only pause on dependency in
      //   EX4, rather than any instruction. Most likely not a huge
      //   performance problem at the moment.
      long_haz1_v = isd_status1_cast_i.long_v
                   & ((dep_status_r[0].instr_v)
                      | (dep_status_r[1].instr_v)
                      | (dep_status_r[2].instr_v)
                      );
      long_haz2_v = isd_status2_cast_i.long_v
                   & ((dep_status_r[0].instr_v)
                      | (dep_status_r[1].instr_v)
                      | (dep_status_r[2].instr_v)
                      );                

      csr_haz1_v     = isd_status1_cast_i.csr_v
                      & ((dep_status_r[0].instr_v)
                         | (dep_status_r[1].instr_v)
                         | (dep_status_r[2].instr_v)
                         );
      csr_haz2_v     = isd_status2_cast_i.csr_v
                      & ((dep_status_r[0].instr_v)
                         | (dep_status_r[1].instr_v)
                         | (dep_status_r[2].instr_v)
                         );                   

      control_haz1_v = fence_haz1_v | csr_haz1_v | fflags_haz1_v | long_haz1_v;
      control_haz2_v = fence_haz2_v | csr_haz2_v | fflags_haz2_v | long_haz2_v;

      // Combine all data hazard information
      // TODO: Parameterize away floating point data hazards without hardware support
      data_haz1_v = (|irs1_data_haz1_v)
                   | (|irs2_data_haz1_v)
                   | (|frs1_data_haz1_v)
                   | (|frs2_data_haz1_v)
                   | (|frs3_data_haz1_v)
                   | (irs1_sb_raw_haz1_v | irs2_sb_raw_haz1_v | ird_sb_waw_haz1_v)
                   | (frs1_sb_raw_haz1_v | frs2_sb_raw_haz1_v | frs3_sb_raw_haz1_v | frd_sb_waw_haz1_v);
      data_haz2_v = (|irs1_data_haz2_v)
                   | (|irs2_data_haz2_v)
                   | (|frs1_data_haz2_v)
                   | (|frs2_data_haz2_v)
                   | (|frs3_data_haz2_v)
                   | (irs1_sb_raw_haz2_v | irs2_sb_raw_haz2_v | ird_sb_waw_haz2_v)
                   | (frs1_sb_raw_haz2_v | frs2_sb_raw_haz2_v | frs3_sb_raw_haz2_v | frd_sb_waw_haz2_v);             

      // Combine all structural hazard information
      struct_haz1_v = ptw_busy_i
                     | cmd_haz_v
                     | (~mem_ready_i & isd_status1_cast_i.mem_v)
                     | (~fdiv_ready_i & isd_status1_cast_i.long_v)
                     | (~idiv_ready_i & isd_status1_cast_i.long_v);
      struct_haz2_v = ptw_busy_i
                     | cmd_haz_v
                     | (~mem_ready_i & isd_status2_cast_i.mem_v)
                     | (~fdiv_ready_i & isd_status2_cast_i.long_v)
                     | (~idiv_ready_i & isd_status2_cast_i.long_v);

    end

  // Generate calculator control signals
  //make sure these dispatches properly affect the issue queue so that if dispatch2 isn't sent
  //we only increment read by 1 instead of by 2
  assign dispatch_v1_o  = ~(control_haz1_v | data_haz1_v | struct_haz1_v);
  assign dispatch_v2_o  = ~(control_haz2_v | data_haz2_v | struct_haz2_v);
  assign interrupt_v_o = irq_pending_i & ~ptw_busy_i;

//dep_status needs to be updated here as well to include both instr if we send them out

  bp_be_dep_status_s dep_status_n;
  always_comb
    begin
      dep_status_n.instr_v    = dispatch_pkt_cast_i.v || dispatch_pkt2_cast_i.v;
      dep_status_n.mem_v      = dispatch_pkt_cast_i.decode.mem_v || dispatch_pkt2_cast_i.decode.mem_v;
      dep_status_n.csr_v      = (dispatch_pkt_cast_i.decode.csr_w_v | dispatch_pkt_cast_i.decode.csr_r_v) || (dispatch_pkt2_cast_i.decode.csr_w_v | dispatch_pkt2_cast_i.decode.csr_r_v);
      dep_status_n.fflags_w_v = dispatch_pkt_cast_i.decode.fflags_w_v || dispatch_pkt2_cast_i.decode.fflags_w_v;
      dep_status_n.ctl_iwb_v  = (dispatch_pkt_cast_i.decode.pipe_ctl_v & dispatch_pkt_cast_i.decode.irf_w_v)
                                || (dispatch_pkt2_cast_i.decode.pipe_ctl_v & dispatch_pkt2_cast_i.decode.irf_w_v);
      dep_status_n.int_iwb_v  = (dispatch_pkt_cast_i.decode.pipe_int_v & dispatch_pkt_cast_i.decode.irf_w_v)
                                || (dispatch_pkt2_cast_i.decode.pipe_int_v & dispatch_pkt2_cast_i.decode.irf_w_v);
      dep_status_n.int_fwb_v  = (dispatch_pkt_cast_i.decode.pipe_int_v & dispatch_pkt_cast_i.decode.frf_w_v)
                                || (dispatch_pkt2_cast_i.decode.pipe_int_v & dispatch_pkt2_cast_i.decode.frf_w_v);
      dep_status_n.aux_iwb_v  = (dispatch_pkt_cast_i.decode.pipe_aux_v & dispatch_pkt_cast_i.decode.irf_w_v)
                                ||(dispatch_pkt2_cast_i.decode.pipe_aux_v & dispatch_pkt2_cast_i.decode.irf_w_v);
      dep_status_n.aux_fwb_v  = (dispatch_pkt_cast_i.decode.pipe_aux_v & dispatch_pkt_cast_i.decode.frf_w_v) 
                                || (dispatch_pkt2_cast_i.decode.pipe_aux_v & dispatch_pkt2_cast_i.decode.frf_w_v);
      dep_status_n.emem_iwb_v = (dispatch_pkt_cast_i.decode.pipe_mem_early_v & dispatch_pkt_cast_i.decode.irf_w_v)
                                ||(dispatch_pkt2_cast_i.decode.pipe_mem_early_v & dispatch_pkt2_cast_i.decode.irf_w_v);
      dep_status_n.emem_fwb_v = (dispatch_pkt_cast_i.decode.pipe_mem_early_v & dispatch_pkt_cast_i.decode.frf_w_v)
                                ||(dispatch_pkt2_cast_i.decode.pipe_mem_early_v & dispatch_pkt2_cast_i.decode.frf_w_v);
      dep_status_n.fmem_iwb_v = (dispatch_pkt_cast_i.decode.pipe_mem_final_v & dispatch_pkt_cast_i.decode.irf_w_v)
                                ||(dispatch_pkt2_cast_i.decode.pipe_mem_final_v & dispatch_pkt2_cast_i.decode.irf_w_v);
      dep_status_n.fmem_fwb_v = (dispatch_pkt_cast_i.decode.pipe_mem_final_v & dispatch_pkt_cast_i.decode.frf_w_v)
                                ((dispatch_pkt2_cast_i.decode.pipe_mem_final_v & dispatch_pkt2_cast_i.decode.frf_w_v));
      dep_status_n.mul_iwb_v  = (dispatch_pkt_cast_i.decode.pipe_mul_v & dispatch_pkt_cast_i.decode.irf_w_v)
                                ||(dispatch_pkt2_cast_i.decode.pipe_mul_v & dispatch_pkt2_cast_i.decode.irf_w_v);
      dep_status_n.fma_fwb_v  = (dispatch_pkt_cast_i.decode.pipe_fma_v & dispatch_pkt_cast_i.decode.frf_w_v)
                                ||(dispatch_pkt2_cast_i.decode.pipe_fma_v & dispatch_pkt2_cast_i.decode.frf_w_v);
      dep_status_n.rd_addr    = dispatch_pkt_cast_i.instr.t.rtype.rd_addr;
    end

  always_ff @(posedge clk_i)
    begin
      dep_status_r[0]   <= dispatch_pkt_cast_i.v ? dep_status_n : '0;
      dep_status_r[3:1] <= dep_status_r[2:0];
    end

endmodule
