/*
 * bp_fe_top.v
 */

`include "bp_common_defines.svh"
`include "bp_fe_defines.svh"

module bp_fe_top
 import bp_fe_pkg::*;
 import bp_common_pkg::*;
 import bp_be_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)
   `declare_bp_core_if_widths(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p)
   `declare_bp_cache_engine_if_widths(paddr_width_p, ctag_width_p, icache_sets_p, icache_assoc_p, dword_width_gp, icache_block_width_p, icache_fill_width_p, icache)

   , localparam cfg_bus_width_lp = `bp_cfg_bus_width(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p)
   )
  (input                                              clk_i
   , input                                            reset_i

//cfg something?
   , input [cfg_bus_width_lp-1:0]                     cfg_bus_i

//cmd from the back end?
   , input [fe_cmd_width_lp-1:0]                      fe_cmd_i
   , input                                            fe_cmd_v_i
   , output                                           fe_cmd_yumi_o

//output to queue between front and back
//ready so it can feed a new instr
//update two 2 queue streams
  //  , output [fe_queue_width_lp-1:0]                   fe_queue_o
  //  , output                                           fe_queue_v_o
  //  , input                                            fe_queue_ready_i
   , output [fe_queue_width_lp-1:0]                   fe_queue_o1, fe_queue_o2
   , output                                           fe_queue_v_o1, fe_queue_v_o2
   , input                                            fe_queue_ready_i1, fe_queue_ready_i2

//cache requests
//doubled
  //  , output logic [icache_req_width_lp-1:0]           cache_req_o
  //  , output logic                                     cache_req_v_o
   , output logic [icache_req_width_lp-1:0]           cache_req_o
   , output logic                                     cache_req_v_o


//cache request accepted from BE? at least accepted or busy to stop the cache
   , input                                            cache_req_yumi_i
   , input                                            cache_req_busy_i
//output cache metadata about instr
   , output logic [icache_req_metadata_width_lp-1:0]  cache_req_metadata_o
   , output logic                                     cache_req_metadata_v_o
//tag and data for cache request
   , input                                            cache_req_critical_tag_i
   , input                                            cache_req_critical_data_i
   , input                                            cache_req_complete_i
   , input                                            cache_req_credits_full_i
   , input                                            cache_req_credits_empty_i

//cache memory packet(PC or RAM?) and output
   , input [icache_data_mem_pkt_width_lp-1:0]         data_mem_pkt_i
   , input                                            data_mem_pkt_v_i
   , output logic                                     data_mem_pkt_yumi_o
   , output logic [icache_block_width_p-1:0]          data_mem_o

//tag pckt and output consumption
   , input [icache_tag_mem_pkt_width_lp-1:0]          tag_mem_pkt_i
   , input                                            tag_mem_pkt_v_i
   , output logic                                     tag_mem_pkt_yumi_o
   , output logic [icache_tag_info_width_lp-1:0]      tag_mem_o

//stat mem pkt and consumption
   , input [icache_stat_mem_pkt_width_lp-1:0]         stat_mem_pkt_i
   , input                                            stat_mem_pkt_v_i
   , output logic                                     stat_mem_pkt_yumi_o
   , output logic [icache_stat_info_width_lp-1:0]     stat_mem_o
   );

//decalre instruction parameters and width
  `declare_bp_core_if(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);
  `declare_bp_cfg_bus_s(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p);
  `declare_bp_fe_branch_metadata_fwd_s(btb_tag_width_p, btb_idx_width_p, bht_idx_width_p, ghist_width_p, bht_row_width_p);
//front end cmd  
  bp_fe_cmd_s fe_cmd_cast_i;//, fe_cmd_cast2_i;
  //pass cmd from back end

  //NEED ONLY ONE CMD! CAN ONLY HANDLE 1 MISPREDICT AND CORRECT ADDRESS IS HANDLED IN PC GEN
  assign fe_cmd_cast_i = fe_cmd_i;
  // assign fe_cmd_cast2_i = fe_cmd2_i;



//get queue output we can feed the queue
  bp_fe_queue_s fe_queue_cast_o1, fe_queue_cast_o2;
  assign fe_queue_o1 = fe_queue_cast_o1;
  assign fe_queue_o2 = fe_queue_cast_o2; 

