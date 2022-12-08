/*
 * bp_fe_pc_gen.v
 *
 * pc_gen provides the pc for the itlb and icache.
 * pc_gen also provides the BTB, BHT and RAS indexes for the backend (the queue
 * between the frontend and the backend, i.e. the frontend queue).
*/

//NOTE yumi is kind of like an ack to say the system is running and not stalled

`include "bp_common_defines.svh"
`include "bp_fe_defines.svh"

module bp_fe_pc_gen
 import bp_common_pkg::*;
 import bp_fe_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)
   `declare_bp_core_if_widths(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p)
   )
  (input                                             clk_i
   , input                                           reset_i

   , output logic                                    init_done_o
//branch redirection given bad prediction
//redirect comes from resume PC
   , input                                           redirect_v_i
   , input [vaddr_width_p-1:0]                       redirect_pc_i
   , input                                           redirect_br_v_i
   , input [branch_metadata_fwd_width_p-1:0]         redirect_br_metadata_fwd_i
   , input                                           redirect_br_taken_i
   , input                                           redirect_br_ntaken_i
   , input                                           redirect_br_nonbr_i

//output new pc values if yumi
   , output logic [vaddr_width_p-1:0]                next_pc_o1, next_pc_o2
   , input                                           next_pc_yumi_i

   , output logic                                    ovr_o
//fetch instruction from cache. Need two
   , input [instr_width_gp-1:0]                      fetch_i1, fetch_i2
//valid fetch signal to see if they missed
   , input                                           fetch_instr_v_i1, fetch_instr_v_i2
//exception on fetch
   , input                                           fetch_exception_v_i1, fetch_exception_v_i2
//branch metadata for the fetched instruction
   , output logic [branch_metadata_fwd_width_p-1:0]  fetch_br_metadata_fwd_o
//fetch pc out
   , output logic [vaddr_width_p-1:0]                fetch_pc_o1, fetch_pc_o2
//attaboy if is a branch was correctly taken
//contains address for next instruction after branch

//also valid->yumi I dont know why but thats the convention
   , input [vaddr_width_p-1:0]                       attaboy_pc_i
   , input [branch_metadata_fwd_width_p-1:0]         attaboy_br_metadata_fwd_i
   , input                                           attaboy_taken_i
   , input                                           attaboy_ntaken_i
   , input                                           attaboy_v_i
   , output logic                                    attaboy_yumi_o
   );

  `declare_bp_core_if(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);
  `declare_bp_fe_branch_metadata_fwd_s(btb_tag_width_p, btb_idx_width_p, bht_idx_width_p, ghist_width_p, bht_row_width_p);
  `declare_bp_fe_pc_gen_stage_s(vaddr_width_p, ghist_width_p, bht_row_width_p);

//bad and good branch metadata
  bp_fe_branch_metadata_fwd_s redirect_br_metadata_fwd;
  assign redirect_br_metadata_fwd = redirect_br_metadata_fwd_i;
  bp_fe_branch_metadata_fwd_s attaboy_br_metadata_fwd;
  assign attaboy_br_metadata_fwd = attaboy_br_metadata_fwd_i;

//global history
  logic [ghist_width_p-1:0] ghistory_n, ghistory_r;

//instruction fetch stages 1 and 2
  logic [vaddr_width_p-1:0] pc_if1_n1, pc_if1_r1, pc_if1_n2, pc_if1_r2;
  logic [vaddr_width_p-1:0] pc_if2_n1, pc_if2_r1, pc_if2_n2, pc_if2_r2;

  /////////////////
  // IF1
  /////////////////

  //prediction data
  bp_fe_pred_s pred_if1_n1, pred_if1_r1;
  bp_fe_pred_s pred_if1_n2, pred_if1_r2;
  logic ovr_ret, ovr_taken, btb_taken;
  logic [vaddr_width_p-1:0] btb_br_tgt_lo;
  logic [vaddr_width_p-1:0] ras_tgt_lo;
  logic [vaddr_width_p-1:0] br_tgt_lo;
  //incorrectly named but they do go to the right place
  wire [vaddr_width_p-1:0] pc_plus4  = pc_if1_r1 + vaddr_width_p'(8);
  wire [vaddr_width_p-1:0] pc_plus8 = pc_plus4 + vaddr_width_p'(4);

