// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_cache__pi35.h"
#include "Vtestbench_bsg_mem_1rw_sync__pi87.h"

VL_ATTR_COLD void Vtestbench_bsg_cache__pi35___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__1(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__1\n"); );
    // Body
    vlSelf->__Vcellout__data_mem__data_o[0U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[0U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[0U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[1U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[1U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[1U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[1U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[2U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[2U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[2U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[2U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[3U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[3U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[3U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[3U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[4U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[4U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[4U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[4U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[5U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[5U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[5U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[5U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[6U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[6U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[6U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[6U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[7U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[7U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[7U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[7U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[8U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[8U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[8U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[8U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[9U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[9U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[9U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[9U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[0xaU] = ((0xffff0000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xaU]) 
                                                  | (0xffffffU 
                                                     & ((0xffff00U 
                                                         & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)) 
                                                        | ((0xffffffU 
                                                            & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xaU] = ((0xffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xaU]) 
                                                  | (0xffff0000U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                           << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[0xbU] = ((0xffffff00U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xbU]) 
                                                  | (0xffffU 
                                                     & ((0xffffU 
                                                         & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                        | ((0xffffU 
                                                            & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                 ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                 : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                               >> 8U)) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xbU] = ((0xffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xbU]) 
                                                  | (0xffffff00U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xcU] = ((0xff000000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xcU]) 
                                                  | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                        ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                        : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                      << 0x10U) 
                                                     | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 8U) 
                                                        | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0xcU] = ((0xffffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xcU]) 
                                                  | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                       ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                       : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                     << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[0xdU] = ((0xffff0000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xdU]) 
                                                  | (0xffffffU 
                                                     & ((0xffff00U 
                                                         & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)) 
                                                        | ((0xffffffU 
                                                            & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xdU] = ((0xffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xdU]) 
                                                  | (0xffff0000U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                           << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[0xeU] = ((0xffffff00U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xeU]) 
                                                  | (0xffffU 
                                                     & ((0xffffU 
                                                         & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                        | ((0xffffU 
                                                            & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                 ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                 : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                               >> 8U)) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xeU] = ((0xffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xeU]) 
                                                  | (0xffffff00U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xfU] = ((0xff000000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xfU]) 
                                                  | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                        ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                        : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                      << 0x10U) 
                                                     | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 8U) 
                                                        | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0xfU] = ((0xffffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xfU]) 
                                                  | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                       ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                       : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                     << 0x18U));
    vlSelf->__PVT__dma_done_li = 0U;
    if ((0U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = 0U;
        if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__dma_cmd_lo)))) {
                        vlSelf->__PVT__dma_done_li 
                            = (1U & ((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_pkt_yumi_o) 
                                     & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)));
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
                    vlSelf->__PVT__dma_done_li = (1U 
                                                  & ((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_pkt_yumi_o) 
                                                     & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)));
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = ((7U == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                                      & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = ((8U == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                                      & (~ (IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r)));
    }
    vlSelf->__PVT__miss_tag_mem_w_lo = 0U;
    vlSelf->__PVT__miss_stat_mem_w_lo = 0U;
    vlSelf->__PVT__miss_tag_mem_v_lo = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss_tag_mem_w_lo 
                        = vlSelf->__PVT__dma_done_li;
                    vlSelf->__PVT__miss_stat_mem_w_lo 
                        = vlSelf->__PVT__dma_done_li;
                    vlSelf->__PVT__miss_tag_mem_v_lo 
                        = vlSelf->__PVT__dma_done_li;
                }
            }
        } else {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss_tag_mem_w_lo = 1U;
                    vlSelf->__PVT__miss_tag_mem_v_lo = 1U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__miss_tag_mem_v_lo = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__miss_stat_mem_w_lo = 1U;
                }
            }
        }
    }
}

VL_ATTR_COLD void Vtestbench_bsg_cache__pi35___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__1(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__1\n"); );
    // Body
    vlSelf->__Vcellout__data_mem__data_o[0U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[0U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[0U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[1U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[1U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[1U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[1U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[2U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[2U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[2U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[2U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[3U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[3U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[3U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[3U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[4U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[4U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[4U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[4U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[5U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[5U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[5U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[5U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[6U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[6U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[6U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[6U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[7U] = ((0xffff0000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[7U]) 
                                                | (0xffffffU 
                                                   & ((0xffff00U 
                                                       & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 8U)) 
                                                      | ((0xffffffU 
                                                          & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[7U] = ((0xffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[7U]) 
                                                | (0xffff0000U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[8U] = ((0xffffff00U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[8U]) 
                                                | (0xffffU 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                      | ((0xffffU 
                                                          & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                               ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                               : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                             >> 8U)) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[8U] = ((0xffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[8U]) 
                                                | (0xffffff00U 
                                                   & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[9U] = ((0xff000000U 
                                                 & vlSelf->__Vcellout__data_mem__data_o[9U]) 
                                                | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                      ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                      : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                    << 0x10U) 
                                                   | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                         ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                         : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                          ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                          : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[9U] = ((0xffffffU 
                                                 & vlSelf->__Vcellout__data_mem__data_o[9U]) 
                                                | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                     ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                     : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                   << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[0xaU] = ((0xffff0000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xaU]) 
                                                  | (0xffffffU 
                                                     & ((0xffff00U 
                                                         & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)) 
                                                        | ((0xffffffU 
                                                            & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xaU] = ((0xffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xaU]) 
                                                  | (0xffff0000U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                           << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[0xbU] = ((0xffffff00U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xbU]) 
                                                  | (0xffffU 
                                                     & ((0xffffU 
                                                         & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                        | ((0xffffU 
                                                            & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                 ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                 : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                               >> 8U)) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xbU] = ((0xffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xbU]) 
                                                  | (0xffffff00U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xcU] = ((0xff000000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xcU]) 
                                                  | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                        ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                        : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                      << 0x10U) 
                                                     | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 8U) 
                                                        | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0xcU] = ((0xffffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xcU]) 
                                                  | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                       ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                       : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                     << 0x18U));
    vlSelf->__Vcellout__data_mem__data_o[0xdU] = ((0xffff0000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xdU]) 
                                                  | (0xffffffU 
                                                     & ((0xffff00U 
                                                         & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 8U)) 
                                                        | ((0xffffffU 
                                                            & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xdU] = ((0xffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xdU]) 
                                                  | (0xffff0000U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                           << 0x10U))));
    vlSelf->__Vcellout__data_mem__data_o[0xeU] = ((0xffffff00U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xeU]) 
                                                  | (0xffffU 
                                                     & ((0xffffU 
                                                         & ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                             ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                             : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))) 
                                                        | ((0xffffU 
                                                            & (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                 ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                 : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                               >> 8U)) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              >> 0x10U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xeU] = ((0xffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xeU]) 
                                                  | (0xffffff00U 
                                                     & ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 0x18U) 
                                                        | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                              ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                              : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                                ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                                : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                              << 8U)))));
    vlSelf->__Vcellout__data_mem__data_o[0xfU] = ((0xff000000U 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xfU]) 
                                                  | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                        ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                        : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                      << 0x10U) 
                                                     | ((((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                           ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                           : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                         << 8U) 
                                                        | ((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                            ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                            : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))));
    vlSelf->__Vcellout__data_mem__data_o[0xfU] = ((0xffffffU 
                                                   & vlSelf->__Vcellout__data_mem__data_o[0xfU]) 
                                                  | (((IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                       ? (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__data_out)
                                                       : (IData)(vlSelf->__PVT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                                     << 0x18U));
    vlSelf->__PVT__dma_done_li = 0U;
    if ((0U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = 0U;
        if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__dma_cmd_lo) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__dma_cmd_lo)))) {
                        vlSelf->__PVT__dma_done_li 
                            = (1U & (((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_pkt_yumi_o) 
                                      & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)) 
                                     >> 1U));
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__dma_cmd_lo))) {
                    vlSelf->__PVT__dma_done_li = (1U 
                                                  & (((IData)(vlSymsp->TOP.testbench__DOT____Vcellout__dram__dma_pkt_yumi_o) 
                                                      & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT____Vcellout__c__BRA__0__KET____DOT__dut__dma_pkt_v_o)) 
                                                     >> 1U));
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = ((7U == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                                      & (~ (IData)(vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty)));
    } else if ((2U == (IData)(vlSelf->__PVT__dma__DOT__dma_state_r))) {
        vlSelf->__PVT__dma_done_li = ((8U == (IData)(vlSelf->__PVT__dma__DOT__counter_r)) 
                                      & (~ (IData)(vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r)));
    }
    vlSelf->__PVT__miss_tag_mem_w_lo = 0U;
    vlSelf->__PVT__miss_stat_mem_w_lo = 0U;
    vlSelf->__PVT__miss_tag_mem_v_lo = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss_tag_mem_w_lo 
                        = vlSelf->__PVT__dma_done_li;
                    vlSelf->__PVT__miss_stat_mem_w_lo 
                        = vlSelf->__PVT__dma_done_li;
                    vlSelf->__PVT__miss_tag_mem_v_lo 
                        = vlSelf->__PVT__dma_done_li;
                }
            }
        } else {
            if ((2U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__miss__DOT__miss_state_r)))) {
                    vlSelf->__PVT__miss_tag_mem_w_lo = 1U;
                    vlSelf->__PVT__miss_tag_mem_v_lo = 1U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                vlSelf->__PVT__miss_tag_mem_w_lo = 1U;
                vlSelf->__PVT__miss_tag_mem_v_lo = 1U;
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__miss__DOT__miss_state_r) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__miss__DOT__miss_state_r))) {
                    vlSelf->__PVT__miss_stat_mem_w_lo = 1U;
                }
            }
        }
    }
}