// cfg bus gives information about cache IDs and coherency status and modes
  bp_cfg_bus_s cfg_bus_cast_i;
  assign cfg_bus_cast_i = cfg_bus_i;

  // FSM
  enum logic [1:0] {e_wait=2'd0, e_run, e_stall} state_n, state_r;

  // Decoded state signals
  wire is_wait     = (state_r == e_wait);
  wire is_run      = (state_r == e_run);
  wire is_stall    = (state_r == e_stall);

//pc gen init/other modules have started and are good to go
  logic pc_gen_init_done_lo;
//redirect pc to diff address. For pc gen
//only need one redirect since we can only redirect with one address
//assigned to the resume PC
  logic redirect_v_li;
  logic [vaddr_width_p-1:0] redirect_pc_li;
  //saved state data saved in resume reg but originates from CMD
  logic redirect_br_v_li, redirect_br_taken_li, redirect_br_ntaken_li, redirect_br_nonbr_li;

  //metadata for miss and hit (redirect and attaboy)
  //CMD metadata
  bp_fe_branch_metadata_fwd_s redirect_br_metadata_fwd_li;
  bp_fe_branch_metadata_fwd_s attaboy_br_metadata_fwd_li;
  logic attaboy_v_li, attaboy_yumi_lo, attaboy_taken_li, attaboy_ntaken_li;
  //vaddr for correct prediction
  logic [vaddr_width_p-1:0] attaboy_pc_li;
  //get next instr for queue
  //need to duplicate the fetch logic since we fetched 2 instr
  //li is instr, pc_lo is the pc value associated with the instr
  logic [instr_width_gp-1:0] fetch_li1, fetch_li2;
  logic [vaddr_width_p-1:0] fetch_pc_lo1, fetch_pc_lo2;
  //valid instructions as well as exceptions for either
  logic fetch_instr_v_li1, fetch_instr_v_li2, fetch_exception_v_li1, fetch_exception_v_li2, fetch_fail_v_li,fetch_fail_v_li2;
  //branch metadata provided by pc_gen
  bp_fe_branch_metadata_fwd_s fetch_br_metadata_fwd_lo;
  //next pc to feed to icache in next cycle
  logic [vaddr_width_p-1:0] next_pc_lo1, next_pc_lo2;
  //yumi/can run if the system is running and not stalled
  logic next_pc_yumi_li;
  logic ovr_lo;

//pc generator  
  bp_fe_pc_gen
   #(.bp_params_p(bp_params_p))
   pc_gen
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.init_done_o(pc_gen_init_done_lo)

     ,.redirect_v_i(redirect_v_li) //resume valid and pc and metadata
     ,.redirect_pc_i(redirect_pc_li)
     ,.redirect_br_v_i(redirect_br_v_li)
     ,.redirect_br_metadata_fwd_i(redirect_br_metadata_fwd_li)
     ,.redirect_br_taken_i(redirect_br_taken_li)
     ,.redirect_br_ntaken_i(redirect_br_ntaken_li)
     ,.redirect_br_nonbr_i(redirect_br_nonbr_li)

     ,.next_pc_o1(next_pc_lo1) //next pc data provided by pc_gen
     ..next_pc_o2(next_pc_lo2)
     ,.next_pc_yumi_i(next_pc_yumi_li) //input on whether the next instr can run

     ,.ovr_o(ovr_lo)//output if BTB misses but still need to branch

     ,.fetch_i1(fetch_li1)//instructions fetched. Used to provide prediction
     ,.fetch_i2(fetch_li2)
     ,.fetch_instr_v_i1(fetch_instr_v_li1)
     ,.fetch_instr_v_i2(fetch_instr_v_li2)
     ,.fetch_exception_v_i1(fetch_exception_v_li1)
     ,.fetch_exception_v_i2(fetch_exception_v_li2)
     ,.fetch_br_metadata_fwd_o(fetch_br_metadata_fwd_lo)
     ,.fetch_pc_o1(fetch_pc_lo1)//pass pc value for fetched instr
     ,.fetch_pc_o2(fetch_pc_lo2)
     ,.attaboy_pc_i(attaboy_pc_li)//attaboy pc location and information
     ,.attaboy_br_metadata_fwd_i(attaboy_br_metadata_fwd_li)
     ,.attaboy_taken_i(attaboy_taken_li)
     ,.attaboy_ntaken_i(attaboy_ntaken_li)
     ,.attaboy_v_i(attaboy_v_li)
     ,.attaboy_yumi_o(attaboy_yumi_lo)
     );