//mux for next instruction
  always_comb
    begin
    if (redirect_v_i) begin
        next_pc_o1 = redirect_pc_i;
        next_pc_o2 = redirect_pc_i + vaddr_width_p'(4);
    end
    else if (ovr_ret) begin
        //return address
        next_pc_o1 = ras_tgt_lo;
        next_pc_o2 = ras_tgt_lo + vaddr_width_p'(4);
    end
    else if (ovr_taken) begin
        next_pc_o1 = br_tgt_lo;
        next_pc_o2 = br_tgt_lo+vaddr_width_p'(4);
    end
    else if (btb_taken) begin
        next_pc_o1 = btb_br_tgt_lo;
        next_pc_o2 = btb_br_tgt_lo + + vaddr_width_p'(4);
    end
    else
      begin
        next_pc_o1 = pc_plus4;
        next_pc_o2 =pc_plus8;
      end
    end
  assign pc_if1_n1 = next_pc_o1;
  assign pc_if1_n2 = next_pc_o2;

  always_comb
    begin
      pred_if1_n1 = '0;
      pred_if1_n1.ghist = ghistory_n;
      pred_if1_n1.redir = redirect_br_v_i;
      pred_if1_n1.taken = (redirect_br_v_i & redirect_br_taken_i) | ovr_ret | ovr_taken;
      pred_if1_n1.ret   = ovr_ret & ~redirect_v_i;
    end
  always_comb
    begin
      pred_if1_n2 = '0;
      pred_if1_n2.ghist = ghistory_n;
      pred_if1_n2.redir = redirect_br_v_i;
      pred_if1_n2.taken = (redirect_br_v_i & redirect_br_taken_i) | ovr_ret | ovr_taken;
      pred_if1_n2.ret   = ovr_ret & ~redirect_v_i;
    end

//pass on predictions and pcs
  bsg_dff
   #(.width_p($bits(bp_fe_pred_s)+vaddr_width_p))
   pred_if1_reg1
    (.clk_i(clk_i)

     ,.data_i({pred_if1_n1, pc_if1_n1})
     ,.data_o({pred_if1_r1, pc_if1_r1})
     );

  bsg_dff
   #(.width_p($bits(bp_fe_pred_s)+vaddr_width_p))
   pred_if1_reg2
    (.clk_i(clk_i)

     ,.data_i({pred_if1_n2, pc_if1_n2})
     ,.data_o({pred_if1_r2, pc_if1_r2})
     );

