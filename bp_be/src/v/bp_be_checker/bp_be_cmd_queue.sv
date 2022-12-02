
`include "bp_common_defines.svh"
`include "bp_be_defines.svh"

module bp_be_cmd_queue
 import bp_common_pkg::*;
 import bp_be_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)
   `declare_bp_core_if_widths(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p)
   , localparam ptr_width_lp = `BSG_SAFE_CLOG2(fe_cmd_fifo_els_p)
   )
  (input                                clk_i
   , input                              reset_i

   , input [fe_cmd_width_lp-1:0]        fe_cmd_i, fe_cmd_i2
   , input                              fe_cmd_v_i, fe_cmd_v_i2
   , output logic                       fe_cmd_ready_o, fe_cmd_ready_o2

   , output logic [fe_cmd_width_lp-1:0] fe_cmd_o
   , output logic                       fe_cmd_v_o
   , input                              fe_cmd_yumi_i

   , output logic                       empty_n_o
   , output logic                       empty_r_o
   , output logic                       full_n_o
   , output logic                       full_r_o
   );

  `declare_bp_core_if(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);

  wire [1:0] enq = {1'b0, (fe_cmd_ready_o & fe_cmd_v_i)} + {1'b0, (fe_cmd_ready_o2 & fe_cmd_v_i2)} ;
  wire enq1 = (fe_cmd_ready_o & fe_cmd_v_i);
  wire enq2 = (fe_cmd_ready_o2 & fe_cmd_v_i2)
  wire deq = fe_cmd_yumi_i;

  logic [ptr_width_lp-1:0] wptr_r, rptr_n, rptr_r;
  logic full_lo, empty_lo;
  //have to replace the fifo tracker as it only can do one element writes
  // bsg_fifo_tracker
  //  #(.els_p(fe_cmd_fifo_els_p))
  //  ft
  //   (.clk_i(clk_i)
  //    ,.reset_i(reset_i)

  //    ,.enq_i(enq)
  //    ,.deq_i(deq)
  //    ,.wptr_r_o(wptr_r)
  //    ,.rptr_r_o(rptr_r)
  //    ,.rptr_n_o(rptr_n)
  //    ,.full_o(full_lo)
  //    ,.empty_o(empty_lo)
  //    );

  bsg_circular_ptr
    #(.slots_p(fe_cmd_fifo_els_p),.max_add_p(2))
    rptr_tracker
    (.clk_i(clk_i)
    ,.reset_i(reset_i)
    ,.addi_(deq)
    ,.o(rptr_r)
    ,.n_o(rptr_n)
    );
  bsg_circular_ptr
    #(.slots_p(fe_cmd_fifo_els_p),.max_add_p(2))
    wptr_tracker
    (.clk_i(clk_i)
    ,.reset_i(reset_i)
    ,.addi_(enq)
    ,.o(wptr_r)
    ,.n_o()
    );
  wire [1:0] enq_r, enq_i;
  wire deq_r, deq_i;
  always_ff @(posedge clk_i)
    if (reset_i)
      begin
        enq_r <= 2'b00;
        deq_r <= 1'b1;
      end
    else
      begin
        // update "last operation" when
        // either enque or dequing
        if (enq_i || deq_i)
          begin
             enq_r <= enq_i;
             deq_r <= deq_i;
          end
      end // else: !if(reset_i)
  wire equal_ptrs = (rptr_r == wptr_r);
  assign empty_lo = equal_ptrs & deq_r;
  assign full_lo = equal_ptrs & enq_r;

  // bsg_mem_1r1w
  //  #(.width_p($bits(bp_fe_cmd_s)), .els_p(fe_cmd_fifo_els_p))
  //  fifo_mem
  //   (.w_clk_i(clk_i)
  //    ,.w_reset_i(reset_i)
  //    ,.w_v_i(enq)
  //    ,.w_addr_i(wptr_r)
  //    ,.w_data_i(fe_cmd_i)
  //    ,.r_v_i(fe_cmd_v_o)
  //    ,.r_addr_i(rptr_r)
  //    ,.r_data_o(fe_cmd_o)
  //    );
  bsg_mem_multiport
   #(.width_p($bits(bp_fe_cmd_s)), .els_p(fe_cmd_fifo_els_p), .read_ports_p(1), .write_ports_p(2))
   fifo_mem
    (.w_clk_i(clk_i)
     ,.w_reset_i(reset_i)
     ,.w_v_i({enq1, enq2})
     ,.w_addr_i({wptr_r, wptr_r+1})
     ,.w_data_i({fe_cmd_i, fe_cmd_i2})
     ,.r_v_i(fe_cmd_v_o)
     ,.r_addr_i(rptr_r)
     ,.r_data_o(fe_cmd_o)
     );

  assign fe_cmd_ready_o = ~almost_full;
  assign fe_cmd_ready_o2 = ~almost_full;
  assign fe_cmd_v_o     = ~empty_lo;
  
  wire almost_full = (rptr_r == wptr_r+1'b1) | (rptr_r == wptr_r+2);
  wire almost_empty = (rptr_r == wptr_r-1'b1);

  assign empty_r_o = empty_lo;
  assign empty_n_o = almost_empty & deq & (enq == 0);
  assign full_r_o  = full_lo;
  assign full_n_o  = almost_full & (enq != 0) & ~deq;

endmodule