//signals to determine if current instr running has particular feature
//reset
  wire state_reset_v          = (fe_cmd_v_i & (fe_cmd_cast_i.opcode == e_op_state_reset));
//redirect signal 
  wire pc_redirect_v          =  (fe_cmd_v_i & (fe_cmd_cast_i.opcode == e_op_pc_redirection)) ;
//itlb populated
  wire itlb_fill_v            = (fe_cmd_v_i & (fe_cmd_cast_i.opcode == e_op_itlb_fill_response)) ;
//fence
  wire icache_fence_v         = (fe_cmd_v_i & (fe_cmd_cast_i.opcode == e_op_icache_fence)) ;
//icache populated location
  wire icache_fill_response_v = (fe_cmd_v_i & (fe_cmd_cast_i.opcode == e_op_icache_fill_response)) ;
//itlb fence
  wire itlb_fence_v           = (fe_cmd_v_i & (fe_cmd_cast_i.opcode == e_op_itlb_fence)) ;
//wait? Maybe for icache wait if in DRAM
  wire wait_v                 = (fe_cmd_v_i & (fe_cmd_cast_i.opcode == e_op_wait)) ;
//attaboy (branch correctly predicted)
  wire attaboy_v              =(fe_cmd_v_i & (fe_cmd_cast_i.opcode == e_op_attaboy));

  wire cmd_nonattaboy_v       = (fe_cmd_v_i & (fe_cmd_cast_i.opcode != e_op_attaboy)) ;
  wire cmd_complex_v          = (state_reset_v | itlb_fill_v | icache_fence_v | itlb_fence_v);
//immediate value jump?
//icache populating while redirect so prob jump while loading new data
  wire cmd_immediate_v        = (pc_redirect_v | icache_fill_response_v);

//miss general, miss br taken, miss not taken, miss not a branch (jump, ras, etc.)
  wire br_miss_v = pc_redirect_v
    & ((fe_cmd_cast_i.operands.pc_redirect_operands.subopcode == e_subop_branch_mispredict)); 

  wire br_miss_taken = br_miss_v
    & ((fe_cmd_cast_i.operands.pc_redirect_operands.misprediction_reason == e_incorrect_pred_taken));

  wire br_miss_ntaken = br_miss_v
    & ((fe_cmd_cast_i.operands.pc_redirect_operands.misprediction_reason == e_incorrect_pred_ntaken));

  wire br_miss_nonbr = br_miss_v
    & ((fe_cmd_cast_i.operands.pc_redirect_operands.misprediction_reason == e_not_a_branch));

//trap redirect valid and op codes on what is happening
  wire trap_v        = pc_redirect_v & ((fe_cmd_cast_i.operands.pc_redirect_operands.subopcode == e_subop_trap));
  wire eret_v        = pc_redirect_v & ((fe_cmd_cast_i.operands.pc_redirect_operands.subopcode == e_subop_eret));
  wire translation_v = pc_redirect_v & ((fe_cmd_cast_i.operands.pc_redirect_operands.subopcode == e_subop_translation_switch));

//shadow registers!
//used for bug detection
  logic [rv64_priv_width_gp-1:0] shadow_priv_n, shadow_priv_r;
  wire shadow_priv_w = state_reset_v | trap_v | eret_v;
  assign shadow_priv_n = fe_cmd_cast_i.operands.pc_redirect_operands.priv;
//pass shadow registers to stage 2 (I think)
  bsg_dff_reset_en_bypass
   #(.width_p(rv64_priv_width_gp))
   shadow_priv_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.en_i(shadow_priv_w)

     ,.data_i(shadow_priv_n)
     ,.data_o(shadow_priv_r)
     );

