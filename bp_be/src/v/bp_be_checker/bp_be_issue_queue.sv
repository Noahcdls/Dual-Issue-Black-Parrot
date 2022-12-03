/* 
 * Modifications: 
 *   1. doubled inputs: fe_queue_i, fe_queue_v_i, fe_queue_yumi_i, deq_v_i, roll_v_i
 *   2. doubled outputs: fe_queue_o, fe_queue_v_o, preissue_pkt_o, issue_pkt_o
 *   3. To be determined ports:  clr_v_i
 *   4. Changed module: reg_fifo_mem -> 2r2w
 *   5. Checkpoint ptr jmp step doubled
 *   6. instr type conflict should be solved in calculator
 *   7. deq
 */

`include "bp_common_defines.svh"
`include "bp_be_defines.svh"

module bp_be_issue_queue
 import bp_common_pkg::*;
 import bp_be_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)
   `declare_bp_core_if_widths(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p)

   , localparam issue_pkt_width_lp = `bp_be_issue_pkt_width(vaddr_width_p, branch_metadata_fwd_width_p)
   , localparam ptr_width_lp = `BSG_SAFE_CLOG2(fe_queue_fifo_els_p)
   )
  (input                                    clk_i
   , input                                  reset_i

   , input                                  clr_v_i // from director
   , input                                  deq_v1_i, deq_v2_i // from commit_pkt
   , input                                  roll_v1_i, roll_v2_i // from commit_pkt

   , input [fe_queue_width_lp-1:0]          fe_queue1_i, fe_queue2_i
   , input                                  fe_queue_v1_i, fe_queue_v2_i
   , output logic                           fe_queue_ready_o

   , output logic [fe_queue_width_lp-1:0]   fe_queue1_o, fe_queue2_o
   , output logic                           fe_queue_v1_o, fe_queue_v2_o
   , input                                  fe_queue_yumi1_i, fe_queue_yumi2_i

   , output logic [issue_pkt_width_lp-1:0]  preissue_pkt1_o, preissue_pkt2_o
   , output logic [issue_pkt_width_lp-1:0]  issue_pkt1_o, issue_pkt2_o
   );

  `declare_bp_core_if(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);
  `declare_bp_be_internal_if_structs(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);

  `bp_cast_i(bp_fe_queue_s, fe_queue1);
  `bp_cast_i(bp_fe_queue_s, fe_queue2);
  `bp_cast_o(bp_fe_queue_s, fe_queue1);
  `bp_cast_o(bp_fe_queue_s, fe_queue2);


  // One read pointer, one write pointer, one checkpoint pointer
  // ptr_width + 1 for wrap bit
  logic [ptr_width_lp:0] wptr_n, rptr_n, cptr_n;
  logic [ptr_width_lp:0] wptr_r, rptr_r, cptr_r;
  
  logic [ptr_width_lp:0] wptr1_n, rptr1_n, wptr2_n, rptr2_n;
  logic [ptr_width_lp:0] wptr1_r, rptr1_r, wptr2_r, rptr2_r;

  // Used to catch up on roll and clear
  logic [ptr_width_lp:0] wptr_jmp, rptr_jmp;
  logic [1:0] cptr_jmp; //extra bit added

  // Operations
  // enq doubled
  wire enq1  = fe_queue_ready_o & fe_queue_v1_i;
  wire enq2  = fe_queue_ready_o & fe_queue_v2_i;
  wire enq = enq1 | enq2;

  wire deq1  = deq_v1_i; // = commit_pkt_cast_i.queue_v;
  wire deq2  = deq_v2_i;
  wire deq = deq1 | deq2;

  wire read = fe_queue_yumi1_i | fe_queue_yumi2_i;
  wire clr  = clr_v_i; // = suppress_iss_i = (state_r != e_run)
  wire roll1 = roll_v1_i; // = commit_pkt_cast_i.npc_w_v;
  wire roll2 = roll_v2_i;
  wire roll = roll1 | roll2;

  assign rptr_jmp = roll // = commit_pkt_cast_i.npc_w_v
                    ? (cptr_r - rptr_r + ((ptr_width_lp+1)'(deq) << 1))//if not pc, to the next line of cptr
                    : read // read new instr 
                       ? ((ptr_width_lp+1)'(2))
                       : ((ptr_width_lp+1)'(0));
  assign wptr_jmp = clr
                    ? (rptr_r - wptr_r + ((ptr_width_lp+1)'(read) << 1))//if clr, to the next line of rptr
                    : enq // new instr inserted
                       ? ((ptr_width_lp+1)'(2))
                       : ((ptr_width_lp+1)'(0));
  
  assign cptr_jmp = {deq, 1'b0}; //

  // reassign pointers
  assign wptr1_n = wptr_n;
  assign wptr2_n = wptr_n + (ptr_width_lp)'(1); // should be fine since slot_p=2*fe_queue_fifo_els_p
  assign wptr1_r = wptr_r;
  assign wptr2_r = wptr_r + (ptr_width_lp)'(1);

  assign rptr1_n = roll1
                   ?  rptr_n
                   : roll2
                      ? rptr_r + (read? )
                      : ();
  assign rptr2_n = rptr_n + (ptr_width_lp)'(1); // should be fine since slot_p=2*fe_queue_fifo_els_p
  assign rptr1_r = rptr_r;
  assign rptr2_r = rptr_r + (ptr_width_lp)'(1);

  wire empty = (rptr_r[0+:ptr_width_lp] == wptr_r[0+:ptr_width_lp])
               & (rptr_r[ptr_width_lp] == wptr_r[ptr_width_lp]);
  wire empty_n = (rptr_n[0+:ptr_width_lp] == wptr_n[0+:ptr_width_lp])
                 & (rptr_n[ptr_width_lp] == wptr_n[ptr_width_lp]);
  wire full  = (cptr_r[0+:ptr_width_lp] - (ptr_width_lp)'(1) == wptr_r[0+:ptr_width_lp])
               & (cptr_r[ptr_width_lp] != wptr_r[ptr_width_lp]);
  wire full_n = (cptr_n[0+:ptr_width_lp] - (ptr_width_lp)'(1) == wptr_n[0+:ptr_width_lp])
                & (cptr_n[ptr_width_lp] != wptr_n[ptr_width_lp]);


  bsg_circular_ptr
   #(.slots_p(2*fe_queue_fifo_els_p), .max_add_p(2))
   cptr
    (.clk(clk_i)
     ,.reset_i(reset_i)
     ,.add_i(cptr_jmp)
     ,.o(cptr_r)
     ,.n_o(cptr_n)
     );

  bsg_circular_ptr
   #(.slots_p(2*fe_queue_fifo_els_p),.max_add_p(2*fe_queue_fifo_els_p-1))
   wptr
    (.clk(clk_i)
     ,.reset_i(reset_i)
     ,.add_i(wptr_jmp)
     ,.o(wptr_r)
     ,.n_o(wptr_n)
     );


  // bp_be_autowrap_ptr
  //  #(.slots_p(2*fe_queue_fifo_els_p),.max_add_p(2*fe_queue_fifo_els_p-1))
  //  wptr
  //   (.clk(clk_i)
  //    ,.reset_i(reset_i)
  //    ,.add_i(wptr_jmp)
  //    ,.p_i(wptr_r)
  //    ,.n_o(wptr_n)
  //    );
  
  // always_ff @(posedge clk)
  //   if (reset_i) wptr_r <= 0;
  //   else       wptr_r <= wptr_n;

  
  bsg_circular_ptr
  #(.slots_p(2*fe_queue_fifo_els_p), .max_add_p(2*fe_queue_fifo_els_p-1))
  rptr
   (.clk(clk_i)
    ,.reset_i(reset_i)
    ,.add_i(rptr_jmp)
    ,.o(rptr_r)
    ,.n_o(rptr_n)
    );
  
  
  // bp_be_autowrap_ptr
  //  #(.slots_p(2*fe_queue_fifo_els_p),.max_add_p(2*fe_queue_fifo_els_p-1))
  // rptr
  //  (.clk(clk_i)
  //   ,.reset_i(reset_i)
  //   ,.add_i(rptr_jmp)
  //   ,.p_i(rptr_r)
  //   ,.n_o(rptr_n)
  //   );

  // always_ff @(posedge clk)
  //   if (reset_i) rptr_r <= 0;
  //   else       rptr_r <= rptr_n;

  /*
  bsg_mem_1r1w
  #(.width_p(fe_queue_width_lp), .els_p(fe_queue_fifo_els_p))
  queue_fifo_mem
   (.w_clk_i(clk_i)
    ,.w_reset_i(reset_i)
    ,.w_v_i(enq)
    ,.w_addr_i(wptr_r[0+:ptr_width_lp])
    ,.w_data_i(fe_queue_cast_i)
    ,.r_v_i(read & ~empty)
    ,.r_addr_i(rptr_r[0+:ptr_width_lp])
    ,.r_data_o(fe_queue_cast_o)
    );
  */

  
  // 2r2w queue_fifo_mem
  bsg_mem_multiport
  #(.width_p($bits(bp_be_issue_pkt_s)), 
    .els_p(fe_queue_fifo_els_p), 
    .read_ports_p(2), 
    .write_ports_p(2))
  queue_fifo_mem
   (.w_clk_i(clk_i)
    ,.w_reset_i(reset_i)

    ,.w_v_i({enq1,enq2})
    ,.w_addr_i({wptr1_r[0+:ptr_width_lp],wptr2_r[0+:ptr_width_lp]})
    ,.w_data_i({fe_queue1_cast_i,fe_queue2_cast_i})

    ,.r_v_i({(read & ~empty),(read & ~empty)})
    ,.r_addr_i({rptr1_r[0+:ptr_width_lp],rptr2_r[0+:ptr_width_lp]})
    ,.r_data_o({fe_queue1_cast_o,fe_queue2_cast_o})

    );


  assign fe_queue_v1_o     = ~roll1 & ~empty;
  assign fe_queue_v2_o     = ~roll2 & ~empty;
  assign fe_queue_ready_o = ~clr & ~full;

  rv64_instr_fmatype_s instr1, instr2;
  assign instr1 = fe_queue1_cast_i.msg.fetch.instr;
  assign instr2 = fe_queue2_cast_i.msg.fetch.instr;

  bp_be_issue_pkt_s issue_pkt1_li, issue_pkt1_lo, issue_pkt2_li, issue_pkt2_lo;
  wire issue_v1 = (fe_queue_yumi1_i & ~empty_n) | roll_v_i | (fe_queue_v1_i & empty);
  wire issue_v2 = (fe_queue_yumi2_i & ~empty_n) | roll_v_i | (fe_queue_v2_i & empty);
  wire bypass_reg1 = (wptr1_r == rptr1_n);
  wire bypass_reg2 = (wptr2_r == rptr2_n);
  
  /*
  bsg_mem_1r1w
  #(.width_p($bits(bp_be_issue_pkt_s)), .els_p(fe_queue_fifo_els_p), .read_write_same_addr_p(1))
  reg_fifo_mem
   (.w_clk_i(clk_i)
    ,.w_reset_i(reset_i)
    ,.w_v_i(enq)
    ,.w_addr_i(wptr_r[0+:ptr_width_lp])
    ,.w_data_i(issue_pkt_li)
    ,.r_v_i(issue_v)
    ,.r_addr_i(rptr_n[0+:ptr_width_lp])
    ,.r_data_o(issue_pkt_lo)
    );
  */
  

  // 2r2w reg_fifo_mem
  bsg_mem_multiport
  #(.width_p($bits(bp_be_issue_pkt_s)), 
    .els_p(fe_queue_fifo_els_p), 
    .read_write_same_addr_p(1), 
    .write_write_same_addr_p(1), 
    .read_ports_p(2), 
    .write_ports_p(2))
  reg_fifo_mem
   (.w_clk_i(clk_i)
    ,.w_reset_i(reset_i)

    ,.w_v_i({enq1,enq2})
    ,.w_addr_i({wptr1_r[0+:ptr_width_lp],wptr2_r[0+:ptr_width_lp]})
    ,.w_data_i({issue_pkt1_li,issue_pkt2_li})

    ,.r_v_i({issue_v1,issue_v2})
    ,.r_addr_i({rptr1_n[0+:ptr_width_lp],rptr2_n[0+:ptr_width_lp]})
    ,.r_data_o({issue_pkt1_lo,issue_pkt2_lo})

    );


  assign preissue_pkt1_o = bypass_reg1 ? issue_pkt1_li : issue_v1 ? issue_pkt1_lo : '0;
  assign preissue_pkt2_o = bypass_reg2 ? issue_pkt2_li : issue_v2 ? issue_pkt2_lo : '0;

  bsg_dff_reset_en
   #(.width_p(2*$bits(bp_be_issue_pkt_s)))
   issue_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.en_i(issue_v1 | issue_v2)
     ,.data_i({preissue_pkt1_o,preissue_pkt2_o})
     ,.data_o({issue_pkt1_o,issue_pkt2_o})
     );

  

  always_comb
    begin
      issue_pkt1_li = '0;

      // Pre-decode 1
      issue_pkt1_li.csr_v = instr1.opcode inside {`RV64_SYSTEM_OP};
      issue_pkt1_li.mem_v = instr1.opcode inside {`RV64_FLOAD_OP, `RV64_FSTORE_OP
                                                ,`RV64_LOAD_OP, `RV64_STORE_OP
                                                ,`RV64_AMO_OP, `RV64_SYSTEM_OP
                                                };
      issue_pkt1_li.fence_v = instr1 inside {`RV64_FENCE, `RV64_FENCE_I, `RV64_SFENCE_VMA};
      issue_pkt1_li.long_v = instr1 inside {`RV64_DIV, `RV64_DIVU, `RV64_DIVW, `RV64_DIVUW
                                          ,`RV64_REM, `RV64_REMU, `RV64_REMW, `RV64_REMUW
                                          ,`RV64_FDIV_S, `RV64_FDIV_D, `RV64_FSQRT_S, `RV64_FSQRT_D
                                          };

      issue_pkt1_li = '0;

      // Pre-decode 2
      issue_pkt2_li.csr_v = instr2.opcode inside {`RV64_SYSTEM_OP};
      issue_pkt2_li.mem_v = instr2.opcode inside {`RV64_FLOAD_OP, `RV64_FSTORE_OP
                                                ,`RV64_LOAD_OP, `RV64_STORE_OP
                                                ,`RV64_AMO_OP, `RV64_SYSTEM_OP
                                                };
      issue_pkt2_li.fence_v = instr2 inside {`RV64_FENCE, `RV64_FENCE_I, `RV64_SFENCE_VMA};
      issue_pkt2_li.long_v = instr2 inside {`RV64_DIV, `RV64_DIVU, `RV64_DIVW, `RV64_DIVUW
                                          ,`RV64_REM, `RV64_REMU, `RV64_REMW, `RV64_REMUW
                                          ,`RV64_FDIV_S, `RV64_FDIV_D, `RV64_FSQRT_S, `RV64_FSQRT_D
                                          };

      // Decide whether to read from integer regfile (saves power)
      casez (instr1.opcode)
        `RV64_JALR_OP, `RV64_LOAD_OP, `RV64_OP_IMM_OP, `RV64_OP_IMM_32_OP, `RV64_SYSTEM_OP :
          begin
            issue_pkt1_li.irs1_v = '1;
          end
        `RV64_BRANCH_OP, `RV64_STORE_OP, `RV64_OP_OP, `RV64_OP_32_OP, `RV64_AMO_OP:
          begin
            issue_pkt1_li.irs1_v = '1;
            issue_pkt1_li.irs2_v = '1;
          end
        `RV64_FLOAD_OP:
          begin
            issue_pkt1_li.irs1_v = 1'b1;
          end
        `RV64_FSTORE_OP:
          begin
            issue_pkt1_li.irs1_v = 1'b1;
            issue_pkt1_li.frs2_v = 1'b1;
          end
        `RV64_FP_OP:
          casez (instr1)
            `RV64_FCVT_WS, `RV64_FCVT_WUS, `RV64_FCVT_LS, `RV64_FCVT_LUS
            ,`RV64_FCVT_WD, `RV64_FCVT_WUD, `RV64_FCVT_LD, `RV64_FCVT_LUD
            ,`RV64_FCVT_SD, `RV64_FCVT_DS
            ,`RV64_FMV_XW, `RV64_FMV_XD
            ,`RV64_FCLASS_S, `RV64_FCLASS_D:
              begin
                issue_pkt1_li.frs1_v = 1'b1;
              end
            `RV64_FCVT_SW, `RV64_FCVT_SWU, `RV64_FCVT_SL, `RV64_FCVT_SLU
            ,`RV64_FCVT_DW, `RV64_FCVT_DWU, `RV64_FCVT_DL, `RV64_FCVT_DLU
            ,`RV64_FMV_WX, `RV64_FMV_DX:
              begin
                issue_pkt1_li.irs1_v = 1'b1;
              end
            default:
              begin
                issue_pkt1_li.frs1_v = 1'b1;
                issue_pkt1_li.frs2_v = 1'b1;
              end
          endcase
        `RV64_FMADD_OP, `RV64_FMSUB_OP, `RV64_FNMSUB_OP, `RV64_FNMADD_OP:
          begin
            issue_pkt1_li.frs1_v = 1'b1;
            issue_pkt1_li.frs2_v = 1'b1;
            issue_pkt1_li.frs3_v = 1'b1;
          end
        default: begin end
      endcase

      casez (instr2.opcode)
        `RV64_JALR_OP, `RV64_LOAD_OP, `RV64_OP_IMM_OP, `RV64_OP_IMM_32_OP, `RV64_SYSTEM_OP :
          begin
            issue_pkt2_li.irs1_v = '1;
          end
        `RV64_BRANCH_OP, `RV64_STORE_OP, `RV64_OP_OP, `RV64_OP_32_OP, `RV64_AMO_OP:
          begin
            issue_pkt2_li.irs1_v = '1;
            issue_pkt2_li.irs2_v = '1;
          end
        `RV64_FLOAD_OP:
          begin
            issue_pkt2_li.irs1_v = 1'b1;
          end
        `RV64_FSTORE_OP:
          begin
            issue_pkt2_li.irs1_v = 1'b1;
            issue_pkt2_li.frs2_v = 1'b1;
          end
        `RV64_FP_OP:
          casez (instr2)
            `RV64_FCVT_WS, `RV64_FCVT_WUS, `RV64_FCVT_LS, `RV64_FCVT_LUS
            ,`RV64_FCVT_WD, `RV64_FCVT_WUD, `RV64_FCVT_LD, `RV64_FCVT_LUD
            ,`RV64_FCVT_SD, `RV64_FCVT_DS
            ,`RV64_FMV_XW, `RV64_FMV_XD
            ,`RV64_FCLASS_S, `RV64_FCLASS_D:
              begin
                issue_pkt2_li.frs1_v = 1'b1;
              end
            `RV64_FCVT_SW, `RV64_FCVT_SWU, `RV64_FCVT_SL, `RV64_FCVT_SLU
            ,`RV64_FCVT_DW, `RV64_FCVT_DWU, `RV64_FCVT_DL, `RV64_FCVT_DLU
            ,`RV64_FMV_WX, `RV64_FMV_DX:
              begin
                issue_pkt2_li.irs1_v = 1'b1;
              end
            default:
              begin
                issue_pkt2_li.frs1_v = 1'b1;
                issue_pkt2_li.frs2_v = 1'b1;
              end
          endcase
        `RV64_FMADD_OP, `RV64_FMSUB_OP, `RV64_FNMSUB_OP, `RV64_FNMADD_OP:
          begin
            issue_pkt2_li.frs1_v = 1'b1;
            issue_pkt2_li.frs2_v = 1'b1;
            issue_pkt2_li.frs3_v = 1'b1;
          end
        default: begin end
      endcase

      issue_pkt1_li.rs1_addr = instr1.rs1_addr;
      issue_pkt1_li.rs2_addr = instr1.rs2_addr;
      issue_pkt1_li.rs3_addr = instr1.rs3_addr;

      issue_pkt2_li.rs1_addr = instr2.rs1_addr;
      issue_pkt2_li.rs2_addr = instr2.rs2_addr;
      issue_pkt2_li.rs3_addr = instr2.rs3_addr;
    end
endmodule