// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_uce__pi24.h"

VL_ATTR_COLD void Vtestbench_bp_uce__pi24___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce__0(Vtestbench_bp_uce__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_uce__pi24___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce__0\n"); );
    // Body
    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][0U];
    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][1U];
    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[2U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][2U];
    vlSelf->__PVT__cache_wr_subop = (0xfU & vlSelf->__PVT__cache_req_reg__DOT__data_r[0U]);
    vlSelf->__PVT__mem_wr_subop = ((8U & (IData)(vlSelf->__PVT__cache_wr_subop))
                                    ? ((4U & (IData)(vlSelf->__PVT__cache_wr_subop))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                  ? 0xbU
                                                  : 0xaU)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                  ? 9U
                                                  : 8U)))
                                    : ((4U & (IData)(vlSelf->__PVT__cache_wr_subop))
                                        ? ((2U & (IData)(vlSelf->__PVT__cache_wr_subop))
                                            ? ((1U 
                                                & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                ? 7U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                ? 5U
                                                : 4U))
                                        : ((2U & (IData)(vlSelf->__PVT__cache_wr_subop))
                                            ? ((1U 
                                                & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                ? 1U
                                                : 0U))));
    vlSelf->__PVT__miss_v_r = ((IData)(vlSelf->__PVT__cache_req_v_reg__DOT__data_r) 
                               & ((0U == (0xfU & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                                  >> 4U))) 
                                  | (1U == (0xfU & 
                                            (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                             >> 4U)))));
    vlSelf->__PVT__uc_load_v_r = ((IData)(vlSelf->__PVT__cache_req_v_reg__DOT__data_r) 
                                  & (0x30U == (0xf0U 
                                               & vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])));
    vlSelf->__PVT__uc_amo_v_r = ((IData)(vlSelf->__PVT__cache_req_v_reg__DOT__data_r) 
                                 & (0x50U == (0xf0U 
                                              & vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])));
    vlSelf->__PVT__wt_store_v_r = ((IData)(vlSelf->__PVT__cache_req_v_reg__DOT__data_r) 
                                   & (0x20U == (0xf0U 
                                                & vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])));
    vlSelf->__PVT__uc_store_v_r = ((IData)(vlSelf->__PVT__cache_req_v_reg__DOT__data_r) 
                                   & (0x40U == (0xf0U 
                                                & vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])));
    vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][0U];
    vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][1U];
    vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[2U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][2U];
    vlSelf->__Vcellout__dirty_stat_reg__data_o = ((IData)(vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r)
                                                   ? (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_data_lo)
                                                   : (IData)(vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r));
    vlSelf->__PVT__uc_store_v_li = ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_req_v_lo) 
                                    & (0x40U == (0xf0U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cache_req_cast_o[0U])));
    vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U] 
        = vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U];
    vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[1U] 
        = vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U];
    vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[2U] 
        = vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[2U];
    vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U] 
        = ((0xffffc0ffU & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U]) 
           | (0x3f00U & vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U]));
    vlSelf->__PVT__uce_pump_in__DOT__stream_size = 
        (7U & (((1U < (((IData)(1U) << (7U & (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U] 
                                              >> 0x10U))) 
                       >> 3U)) ? (((IData)(1U) << (7U 
                                                   & (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U] 
                                                      >> 0x10U))) 
                                  >> 3U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__load_resp_v_li = ((IData)(vlSelf->__PVT__fsm_resp_v_li) 
                                     & (((0U == (0xfU 
                                                 & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U])) 
                                         | (2U == (0xfU 
                                                   & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U]))) 
                                        | (5U == (0xfU 
                                                  & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U]))));
    vlSelf->__PVT__uce_pump_in__DOT__msg_stream = (
                                                   (0x25U 
                                                    >> 
                                                    (0xfU 
                                                     & vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                   & (0U 
                                                      < (IData)(vlSelf->__PVT__uce_pump_in__DOT__stream_size)));
    vlSelf->__PVT__uce_pump_in__DOT__fsm_stream = (
                                                   (0x25U 
                                                    >> 
                                                    (0xfU 
                                                     & vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                   & (0U 
                                                      < (IData)(vlSelf->__PVT__uce_pump_in__DOT__stream_size)));
    vlSelf->tag_mem_pkt_v_o = 0U;
    if ((8U & (IData)(vlSelf->__PVT__state_r))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->tag_mem_pkt_v_o = vlSelf->__PVT__load_resp_v_li;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->tag_mem_pkt_v_o = (1U & ((~ (IData)(vlSelf->__PVT__state_r)) 
                                             | (IData)(vlSelf->__PVT__load_resp_v_li)));
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & ((IData)(vlSelf->__Vcellout__dirty_stat_reg__data_o) 
                           >> (IData)(vlSelf->__PVT__way_cnt)))) {
                    vlSelf->tag_mem_pkt_v_o = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->tag_mem_pkt_v_o = 1U;
        }
    }
    vlSelf->__PVT__uce_pump_in__DOT__is_last_cnt = 
        (1U & (((IData)(vlSelf->__PVT__uce_pump_in__DOT__state_r) 
                & ((IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                   == (7U & (((vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                               << 0x15U) | (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                                            >> 0xbU)) 
                             + (IData)(vlSelf->__PVT__uce_pump_in__DOT__stream_size))))) 
               | ((~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__fsm_stream)) 
                  & (~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__msg_stream)))));
    vlSelf->__PVT__uce_pump_in__DOT__size_li = ((IData)(vlSelf->__PVT__uce_pump_in__DOT__fsm_stream)
                                                 ? (IData)(vlSelf->__PVT__uce_pump_in__DOT__stream_size)
                                                 : 0U);
    vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li 
        = (((4U <= (IData)(vlSelf->__PVT__uce_pump_in__DOT__size_li)) 
            << 2U) | (((2U <= (IData)(vlSelf->__PVT__uce_pump_in__DOT__size_li)) 
                       << 1U) | (1U <= (IData)(vlSelf->__PVT__uce_pump_in__DOT__size_li))));
    vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt = ((4U 
                                                  & (IData)(vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt)) 
                                                 | ((2U 
                                                     & (((2U 
                                                          & (IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                                                          >> 1U)
                                                          : 
                                                         (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                                                          >> 0xcU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((1U 
                                                           & (IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                           ? (IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r)
                                                           : 
                                                          (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                                                           >> 0xbU)))));
    vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt = ((3U 
                                                  & (IData)(vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt)) 
                                                 | (4U 
                                                    & (((4U 
                                                         & (IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                                                         >> 0xdU)) 
                                                       << 2U)));
    vlSelf->__PVT__uce_pump_in__DOT__wrap_addr = ((0xffffffffc0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                       << 0x18U) 
                                                      | (0xffffffffffffc0ULL 
                                                         & ((QData)((IData)(
                                                                            vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                            >> 8U)))) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt) 
                                                                      << 3U) 
                                                                     | (7U 
                                                                        & (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                                                                           >> 8U))))));
    vlSelf->__PVT__fsm_resp_addr_li = (0xffffffffffULL 
                                       & (((~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__msg_stream)) 
                                           & (IData)(vlSelf->__PVT__uce_pump_in__DOT__fsm_stream))
                                           ? ((IData)(vlSelf->__PVT__uce_pump_in__DOT__state_r)
                                               ? vlSelf->__PVT__uce_pump_in__DOT__wrap_addr
                                               : (((QData)((IData)(
                                                                   vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                        >> 8U))))
                                           : (((IData)(vlSelf->__PVT__uce_pump_in__DOT__msg_stream) 
                                               & (~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__fsm_stream)))
                                               ? (((QData)((IData)(
                                                                   vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                        >> 8U)))
                                               : ((IData)(vlSelf->__PVT__uce_pump_in__DOT__state_r)
                                                   ? vlSelf->__PVT__uce_pump_in__DOT__wrap_addr
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                         >> 8U)))))));
}

