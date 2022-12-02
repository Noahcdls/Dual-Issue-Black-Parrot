/**
 *
 *  Name:
 *    bp_be_top.v
 *
 */

`include "bp_common_defines.svh"
`include "bp_be_defines.svh"

module bp_be_top
 import bp_common_pkg::*;
 import bp_be_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)
   `declare_bp_core_if_widths(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p)
   `declare_bp_cache_engine_if_widths(paddr_width_p, ctag_width_p, dcache_sets_p, dcache_assoc_p, dword_width_gp, dcache_block_width_p, dcache_fill_width_p, dcache)

   // Default parameters
   , localparam cfg_bus_width_lp = `bp_cfg_bus_width(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p)
  )
  (input                                             clk_i
   , input                                           reset_i

   // Processor configuration
   , input [cfg_bus_width_lp-1:0]                    cfg_bus_i

   // FE queue interface
   , input [fe_queue_width_lp-1:0]                   fe_queue1_i, fe_queue2_i
   , input                                           fe_queue_v1_i, fe_queue_v2_i
   , output                                          fe_queue_ready_o

   // FE cmd interface
   , output [fe_cmd_width_lp-1:0]                    fe_cmd_o
   , output                                          fe_cmd_v_o
   , input                                           fe_cmd_yumi_i

   // D$-LCE Interface
   // signals to LCE
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

   // tag_mem
   , input                                           tag_mem_pkt_v_i
   , input [dcache_tag_mem_pkt_width_lp-1:0]         tag_mem_pkt_i
   , output logic [dcache_tag_info_width_lp-1:0]     tag_mem_o
   , output logic                                    tag_mem_pkt_yumi_o

   // data_mem
   , input                                           data_mem_pkt_v_i
   , input [dcache_data_mem_pkt_width_lp-1:0]        data_mem_pkt_i
   , output logic [dcache_block_width_p-1:0]         data_mem_o
   , output logic                                    data_mem_pkt_yumi_o

   // stat_mem
   , input                                           stat_mem_pkt_v_i
   , input [dcache_stat_mem_pkt_width_lp-1:0]        stat_mem_pkt_i
   , output logic [dcache_stat_info_width_lp-1:0]    stat_mem_o
   , output logic                                    stat_mem_pkt_yumi_o

   , input                                           debug_irq_i
   , input                                           timer_irq_i
   , input                                           software_irq_i
   , input                                           m_external_irq_i
   , input                                           s_external_irq_i
   );

  // Declare parameterized structures
  `declare_bp_core_if(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);
  `declare_bp_be_internal_if_structs(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);

  // Top-level interface connections
  bp_be_dispatch_pkt_s dispatch_pkt1, dispatch_pkt2;
  bp_be_branch_pkt_s   br_pkt;

  logic dispatch_v1, dispatch_v2, interrupt_v;
  logic irq_pending_lo, irq_waiting_lo;

  bp_be_commit_pkt_s commit_pkt, commit_pkt2;
  bp_be_ptw_fill_pkt_s ptw_fill_pkt;
  bp_be_wb_pkt_s iwb_pkt, fwb_pkt, iwb_pkt2, fwb_pkt2;
  bp_be_decode_info_s decode_info_lo;

  bp_be_isd_status_s isd_status1, isd_status2;
  logic [vaddr_width_p-1:0] expected_npc_lo;
  logic poison_isd_lo, suppress_iss_lo, unfreeze_lo;

  logic cmd_full_n_lo, cmd_full_r_lo, cmd_empty_n_lo, cmd_empty_r_lo;
  logic mem_ready_lo, idiv_ready_lo, fdiv_ready_lo, ptw_busy_lo;

  bp_be_director
   #(.bp_params_p(bp_params_p))
   director
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.cfg_bus_i(cfg_bus_i)

     ,.isd_status1_i(isd_status1)
     ,.isd_status2_i(isd_status2) // from scheduler
     ,.expected_npc_o(expected_npc_lo) // to scheduler

     ,.fe_cmd_o(fe_cmd_o) // BE output
     ,.fe_cmd_v_o(fe_cmd_v_o) // BE output
     ,.fe_cmd_yumi_i(fe_cmd_yumi_i) // BE input

     ,.unfreeze_o(unfreeze_lo) // to scheduler
     ,.suppress_iss_o(suppress_iss_lo) // to scheduler
     ,.poison_isd_o(poison_isd_lo) // to scheduler
     ,.irq_waiting_i(irq_waiting_lo) // from calculator
     ,.cmd_empty_n_o()
     ,.cmd_empty_r_o()
     ,.cmd_full_n_o(cmd_full_n_lo) // to calculator
     ,.cmd_full_r_o(cmd_full_r_lo) // to detector

     ,.br_pkt_i(br_pkt) // from calculator
     ,.commit_pkt_i(commit_pkt) // from calculator
     ,.commit_pkt2_i(commit_pkt2)
     );

  bp_be_detector
   #(.bp_params_p(bp_params_p))
   detector
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.cfg_bus_i(cfg_bus_i)

     ,.isd_status1_i(isd_status1)
     ,.isd_status2_i(isd_status2) // from scheduler
     ,.cmd_full_i(cmd_full_r_lo) // from director
     ,.credits_full_i(cache_req_credits_full_i) // BE input
     ,.credits_empty_i(cache_req_credits_empty_i) // BE input
     ,.mem_ready_i(mem_ready_lo) // from calculator
     ,.fdiv_ready_i(fdiv_ready_lo) // from calculator
     ,.idiv_ready_i(idiv_ready_lo) // from calculator
     ,.ptw_busy_i(ptw_busy_lo) // from calculator
     ,.irq_pending_i(irq_pending_lo)  // from calculator

     ,.dispatch_v1_o(dispatch_v1)
     ,.dispatch_v2_o(dispatch_v2) // to scheduler
     ,.interrupt_v_o(interrupt_v) // to scheduler
     ,.dispatch_pkt1_i(dispatch_pkt1)
     ,.dispatch_pkt2_i(dispatch_pkt2) // from scheduler
     ,.commit_pkt_i(commit_pkt) // from calculator
     ,.commit_pkt2_i(commit_pkt2)
     ,.iwb_pkt_i(iwb_pkt) // from calculator
     ,.fwb_pkt_i(fwb_pkt) // from calculator
     ,.iwb_pkt2_i(iwb_pkt2) // from calculator
     ,.fwb_pkt2_i(fwb_pkt2) // from calculator
     );

  bp_be_scheduler
   #(.bp_params_p(bp_params_p))
   scheduler
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.cfg_bus_i(cfg_bus_i)

     ,.isd_status1_o(isd_status1)
     ,.isd_status2_o(isd_status2) // to detector & director
     ,.expected_npc_i(expected_npc_lo) // from director
     ,.poison_isd_i(poison_isd_lo) // from director
     ,.dispatch_v1_i(dispatch_v1)
     ,.dispatch_v2_i(dispatch_v2) // from detector
     ,.interrupt_v_i(interrupt_v) // from detector
     ,.unfreeze_i(unfreeze_lo) // from director
     ,.suppress_iss_i(suppress_iss_lo) // from director
     ,.decode_info_i(decode_info_lo) // from calculator

     ,.fe_queue1_i(fe_queue1_i) //BE input
     ,.fe_queue_v1_i(fe_queue_v1_i) //BE input
     ,.fe_queue2_i(fe_queue2_i) //BE input
     ,.fe_queue_v2_i(fe_queue_v2_i) //BE input
     ,.fe_queue_ready_o(fe_queue_ready_o) //BE output


     ,.dispatch_pkt1_o(dispatch_pkt1)
     ,.dispatch_pkt2_o(dispatch_pkt2) // to detector & calculator

     ,.commit_pkt_i(commit_pkt) // from calculator
     ,.commit_pkt2_i(commit_pkt2)//ADD ANOTHER PORT
     ,.ptw_fill_pkt_i(ptw_fill_pkt) // from calculator
     ,.iwb_pkt_i(iwb_pkt) // from calculator
     ,.iwb_pkt2_i(iwb_pkt2)//ADD EXTRA PORTS FOR WB PACKETS
     ,.fwb_pkt_i(fwb_pkt) // from calculator
     ,.fwb_pkt2_i(fwb_pkt2)
     );

  bp_be_calculator_top
   #(.bp_params_p(bp_params_p))
   calculator
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.cfg_bus_i(cfg_bus_i)

     ,.dispatch_pkt1_i(dispatch_pkt) // from scheduler
     ,.dispatch_pkt2_i(dispatch_pkt2)

     ,.decode_info_o(decode_info_lo) // to scheduler
     ,.mem_ready_o(mem_ready_lo) // to detector
     ,.idiv_ready_o(idiv_ready_lo) // to detector
     ,.fdiv_ready_o(fdiv_ready_lo) // to detector
     ,.ptw_busy_o(ptw_busy_lo) // to detector

     ,.br_pkt_o(br_pkt) // to director
     ,.commit_pkt_o(commit_pkt) // to detector & director & scheduler
     ,.commit_pkt2_o(commit_pkt2)
     ,.ptw_fill_pkt_o(ptw_fill_pkt) // to scheduler
     ,.iwb_pkt_o(iwb_pkt) // to detector & scheduler
     ,.fwb_pkt_o(fwb_pkt) // to detector & scheduler
     ,.iwb_pkt_o2(iwb_pkt2)
     ,.fwb_pkt_o2(fwb_pkt2)

     //cache interface
     ,.cache_req_o(cache_req_o)
     ,.cache_req_metadata_o(cache_req_metadata_o)
     ,.cache_req_v_o(cache_req_v_o)
     ,.cache_req_yumi_i(cache_req_yumi_i)
     ,.cache_req_busy_i(cache_req_busy_i)
     ,.cache_req_metadata_v_o(cache_req_metadata_v_o)
     ,.cache_req_critical_tag_i(cache_req_critical_tag_i)
     ,.cache_req_critical_data_i(cache_req_critical_data_i)
     ,.cache_req_complete_i(cache_req_complete_i)
     ,.cache_req_credits_full_i(cache_req_credits_full_i)
     ,.cache_req_credits_empty_i(cache_req_credits_empty_i)

     //tag mem interface
     ,.tag_mem_pkt_v_i(tag_mem_pkt_v_i)
     ,.tag_mem_pkt_i(tag_mem_pkt_i)
     ,.tag_mem_o(tag_mem_o)
     ,.tag_mem_pkt_yumi_o(tag_mem_pkt_yumi_o)
     
     // data mem interface
     ,.data_mem_pkt_v_i(data_mem_pkt_v_i)
     ,.data_mem_pkt_i(data_mem_pkt_i)
     ,.data_mem_o(data_mem_o)
     ,.data_mem_pkt_yumi_o(data_mem_pkt_yumi_o)

     // Stat mem interface
     ,.stat_mem_pkt_v_i(stat_mem_pkt_v_i)
     ,.stat_mem_pkt_i(stat_mem_pkt_i)
     ,.stat_mem_o(stat_mem_o)
     ,.stat_mem_pkt_yumi_o(stat_mem_pkt_yumi_o)

     ,.debug_irq_i(debug_irq_i)
     ,.timer_irq_i(timer_irq_i)
     ,.software_irq_i(software_irq_i)
     ,.m_external_irq_i(m_external_irq_i)
     ,.s_external_irq_i(s_external_irq_i)
     ,.irq_pending_o(irq_pending_lo) // to detector
     ,.irq_waiting_o(irq_waiting_lo) // to director
     ,.cmd_full_n_i(cmd_full_n_lo) // from director
     );

endmodule