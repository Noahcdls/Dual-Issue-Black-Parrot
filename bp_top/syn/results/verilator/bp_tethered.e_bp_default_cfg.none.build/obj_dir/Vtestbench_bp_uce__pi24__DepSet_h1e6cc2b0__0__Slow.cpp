// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bp_uce__pi24.h"

VL_ATTR_COLD void Vtestbench_bp_uce__pi24___ctor_var_reset(Vtestbench_bp_uce__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_uce__pi24___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = 0;
    vlSelf->reset_i = 0;
    vlSelf->lce_id_i = 0;
    VL_ZERO_RESET_W(116, vlSelf->cache_req_i);
    vlSelf->cache_req_v_i = 0;
    vlSelf->cache_req_yumi_o = 0;
    vlSelf->cache_req_busy_o = 0;
    vlSelf->cache_req_metadata_i = 0;
    vlSelf->cache_req_metadata_v_i = 0;
    vlSelf->cache_req_critical_tag_o = 0;
    vlSelf->cache_req_critical_data_o = 0;
    vlSelf->cache_req_complete_o = 0;
    vlSelf->cache_req_credits_full_o = 0;
    vlSelf->cache_req_credits_empty_o = 0;
    vlSelf->tag_mem_pkt_o = 0;
    vlSelf->tag_mem_pkt_v_o = 0;
    vlSelf->tag_mem_pkt_yumi_i = 0;
    vlSelf->tag_mem_i = 0;
    VL_ZERO_RESET_W(83, vlSelf->data_mem_pkt_o);
    vlSelf->data_mem_pkt_v_o = 0;
    vlSelf->data_mem_pkt_yumi_i = 0;
    VL_ZERO_RESET_W(512, vlSelf->data_mem_i);
    vlSelf->stat_mem_pkt_o = 0;
    vlSelf->stat_mem_pkt_v_o = 0;
    vlSelf->stat_mem_pkt_yumi_i = 0;
    vlSelf->stat_mem_i = 0;
    VL_ZERO_RESET_W(67, vlSelf->mem_cmd_header_o);
    vlSelf->mem_cmd_data_o = 0;
    vlSelf->mem_cmd_v_o = 0;
    vlSelf->mem_cmd_ready_and_i = 0;
    vlSelf->mem_cmd_last_o = 0;
    VL_ZERO_RESET_W(67, vlSelf->mem_resp_header_i);
    vlSelf->mem_resp_data_i = 0;
    vlSelf->mem_resp_v_i = 0;
    vlSelf->mem_resp_ready_and_o = 0;
    vlSelf->mem_resp_last_i = 0;
    vlSelf->__PVT__tag_mem_pkt_cast_o = 0;
    VL_ZERO_RESET_W(83, vlSelf->__PVT__data_mem_pkt_cast_o);
    vlSelf->__PVT__stat_mem_pkt_cast_o = 0;
    vlSelf->__PVT__state_n = 0;
    vlSelf->__PVT__state_r = 0;
    vlSelf->__PVT__cache_req_done = 0;
    vlSelf->__Vcellout__metadata_reg__data_o = 0;
    vlSelf->__Vcellout__dirty_stat_reg__data_o = 0;
    VL_ZERO_RESET_W(67, vlSelf->__PVT__fsm_cmd_header_lo);
    vlSelf->__PVT__fsm_cmd_data_lo = 0;
    vlSelf->__PVT__fsm_cmd_v_lo = 0;
    vlSelf->__PVT__fsm_cmd_ready_and_li = 0;
    vlSelf->__PVT__fsm_cmd_new = 0;
    vlSelf->__PVT__fsm_cmd_done = 0;
    vlSelf->__PVT__fsm_resp_addr_li = 0;
    vlSelf->__PVT__fsm_resp_v_li = 0;
    vlSelf->__PVT__fsm_resp_yumi_lo = 0;
    vlSelf->__PVT__fsm_resp_new = 0;
    vlSelf->__PVT__fsm_resp_done = 0;
    vlSelf->__PVT__uc_store_v_li = 0;
    vlSelf->__PVT__load_resp_v_li = 0;
    vlSelf->__PVT__miss_v_r = 0;
    vlSelf->__PVT__wt_store_v_r = 0;
    vlSelf->__PVT__uc_load_v_r = 0;
    vlSelf->__PVT__uc_store_v_r = 0;
    vlSelf->__PVT__uc_amo_v_r = 0;
    vlSelf->__PVT__index_cnt = 0;
    vlSelf->__PVT__index_up = 0;
    vlSelf->__PVT__way_cnt = 0;
    vlSelf->__PVT__way_up = 0;
    vlSelf->__PVT__credit_count_lo = 0;
    vlSelf->__PVT__writeback_data = 0;
    vlSelf->__PVT__critical_recv = 0;
    vlSelf->__PVT__cache_wr_subop = 0;
    vlSelf->__PVT__mem_wr_subop = 0;
    vlSelf->__PVT__load_resp_yumi_lo = 0;
    vlSelf->__PVT__cache_req_v_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(116, vlSelf->__PVT__cache_req_reg__DOT__data_r);
    vlSelf->__PVT__metadata_reg__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(512, vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r);
    vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(67, vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o);
    vlSelf->__PVT__uce_pump_out__DOT__state_n = 0;
    vlSelf->__PVT__uce_pump_out__DOT__state_r = 0;
    vlSelf->__PVT__uce_pump_out__DOT__stream_size = 0;
    vlSelf->__PVT__uce_pump_out__DOT__fsm_stream = 0;
    vlSelf->__PVT__uce_pump_out__DOT__msg_stream = 0;
    vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt = 0;
    vlSelf->__PVT__uce_pump_out__DOT__cnt_up = 0;
    vlSelf->__PVT__uce_pump_out__DOT__size_li = 0;
    vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt = 0;
    vlSelf->__PVT__uce_pump_out__DOT__wrap_addr = 0;
    vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fsm_last_o = 0;
    VL_ZERO_RESET_W(67, vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o);
    vlSelf->__PVT__uce_pump_in__DOT__state_n = 0;
    vlSelf->__PVT__uce_pump_in__DOT__state_r = 0;
    vlSelf->__PVT__uce_pump_in__DOT__msg_ready_and_lo = 0;
    VL_ZERO_RESET_W(67, vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o);
    vlSelf->__PVT__uce_pump_in__DOT__stream_size = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fsm_stream = 0;
    vlSelf->__PVT__uce_pump_in__DOT__msg_stream = 0;
    vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt = 0;
    vlSelf->__PVT__uce_pump_in__DOT__cnt_up = 0;
    vlSelf->__PVT__uce_pump_in__DOT__size_li = 0;
    vlSelf->__PVT__uce_pump_in__DOT__is_last_cnt = 0;
    vlSelf->__PVT__uce_pump_in__DOT__wrap_addr = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__state_n = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__state_r = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__msg_header_v_li = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__msg_data_v_li = 0;
    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellinp__buffered__DOT__data_fifo__yumi_i = 0;
    VL_ZERO_RESET_W(65, vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o);
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__tail_r = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__empty_r = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__full_r = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(67, vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__tail_r = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__empty_r = 0;
    vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__full_r = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_ZERO_RESET_W(65, vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li = 0;
    vlSelf->__PVT__critical_pending_reg__DOT__data_r = 0;
    vlSelf->__Vdly__critical_pending_reg__DOT__data_r = 0;
}