//shadow translation with register passthrough
//determines state of instr translation
  logic shadow_translation_en_n, shadow_translation_en_r;
  wire shadow_translation_en_w = state_reset_v | trap_v | eret_v | translation_v;
  assign shadow_translation_en_n = fe_cmd_cast_i.operands.pc_redirect_operands.translation_en;
  bsg_dff_reset_en_bypass
   #(.width_p(1))
   shadow_translation_en_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.en_i(shadow_translation_en_w)

     ,.data_i(shadow_translation_en_n)
     ,.data_o(shadow_translation_en_r)
     );

  // Change the resume pc on redirect command, else save the PC in IF2 while running
  //hold pc if we are paused
  logic [vaddr_width_p-1:0] pc_resume_n, pc_resume_r;
  bp_fe_branch_metadata_fwd_s br_metadata_fwd_resume_n, br_metadata_fwd_resume_r;
  //pass br miss data
  logic br_miss_r, br_miss_nonbr_r, br_miss_taken_r, br_miss_ntaken_r;
  //the resume value is set depending if the branch was correct
  //bad prediction? 

  //we should only have 1 fe_cmd since we only deal with branches 1 at a time
  assign pc_resume_n = cmd_nonattaboy_v ? fe_cmd_cast_i.vaddr : fetch_pc_lo1;
  assign br_metadata_fwd_resume_n = cmd_nonattaboy_v ? fe_cmd_cast_i.operands.pc_redirect_operands.branch_metadata_fwd : fetch_br_metadata_fwd_lo;

  //resume register with pc, metadata, and prior branching info
  bsg_dff_reset_en_bypass
   #(.width_p(4+$bits(bp_fe_branch_metadata_fwd_s)+vaddr_width_p))
   pc_resume_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.en_i(cmd_nonattaboy_v | is_run)

     ,.data_i({br_miss_v, br_miss_nonbr, br_miss_taken, br_miss_ntaken, br_metadata_fwd_resume_n, pc_resume_n})
     ,.data_o({br_miss_r, br_miss_nonbr_r, br_miss_taken_r, br_miss_ntaken_r, br_metadata_fwd_resume_r, pc_resume_r})
     );

//assign redirect info
//it what a redirect if we stalled (flush purposes) and the next instr was consumed. Or simply if the cmd contains a valid immediate to jump to
  assign redirect_v_li               = (is_stall & next_pc_yumi_li) | cmd_immediate_v;
  //redirect pc is set to the resume
  assign redirect_pc_li              = pc_resume_r;
  //valid br redirect if valid redirect and miss
  assign redirect_br_v_li            = redirect_v_li & br_miss_r;
  //passing metadata
  assign redirect_br_metadata_fwd_li = br_metadata_fwd_resume_r;
  //pass taken, not taken, not a branch
  assign redirect_br_taken_li        = br_miss_taken_r;
  assign redirect_br_ntaken_li       = br_miss_ntaken_r;
  assign redirect_br_nonbr_li        = br_miss_nonbr_r;

//correct branch metadata forwarded
  assign attaboy_br_metadata_fwd_li = fe_cmd_cast_i.operands.attaboy.branch_metadata_fwd;
  //what the pc is for attaboy along with valid and if the br was taken or not taken
  assign attaboy_taken_li           = attaboy_v &  fe_cmd_cast_i.operands.attaboy.taken;
  assign attaboy_ntaken_li          = attaboy_v & ~fe_cmd_cast_i.operands.attaboy.taken;
  assign attaboy_v_li               = attaboy_v;
  assign attaboy_pc_li              = fe_cmd_cast_i.vaddr;

//instr errors (misaligned, access fault (cant reach given address), p fault (not in cache))
  logic instr_misaligned_v, instr_access_fault_v, instr_page_fault_v;
  //page tag valid, uncached, non identifier, tag in dram?, and miss on tag
  logic ptag_v_li, ptag_uncached_li, ptag_nonidem_li, ptag_dram_li, ptag_miss_li;
  logic ptag_v_li2, ptag_uncached_li2, ptag_nonidem_li2, ptag_dram_li2, ptag_miss_li2;

  logic [ptag_width_p-1:0] ptag_li, ptag_li2;

//tlb entry leaf to find files
  bp_pte_leaf_s w_tlb_entry_li;
  //make virtual tag based no vaddr
  wire [vtag_width_p-1:0] w_vtag_li = fe_cmd_cast_i.vaddr[vaddr_width_p-1-:vtag_width_p];
  assign w_tlb_entry_li = fe_cmd_cast_i.operands.itlb_fill_response.pte_leaf;

