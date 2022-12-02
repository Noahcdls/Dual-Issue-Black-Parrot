
`include "bp_common_defines.svh"
`include "bp_be_defines.svh"

module bp_be_scoreboard_di
 import bp_common_pkg::*;
 import bp_be_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)

   , parameter `BSG_INV_PARAM(num_rs_p)
   )
  (input                                         clk_i
   , input                                       reset_i

   , input                                       score_v_i, score_v_i2
   , input [reg_addr_width_gp-1:0]               score_rd_i, score_rd_i2

   , input                                       clear_v_i, clear_v_i2
   , input [reg_addr_width_gp-1:0]               clear_rd_i, clear_rd_i2

   , input [num_rs_p-1:0][reg_addr_width_gp-1:0] rs_i1
   , input [num_rs_p-1:0][reg_addr_width_gp-1:0] rs_i2
   , input               [reg_addr_width_gp-1:0] rd_i, rd_i2

   , output logic [num_rs_p-1:0]                 rs_match_o1, rs_match_o2
   , output logic                                rd_match_o1, rd_match_o2
   );

  localparam rf_els_lp = 2**reg_addr_width_gp;
  logic [rf_els_lp-1:0] scoreboard_r;
  //score rd set to be rd addr from cache miss commit or dispatch
  logic [rf_els_lp-1:0] score_onehot_li, score_onehot_li2;
  bsg_decode_with_v
   #(.num_out_p(rf_els_lp))
   score_decode
    (.i(score_rd_i)
     ,.v_i(score_v_i)
     ,.o(score_onehot_li)
     );
  logic [rf_els_lp-1:0] score_onehot_li;
  bsg_decode_with_v
   #(.num_out_p(rf_els_lp))
   score_decode2
    (.i(score_rd_i2)
     ,.v_i(score_v_i2)
     ,.o(score_onehot_li2)
     );   
//clear off the shelf if rd is done
  logic [rf_els_lp-1:0] clear_onehot_li;
  bsg_decode_with_v
   #(.num_out_p(rf_els_lp))
   clear_decode
    (.i(clear_rd_i)
     ,.v_i(clear_v_i)
     ,.o(clear_onehot_li)
     );
  logic [rf_els_lp-1:0] clear_onehot_li2;
  bsg_decode_with_v2
   #(.num_out_p(rf_els_lp))
   clear_decode
    (.i(clear_rd_i2)
     ,.v_i(clear_v_i2)
     ,.o(clear_onehot_li2)
     );
//set and clear, set has higher priority
//update rd addresses in the scoreboard
  bsg_dff_reset_set_clear
   #(.width_p(rf_els_lp))
   scoreboard_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.set_i(score_onehot_li | score_onehot_li2)
     ,.clear_i(clear_onehot_li | clear_onehot_li2)
     ,.data_o(scoreboard_r)
     );
//match rs with scoreboard rd and match rds
  for (genvar i = 0; i < num_rs_p; i++)
    begin : rs
      //flag first instr matches for inflight rd
      assign rs_match_o1[i] = scoreboard_r[rs_i1[i]];
      //same as first instr but now includes rd_i1 from first
      assign rs_match_o2[i] = scoreboard_r[rs_i2[i]] || (rs_i2[i] == rd_i1);
    end
  //match rd  
  assign rd_match_o1 = scoreboard_r[rd_i1];
  assign rd_match_o2 = scoreboard_r[rd_i2] || rd_i2 == rd_i1;


endmodule

`BSG_ABSTRACT_MODULE(bp_be_scoreboard)