VL_ATTR_COLD void Vtestbench_bp_uce__pi24___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce__2(Vtestbench_bp_uce__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_uce__pi24___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce__2\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_hfc3bf48e__0;
    // Body
    vlSelf->__Vcellout__metadata_reg__data_o = ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cache_req_v_reg__DOT__data_r)
                                                 ? 
                                                (0xeU 
                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_or_repl_way) 
                                                    << 1U))
                                                 : (IData)(vlSelf->__PVT__metadata_reg__DOT__dff__DOT__data_r));
    vlSelf->__PVT__stat_mem_pkt_cast_o = 0U;
    vlSelf->stat_mem_pkt_v_o = 0U;
    vlSelf->data_mem_pkt_v_o = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[0U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[1U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[2U] = 0U;
    vlSelf->__PVT__tag_mem_pkt_cast_o = 0ULL;
    vlSelf->__PVT__fsm_cmd_header_lo[0U] = 0U;
    vlSelf->__PVT__fsm_cmd_header_lo[1U] = 0U;
    vlSelf->__PVT__fsm_cmd_header_lo[2U] = 0U;
    if (vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r) {
        __Vtemp_hfc3bf48e__0[0U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0U];
        __Vtemp_hfc3bf48e__0[1U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[1U];
        __Vtemp_hfc3bf48e__0[2U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[2U];
        __Vtemp_hfc3bf48e__0[3U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[3U];
        __Vtemp_hfc3bf48e__0[4U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[4U];
        __Vtemp_hfc3bf48e__0[5U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[5U];
        __Vtemp_hfc3bf48e__0[6U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[6U];
        __Vtemp_hfc3bf48e__0[7U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[7U];
        __Vtemp_hfc3bf48e__0[8U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[8U];
        __Vtemp_hfc3bf48e__0[9U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[9U];
        __Vtemp_hfc3bf48e__0[0xaU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xaU];
        __Vtemp_hfc3bf48e__0[0xbU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xbU];
        __Vtemp_hfc3bf48e__0[0xcU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xcU];
        __Vtemp_hfc3bf48e__0[0xdU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xdU];
        __Vtemp_hfc3bf48e__0[0xeU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xeU];
        __Vtemp_hfc3bf48e__0[0xfU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__read_data_rotate__DOT__temp[0xfU];
    } else {
        __Vtemp_hfc3bf48e__0[0U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0U];
        __Vtemp_hfc3bf48e__0[1U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[1U];
        __Vtemp_hfc3bf48e__0[2U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[2U];
        __Vtemp_hfc3bf48e__0[3U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[3U];
        __Vtemp_hfc3bf48e__0[4U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[4U];
        __Vtemp_hfc3bf48e__0[5U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[5U];
        __Vtemp_hfc3bf48e__0[6U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[6U];
        __Vtemp_hfc3bf48e__0[7U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[7U];
        __Vtemp_hfc3bf48e__0[8U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[8U];
        __Vtemp_hfc3bf48e__0[9U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[9U];
        __Vtemp_hfc3bf48e__0[0xaU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xaU];
        __Vtemp_hfc3bf48e__0[0xbU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xbU];
        __Vtemp_hfc3bf48e__0[0xcU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xcU];
        __Vtemp_hfc3bf48e__0[0xdU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xdU];
        __Vtemp_hfc3bf48e__0[0xeU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xeU];
        __Vtemp_hfc3bf48e__0[0xfU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xfU];
    }
    if ((8U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__stat_mem_pkt_cast_o 
                        = (2U | ((0x7e0U & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                            >> 9U)) 
                                 | (0x1cU & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                             << 1U))));
                    vlSelf->stat_mem_pkt_v_o = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->data_mem_pkt_v_o = vlSelf->__PVT__load_resp_v_li;
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (2U | (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = ((0x3ffU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                           | ((IData)((((QData)((IData)(
                                                        vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                              << 0xaU));
                    vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                        = (((IData)((((QData)((IData)(
                                                      vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                            >> 0x16U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                  >> 0x20U)) 
                                         << 0xaU));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x7fc00U & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7ffffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x16U)));
                } else {
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x1fffU & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7e000U & ((IData)((vlSelf->__PVT__fsm_resp_addr_li 
                                                   >> 6U)) 
                                          << 0xdU)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = ((3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                               << 0xaU) | (((7U >= 
                                             (7U & (IData)(
                                                           (vlSelf->__PVT__fsm_resp_addr_li 
                                                            >> 3U))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__fsm_resp_addr_li 
                                                               >> 3U)))))
                                             : 0U) 
                                           << 2U)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                        = (((3U & ((IData)((((QData)((IData)(
                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                                   >> 0x16U)) | (((7U 
                                                   >= 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__fsm_resp_addr_li 
                                                               >> 3U))))
                                                   ? 
                                                  (0xffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__fsm_resp_addr_li 
                                                                  >> 3U)))))
                                                   : 0U) 
                                                 >> 0x1eU)) 
                           | ((0x3fcU & ((IData)((((QData)((IData)(
                                                                   vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                                         >> 0x16U)) 
                              | ((IData)(((((QData)((IData)(
                                                            vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                          >> 0x20U)) 
                                 << 0xaU)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x7e000U & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7ffffU & ((3U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                          >> 0x20U)) 
                                                 >> 0x16U)) 
                                          | ((0x1c00U 
                                              & (vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[1U] 
                                                 >> 0x13U)) 
                                             | (0x3fcU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x16U))))));
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = (1ULL | (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                           | ((QData)((IData)((0x3fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__fsm_resp_addr_li 
                                                          >> 6U))))) 
                              << 0x1dU));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = ((0x7e0000007ULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                           | ((QData)((IData)((0x600000U 
                                               | ((0x3800000U 
                                                   & (vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[1U] 
                                                      >> 6U)) 
                                                  | (0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__fsm_resp_addr_li 
                                                                >> 0xcU))))))) 
                              << 3U));
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = (1U | (0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]));
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                           | ((IData)((QData)((IData)(
                                                      ((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                          ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__icache_tag_mem_o
                                                          : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                                        << 0xcU) 
                                                       | (0xfc0U 
                                                          & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                                             >> 8U)))))) 
                              << 8U));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xffff0000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (((IData)((QData)((IData)(
                                                       ((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                           ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__icache_tag_mem_o
                                                           : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                                         << 0xcU) 
                                                        | (0xfc0U 
                                                           & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                                              >> 8U)))))) 
                               >> 0x18U) | ((IData)(
                                                    ((QData)((IData)(
                                                                     ((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                                         ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__icache_tag_mem_o
                                                                         : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                                                       << 0xcU) 
                                                                      | (0xfc0U 
                                                                         & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                                                            >> 8U))))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = (0x60000U | (0xfff8ffffU 
                                       & vlSelf->__PVT__fsm_cmd_header_lo[1U]));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xe1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (0x1e000000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                             << 0x19U)));
                }
            }
        } else {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->data_mem_pkt_v_o = (1U & ((~ (IData)(vlSelf->__PVT__state_r)) 
                                                  | (IData)(vlSelf->__PVT__load_resp_v_li)));
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x1fffU & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7e000U & ((IData)((vlSelf->__PVT__fsm_resp_addr_li 
                                                   >> 6U)) 
                                          << 0xdU)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = ((3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                               << 0xaU) | (((7U >= 
                                             (7U & (IData)(
                                                           (vlSelf->__PVT__fsm_resp_addr_li 
                                                            >> 3U))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__fsm_resp_addr_li 
                                                               >> 3U)))))
                                             : 0U) 
                                           << 2U)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                        = (((3U & ((IData)((((QData)((IData)(
                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                                   >> 0x16U)) | (((7U 
                                                   >= 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__fsm_resp_addr_li 
                                                               >> 3U))))
                                                   ? 
                                                  (0xffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__fsm_resp_addr_li 
                                                                  >> 3U)))))
                                                   : 0U) 
                                                 >> 0x1eU)) 
                           | ((0x3fcU & ((IData)((((QData)((IData)(
                                                                   vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                                         >> 0x16U)) 
                              | ((IData)(((((QData)((IData)(
                                                            vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                          >> 0x20U)) 
                                 << 0xaU)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x7e000U & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7ffffU & ((3U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                          >> 0x20U)) 
                                                 >> 0x16U)) 
                                          | ((0x1c00U 
                                              & (vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[1U] 
                                                 >> 0x13U)) 
                                             | (0x3fcU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x16U))))));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = (1ULL | (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                           | ((QData)((IData)((0x3fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__fsm_resp_addr_li 
                                                          >> 6U))))) 
                              << 0x1dU));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = ((0x7e0000007ULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                           | ((QData)((IData)((0x600000U 
                                               | ((0x3800000U 
                                                   & (vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[1U] 
                                                      >> 6U)) 
                                                  | (0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__fsm_resp_addr_li 
                                                                >> 0xcU))))))) 
                              << 3U));
                } else {
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (1U | (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x3ffU & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7fc00U & ((0x7e000U 
                                           & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                              >> 1U)) 
                                          | (0x1c00U 
                                             & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                                << 9U)))));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (0x3fcU | vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = (3ULL | (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = ((0x3ffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                           | ((QData)((IData)(((0x1f8U 
                                                & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                                   >> 0xbU)) 
                                               | (7U 
                                                  & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                                     >> 1U))))) 
                              << 0x1aU));
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    if (vlSelf->__PVT__miss_v_r) {
                        vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                            = (0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]);
                        vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                            = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                               | ((IData)((0x60000000000ULL 
                                           | (0xfffffffff8ULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                  << 0x18U) 
                                                 | (0xfffffffffffff8ULL 
                                                    & ((QData)((IData)(
                                                                       vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                       >> 8U)))))) 
                                  << 8U));
                        vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                            = ((0xfff80000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                               | (((IData)((0x60000000000ULL 
                                            | (0xfffffffff8ULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                   << 0x18U) 
                                                  | (0xfffffffffffff8ULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                        >> 8U)))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x60000000000ULL 
                                                          | (0xfffffffff8ULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                                 << 0x18U) 
                                                                | (0xfffffffffffff8ULL 
                                                                   & ((QData)((IData)(
                                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                                      >> 8U))))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                        vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                            = ((0x1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                               | (0xfe000000U & ((0xe0000000U 
                                                  & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                                     << 0x1cU)) 
                                                 | (0x1e000000U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                                       << 0x19U)))));
                    } else if (((IData)(vlSelf->__PVT__uc_load_v_r) 
                                | (IData)(vlSelf->__PVT__uc_amo_v_r))) {
                        vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                            = ((0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                               | ((IData)(vlSelf->__PVT__uc_load_v_r)
                                   ? 2U : 5U));
                        vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                            = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                               | ((IData)((0x7ffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                 >> 8U)))) 
                                  << 8U));
                        vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                            = ((0xfff80000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                               | (((IData)((0x7ffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                  >> 8U)))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x7ffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                              << 0x18U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                                >> 8U))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                        vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                            = ((0xe1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                               | (0x1e000000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                                 << 0x19U)));
                        vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                            = ((0xffffff0fU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                               | ((IData)(vlSelf->__PVT__mem_wr_subop) 
                                  << 4U));
                    }
                } else {
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = (1U | (0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]));
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                           | ((IData)((0x60000000000ULL 
                                       | (0xffffffffc0ULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                              << 0x18U) 
                                             | (0xffffffffffffc0ULL 
                                                & ((QData)((IData)(
                                                                   vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                   >> 8U)))))) 
                              << 8U));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (((IData)((0x60000000000ULL 
                                        | (0xffffffffc0ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                               << 0x18U) 
                                              | (0xffffffffffffc0ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                    >> 8U)))))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x60000000000ULL 
                                                      | (0xffffffffc0ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                             << 0x18U) 
                                                            | (0xffffffffffffc0ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                                  >> 8U))))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xe1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (0x1e000000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                             << 0x19U)));
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__stat_mem_pkt_cast_o 
                        = (2U | ((0x7e0U & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                            >> 9U)) 
                                 | (0x1cU & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                             << 1U))));
                    vlSelf->stat_mem_pkt_v_o = (1U 
                                                & (IData)(vlSelf->__Vcellout__metadata_reg__data_o));
                    vlSelf->data_mem_pkt_v_o = (1U 
                                                & (IData)(vlSelf->__Vcellout__metadata_reg__data_o));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (1U | (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x3ffU & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7fc00U & ((0x7e000U 
                                           & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                              >> 1U)) 
                                          | (0x1c00U 
                                             & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                                << 9U)))));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (0x3fcU | vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    if (((IData)(vlSelf->__PVT__uc_store_v_r) 
                         | (IData)(vlSelf->__PVT__wt_store_v_r))) {
                        vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                            = (3U | (0xfffffff0U & 
                                     vlSelf->__PVT__fsm_cmd_header_lo[0U]));
                        vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                            = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                               | ((IData)((0x7ffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                 >> 8U)))) 
                                  << 8U));
                        vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                            = ((0xfff80000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                               | (((IData)((0x7ffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                  >> 8U)))) 
                                   >> 0x18U) | ((IData)(
                                                        ((0x7ffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                              << 0x18U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                                >> 8U))) 
                                                         >> 0x20U)) 
                                                << 8U)));
                        vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                            = ((0xe1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                               | (0x1e000000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                                 << 0x19U)));
                        vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                            = ((0xffffff0fU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                               | ((IData)(vlSelf->__PVT__mem_wr_subop) 
                                  << 4U));
                    }
                }
            } else if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                    = (1U | (0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]));
                vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                    = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                       | ((IData)((QData)((IData)((
                                                   (((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                      ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__icache_tag_mem_o
                                                      : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                                    << 0xcU) 
                                                   | ((IData)(vlSelf->__PVT__index_cnt) 
                                                      << 6U))))) 
                          << 8U));
                vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                    = ((0xffff0000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                       | (((IData)((QData)((IData)(
                                                   ((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                       ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__icache_tag_mem_o
                                                       : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                                     << 0xcU) 
                                                    | ((IData)(vlSelf->__PVT__index_cnt) 
                                                       << 6U))))) 
                           >> 0x18U) | ((IData)(((QData)((IData)(
                                                                 ((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                                     ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__icache_tag_mem_o
                                                                     : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                                                   << 0xcU) 
                                                                  | ((IData)(vlSelf->__PVT__index_cnt) 
                                                                     << 6U)))) 
                                                 >> 0x20U)) 
                                        << 8U)));
                vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                    = (0x60000U | (0xfff8ffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]));
                vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                    = ((0xe1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                       | (0x1e000000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                         << 0x19U)));
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & ((IData)(vlSelf->__Vcellout__dirty_stat_reg__data_o) 
                           >> (IData)(vlSelf->__PVT__way_cnt)))) {
                    vlSelf->__PVT__stat_mem_pkt_cast_o 
                        = (2U | (((IData)(vlSelf->__PVT__index_cnt) 
                                  << 5U) | ((IData)(vlSelf->__PVT__way_cnt) 
                                            << 2U)));
                    vlSelf->stat_mem_pkt_v_o = 1U;
                    vlSelf->data_mem_pkt_v_o = 1U;
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (1U | (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x3ffU & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7fc00U & (((IData)(vlSelf->__PVT__index_cnt) 
                                           << 0xdU) 
                                          | ((IData)(vlSelf->__PVT__way_cnt) 
                                             << 0xaU))));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (0x3fcU | vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                }
            } else {
                vlSelf->__PVT__stat_mem_pkt_cast_o 
                    = (1U | (0x7fcU & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)));
                vlSelf->__PVT__stat_mem_pkt_cast_o 
                    = ((0x1fU & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                       | ((IData)(vlSelf->__PVT__index_cnt) 
                          << 5U));
                vlSelf->stat_mem_pkt_v_o = 1U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__stat_mem_pkt_cast_o = (0x7fcU 
                                                  & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o));
            vlSelf->__PVT__stat_mem_pkt_cast_o = ((0x1fU 
                                                   & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                                                  | ((IData)(vlSelf->__PVT__index_cnt) 
                                                     << 5U));
            vlSelf->stat_mem_pkt_v_o = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    if ((1U & ((IData)(vlSelf->__Vcellout__dirty_stat_reg__data_o) 
                               >> (IData)(vlSelf->__PVT__way_cnt)))) {
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = (3ULL | (0x7fffffff8ULL 
                                       & vlSelf->__PVT__tag_mem_pkt_cast_o));
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = ((0x3ffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                               | ((QData)((IData)((
                                                   ((IData)(vlSelf->__PVT__index_cnt) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->__PVT__way_cnt)))) 
                                  << 0x1aU));
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o);
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                     | ((QData)((IData)(vlSelf->__PVT__index_cnt)) 
                        << 0x1dU));
            }
        }
    }
    vlSelf->__PVT__writeback_data = (((QData)((IData)(
                                                      __Vtemp_hfc3bf48e__0[
                                                      (((IData)(0x3fU) 
                                                        + 
                                                        (0x1c0U 
                                                         & (((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                              ? (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r)
                                                              : 
                                                             ((vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                               << 0x15U) 
                                                              | (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                                 >> 0xbU))) 
                                                            << 6U))) 
                                                       >> 5U)])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp_hfc3bf48e__0[
                                                                  (0xeU 
                                                                   & (((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                                        ? (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r)
                                                                        : 
                                                                       ((vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                                         << 0x15U) 
                                                                        | (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                                           >> 0xbU))) 
                                                                      << 1U))])));
    vlSelf->__PVT__uce_pump_out__DOT__stream_size = 
        (7U & (((1U < (((IData)(1U) << (7U & (vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                                              >> 0x10U))) 
                       >> 3U)) ? (((IData)(1U) << (7U 
                                                   & (vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                                                      >> 0x10U))) 
                                  >> 3U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__fsm_cmd_data_lo = 0ULL;
    if ((8U & (IData)(vlSelf->__PVT__state_r))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__fsm_cmd_data_lo 
                        = vlSelf->__PVT__writeback_data;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                             >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss_v_r)))) {
                    if (((IData)(vlSelf->__PVT__uc_load_v_r) 
                         | (IData)(vlSelf->__PVT__uc_amo_v_r))) {
                        vlSelf->__PVT__fsm_cmd_data_lo 
                            = (((QData)((IData)(vlSelf->__PVT__cache_req_reg__DOT__data_r[3U])) 
                                << 0x2dU) | (((QData)((IData)(
                                                              vlSelf->__PVT__cache_req_reg__DOT__data_r[2U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                >> 0x13U)));
                    }
                }
            } else {
                vlSelf->__PVT__fsm_cmd_data_lo = vlSelf->__PVT__writeback_data;
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                if (((IData)(vlSelf->__PVT__uc_store_v_r) 
                     | (IData)(vlSelf->__PVT__wt_store_v_r))) {
                    vlSelf->__PVT__fsm_cmd_data_lo 
                        = (((QData)((IData)(vlSelf->__PVT__cache_req_reg__DOT__data_r[3U])) 
                            << 0x2dU) | (((QData)((IData)(
                                                          vlSelf->__PVT__cache_req_reg__DOT__data_r[2U])) 
                                          << 0xdU) 
                                         | ((QData)((IData)(
                                                            vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                            >> 0x13U)));
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
            vlSelf->__PVT__fsm_cmd_data_lo = vlSelf->__PVT__writeback_data;
        }
    }
    vlSelf->__PVT__uce_pump_out__DOT__msg_stream = 
        ((0x2aU >> (0xfU & vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
         & (0U < (IData)(vlSelf->__PVT__uce_pump_out__DOT__stream_size)));
    vlSelf->__PVT__uce_pump_out__DOT__fsm_stream = 
        ((0x2aU >> (0xfU & vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
         & (0U < (IData)(vlSelf->__PVT__uce_pump_out__DOT__stream_size)));
    vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt = 
        (1U & (((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r) 
                & ((IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                   == (7U & (((vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                               << 0x15U) | (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                            >> 0xbU)) 
                             + (IData)(vlSelf->__PVT__uce_pump_out__DOT__stream_size))))) 
               | ((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)) 
                  & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))));
    vlSelf->__PVT__uce_pump_out__DOT__size_li = ((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)
                                                  ? (IData)(vlSelf->__PVT__uce_pump_out__DOT__stream_size)
                                                  : 0U);
    if (((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)) 
         & (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream))) {
        vlSelf->mem_cmd_v_o = vlSelf->__PVT__fsm_cmd_v_lo;
        vlSelf->__PVT__fsm_cmd_ready_and_li = ((IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt) 
                                               & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__proc_cmd_ready_and_li));
        vlSelf->__PVT__uce_pump_out__DOT__cnt_up = 
            (((IData)(vlSelf->mem_cmd_v_o) & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__proc_cmd_ready_and_li)) 
             & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt)));
    } else if (((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream) 
                & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))) {
        vlSelf->__PVT__fsm_cmd_ready_and_li = (1U & 
                                               ((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt)) 
                                                | (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__proc_cmd_ready_and_li)));
        vlSelf->mem_cmd_v_o = ((IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt) 
                               & (IData)(vlSelf->__PVT__fsm_cmd_v_lo));
        vlSelf->__PVT__uce_pump_out__DOT__cnt_up = 
            (((IData)(vlSelf->__PVT__fsm_cmd_ready_and_li) 
              & (IData)(vlSelf->__PVT__fsm_cmd_v_lo)) 
             & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt)));
    } else {
        vlSelf->__PVT__fsm_cmd_ready_and_li = (1U & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__proc_cmd_ready_and_li));
        vlSelf->mem_cmd_v_o = vlSelf->__PVT__fsm_cmd_v_lo;
        vlSelf->__PVT__uce_pump_out__DOT__cnt_up = 
            (((IData)(vlSelf->__PVT__fsm_cmd_ready_and_li) 
              & (IData)(vlSelf->__PVT__fsm_cmd_v_lo)) 
             & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt)));
    }
    vlSelf->mem_cmd_last_o = ((IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt) 
                              & (IData)(vlSelf->mem_cmd_v_o));
    vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li 
        = (((4U <= (IData)(vlSelf->__PVT__uce_pump_out__DOT__size_li)) 
            << 2U) | (((2U <= (IData)(vlSelf->__PVT__uce_pump_out__DOT__size_li)) 
                       << 1U) | (1U <= (IData)(vlSelf->__PVT__uce_pump_out__DOT__size_li))));
    vlSelf->__PVT__fsm_cmd_new = (((IData)(vlSelf->__PVT__fsm_cmd_ready_and_li) 
                                   & (IData)(vlSelf->__PVT__fsm_cmd_v_lo)) 
                                  & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)));
    vlSelf->__PVT__fsm_cmd_done = (((IData)(vlSelf->__PVT__fsm_cmd_ready_and_li) 
                                    & (IData)(vlSelf->__PVT__fsm_cmd_v_lo)) 
                                   & (IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt));
    vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt = ((4U 
                                                   & (IData)(vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt)) 
                                                  | ((2U 
                                                      & (((2U 
                                                           & (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                                                           >> 1U)
                                                           : 
                                                          (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                           >> 0xcU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((1U 
                                                            & (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                            ? (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r)
                                                            : 
                                                           (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                            >> 0xbU)))));
    vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt = ((3U 
                                                   & (IData)(vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt)) 
                                                  | (4U 
                                                     & (((4U 
                                                          & (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                                                          >> 2U)
                                                          : 
                                                         (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                          >> 0xdU)) 
                                                        << 2U)));
    vlSelf->__PVT__uce_pump_out__DOT__state_n = (1U 
                                                 & ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                     ? 
                                                    (~ (IData)(vlSelf->__PVT__fsm_cmd_done))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__fsm_cmd_new) 
                                                     & ((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream) 
                                                        | (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))));
    vlSelf->__PVT__uce_pump_out__DOT__wrap_addr = (
                                                   (0xffffffffc0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                        << 0x18U) 
                                                       | (0xffffffffffffc0ULL 
                                                          & ((QData)((IData)(
                                                                             vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                             >> 8U)))) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt) 
                                                                       << 3U) 
                                                                      | (7U 
                                                                         & (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                                            >> 8U))))));
    vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[0U] 
        = vlSelf->__PVT__fsm_cmd_header_lo[0U];
    vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[1U] 
        = vlSelf->__PVT__fsm_cmd_header_lo[1U];
    vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[2U] 
        = vlSelf->__PVT__fsm_cmd_header_lo[2U];
    vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[0U] 
        = ((0xffU & vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[0U]) 
           | ((IData)((0xffffffffffULL & (((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)) 
                                           & (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream))
                                           ? ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                               ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                               : (((QData)((IData)(
                                                                   vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                        >> 8U))))
                                           : (((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream) 
                                               & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))
                                               ? (((QData)((IData)(
                                                                   vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                        >> 8U)))
                                               : ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                   ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                         >> 8U)))))))) 
              << 8U));
    vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[1U] 
        = ((0xffff0000U & vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[1U]) 
           | (((IData)((0xffffffffffULL & (((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)) 
                                            & (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream))
                                            ? ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                         >> 8U))))
                                            : (((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream) 
                                                & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                         >> 8U)))
                                                : ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                    ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                        << 0x18U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                          >> 8U)))))))) 
               >> 0x18U) | ((IData)(((0xffffffffffULL 
                                      & (((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)) 
                                          & (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream))
                                          ? ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                              ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                              : (((QData)((IData)(
                                                                  vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                     << 0x18U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                       >> 8U))))
                                          : (((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream) 
                                              & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                     << 0x18U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                       >> 8U)))
                                              : ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                  ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                        >> 8U))))))) 
                                     >> 0x20U)) << 8U)));
}