//extended address we are trying to read from
//doubled to find memory in mmu
  wire [dword_width_gp-1:0] r_eaddr_li1 = `BSG_SIGN_EXTEND(next_pc_lo1, dword_width_gp);
  wire [dword_width_gp-1:0] r_eaddr_li2 = `BSG_SIGN_EXTEND(next_pc_lo2, dword_width_gp);

  //read size?
  wire [1:0] r_size_li = 2'b10;

  //memory map unit
  //NEED TO FIX IMMU TO SUPPORT 2 INSTR
  //Solution: Make a second MMU with same write inputs
  //Have access to same data but can read/write 2 instrs
  //Can't update MMU due to only 1r1w CAMs available without pipelining more
  //not worth the time
  bp_mmu
   #(.bp_params_p(bp_params_p)
     ,.tlb_els_4k_p(itlb_els_4k_p)
     ,.tlb_els_1g_p(itlb_els_1g_p)
     )
   immu1
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.flush_i(itlb_fence_v)
     ,.priv_mode_i(shadow_priv_r)
     ,.trans_en_i(shadow_translation_en_r)
     // Supervisor use of user memory is always disabled for immu
     ,.sum_i('0)
     // Immu does not handle dcache loads
     ,.mxr_i('0)
     ,.uncached_mode_i((cfg_bus_cast_i.icache_mode == e_lce_mode_uncached))
     ,.nonspec_mode_i((cfg_bus_cast_i.icache_mode == e_lce_mode_nonspec))
     ,.hio_mask_i(cfg_bus_cast_i.hio_mask)

     ,.w_v_i(itlb_fill_v)
     ,.w_vtag_i(w_vtag_li)
     ,.w_entry_i(w_tlb_entry_li)

     ,.r_v_i(next_pc_yumi_li)
     ,.r_instr_i(1'b1)
     ,.r_load_i('0)
     ,.r_store_i('0)
     ,.r_eaddr_i(r_eaddr_li1) //would add another port for two addresses but dont want two tlbs
     ,.r_size_i(r_size_li)

     ,.r_v_o(ptag_v_li) //update output mmu features
     ,.r_ptag_o(ptag_li)
     ,.r_instr_miss_o(ptag_miss_li)
     ,.r_load_miss_o()
     ,.r_store_miss_o()
     ,.r_uncached_o(ptag_uncached_li)
     ,.r_nonidem_o(ptag_nonidem_li)
     ,.r_dram_o(ptag_dram_li)
     ,.r_instr_misaligned_o(instr_misaligned_v)
     ,.r_load_misaligned_o()
     ,.r_store_misaligned_o()
     ,.r_instr_access_fault_o(instr_access_fault_v)
     ,.r_load_access_fault_o()
     ,.r_store_access_fault_o()
     ,.r_instr_page_fault_o(instr_page_fault_v)
     ,.r_load_page_fault_o()
     ,.r_store_page_fault_o()
     );

  bp_mmu
   #(.bp_params_p(bp_params_p)
     ,.tlb_els_4k_p(itlb_els_4k_p)
     ,.tlb_els_1g_p(itlb_els_1g_p)
     )
   immu2
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.flush_i(itlb_fence_v)
     ,.priv_mode_i(shadow_priv_r)
     ,.trans_en_i(shadow_translation_en_r)
     // Supervisor use of user memory is always disabled for immu
     ,.sum_i('0)
     // Immu does not handle dcache loads
     ,.mxr_i('0)
     ,.uncached_mode_i((cfg_bus_cast_i.icache_mode == e_lce_mode_uncached))
     ,.nonspec_mode_i((cfg_bus_cast_i.icache_mode == e_lce_mode_nonspec))
     ,.hio_mask_i(cfg_bus_cast_i.hio_mask)

     ,.w_v_i(itlb_fill_v)
     ,.w_vtag_i(w_vtag_li)
     ,.w_entry_i(w_tlb_entry_li)

     ,.r_v_i(next_pc_yumi_li)
     ,.r_instr_i(1'b1)
     ,.r_load_i('0)
     ,.r_store_i('0)
     ,.r_eaddr_i(r_eaddr_li2) 
     ,.r_size_i(r_size_li)

     ,.r_v_o(ptag_v_li2) 
     ,.r_ptag_o(ptag_li2)
     ,.r_instr_miss_o(ptag_miss_li2)
     ,.r_load_miss_o()
     ,.r_store_miss_o()
     ,.r_uncached_o(ptag_uncached_li2)
     ,.r_nonidem_o(ptag_nonidem_li2)
     ,.r_dram_o(ptag_dram_li2)
     ,.r_instr_misaligned_o(instr_misaligned_v2)
     ,.r_load_misaligned_o()
     ,.r_store_misaligned_o()
     ,.r_instr_access_fault_o(instr_access_fault_v2)
     ,.r_load_access_fault_o()
     ,.r_store_access_fault_o()
     ,.r_instr_page_fault_o(instr_page_fault_v2)
     ,.r_load_page_fault_o()
     ,.r_store_page_fault_o()
     );


//icache pckt
  `declare_bp_fe_icache_pkt_s(vaddr_width_p);
  bp_fe_icache_pkt_s icache_pkt1, icache_pkt2;
//packet contains next pc, check op but use next pc for vaddr (virtual address to get physical mem location)
  assign icache_pkt1 = '{vaddr: next_pc_lo1
                        ,op  : icache_fence_v ? e_icache_fencei : icache_fill_response_v ? e_icache_fill : e_icache_fetch
                        };
    assign icache_pkt2 = '{vaddr: next_pc_lo2
                        ,op  : e_icache_fetch //icache_fence_v ? e_icache_fencei : icache_fill_response_v ? e_icache_fill : 
                        };
  // TODO: Should only ack icache fence when icache_ready

  //icache valid if consumed pc or fence (gotta commit updates)
  wire icache_v_li = next_pc_yumi_li | icache_fence_v;

  //data output
  logic [instr_width_gp-1:0] icache_data_lo1, icache_data_lo2;
  //instrs ready, valid, and missed
  logic icache_ready_lo, icache_data_v_lo, icache_miss_v_lo;
  logic icache_ready_lo2, icache_data_v_lo2, icache_miss_v_lo2;

  //poisoned
  logic icache_poison_tl, icache_poison_tl2;

  //icache
bp_fe_icache_di_v2
   #(.bp_params_p(bp_params_p))
   icache1
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.cfg_bus_i(cfg_bus_i)

     ,.icache_pkt1_i(icache_pkt1)
     ,.icache_pkt2_i(icache_pkt2)
     ,.v_i(icache_v_li)
     ,.v_i2(icache_v_li)     
     ,.ready_o(icache_ready_lo)




     ,.ptag_i1(ptag_li)
     ,.ptag_v_i1(ptag_v_li)
     ,.ptag_uncached_i1(ptag_uncached_li)
     ,.ptag_nonidem_i1(ptag_nonidem_li)
     ,.ptag_dram_i1(ptag_dram_li)

     ,.data_o1(icache_data_lo1)
     ,.data_v_o1(icache_data_v_lo)
     ,.miss_v_o1(icache_miss_v_lo)

     ,.icache_pkt_i2(icache_pkt2)
     ,.ptag_i2(ptag_li2)
     ,.ptag_v_i2(ptag_v_li2)
     ,.ptag_uncached_i2(ptag_uncached_li2)
     ,.ptag_nonidem_i2(ptag_nonidem_li2)
     ,.ptag_dram_i2(ptag_dram_li2)
     ,.poison_tl_i1(icache_poison_tl)
     ,.poison_tl_i2(icache_poison_tl2)
     ,.data_o2(icache_data_lo2)
     ,.data_v_o2(icache_data_v_lo2)
     ,.miss_v_o2(icache_miss_v_lo2)
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

     ,.stat_mem_pkt_v_i(stat_mem_pkt_v_i)
     ,.stat_mem_pkt_i(stat_mem_pkt_i)
     ,.stat_mem_pkt_yumi_o(stat_mem_pkt_yumi_o)
     ,.stat_mem_o(stat_mem_o)
     );



//pass instr errors and tlb miss cant find page for instr data
  logic itlb_miss_r, instr_misaligned_r, instr_access_fault_r, instr_page_fault_r;
  logic itlb_miss_r2, instr_misaligned_r2, instr_access_fault_r2, instr_page_fault_r2;
//pass instr errors
  bsg_dff_reset
   #(.width_p(4))
   fault_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.data_i({ptag_miss_li, instr_misaligned_v, instr_access_fault_v, instr_page_fault_v})
     ,.data_o({itlb_miss_r, instr_misaligned_r, instr_access_fault_r, instr_page_fault_r})
     );

  bsg_dff_reset
   #(.width_p(4))
   fault_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.data_i({ptag_miss_li2, instr_misaligned_v2, instr_access_fault_v2, instr_page_fault_v2})
     ,.data_o({itlb_miss_r2, instr_misaligned_r2, instr_access_fault_r2, instr_page_fault_r2})
     );

//valid instruction fetch stages
  logic v_if1_r, v_if2_r, v_if1_r2, v_if2_r2;
//valid instr fetch1 if consumed
  wire v_if1_n = next_pc_yumi_li;
  wire v_if1_n2 = next_pc_yumi_li;
//valid instr fetch 2 if prev valid (being passed), not poisoned (kicked out of cache), and fetch has not failed
  wire v_if2_n = v_if1_r & ~icache_poison_tl & ~fetch_fail_v_li;
  wire v_if2_n2 = v_if1_r2 & ~icache_poison_tl2 & ~fetch_fail_v_li2;
  //pass the valid instruction status
  bsg_dff_reset
   #(.width_p(2))
   v_reg
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.data_i({v_if2_n, v_if1_n})
     ,.data_o({v_if2_r, v_if1_r})
     );

  bsg_dff_reset
   #(.width_p(2))
   v_reg2
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.data_i({v_if2_n2, v_if1_n2})
     ,.data_o({v_if2_r2, v_if1_r2})
     );
//icache miss signal if stage 2 and data not valid/available
  wire icache_miss    = v_if2_r & ~icache_data_v_lo;
  wire icache_miss2   = v_if2_r & ~icache_data_v_lo2;
//miss on queue meaning queue cant take in more instr
  wire queue_miss     = v_if2_r & ~fe_queue_ready_i1;
  wire queue_miss2     = v_if2_r2 & ~fe_queue_ready_i2;  
//valid fetch2 and instr error leading to exception
  wire fe_exception_v = v_if2_r & (instr_misaligned_r | instr_access_fault_r | instr_page_fault_r | itlb_miss_r | icache_miss_v_lo);
  wire fe_exception_v2 = v_if2_r2 & (instr_misaligned_r2 | instr_access_fault_r2 | instr_page_fault_r2 | itlb_miss_r2 | icache_miss_v_lo2);

//valid front end instr if valid fetch2 and valid data out
//only send out valid instructions if they are both valid
  wire fe_instr_v     = v_if2_r & icache_data_v_lo & icache_data_v_lo2;
  wire fe_instr_v2    = v_if2_r2 & icache_data_v_lo2 & icache_data_v_lo;
  //front end queue out (can feed queue) which comes from a ready queue,valid or exception instr, and attaboy (can keep going)
  assign fe_queue_v_o1 = fe_queue_ready_i1 & (fe_instr_v | fe_exception_v) & ~cmd_nonattaboy_v;
  assign fe_queue_v_o2 = fe_queue_ready_i2 & (fe_instr_v2 | fe_exception_v2) & ~cmd_nonattaboy_v;

//cache is poisoned if missed redirect or exception or queue miss or not attaboy
  assign icache_poison_tl = ovr_lo | fe_exception_v | queue_miss | cmd_nonattaboy_v;
  assign icache_poison_tl2 = ovr_lo | fe_exception_v2 | queue_miss2 | cmd_nonattaboy_v;

//cmd has been consumed meaning init has been take and valid nonattaboy or attaboy
  assign fe_cmd_yumi_o = pc_gen_init_done_lo & (cmd_nonattaboy_v | attaboy_yumi_lo);
  //if state can run, then pc will be consumed
  assign next_pc_yumi_li = (state_n == e_run);
//fetch instr valid if queue out and instr valid
  assign fetch_instr_v_li1     = fe_queue_v_o1 & fe_instr_v;
  assign fetch_instr_v_li2    = fe_queue_v_o2 & fe_instr_v2;
//instr exception, fail, or fetch
  assign fetch_exception_v_li = fe_queue_v_o1 & fe_exception_v;
  assign fetch_exception_v_li2 = fe_queue_v_o2 & fe_exception_v2;
  assign fetch_fail_v_li      = v_if2_r & ~fe_queue_v_o1;
  assign fetch_fail_v_li2     = v_if2_r2 & ~fe_queue_v_o2;

  //update for both fetches
  assign fetch_li1 = icache_data_lo1;
  assign fetch_li2 = icache_data_lo2;

//decode instr so we can NO-OP if needed
bp_fe_instr_scan_s fetch1_decoded, fetch2_decoded;
bp_fe_instr_scan
  #(.bp_params_p(bp_params_p))
  fetch_scan1
  (.instr_i(fetch_li1)

  ,.scan_o(fetch1_decoded)
      );
//this decoding determines whether the second instruction should be NO-OPed if the first is a branch.
//this also means the PC should be adjusted (+4 over regular +8 for dual issue) appropriately for those situtations      
wire is_branch = fetch1_decoded.branch | fetch1_decoded.jal | fetch1_decoded.jalr | fetch1_decoded.call | fetch1_decoded.ret;


//stall and unstall conditions
//stall if failed fetch or have to fix redirect
  wire stall   = fetch_fail_v_li | fetch_fail_v_li2 | cmd_nonattaboy_v;
//can end stall if cache is ready with data, the queue is ready, and non miss behavior
  wire unstall = icache_ready_lo & icache_ready_lo2 & fe_queue_ready_i1 & fe_queue_ready_i2 & ~cmd_nonattaboy_v;

  //on exception, update queue cast to give info, else give good cast data
  always_comb
    //double check on how to figure if we share metadata for exceptions or not
    if (fe_exception_v || fe_exception_v2)
      begin
        fe_queue_cast_o1 = '0;
        fe_queue_cast_o2 = '0;
        if(fe_exception_v) 
        begin
          // fe_queue_cast_o1 = '0;
          fe_queue_cast_o1.msg_type                     = e_fe_exception;
          fe_queue_cast_o1.msg.exception.vaddr          = fetch_pc_lo1;
          fe_queue_cast_o1.msg.exception.exception_code = itlb_miss_r
                                                         ? e_itlb_miss
                                                         : instr_misaligned_r
                                                           ? e_instr_misaligned
                                                             : instr_page_fault_r
                                                               ? e_instr_page_fault
                                                               : instr_access_fault_r
                                                                 ? e_instr_access_fault
                                                                   : e_icache_miss;
        end
        if(fe_exception_v2) begin
          // fe_queue_cast_o2 = '0;
          fe_queue_cast_o2.msg_type                     = e_fe_exception;
          fe_queue_cast_o2.msg.exception.vaddr          = fetch_pc_lo2;
          fe_queue_cast_o2.msg.exception.exception_code = itlb_miss_r2
                                                         ? e_itlb_miss
                                                         : instr_misaligned_r2
                                                           ? e_instr_misaligned
                                                             : instr_page_fault_r2
                                                               ? e_instr_page_fault
                                                               : instr_access_fault_r2
                                                                 ? e_instr_access_fault
                                                                   : e_icache_miss;
        end
      end
    else
      begin
        fe_queue_cast_o1 = '0;
        //e_fe_fetch is 0. Indicates function and not exception
        fe_queue_cast_o1.msg_type                      = e_fe_fetch;
        //PC value of instr
        fe_queue_cast_o1.msg.fetch.pc                  = fetch_pc_lo1;
        //the instr itself from icache
        fe_queue_cast_o1.msg.fetch.instr               = fetch_li1;
        //passes a metadata packet
        fe_queue_cast_o1.msg.fetch.branch_metadata_fwd = fetch_br_metadata_fwd_lo;
        
        fe_queue_cast_o2 = '0;
        //e_fe_fetch is 0. Indicates function and not exception
        fe_queue_cast_o2.msg_type                      = e_fe_fetch;
        //PC value of instr
        fe_queue_cast_o2.msg.fetch.pc                  =  fetch_pc_lo2;
        //the instr itself from icache
        fe_queue_cast_o2.msg.fetch.instr               = fetch_li2;
        fe_queue_cast_o2.msg.fetch.branch_metadata_fwd = fetch_br_metadata_fwd_lo;
      end

  // Controlling state machine
  always_comb
    case (state_r)
      // Wait for FE cmd
      e_wait : state_n = cmd_immediate_v ? e_run : cmd_nonattaboy_v ? e_stall : e_wait;
      // Stall until we can start valid fetch
      e_stall: state_n = unstall ? e_run : e_stall;
      // Run state -- PCs are actually being fetched
      // Stay in run if there's an incoming cmd, the next pc will automatically be valid
      // Transition to wait if there's a TLB miss while we wait for fill
      // Transition to stall if we don't successfully complete the fetch for whatever reason
      e_run  : state_n = cmd_immediate_v
                         ? e_run
                         : (stall || cmd_complex_v)
                           ? e_stall
                           : (fetch_exception_v_li1 || fetch_exception_v_li2)
                             ? e_wait
                             : e_run;
      default: state_n = e_wait;
    endcase

  // synopsys sync_set_reset "reset_i"
  always_ff @(posedge clk_i)
    if (reset_i)
        state_r <= e_wait;
    else
      begin
        state_r <= state_n;
      end

endmodule