//fetch_instr comes from icache
  `declare_bp_fe_instr_scan_s(vaddr_width_p)
  bp_fe_instr_scan_s scan_instr1, scan_instr2;
  wire is_br1   = fetch_instr_v_i1 & scan_instr1.branch;
  wire is_jal1  = fetch_instr_v_i1 & scan_instr1.jal;
  wire is_jalr1 = fetch_instr_v_i1 & scan_instr1.jalr;
  wire is_call1 = fetch_instr_v_i1 & scan_instr1.call;
  wire is_ret1  = fetch_instr_v_i1 & scan_instr1.ret;

  wire is_br_op1 = is_br1 |  is_jal1 | is_jalr1 | is_call1 | is_ret1;

  wire is_br2   = fetch_instr_v_i2 & scan_instr2.branch;
  wire is_jal2  = fetch_instr_v_i2 & scan_instr2.jal;
  wire is_jalr2 = fetch_instr_v_i2 & scan_instr2.jalr;
  wire is_call2 = fetch_instr_v_i2 & scan_instr2.call;
  wire is_ret2  = fetch_instr_v_i2 & scan_instr2.ret;
 
 wire is_br_op2 = is_br2 |  is_jal2 | is_jalr2 | is_call2 | is_ret2;

  // BTB
  //it's valid to read your btb if an instruction is being consumed (yumi :P)
  wire btb_r_v_li = next_pc_yumi_i;

//valid write to the btb
//its a valid write if you were redirected by a branch that was taken (bad),
// redirected by not taking a branch that exists in the BTB
//or took a branch correctly that is not in the BTB
  wire btb_w_v_li = (redirect_br_v_i & redirect_br_taken_i)
    | (redirect_br_v_i & redirect_br_nonbr_i & redirect_br_metadata_fwd.src_btb)
    | (attaboy_v_i & attaboy_taken_i & ~attaboy_br_metadata_fwd.src_btb);

//clear btb lines if redirect (taken or not), and is in the BTB
  wire btb_clr_li = redirect_br_v_i & redirect_br_nonbr_i & redirect_br_metadata_fwd.src_btb;
//BTB jmp line. If the redirect was valid, check for jump address. Otherwise, look at the attaboy given it was correct (this wire could be from a jump right after bad branch)
  wire btb_jmp_li = redirect_br_v_i ? (redirect_br_metadata_fwd.is_jal | redirect_br_metadata_fwd.is_jalr) : (attaboy_br_metadata_fwd.is_jal | attaboy_br_metadata_fwd.is_jalr);
  // btb tag, index, and target
  wire [btb_tag_width_p-1:0] btb_tag_li = redirect_br_v_i ? redirect_br_metadata_fwd.btb_tag : attaboy_br_metadata_fwd.btb_tag;
  wire [btb_idx_width_p-1:0] btb_idx_li = redirect_br_v_i ? redirect_br_metadata_fwd.btb_idx : attaboy_br_metadata_fwd.btb_idx;
  wire [vaddr_width_p-1:0]   btb_tgt_li = redirect_br_v_i ? redirect_pc_i : attaboy_pc_i;

  logic btb_init_done_lo;
  logic btb_br_tgt_v_lo;
  logic btb_br_tgt_jmp_lo;
  logic btb_w_yumi_lo;

// the next pc for the btb should be the first pc if it's prone to branch or change. Otherwise pc 2
//we can only take 1 branch or jump at a time for proper execution
  logic [vaddr_width_p-1:0] next_pc_o = (is_br1 | is_jal1 | is_jalr1 | is_call1 | is_ret1) ? next_pc_o1 : next_pc_o2;
  //will forward this value for branch metadata purposes on where to look. 
  logic jump_path = (is_br1 | is_jal1 | is_jalr1 | is_call1 | is_ret1);
  bp_fe_btb
   #(.bp_params_p(bp_params_p))
   btb
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.init_done_o(btb_init_done_lo)

     ,.r_addr_i(next_pc_o)
     ,.r_v_i(btb_r_v_li)
     ,.br_tgt_o(btb_br_tgt_lo)
     ,.br_tgt_v_o(btb_br_tgt_v_lo)
     ,.br_tgt_jmp_o(btb_br_tgt_jmp_lo)

     ,.w_v_i(btb_w_v_li)
     ,.w_clr_i(btb_clr_li)
     ,.w_jmp_i(btb_jmp_li)
     ,.w_tag_i(btb_tag_li)
     ,.w_idx_i(btb_idx_li)
     ,.br_tgt_i(btb_tgt_li)
     ,.w_yumi_o(btb_w_yumi_lo)
     );

  // BHT
  //BHT is valid if yumi
  wire bht_r_v_li = next_pc_yumi_i;
  wire [vaddr_width_p-1:0] bht_r_addr_li = next_pc_o;


  wire [ghist_width_p-1:0] bht_r_ghist_li = pred_if1_n1.ghist;
  wire bht_w_v_li =
    (redirect_br_v_i & redirect_br_metadata_fwd.is_br) | (attaboy_v_i & attaboy_br_metadata_fwd.is_br);
  wire [bht_idx_width_p-1:0] bht_w_idx_li =
    redirect_br_v_i ? redirect_br_metadata_fwd.bht_idx : attaboy_br_metadata_fwd.bht_idx;
  wire [ghist_width_p-1:0] bht_w_ghist_li =
    redirect_br_v_i ? redirect_br_metadata_fwd.ghist : attaboy_br_metadata_fwd.ghist;
  wire [bht_row_width_p-1:0] bht_row_li =
    redirect_br_v_i ? redirect_br_metadata_fwd.bht_row : attaboy_br_metadata_fwd.bht_row;
  logic [bht_row_width_p-1:0] bht_row_lo;
  logic bht_pred_lo, bht_w_yumi_lo, bht_init_done_lo;

  //history table for given pc
  bp_fe_bht
   #(.bp_params_p(bp_params_p))
   bht
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.init_done_o(bht_init_done_lo)

     ,.r_v_i(bht_r_v_li)
     ,.r_addr_i(bht_r_addr_li)
     ,.r_ghist_i(bht_r_ghist_li)
     ,.val_o(bht_row_lo)
     ,.pred_o(bht_pred_lo)

     ,.w_v_i(bht_w_v_li)
     ,.w_idx_i(bht_w_idx_li)
     ,.w_ghist_i(bht_w_ghist_li)
     ,.correct_i(attaboy_yumi_o)
     ,.val_i(bht_row_li)
     ,.w_yumi_o(bht_w_yumi_lo)
     );
  assign btb_taken = btb_br_tgt_v_lo & (bht_pred_lo | btb_br_tgt_jmp_lo);
  // RAS

  //fix here to support calls
  wire is_call = is_call1 | is_call2;
  //return address chosen depending if first one is return address, otherwise second pc check
  logic [vaddr_width_p-1:0] return_addr_n1, return_addr_r2;
  bsg_dff_reset_en
   #(.width_p(vaddr_width_p))
   ras1
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.en_i(is_call)

     ,.data_i(return_addr_n1)
     ,.data_o(return_addr_r1)
     );


  // logic [vaddr_width_p-1:0] return_addr_n2, return_addr_r2;
  // bsg_dff_reset_en
  //  #(.width_p(vaddr_width_p))
  //  ras2
  //   (.clk_i(clk_i)
  //    ,.reset_i(reset_i)
  //    ,.en_i(is_call2)

  //    ,.data_i(return_addr_n2)
  //    ,.data_o(return_addr_r2)
  //    );
  // assign ras_tgt_lo = return_addr_r;
  assign ras_tgt_lo = return_addr_r1;

  assign attaboy_yumi_o = attaboy_v_i & ~(bht_w_v_li & ~bht_w_yumi_lo) & ~(btb_w_v_li & ~btb_w_yumi_lo);

  /////////////////
  // IF2
  /////////////////
  bp_fe_pred_s pred_if2_n1, pred_if2_r1;
  bp_fe_pred_s pred_if2_n2, pred_if2_r2;

  always_comb
    if (~pred_if1_r1.redir)
      begin
        pred_if2_n1 = pred_if1_r1;
        pred_if2_n1.pred    = bht_pred_lo;
        pred_if2_n1.taken   = btb_taken;
        pred_if2_n1.btb     = btb_br_tgt_v_lo;
        pred_if2_n1.bht_row = bht_row_lo;
      end
    else
      begin
        pred_if2_n1 = pred_if1_r1;
      end

  always_comb
    if (~pred_if1_r2.redir)
      begin
        pred_if2_n2 = pred_if1_r2;
        pred_if2_n2.pred    = bht_pred_lo;
        pred_if2_n2.taken   = btb_taken;
        pred_if2_n2.btb     = btb_br_tgt_v_lo;
        pred_if2_n2.bht_row = bht_row_lo;
      end
    else
      begin
        pred_if2_n2 = pred_if1_r2;
      end

  assign pc_if2_n1 = pc_if1_r1;
  assign pc_if2_n2 = pc_if1_r2;
logic passed_call1, passed_call2, pass_jump_path;
  bsg_dff
  #(.width_p(1))
    pass_call1
    (.clk_i(clk_i)
    ,.data_i(is_call1)
    ,.data_o(passed_call1)
    );

  bsg_dff
  #(.width_p(1))
    pass_call2
    (.clk_i(clk_i)
    ,.data_i(is_call2)
    ,.data_o(passed_call2)
    );

  bsg_dff
  #(.width_p(1))
    pass_path
    (.clk_i(clk_i)
    ,.data_i(jump_path)
    ,.data_o(pass_jump_path)
    );


  bsg_dff
   #(.width_p($bits(bp_fe_pred_s)+vaddr_width_p))
   pred_if2_reg1
    (.clk_i(clk_i)

     ,.data_i({pred_if2_n1, pc_if2_n1})
     ,.data_o({pred_if2_r1, pc_if2_r1})
     );

  bsg_dff
   #(.width_p($bits(bp_fe_pred_s)+vaddr_width_p))
   pred_if2_reg2
    (.clk_i(clk_i)

     ,.data_i({pred_if2_n2, pc_if2_n2})
     ,.data_o({pred_if2_r2, pc_if2_r2})
     );


  assign return_addr_n1 =   passed_call1 ? pc_if2_r1 + vaddr_width_p'(4) : pc_if2_r2 + vaddr_width_p'(4);
  // assign return_addr_n2 =   pc_if2_r2 + vaddr_width_p'(4);

//We always jump using instr 1 in the dual issue so check that one
  wire btb_miss_ras = (pc_if1_r1 != ras_tgt_lo);
  wire btb_miss_br  = pc_if1_r1 != br_tgt_lo;
  assign ovr_ret    = btb_miss_ras & (is_ret1 | is_ret2);
  assign ovr_taken  = btb_miss_br & ((is_br1 & pred_if2_r1.pred) | is_jal1 | (is_br2 & pred_if2_r2.pred) | is_jal2);
  assign ovr_o      = ovr_taken | ovr_ret;
  assign br_tgt_lo  = scan_instr1.branch ? pc_if2_r1 + scan_instr1.imm : pc_if2_r2 + scan_instr2.imm;

  //NEED TO DOUBLE SINCE WE ARE FETCHING TWO DECODED INSTR
  assign fetch_pc_o1 = pc_if2_r1;
  assign fetch_pc_o2 = pc_if2_r2;

  bp_fe_branch_metadata_fwd_s br_metadata_site;
  assign fetch_br_metadata_fwd_o = br_metadata_site;
  always_ff @(posedge clk_i)
    if (fetch_instr_v_i1)
      br_metadata_site <=
        '{src_btb  : is_br_op1 ? pred_if2_r1.btb : is_br_op2 ? pred_if2_r2.btb : pred_if2_r1.btb
          ,src_ret : is_br_op1 ? pred_if2_r1.ret : is_br_op2 ? pred_if2_r2.ret : pred_if2_r1.ret
          ,ghist   : is_br_op1 ? pred_if2_r1.ghist : is_br_op2 ? pred_if2_r2.ghist : pred_if2_r1.ghist
          ,bht_row : is_br_op1 ? pred_if2_r1.bht_row : is_br_op2 ? pred_if2_r2.bht_row : pred_if2_r1.bht_row
          ,btb_tag : (pass_jump_path ? pc_if2_r1[2+btb_idx_width_p+:btb_tag_width_p] : pc_if2_r2[2+btb_idx_width_p+:btb_tag_width_p])
          ,btb_idx : (pass_jump_path ? pc_if2_r1[2+:btb_idx_width_p] : pc_if2_r2[2+:btb_idx_width_p])
          ,bht_idx : (pass_jump_path ? pc_if2_r1[2+:bht_idx_width_p] : pc_if2_r2[2+:bht_idx_width_p])
          ,is_br   : is_br_op1 ? is_br1 : is_br_op2 ? is_br2 : is_br1
          ,is_jal  : is_br_op1 ? is_jal1 : is_br_op2 ? is_jal2 : is_jal1
          ,is_jalr : is_br_op1 ? is_jalr1 : is_br_op2 ? is_jalr2 : is_jalr1
          ,is_call : is_br_op1 ? is_call1 : is_br_op2 ? is_call2 : is_call1
          ,is_ret  : is_br_op1 ? is_ret1 : is_br_op2 ? is_ret2 : is_ret1
          };

  // Scan fetched instruction
  bp_fe_instr_scan
   #(.bp_params_p(bp_params_p))
   instr_scan1
    (.instr_i(fetch_i1)

     ,.scan_o(scan_instr1)
     );

  bp_fe_instr_scan
   #(.bp_params_p(bp_params_p))
   instr_scan2
    (.instr_i(fetch_i2)

     ,.scan_o(scan_instr2)
     );

  // Global history
  //
  wire ghistory_w_v_li = is_br1 | is_br2 | redirect_br_v_i;
  assign ghistory_n = redirect_br_v_i
    ? redirect_br_metadata_fwd.ghist
    : {ghistory_r[0+:ghist_width_p-1], pred_if2_r1.taken};
  bsg_dff_reset_en
   #(.width_p(ghist_width_p))
   ghist_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.en_i(ghistory_w_v_li)

     ,.data_i(ghistory_n)
     ,.data_o(ghistory_r)
     );

  assign init_done_o = bht_init_done_lo & btb_init_done_lo;

endmodule