VL_ATTR_COLD void Vtestbench_bp_uce__pi24___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__dcache_uce__0(Vtestbench_bp_uce__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_uce__pi24___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__dcache_uce__0\n"); );
    // Body
    vlSelf->__PVT__cache_wr_subop = (0xfU & vlSelf->__PVT__cache_req_reg__DOT__data_r[0U]);
    vlSelf->__PVT__mem_wr_subop = ((8U & (IData)(vlSelf->__PVT__cache_wr_subop))
                                    ? ((4U & (IData)(vlSelf->__PVT__cache_wr_subop))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                  ? 0xbU
                                                  : 0xaU)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                  ? 9U
                                                  : 8U)))
                                    : ((4U & (IData)(vlSelf->__PVT__cache_wr_subop))
                                        ? ((2U & (IData)(vlSelf->__PVT__cache_wr_subop))
                                            ? ((1U 
                                                & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                ? 7U
                                                : 6U)
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                ? 5U
                                                : 4U))
                                        : ((2U & (IData)(vlSelf->__PVT__cache_wr_subop))
                                            ? ((1U 
                                                & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                ? 3U
                                                : 2U)
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__cache_wr_subop))
                                                ? 1U
                                                : 0U))));
    vlSelf->__PVT__miss_v_r = ((IData)(vlSelf->__PVT__cache_req_v_reg__DOT__data_r) 
                               & ((0U == (0xfU & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                                  >> 4U))) 
                                  | (1U == (0xfU & 
                                            (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                             >> 4U)))));
    vlSelf->__PVT__uc_load_v_r = ((IData)(vlSelf->__PVT__cache_req_v_reg__DOT__data_r) 
                                  & (0x30U == (0xf0U 
                                               & vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])));
    vlSelf->__PVT__uc_amo_v_r = ((IData)(vlSelf->__PVT__cache_req_v_reg__DOT__data_r) 
                                 & (0x50U == (0xf0U 
                                              & vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])));
    vlSelf->__PVT__wt_store_v_r = ((IData)(vlSelf->__PVT__cache_req_v_reg__DOT__data_r) 
                                   & (0x20U == (0xf0U 
                                                & vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])));
    vlSelf->__PVT__uc_store_v_r = ((IData)(vlSelf->__PVT__cache_req_v_reg__DOT__data_r) 
                                   & (0x40U == (0xf0U 
                                                & vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])));
    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][0U];
    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][1U];
    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[2U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][2U];
    vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][0U];
    vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][1U];
    vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[2U] 
        = vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r][2U];
    if (vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__state_r) {
        vlSelf->mem_resp_ready_and_o = (1U & (~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__full_r)));
        vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__msg_header_v_li = 0U;
        vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__msg_data_v_li 
            = ((IData)(vlSelf->mem_resp_ready_and_o) 
               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[0U] 
                  >> 2U));
        vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__state_n 
            = (1U & (~ ((IData)(vlSelf->mem_resp_ready_and_o) 
                        & (6U == (6U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[0U])))));
    } else {
        vlSelf->mem_resp_ready_and_o = (1U & ((~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__full_r)) 
                                              & (~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__full_r))));
        vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__msg_header_v_li 
            = ((IData)(vlSelf->mem_resp_ready_and_o) 
               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[0U] 
                  >> 2U));
        vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__msg_data_v_li 
            = ((IData)(vlSelf->mem_resp_ready_and_o) 
               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[0U] 
                  >> 2U));
        vlSelf->__PVT__uce_pump_in__DOT__fifo__DOT__state_n 
            = ((IData)(vlSelf->mem_resp_ready_and_o) 
               & (4U == (6U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__negedge_latch__data_o[0U])));
    }
    vlSelf->__Vcellout__dirty_stat_reg__data_o = ((IData)(vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r)
                                                   ? (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__stat_mem__data_o)
                                                   : (IData)(vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r));
    vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U] 
        = vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U];
    vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[1U] 
        = vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U];
    vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[2U] 
        = vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[2U];
    vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U] 
        = ((0xffffc0ffU & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U]) 
           | (0x3f00U & vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U]));
    vlSelf->__PVT__uce_pump_in__DOT__stream_size = 
        (7U & (((1U < (((IData)(1U) << (7U & (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U] 
                                              >> 0x10U))) 
                       >> 3U)) ? (((IData)(1U) << (7U 
                                                   & (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U] 
                                                      >> 0x10U))) 
                                  >> 3U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__load_resp_v_li = ((IData)(vlSelf->__PVT__fsm_resp_v_li) 
                                     & (((0U == (0xfU 
                                                 & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U])) 
                                         | (2U == (0xfU 
                                                   & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U]))) 
                                        | (5U == (0xfU 
                                                  & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U]))));
    vlSelf->__PVT__uce_pump_in__DOT__msg_stream = (
                                                   (0x25U 
                                                    >> 
                                                    (0xfU 
                                                     & vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                   & (0U 
                                                      < (IData)(vlSelf->__PVT__uce_pump_in__DOT__stream_size)));
    vlSelf->__PVT__uce_pump_in__DOT__fsm_stream = (
                                                   (0x25U 
                                                    >> 
                                                    (0xfU 
                                                     & vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                   & (0U 
                                                      < (IData)(vlSelf->__PVT__uce_pump_in__DOT__stream_size)));
    vlSelf->tag_mem_pkt_v_o = 0U;
    if ((8U & (IData)(vlSelf->__PVT__state_r))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->tag_mem_pkt_v_o = vlSelf->__PVT__load_resp_v_li;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->tag_mem_pkt_v_o = (1U & ((~ (IData)(vlSelf->__PVT__state_r)) 
                                             | (IData)(vlSelf->__PVT__load_resp_v_li)));
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & ((IData)(vlSelf->__Vcellout__dirty_stat_reg__data_o) 
                           >> (IData)(vlSelf->__PVT__way_cnt)))) {
                    vlSelf->tag_mem_pkt_v_o = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->tag_mem_pkt_v_o = 1U;
        }
    }
    vlSelf->__PVT__uce_pump_in__DOT__is_last_cnt = 
        (1U & (((IData)(vlSelf->__PVT__uce_pump_in__DOT__state_r) 
                & ((IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                   == (7U & (((vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                               << 0x15U) | (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                                            >> 0xbU)) 
                             + (IData)(vlSelf->__PVT__uce_pump_in__DOT__stream_size))))) 
               | ((~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__fsm_stream)) 
                  & (~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__msg_stream)))));
    vlSelf->__PVT__uce_pump_in__DOT__size_li = ((IData)(vlSelf->__PVT__uce_pump_in__DOT__fsm_stream)
                                                 ? (IData)(vlSelf->__PVT__uce_pump_in__DOT__stream_size)
                                                 : 0U);
    vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li 
        = (((4U <= (IData)(vlSelf->__PVT__uce_pump_in__DOT__size_li)) 
            << 2U) | (((2U <= (IData)(vlSelf->__PVT__uce_pump_in__DOT__size_li)) 
                       << 1U) | (1U <= (IData)(vlSelf->__PVT__uce_pump_in__DOT__size_li))));
    vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt = ((4U 
                                                  & (IData)(vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt)) 
                                                 | ((2U 
                                                     & (((2U 
                                                          & (IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                                                          >> 1U)
                                                          : 
                                                         (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                                                          >> 0xcU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((1U 
                                                           & (IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                           ? (IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r)
                                                           : 
                                                          (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                                                           >> 0xbU)))));
    vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt = ((3U 
                                                  & (IData)(vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt)) 
                                                 | (4U 
                                                    & (((4U 
                                                         & (IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                                                         >> 0xdU)) 
                                                       << 2U)));
    vlSelf->__PVT__uce_pump_in__DOT__wrap_addr = ((0xffffffffc0ULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                       << 0x18U) 
                                                      | (0xffffffffffffc0ULL 
                                                         & ((QData)((IData)(
                                                                            vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                            >> 8U)))) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__uce_pump_in__DOT__wrap_cnt) 
                                                                      << 3U) 
                                                                     | (7U 
                                                                        & (vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U] 
                                                                           >> 8U))))));
    vlSelf->__PVT__fsm_resp_addr_li = (0xffffffffffULL 
                                       & (((~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__msg_stream)) 
                                           & (IData)(vlSelf->__PVT__uce_pump_in__DOT__fsm_stream))
                                           ? ((IData)(vlSelf->__PVT__uce_pump_in__DOT__state_r)
                                               ? vlSelf->__PVT__uce_pump_in__DOT__wrap_addr
                                               : (((QData)((IData)(
                                                                   vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                        >> 8U))))
                                           : (((IData)(vlSelf->__PVT__uce_pump_in__DOT__msg_stream) 
                                               & (~ (IData)(vlSelf->__PVT__uce_pump_in__DOT__fsm_stream)))
                                               ? (((QData)((IData)(
                                                                   vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                        >> 8U)))
                                               : ((IData)(vlSelf->__PVT__uce_pump_in__DOT__state_r)
                                                   ? vlSelf->__PVT__uce_pump_in__DOT__wrap_addr
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o[0U])) 
                                                         >> 8U)))))));
}

VL_ATTR_COLD void Vtestbench_bp_uce__pi24___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__dcache_uce__1(Vtestbench_bp_uce__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_uce__pi24___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__dcache_uce__1\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_h9a477a3b__0;
    // Body
    vlSelf->__Vcellout__metadata_reg__data_o = ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cache_req_v_reg__DOT__data_r)
                                                 ? (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cache_req_metadata_cast_o)
                                                 : (IData)(vlSelf->__PVT__metadata_reg__DOT__dff__DOT__data_r));
    vlSelf->__PVT__uc_store_v_li = ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__dcache_req_v_lo) 
                                    & (0x40U == (0xf0U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cache_req_cast_o[0U])));
    vlSelf->stat_mem_pkt_v_o = 0U;
    vlSelf->__PVT__stat_mem_pkt_cast_o = 0U;
    vlSelf->__PVT__fsm_cmd_header_lo[0U] = 0U;
    vlSelf->__PVT__fsm_cmd_header_lo[1U] = 0U;
    vlSelf->__PVT__fsm_cmd_header_lo[2U] = 0U;
    vlSelf->__PVT__tag_mem_pkt_cast_o = 0ULL;
    vlSelf->data_mem_pkt_v_o = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[0U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[1U] = 0U;
    vlSelf->__PVT__data_mem_pkt_cast_o[2U] = 0U;
    if (vlSelf->__PVT__dirty_data_reg__DOT__v_reg__DOT__data_r) {
        __Vtemp_h9a477a3b__0[0U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[0U];
        __Vtemp_h9a477a3b__0[1U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[1U];
        __Vtemp_h9a477a3b__0[2U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[2U];
        __Vtemp_h9a477a3b__0[3U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[3U];
        __Vtemp_h9a477a3b__0[4U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[4U];
        __Vtemp_h9a477a3b__0[5U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[5U];
        __Vtemp_h9a477a3b__0[6U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[6U];
        __Vtemp_h9a477a3b__0[7U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[7U];
        __Vtemp_h9a477a3b__0[8U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[8U];
        __Vtemp_h9a477a3b__0[9U] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[9U];
        __Vtemp_h9a477a3b__0[0xaU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[0xaU];
        __Vtemp_h9a477a3b__0[0xbU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[0xbU];
        __Vtemp_h9a477a3b__0[0xcU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[0xcU];
        __Vtemp_h9a477a3b__0[0xdU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[0xdU];
        __Vtemp_h9a477a3b__0[0xeU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[0xeU];
        __Vtemp_h9a477a3b__0[0xfU] = vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__read_data_rotate__DOT__temp[0xfU];
    } else {
        __Vtemp_h9a477a3b__0[0U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0U];
        __Vtemp_h9a477a3b__0[1U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[1U];
        __Vtemp_h9a477a3b__0[2U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[2U];
        __Vtemp_h9a477a3b__0[3U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[3U];
        __Vtemp_h9a477a3b__0[4U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[4U];
        __Vtemp_h9a477a3b__0[5U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[5U];
        __Vtemp_h9a477a3b__0[6U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[6U];
        __Vtemp_h9a477a3b__0[7U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[7U];
        __Vtemp_h9a477a3b__0[8U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[8U];
        __Vtemp_h9a477a3b__0[9U] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[9U];
        __Vtemp_h9a477a3b__0[0xaU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xaU];
        __Vtemp_h9a477a3b__0[0xbU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xbU];
        __Vtemp_h9a477a3b__0[0xcU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xcU];
        __Vtemp_h9a477a3b__0[0xdU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xdU];
        __Vtemp_h9a477a3b__0[0xeU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xeU];
        __Vtemp_h9a477a3b__0[0xfU] = vlSelf->__PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r[0xfU];
    }
    if ((8U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->stat_mem_pkt_v_o = 1U;
                    vlSelf->__PVT__stat_mem_pkt_cast_o 
                        = (2U | ((0x7e0U & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                            >> 9U)) 
                                 | (0x1cU & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                             << 1U))));
                }
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = (1U | (0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]));
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                           | ((IData)((QData)((IData)(
                                                      ((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                          ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__dcache_tag_mem_o
                                                          : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                                        << 0xcU) 
                                                       | (0xfc0U 
                                                          & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                                             >> 8U)))))) 
                              << 8U));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xffff0000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (((IData)((QData)((IData)(
                                                       ((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                           ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__dcache_tag_mem_o
                                                           : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                                         << 0xcU) 
                                                        | (0xfc0U 
                                                           & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                                              >> 8U)))))) 
                               >> 0x18U) | ((IData)(
                                                    ((QData)((IData)(
                                                                     ((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                                         ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__dcache_tag_mem_o
                                                                         : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                                                       << 0xcU) 
                                                                      | (0xfc0U 
                                                                         & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                                                            >> 8U))))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = (0x60000U | (0xfff8ffffU 
                                       & vlSelf->__PVT__fsm_cmd_header_lo[1U]));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xe1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (0x1e000000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                             << 0x15U)));
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                             >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                if (vlSelf->__PVT__miss_v_r) {
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = (0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]);
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                           | ((IData)((0x60000000000ULL 
                                       | (0xfffffffff8ULL 
                                          & (((QData)((IData)(
                                                              vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                              << 0x18U) 
                                             | (0xfffffffffffff8ULL 
                                                & ((QData)((IData)(
                                                                   vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                   >> 8U)))))) 
                              << 8U));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (((IData)((0x60000000000ULL 
                                        | (0xfffffffff8ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                               << 0x18U) 
                                              | (0xfffffffffffff8ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                    >> 8U)))))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x60000000000ULL 
                                                      | (0xfffffffff8ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                             << 0x18U) 
                                                            | (0xfffffffffffff8ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                                  >> 8U))))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0x1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (0xfe000000U & ((0xe0000000U 
                                              & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                                 << 0x1cU)) 
                                             | (0x1e000000U 
                                                & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                                   << 0x15U)))));
                } else if (((IData)(vlSelf->__PVT__uc_load_v_r) 
                            | (IData)(vlSelf->__PVT__uc_amo_v_r))) {
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = ((0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                           | ((IData)(vlSelf->__PVT__uc_load_v_r)
                               ? 2U : 5U));
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                           | ((IData)((0x7ffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                           << 0x18U) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                             >> 8U)))) 
                              << 8U));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (((IData)((0x7ffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                              >> 8U)))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x7ffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                          << 0x18U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                            >> 8U))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xe1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (0x1e000000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                             << 0x15U)));
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = ((0xffffff0fU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                           | ((IData)(vlSelf->__PVT__mem_wr_subop) 
                              << 4U));
                }
            } else {
                vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                    = (1U | (0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]));
                vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                    = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                       | ((IData)((0x60000000000ULL 
                                   | (0xffffffffc0ULL 
                                      & (((QData)((IData)(
                                                          vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                          << 0x18U) 
                                         | (0xffffffffffffc0ULL 
                                            & ((QData)((IData)(
                                                               vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                               >> 8U)))))) 
                          << 8U));
                vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                    = ((0xfff80000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                       | (((IData)((0x60000000000ULL 
                                    | (0xffffffffc0ULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                           << 0x18U) 
                                          | (0xffffffffffffc0ULL 
                                             & ((QData)((IData)(
                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                >> 8U)))))) 
                           >> 0x18U) | ((IData)(((0x60000000000ULL 
                                                  | (0xffffffffc0ULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                         << 0x18U) 
                                                        | (0xffffffffffffc0ULL 
                                                           & ((QData)((IData)(
                                                                              vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                              >> 8U))))) 
                                                 >> 0x20U)) 
                                        << 8U)));
                vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                    = ((0xe1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                       | (0x1e000000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                         << 0x15U)));
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->stat_mem_pkt_v_o = (1U & (IData)(vlSelf->__Vcellout__metadata_reg__data_o));
                vlSelf->__PVT__stat_mem_pkt_cast_o 
                    = (2U | ((0x7e0U & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                        >> 9U)) | (0x1cU 
                                                   & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                                      << 1U))));
            }
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                if (((IData)(vlSelf->__PVT__uc_store_v_r) 
                     | (IData)(vlSelf->__PVT__wt_store_v_r))) {
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = (3U | (0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]));
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                           | ((IData)((0x7ffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                           << 0x18U) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                             >> 8U)))) 
                              << 8U));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xfff80000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (((IData)((0x7ffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                              >> 8U)))) 
                               >> 0x18U) | ((IData)(
                                                    ((0x7ffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                          << 0x18U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__PVT__cache_req_reg__DOT__data_r[0U])) 
                                                            >> 8U))) 
                                                     >> 0x20U)) 
                                            << 8U)));
                    vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                        = ((0xe1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                           | (0x1e000000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                             << 0x15U)));
                    vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                        = ((0xffffff0fU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                           | ((IData)(vlSelf->__PVT__mem_wr_subop) 
                              << 4U));
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
            vlSelf->__PVT__fsm_cmd_header_lo[0U] = 
                (1U | (0xfffffff0U & vlSelf->__PVT__fsm_cmd_header_lo[0U]));
            vlSelf->__PVT__fsm_cmd_header_lo[0U] = 
                ((0xffU & vlSelf->__PVT__fsm_cmd_header_lo[0U]) 
                 | ((IData)((QData)((IData)(((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__dcache_tag_mem_o
                                                : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                              << 0xcU) 
                                             | ((IData)(vlSelf->__PVT__index_cnt) 
                                                << 6U))))) 
                    << 8U));
            vlSelf->__PVT__fsm_cmd_header_lo[1U] = 
                ((0xffff0000U & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                 | (((IData)((QData)((IData)(((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                 ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__dcache_tag_mem_o
                                                 : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                               << 0xcU) 
                                              | ((IData)(vlSelf->__PVT__index_cnt) 
                                                 << 6U))))) 
                     >> 0x18U) | ((IData)(((QData)((IData)(
                                                           ((((IData)(vlSelf->__PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r)
                                                               ? vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__core_minimal__dcache_tag_mem_o
                                                               : vlSelf->__PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r) 
                                                             << 0xcU) 
                                                            | ((IData)(vlSelf->__PVT__index_cnt) 
                                                               << 6U)))) 
                                           >> 0x20U)) 
                                  << 8U)));
            vlSelf->__PVT__fsm_cmd_header_lo[1U] = 
                (0x60000U | (0xfff8ffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]));
            vlSelf->__PVT__fsm_cmd_header_lo[1U] = 
                ((0xe1ffffffU & vlSelf->__PVT__fsm_cmd_header_lo[1U]) 
                 | (0x1e000000U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__lce_id_li) 
                                   << 0x15U)));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & ((IData)(vlSelf->__Vcellout__dirty_stat_reg__data_o) 
                       >> (IData)(vlSelf->__PVT__way_cnt)))) {
                vlSelf->stat_mem_pkt_v_o = 1U;
                vlSelf->__PVT__stat_mem_pkt_cast_o 
                    = (2U | (((IData)(vlSelf->__PVT__index_cnt) 
                              << 5U) | ((IData)(vlSelf->__PVT__way_cnt) 
                                        << 2U)));
            }
        } else {
            vlSelf->stat_mem_pkt_v_o = 1U;
            vlSelf->__PVT__stat_mem_pkt_cast_o = (1U 
                                                  | (0x7fcU 
                                                     & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)));
            vlSelf->__PVT__stat_mem_pkt_cast_o = ((0x1fU 
                                                   & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                                                  | ((IData)(vlSelf->__PVT__index_cnt) 
                                                     << 5U));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->stat_mem_pkt_v_o = 1U;
        vlSelf->__PVT__stat_mem_pkt_cast_o = (0x7fcU 
                                              & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o));
        vlSelf->__PVT__stat_mem_pkt_cast_o = ((0x1fU 
                                               & (IData)(vlSelf->__PVT__stat_mem_pkt_cast_o)) 
                                              | ((IData)(vlSelf->__PVT__index_cnt) 
                                                 << 5U));
    }
    vlSelf->__PVT__writeback_data = (((QData)((IData)(
                                                      __Vtemp_h9a477a3b__0[
                                                      (((IData)(0x3fU) 
                                                        + 
                                                        (0x1c0U 
                                                         & (((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                              ? (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r)
                                                              : 
                                                             ((vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                               << 0x15U) 
                                                              | (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                                 >> 0xbU))) 
                                                            << 6U))) 
                                                       >> 5U)])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp_h9a477a3b__0[
                                                                  (0xeU 
                                                                   & (((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                                        ? (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r)
                                                                        : 
                                                                       ((vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                                         << 0x15U) 
                                                                        | (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                                           >> 0xbU))) 
                                                                      << 1U))])));
    vlSelf->__PVT__uce_pump_out__DOT__stream_size = 
        (7U & (((1U < (((IData)(1U) << (7U & (vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                                              >> 0x10U))) 
                       >> 3U)) ? (((IData)(1U) << (7U 
                                                   & (vlSelf->__PVT__fsm_cmd_header_lo[1U] 
                                                      >> 0x10U))) 
                                  >> 3U) : 1U) - (IData)(1U)));
    vlSelf->__PVT__fsm_cmd_data_lo = 0ULL;
    if ((8U & (IData)(vlSelf->__PVT__state_r))) {
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = (1ULL | (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                           | ((QData)((IData)((0x3fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__fsm_resp_addr_li 
                                                          >> 6U))))) 
                              << 0x1dU));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = ((0x7e0000007ULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                           | ((QData)((IData)((0x600000U 
                                               | ((0x3800000U 
                                                   & (vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[1U] 
                                                      >> 6U)) 
                                                  | (0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__fsm_resp_addr_li 
                                                                >> 0xcU))))))) 
                              << 3U));
                }
                vlSelf->data_mem_pkt_v_o = vlSelf->__PVT__load_resp_v_li;
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (2U | (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = ((0x3ffU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                           | ((IData)((((QData)((IData)(
                                                        vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                              << 0xaU));
                    vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                        = (((IData)((((QData)((IData)(
                                                      vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                            >> 0x16U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                  >> 0x20U)) 
                                         << 0xaU));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x7fc00U & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7ffffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x16U)));
                } else {
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x1fffU & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7e000U & ((IData)((vlSelf->__PVT__fsm_resp_addr_li 
                                                   >> 6U)) 
                                          << 0xdU)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = ((3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                               << 0xaU) | (((7U >= 
                                             (7U & (IData)(
                                                           (vlSelf->__PVT__fsm_resp_addr_li 
                                                            >> 3U))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__fsm_resp_addr_li 
                                                               >> 3U)))))
                                             : 0U) 
                                           << 2U)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                        = (((3U & ((IData)((((QData)((IData)(
                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                                   >> 0x16U)) | (((7U 
                                                   >= 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__fsm_resp_addr_li 
                                                               >> 3U))))
                                                   ? 
                                                  (0xffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__fsm_resp_addr_li 
                                                                  >> 3U)))))
                                                   : 0U) 
                                                 >> 0x1eU)) 
                           | ((0x3fcU & ((IData)((((QData)((IData)(
                                                                   vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                                         >> 0x16U)) 
                              | ((IData)(((((QData)((IData)(
                                                            vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                          >> 0x20U)) 
                                 << 0xaU)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x7e000U & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7ffffU & ((3U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                          >> 0x20U)) 
                                                 >> 0x16U)) 
                                          | ((0x1c00U 
                                              & (vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[1U] 
                                                 >> 0x13U)) 
                                             | (0x3fcU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x16U))))));
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    vlSelf->__PVT__fsm_cmd_data_lo 
                        = vlSelf->__PVT__writeback_data;
                }
            }
        } else {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = (1ULL | (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                           | ((QData)((IData)((0x3fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__fsm_resp_addr_li 
                                                          >> 6U))))) 
                              << 0x1dU));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = ((0x7e0000007ULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                           | ((QData)((IData)((0x600000U 
                                               | ((0x3800000U 
                                                   & (vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[1U] 
                                                      >> 6U)) 
                                                  | (0xfffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__fsm_resp_addr_li 
                                                                >> 0xcU))))))) 
                              << 3U));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x1fffU & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7e000U & ((IData)((vlSelf->__PVT__fsm_resp_addr_li 
                                                   >> 6U)) 
                                          << 0xdU)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = ((3U & vlSelf->__PVT__data_mem_pkt_cast_o[0U]) 
                           | (((IData)((((QData)((IData)(
                                                         vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                               << 0xaU) | (((7U >= 
                                             (7U & (IData)(
                                                           (vlSelf->__PVT__fsm_resp_addr_li 
                                                            >> 3U))))
                                             ? (0xffU 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__fsm_resp_addr_li 
                                                               >> 3U)))))
                                             : 0U) 
                                           << 2U)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[1U] 
                        = (((3U & ((IData)((((QData)((IData)(
                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                                   >> 0x16U)) | (((7U 
                                                   >= 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__fsm_resp_addr_li 
                                                               >> 3U))))
                                                   ? 
                                                  (0xffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__fsm_resp_addr_li 
                                                                  >> 3U)))))
                                                   : 0U) 
                                                 >> 0x1eU)) 
                           | ((0x3fcU & ((IData)((((QData)((IData)(
                                                                   vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U])))) 
                                         >> 0x16U)) 
                              | ((IData)(((((QData)((IData)(
                                                            vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                          >> 0x20U)) 
                                 << 0xaU)));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x7e000U & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7ffffU & ((3U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                          >> 0x20U)) 
                                                 >> 0x16U)) 
                                          | ((0x1c00U 
                                              & (vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[1U] 
                                                 >> 0x13U)) 
                                             | (0x3fcU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x16U))))));
                } else {
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = (3ULL | (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o));
                    vlSelf->__PVT__tag_mem_pkt_cast_o 
                        = ((0x3ffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                           | ((QData)((IData)(((0x1f8U 
                                                & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                                   >> 0xbU)) 
                                               | (7U 
                                                  & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                                     >> 1U))))) 
                              << 0x1aU));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (1U | (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x3ffU & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7fc00U & ((0x7e000U 
                                           & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                              >> 1U)) 
                                          | (0x1c00U 
                                             & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                                << 9U)))));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (0x3fcU | vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                }
                vlSelf->data_mem_pkt_v_o = (1U & ((~ (IData)(vlSelf->__PVT__state_r)) 
                                                  | (IData)(vlSelf->__PVT__load_resp_v_li)));
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__miss_v_r)))) {
                        if (((IData)(vlSelf->__PVT__uc_load_v_r) 
                             | (IData)(vlSelf->__PVT__uc_amo_v_r))) {
                            vlSelf->__PVT__fsm_cmd_data_lo 
                                = (((QData)((IData)(
                                                    vlSelf->__PVT__cache_req_reg__DOT__data_r[3U])) 
                                    << 0x2dU) | (((QData)((IData)(
                                                                  vlSelf->__PVT__cache_req_reg__DOT__data_r[2U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                    >> 0x13U)));
                        }
                    }
                } else {
                    vlSelf->__PVT__fsm_cmd_data_lo 
                        = vlSelf->__PVT__writeback_data;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    if ((1U & ((IData)(vlSelf->__Vcellout__dirty_stat_reg__data_o) 
                               >> (IData)(vlSelf->__PVT__way_cnt)))) {
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = (3ULL | (0x7fffffff8ULL 
                                       & vlSelf->__PVT__tag_mem_pkt_cast_o));
                        vlSelf->__PVT__tag_mem_pkt_cast_o 
                            = ((0x3ffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                               | ((QData)((IData)((
                                                   ((IData)(vlSelf->__PVT__index_cnt) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->__PVT__way_cnt)))) 
                                  << 0x1aU));
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    (0x7fffffff8ULL & vlSelf->__PVT__tag_mem_pkt_cast_o);
                vlSelf->__PVT__tag_mem_pkt_cast_o = 
                    ((0x1fffffffULL & vlSelf->__PVT__tag_mem_pkt_cast_o) 
                     | ((QData)((IData)(vlSelf->__PVT__index_cnt)) 
                        << 0x1dU));
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                    vlSelf->data_mem_pkt_v_o = (1U 
                                                & (IData)(vlSelf->__Vcellout__metadata_reg__data_o));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (1U | (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x3ffU & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7fc00U & ((0x7e000U 
                                           & (vlSelf->__PVT__cache_req_reg__DOT__data_r[0U] 
                                              >> 1U)) 
                                          | (0x1c00U 
                                             & ((IData)(vlSelf->__Vcellout__metadata_reg__data_o) 
                                                << 9U)))));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (0x3fcU | vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                    if (((IData)(vlSelf->__PVT__uc_store_v_r) 
                         | (IData)(vlSelf->__PVT__wt_store_v_r))) {
                        vlSelf->__PVT__fsm_cmd_data_lo 
                            = (((QData)((IData)(vlSelf->__PVT__cache_req_reg__DOT__data_r[3U])) 
                                << 0x2dU) | (((QData)((IData)(
                                                              vlSelf->__PVT__cache_req_reg__DOT__data_r[2U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__cache_req_reg__DOT__data_r[1U])) 
                                                >> 0x13U)));
                    }
                }
            } else if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__fsm_cmd_data_lo = vlSelf->__PVT__writeback_data;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                if ((1U & ((IData)(vlSelf->__Vcellout__dirty_stat_reg__data_o) 
                           >> (IData)(vlSelf->__PVT__way_cnt)))) {
                    vlSelf->data_mem_pkt_v_o = 1U;
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (1U | (0xfffffffcU & vlSelf->__PVT__data_mem_pkt_cast_o[0U]));
                    vlSelf->__PVT__data_mem_pkt_cast_o[2U] 
                        = ((0x3ffU & vlSelf->__PVT__data_mem_pkt_cast_o[2U]) 
                           | (0x7fc00U & (((IData)(vlSelf->__PVT__index_cnt) 
                                           << 0xdU) 
                                          | ((IData)(vlSelf->__PVT__way_cnt) 
                                             << 0xaU))));
                    vlSelf->__PVT__data_mem_pkt_cast_o[0U] 
                        = (0x3fcU | vlSelf->__PVT__data_mem_pkt_cast_o[0U]);
                }
            }
        }
    }
    vlSelf->__PVT__uce_pump_out__DOT__msg_stream = 
        ((0x2aU >> (0xfU & vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
         & (0U < (IData)(vlSelf->__PVT__uce_pump_out__DOT__stream_size)));
    vlSelf->__PVT__uce_pump_out__DOT__fsm_stream = 
        ((0x2aU >> (0xfU & vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
         & (0U < (IData)(vlSelf->__PVT__uce_pump_out__DOT__stream_size)));
    vlSelf->__PVT__uce_pump_out__DOT__size_li = ((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)
                                                  ? (IData)(vlSelf->__PVT__uce_pump_out__DOT__stream_size)
                                                  : 0U);
    vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt = 
        (1U & (((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r) 
                & ((IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                   == (7U & (((vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                               << 0x15U) | (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                            >> 0xbU)) 
                             + (IData)(vlSelf->__PVT__uce_pump_out__DOT__stream_size))))) 
               | ((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)) 
                  & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))));
    vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li 
        = (((4U <= (IData)(vlSelf->__PVT__uce_pump_out__DOT__size_li)) 
            << 2U) | (((2U <= (IData)(vlSelf->__PVT__uce_pump_out__DOT__size_li)) 
                       << 1U) | (1U <= (IData)(vlSelf->__PVT__uce_pump_out__DOT__size_li))));
    if (((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)) 
         & (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream))) {
        vlSelf->mem_cmd_v_o = vlSelf->__PVT__fsm_cmd_v_lo;
        vlSelf->__PVT__fsm_cmd_ready_and_li = ((IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt) 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[0U]);
        vlSelf->__PVT__uce_pump_out__DOT__cnt_up = 
            (((IData)(vlSelf->mem_cmd_v_o) & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[0U]) 
             & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt)));
    } else if (((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream) 
                & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))) {
        vlSelf->__PVT__fsm_cmd_ready_and_li = (1U & 
                                               ((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt)) 
                                                | vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[0U]));
        vlSelf->mem_cmd_v_o = ((IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt) 
                               & (IData)(vlSelf->__PVT__fsm_cmd_v_lo));
        vlSelf->__PVT__uce_pump_out__DOT__cnt_up = 
            (((IData)(vlSelf->__PVT__fsm_cmd_ready_and_li) 
              & (IData)(vlSelf->__PVT__fsm_cmd_v_lo)) 
             & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt)));
    } else {
        vlSelf->__PVT__fsm_cmd_ready_and_li = (1U & 
                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT____Vcellout__posedge_latch__data_o[0U]);
        vlSelf->mem_cmd_v_o = vlSelf->__PVT__fsm_cmd_v_lo;
        vlSelf->__PVT__uce_pump_out__DOT__cnt_up = 
            (((IData)(vlSelf->__PVT__fsm_cmd_ready_and_li) 
              & (IData)(vlSelf->__PVT__fsm_cmd_v_lo)) 
             & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt)));
    }
    vlSelf->mem_cmd_last_o = ((IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt) 
                              & (IData)(vlSelf->mem_cmd_v_o));
    vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt = ((4U 
                                                   & (IData)(vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt)) 
                                                  | ((2U 
                                                      & (((2U 
                                                           & (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                                                           >> 1U)
                                                           : 
                                                          (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                           >> 0xcU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((1U 
                                                            & (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                            ? (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r)
                                                            : 
                                                           (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                            >> 0xbU)))));
    vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt = ((3U 
                                                   & (IData)(vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt)) 
                                                  | (4U 
                                                     & (((4U 
                                                          & (IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r) 
                                                          >> 2U)
                                                          : 
                                                         (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                          >> 0xdU)) 
                                                        << 2U)));
    vlSelf->__PVT__fsm_cmd_new = (((IData)(vlSelf->__PVT__fsm_cmd_ready_and_li) 
                                   & (IData)(vlSelf->__PVT__fsm_cmd_v_lo)) 
                                  & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)));
    vlSelf->__PVT__fsm_cmd_done = (((IData)(vlSelf->__PVT__fsm_cmd_ready_and_li) 
                                    & (IData)(vlSelf->__PVT__fsm_cmd_v_lo)) 
                                   & (IData)(vlSelf->__PVT__uce_pump_out__DOT__is_last_cnt));
    vlSelf->__PVT__uce_pump_out__DOT__wrap_addr = (
                                                   (0xffffffffc0ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                        << 0x18U) 
                                                       | (0xffffffffffffc0ULL 
                                                          & ((QData)((IData)(
                                                                             vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                             >> 8U)))) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->__PVT__uce_pump_out__DOT__wrap_cnt) 
                                                                       << 3U) 
                                                                      | (7U 
                                                                         & (vlSelf->__PVT__fsm_cmd_header_lo[0U] 
                                                                            >> 8U))))));
    vlSelf->__PVT__uce_pump_out__DOT__state_n = (1U 
                                                 & ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                     ? 
                                                    (~ (IData)(vlSelf->__PVT__fsm_cmd_done))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__fsm_cmd_new) 
                                                     & ((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream) 
                                                        | (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))));
    vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[0U] 
        = vlSelf->__PVT__fsm_cmd_header_lo[0U];
    vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[1U] 
        = vlSelf->__PVT__fsm_cmd_header_lo[1U];
    vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[2U] 
        = vlSelf->__PVT__fsm_cmd_header_lo[2U];
    vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[0U] 
        = ((0xffU & vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[0U]) 
           | ((IData)((0xffffffffffULL & (((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)) 
                                           & (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream))
                                           ? ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                               ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                               : (((QData)((IData)(
                                                                   vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                        >> 8U))))
                                           : (((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream) 
                                               & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))
                                               ? (((QData)((IData)(
                                                                   vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                        >> 8U)))
                                               : ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                   ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                         >> 8U)))))))) 
              << 8U));
    vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[1U] 
        = ((0xffff0000U & vlSelf->__PVT__uce_pump_out__DOT__msg_header_cast_o[1U]) 
           | (((IData)((0xffffffffffULL & (((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)) 
                                            & (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream))
                                            ? ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                         >> 8U))))
                                            : (((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream) 
                                                & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                         >> 8U)))
                                                : ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                    ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                        << 0x18U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                          >> 8U)))))))) 
               >> 0x18U) | ((IData)(((0xffffffffffULL 
                                      & (((~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream)) 
                                          & (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream))
                                          ? ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                              ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                              : (((QData)((IData)(
                                                                  vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                     << 0x18U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                       >> 8U))))
                                          : (((IData)(vlSelf->__PVT__uce_pump_out__DOT__fsm_stream) 
                                              & (~ (IData)(vlSelf->__PVT__uce_pump_out__DOT__msg_stream)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                     << 0x18U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                       >> 8U)))
                                              : ((IData)(vlSelf->__PVT__uce_pump_out__DOT__state_r)
                                                  ? vlSelf->__PVT__uce_pump_out__DOT__wrap_addr
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fsm_cmd_header_lo[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fsm_cmd_header_lo[0U])) 
                                                        >> 8U))))))) 
                                     >> 0x20U)) << 8U)));
}
