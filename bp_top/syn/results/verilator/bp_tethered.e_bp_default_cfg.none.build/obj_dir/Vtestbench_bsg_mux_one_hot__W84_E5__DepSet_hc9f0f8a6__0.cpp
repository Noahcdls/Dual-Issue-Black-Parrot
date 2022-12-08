// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_mux_one_hot__W84_E5.h"

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W84_E5___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot__0(Vtestbench_bsg_mux_one_hot__W84_E5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W84_E5___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o)))));
    vlSelf->__PVT__data_masked[1U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o)))));
    vlSelf->__PVT__data_masked[2U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o)))));
    vlSelf->__PVT__data_masked[3U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[3U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o)))));
    vlSelf->__PVT__data_masked[4U] = ((0xfffffff0U 
                                       & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[4U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o)))))));
    vlSelf->__PVT__data_masked[4U] = ((0xfU & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[4U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 1U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[5U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[5U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 1U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[5U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 1U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[6U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[6U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 1U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[6U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 1U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[7U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[7U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 1U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[7U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 1U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[8U] = ((0xffffff00U 
                                       & vlSelf->__PVT__data_masked[8U]) 
                                      | ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[8U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 1U)))) 
                                                     >> 0x1cU))) 
                                         | (0xf0U & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[8U] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 1U)))) 
                                                << 4U)))));
    vlSelf->__PVT__data_masked[8U] = ((0xffU & vlSelf->__PVT__data_masked[8U]) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[8U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 2U)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[9U] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[9U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 2U)))) 
                                                   >> 0x18U))) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[9U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 2U)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[0xaU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xaU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 2U)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xaU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xbU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xbU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 2U)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xbU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xcU] = ((0xfffff000U 
                                         & vlSelf->__PVT__data_masked[0xcU]) 
                                        | ((0xffU & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xcU] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 2U)))) 
                                                >> 0x18U))) 
                                           | (0xf00U 
                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xcU] 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                   >> 2U)))) 
                                                    << 8U)))));
    vlSelf->__PVT__data_masked[0xcU] = ((0xfffU & vlSelf->__PVT__data_masked[0xcU]) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xcU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 3U)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0xdU] = ((0xfffU & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xdU] 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                     >> 3U)))) 
                                                      >> 0x14U))) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xdU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 3U)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0xeU] = ((0xfffU & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xeU] 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                     >> 3U)))) 
                                                      >> 0x14U))) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xeU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 3U)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0xfU] = ((0xfffU & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xfU] 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                     >> 3U)))) 
                                                      >> 0x14U))) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xfU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 3U)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0x10U] = ((0xffff0000U 
                                          & vlSelf->__PVT__data_masked[0x10U]) 
                                         | ((0xfffU 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x10U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 3U)))) 
                                                   >> 0x14U))) 
                                            | (0xf000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x10U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 3U)))) 
                                                     << 0xcU)))));
    vlSelf->__PVT__data_masked[0x10U] = ((0xffffU & 
                                          vlSelf->__PVT__data_masked[0x10U]) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x10U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 4U)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x11U] = ((0xffffU & 
                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x11U] 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                             >> 4U)))) 
                                              >> 0x10U))) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x11U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 4U)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x12U] = ((0xffffU & 
                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x12U] 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                             >> 4U)))) 
                                              >> 0x10U))) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x12U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 4U)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x13U] = ((0xffffU & 
                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x13U] 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                             >> 4U)))) 
                                              >> 0x10U))) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x13U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 4U)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x14U] = (0xfffffU & 
                                         ((0xffffU 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x14U] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 4U)))) 
                                                 >> 0x10U))) 
                                          | (0xf0000U 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x14U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 4U)))) 
                                                   << 0x10U)))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[0U]))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x11U]) 
              | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0xdU])));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[9U]) 
              | ((2U & (vlSelf->__PVT__data_masked[4U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[5U]) 
                                | (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[0U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[1U]))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x12U]) 
              | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0xeU])));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[0xaU]) 
              | ((2U & (vlSelf->__PVT__data_masked[5U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[6U]) 
                                | (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[1U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[2U]))));
    vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[2U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[2U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[2U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x13U]) 
              | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0xfU])));
    vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[0xbU]) 
              | ((2U & (vlSelf->__PVT__data_masked[6U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[7U]) 
                                | (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[2U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[3U]))));
    vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[3U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[3U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[3U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x14U]) 
              | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0x10U])));
    vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[0xcU]) 
              | ((2U & (vlSelf->__PVT__data_masked[7U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[8U]) 
                                | (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[3U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[4U]))));
    vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[4U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[4U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[4U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 0xcU))));
    vlSelf->data_o[0U] = ((0xfffffff8U & vlSelf->data_o[0U]) 
                          | (((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather))) 
                              << 2U) | (((IData)((0U 
                                                  != (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather))) 
                                         << 1U) | (0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)))));
    vlSelf->data_o[0U] = ((0xffffffc7U & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)))) 
                             << 3U));
    vlSelf->data_o[0U] = ((0xfffffe3fU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)))) 
                             << 6U));
    vlSelf->data_o[0U] = ((0xfffff1ffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)))) 
                             << 9U));
    vlSelf->data_o[0U] = ((0xffff8fffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)))) 
                             << 0xcU));
    vlSelf->data_o[0U] = ((0xfffc7fffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)))) 
                             << 0xfU));
    vlSelf->data_o[0U] = ((0xffe3ffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)))) 
                             << 0x12U));
    vlSelf->data_o[0U] = ((0xff1fffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)))) 
                             << 0x15U));
    vlSelf->data_o[0U] = ((0xf8ffffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)))) 
                             << 0x18U));
    vlSelf->data_o[0U] = ((0xc7ffffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)))) 
                             << 0x1bU));
    vlSelf->data_o[0U] = ((0x3fffffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)))) 
                             << 0x1eU));
    vlSelf->data_o[1U] = ((0xfffffffeU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)))) 
                             >> 2U));
    vlSelf->data_o[1U] = ((0xfffffff1U & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)))) 
                             << 1U));
    vlSelf->data_o[1U] = ((0xffffff8fU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)))) 
                             << 4U));
    vlSelf->data_o[1U] = ((0xfffffc7fU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)))) 
                             << 7U));
    vlSelf->data_o[1U] = ((0xffffe3ffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)))) 
                             << 0xaU));
    vlSelf->data_o[1U] = ((0xffff1fffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)))) 
                             << 0xdU));
    vlSelf->data_o[1U] = ((0xfff8ffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)))) 
                             << 0x10U));
    vlSelf->data_o[1U] = ((0xffc7ffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)))) 
                             << 0x13U));
    vlSelf->data_o[1U] = ((0xfe3fffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)))) 
                             << 0x16U));
    vlSelf->data_o[1U] = ((0xf1ffffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)))) 
                             << 0x19U));
    vlSelf->data_o[1U] = ((0x8fffffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)))) 
                             << 0x1cU));
    vlSelf->data_o[1U] = ((0x7fffffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)))) 
                             << 0x1fU));
    vlSelf->data_o[2U] = ((0xfffffffcU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)))) 
                             >> 1U));
    vlSelf->data_o[2U] = ((0xffffffe3U & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather)))) 
                             << 2U));
    vlSelf->data_o[2U] = ((0xffffff1fU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather)))) 
                             << 5U));
    vlSelf->data_o[2U] = ((0xfffff8ffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather)))) 
                             << 8U));
    vlSelf->data_o[2U] = ((0xffffc7ffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather)))) 
                             << 0xbU));
    vlSelf->data_o[2U] = ((0xfffe3fffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather)))) 
                             << 0xeU));
    vlSelf->data_o[2U] = ((0xfff1ffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather)))) 
                             << 0x11U));
    vlSelf->data_o[2U] = ((0xff8fffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather)))) 
                             << 0x14U));
    vlSelf->data_o[2U] = ((0xfc7fffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather)))) 
                             << 0x17U));
    vlSelf->data_o[2U] = ((0xe3ffffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather)))) 
                             << 0x1aU));
    vlSelf->data_o[2U] = ((0x1fffffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather)))) 
                             << 0x1dU));
    vlSelf->data_o[3U] = ((0xfffffff8U & vlSelf->data_o[3U]) 
                          | (((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather))) 
                              << 2U) | (((IData)((0U 
                                                  != (IData)(vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather))) 
                                         << 1U) | (0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather)))));
    vlSelf->data_o[3U] = ((0xffffffc7U & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather)))) 
                             << 3U));
    vlSelf->data_o[3U] = ((0xfffffe3fU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather)))) 
                             << 6U));
    vlSelf->data_o[3U] = ((0xfffff1ffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather)))) 
                             << 9U));
    vlSelf->data_o[3U] = ((0xffff8fffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather)))) 
                             << 0xcU));
    vlSelf->data_o[3U] = ((0xfffc7fffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather)))) 
                             << 0xfU));
    vlSelf->data_o[3U] = ((0xffe3ffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather)))) 
                             << 0x12U));
    vlSelf->data_o[3U] = ((0xff1fffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather)))) 
                             << 0x15U));
    vlSelf->data_o[3U] = ((0xf8ffffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather)))) 
                             << 0x18U));
    vlSelf->data_o[3U] = ((0xc7ffffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather)))) 
                             << 0x1bU));
    vlSelf->data_o[3U] = ((0x3fffffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)))) 
                             << 0x1eU));
    vlSelf->data_o[4U] = ((0xeU & vlSelf->data_o[4U]) 
                          | (0xfU & ((((IData)((0U 
                                                != (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather))) 
                                       << 2U) | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)))) 
                                     >> 2U)));
    vlSelf->data_o[4U] = ((1U & vlSelf->data_o[4U]) 
                          | (0xfU & ((((IData)((0U 
                                                != (IData)(vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather))) 
                                       << 2U) | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather)))) 
                                     << 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W84_E5___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot__0(Vtestbench_bsg_mux_one_hot__W84_E5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W84_E5___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 5U)))));
    vlSelf->__PVT__data_masked[1U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 5U)))));
    vlSelf->__PVT__data_masked[2U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 5U)))));
    vlSelf->__PVT__data_masked[3U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[3U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 5U)))));
    vlSelf->__PVT__data_masked[4U] = ((0xfffffff0U 
                                       & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[4U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 5U)))))));
    vlSelf->__PVT__data_masked[4U] = ((0xfU & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[4U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 6U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[5U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[5U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 6U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[5U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 6U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[6U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[6U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 6U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[6U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 6U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[7U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[7U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 6U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[7U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 6U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[8U] = ((0xffffff00U 
                                       & vlSelf->__PVT__data_masked[8U]) 
                                      | ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[8U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 6U)))) 
                                                     >> 0x1cU))) 
                                         | (0xf0U & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[8U] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 6U)))) 
                                                << 4U)))));
    vlSelf->__PVT__data_masked[8U] = ((0xffU & vlSelf->__PVT__data_masked[8U]) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[8U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 7U)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[9U] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[9U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 7U)))) 
                                                   >> 0x18U))) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[9U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 7U)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[0xaU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xaU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 7U)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xaU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 7U)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xbU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xbU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 7U)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xbU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 7U)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xcU] = ((0xfffff000U 
                                         & vlSelf->__PVT__data_masked[0xcU]) 
                                        | ((0xffU & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xcU] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 7U)))) 
                                                >> 0x18U))) 
                                           | (0xf00U 
                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xcU] 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                   >> 7U)))) 
                                                    << 8U)))));
    vlSelf->__PVT__data_masked[0xcU] = ((0xfffU & vlSelf->__PVT__data_masked[0xcU]) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xcU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 8U)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0xdU] = ((0xfffU & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xdU] 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                     >> 8U)))) 
                                                      >> 0x14U))) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xdU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 8U)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0xeU] = ((0xfffU & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xeU] 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                     >> 8U)))) 
                                                      >> 0x14U))) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xeU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 8U)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0xfU] = ((0xfffU & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xfU] 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                     >> 8U)))) 
                                                      >> 0x14U))) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xfU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 8U)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0x10U] = ((0xffff0000U 
                                          & vlSelf->__PVT__data_masked[0x10U]) 
                                         | ((0xfffU 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x10U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 8U)))) 
                                                   >> 0x14U))) 
                                            | (0xf000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x10U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 8U)))) 
                                                     << 0xcU)))));
    vlSelf->__PVT__data_masked[0x10U] = ((0xffffU & 
                                          vlSelf->__PVT__data_masked[0x10U]) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x10U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 9U)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x11U] = ((0xffffU & 
                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x11U] 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                             >> 9U)))) 
                                              >> 0x10U))) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x11U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 9U)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x12U] = ((0xffffU & 
                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x12U] 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                             >> 9U)))) 
                                              >> 0x10U))) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x12U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 9U)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x13U] = ((0xffffU & 
                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x13U] 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                             >> 9U)))) 
                                              >> 0x10U))) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x13U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 9U)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x14U] = (0xfffffU & 
                                         ((0xffffU 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x14U] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 9U)))) 
                                                 >> 0x10U))) 
                                          | (0xf0000U 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x14U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 9U)))) 
                                                   << 0x10U)))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[0U]))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x11U]) 
              | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0xdU])));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[9U]) 
              | ((2U & (vlSelf->__PVT__data_masked[4U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[5U]) 
                                | (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[0U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[1U]))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x12U]) 
              | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0xeU])));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[0xaU]) 
              | ((2U & (vlSelf->__PVT__data_masked[5U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[6U]) 
                                | (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[1U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[2U]))));
    vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[2U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[2U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[2U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x13U]) 
              | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0xfU])));
    vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[0xbU]) 
              | ((2U & (vlSelf->__PVT__data_masked[6U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[7U]) 
                                | (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[2U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[3U]))));
    vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[3U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[3U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[3U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x14U]) 
              | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0x10U])));
    vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[0xcU]) 
              | ((2U & (vlSelf->__PVT__data_masked[7U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[8U]) 
                                | (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[3U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[4U]))));
    vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[4U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[4U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[4U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 0xcU))));
    vlSelf->data_o[0U] = ((0xfffffff8U & vlSelf->data_o[0U]) 
                          | (((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather))) 
                              << 2U) | (((IData)((0U 
                                                  != (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather))) 
                                         << 1U) | (0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)))));
    vlSelf->data_o[0U] = ((0xffffffc7U & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)))) 
                             << 3U));
    vlSelf->data_o[0U] = ((0xfffffe3fU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)))) 
                             << 6U));
    vlSelf->data_o[0U] = ((0xfffff1ffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)))) 
                             << 9U));
    vlSelf->data_o[0U] = ((0xffff8fffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)))) 
                             << 0xcU));
    vlSelf->data_o[0U] = ((0xfffc7fffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)))) 
                             << 0xfU));
    vlSelf->data_o[0U] = ((0xffe3ffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)))) 
                             << 0x12U));
    vlSelf->data_o[0U] = ((0xff1fffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)))) 
                             << 0x15U));
    vlSelf->data_o[0U] = ((0xf8ffffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)))) 
                             << 0x18U));
    vlSelf->data_o[0U] = ((0xc7ffffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)))) 
                             << 0x1bU));
    vlSelf->data_o[0U] = ((0x3fffffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)))) 
                             << 0x1eU));
    vlSelf->data_o[1U] = ((0xfffffffeU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)))) 
                             >> 2U));
    vlSelf->data_o[1U] = ((0xfffffff1U & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)))) 
                             << 1U));
    vlSelf->data_o[1U] = ((0xffffff8fU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)))) 
                             << 4U));
    vlSelf->data_o[1U] = ((0xfffffc7fU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)))) 
                             << 7U));
    vlSelf->data_o[1U] = ((0xffffe3ffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)))) 
                             << 0xaU));
    vlSelf->data_o[1U] = ((0xffff1fffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)))) 
                             << 0xdU));
    vlSelf->data_o[1U] = ((0xfff8ffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)))) 
                             << 0x10U));
    vlSelf->data_o[1U] = ((0xffc7ffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)))) 
                             << 0x13U));
    vlSelf->data_o[1U] = ((0xfe3fffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)))) 
                             << 0x16U));
    vlSelf->data_o[1U] = ((0xf1ffffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)))) 
                             << 0x19U));
    vlSelf->data_o[1U] = ((0x8fffffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)))) 
                             << 0x1cU));
    vlSelf->data_o[1U] = ((0x7fffffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)))) 
                             << 0x1fU));
    vlSelf->data_o[2U] = ((0xfffffffcU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)))) 
                             >> 1U));
    vlSelf->data_o[2U] = ((0xffffffe3U & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather)))) 
                             << 2U));
    vlSelf->data_o[2U] = ((0xffffff1fU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather)))) 
                             << 5U));
    vlSelf->data_o[2U] = ((0xfffff8ffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather)))) 
                             << 8U));
    vlSelf->data_o[2U] = ((0xffffc7ffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather)))) 
                             << 0xbU));
    vlSelf->data_o[2U] = ((0xfffe3fffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather)))) 
                             << 0xeU));
    vlSelf->data_o[2U] = ((0xfff1ffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather)))) 
                             << 0x11U));
    vlSelf->data_o[2U] = ((0xff8fffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather)))) 
                             << 0x14U));
    vlSelf->data_o[2U] = ((0xfc7fffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather)))) 
                             << 0x17U));
    vlSelf->data_o[2U] = ((0xe3ffffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather)))) 
                             << 0x1aU));
    vlSelf->data_o[2U] = ((0x1fffffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather)))) 
                             << 0x1dU));
    vlSelf->data_o[3U] = ((0xfffffff8U & vlSelf->data_o[3U]) 
                          | (((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather))) 
                              << 2U) | (((IData)((0U 
                                                  != (IData)(vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather))) 
                                         << 1U) | (0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather)))));
    vlSelf->data_o[3U] = ((0xffffffc7U & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather)))) 
                             << 3U));
    vlSelf->data_o[3U] = ((0xfffffe3fU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather)))) 
                             << 6U));
    vlSelf->data_o[3U] = ((0xfffff1ffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather)))) 
                             << 9U));
    vlSelf->data_o[3U] = ((0xffff8fffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather)))) 
                             << 0xcU));
    vlSelf->data_o[3U] = ((0xfffc7fffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather)))) 
                             << 0xfU));
    vlSelf->data_o[3U] = ((0xffe3ffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather)))) 
                             << 0x12U));
    vlSelf->data_o[3U] = ((0xff1fffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather)))) 
                             << 0x15U));
    vlSelf->data_o[3U] = ((0xf8ffffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather)))) 
                             << 0x18U));
    vlSelf->data_o[3U] = ((0xc7ffffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather)))) 
                             << 0x1bU));
    vlSelf->data_o[3U] = ((0x3fffffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)))) 
                             << 0x1eU));
    vlSelf->data_o[4U] = ((0xeU & vlSelf->data_o[4U]) 
                          | (0xfU & ((((IData)((0U 
                                                != (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather))) 
                                       << 2U) | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)))) 
                                     >> 2U)));
    vlSelf->data_o[4U] = ((1U & vlSelf->data_o[4U]) 
                          | (0xfU & ((((IData)((0U 
                                                != (IData)(vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather))) 
                                       << 2U) | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather)))) 
                                     << 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W84_E5___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot__0(Vtestbench_bsg_mux_one_hot__W84_E5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W84_E5___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 0xaU)))));
    vlSelf->__PVT__data_masked[1U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 0xaU)))));
    vlSelf->__PVT__data_masked[2U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 0xaU)))));
    vlSelf->__PVT__data_masked[3U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[3U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 0xaU)))));
    vlSelf->__PVT__data_masked[4U] = ((0xfffffff0U 
                                       & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[4U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 0xaU)))))));
    vlSelf->__PVT__data_masked[4U] = ((0xfU & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[4U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xbU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[5U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[5U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xbU)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[5U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xbU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[6U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[6U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xbU)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[6U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xbU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[7U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[7U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xbU)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[7U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xbU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[8U] = ((0xffffff00U 
                                       & vlSelf->__PVT__data_masked[8U]) 
                                      | ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[8U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 0xbU)))) 
                                                     >> 0x1cU))) 
                                         | (0xf0U & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[8U] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 0xbU)))) 
                                                << 4U)))));
    vlSelf->__PVT__data_masked[8U] = ((0xffU & vlSelf->__PVT__data_masked[8U]) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[8U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xcU)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[9U] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[9U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 0xcU)))) 
                                                   >> 0x18U))) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[9U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xcU)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[0xaU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xaU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 0xcU)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xaU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xcU)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xbU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xbU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 0xcU)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xbU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xcU)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xcU] = ((0xfffff000U 
                                         & vlSelf->__PVT__data_masked[0xcU]) 
                                        | ((0xffU & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xcU] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 0xcU)))) 
                                                >> 0x18U))) 
                                           | (0xf00U 
                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xcU] 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                   >> 0xcU)))) 
                                                    << 8U)))));
    vlSelf->__PVT__data_masked[0xcU] = ((0xfffU & vlSelf->__PVT__data_masked[0xcU]) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xcU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xdU)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0xdU] = ((0xfffU & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xdU] 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                     >> 0xdU)))) 
                                                      >> 0x14U))) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xdU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xdU)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0xeU] = ((0xfffU & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xeU] 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                     >> 0xdU)))) 
                                                      >> 0x14U))) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xeU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xdU)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0xfU] = ((0xfffU & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xfU] 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                     >> 0xdU)))) 
                                                      >> 0x14U))) 
                                        | (0xfffff000U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0xfU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xdU)))) 
                                                 << 0xcU))));
    vlSelf->__PVT__data_masked[0x10U] = ((0xffff0000U 
                                          & vlSelf->__PVT__data_masked[0x10U]) 
                                         | ((0xfffU 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x10U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 0xdU)))) 
                                                   >> 0x14U))) 
                                            | (0xf000U 
                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x10U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 0xdU)))) 
                                                     << 0xcU)))));
    vlSelf->__PVT__data_masked[0x10U] = ((0xffffU & 
                                          vlSelf->__PVT__data_masked[0x10U]) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x10U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xeU)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x11U] = ((0xffffU & 
                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x11U] 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                             >> 0xeU)))) 
                                              >> 0x10U))) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x11U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xeU)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x12U] = ((0xffffU & 
                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x12U] 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                             >> 0xeU)))) 
                                              >> 0x10U))) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x12U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xeU)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x13U] = ((0xffffU & 
                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x13U] 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                             >> 0xeU)))) 
                                              >> 0x10U))) 
                                         | (0xffff0000U 
                                            & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x13U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xeU)))) 
                                                  << 0x10U))));
    vlSelf->__PVT__data_masked[0x14U] = (0xfffffU & 
                                         ((0xffffU 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x14U] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xeU)))) 
                                                 >> 0x10U))) 
                                          | (0xf0000U 
                                             & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT__source_combine[0x14U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__resp_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 0xeU)))) 
                                                   << 0x10U)))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[0U]))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x10U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xcU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x11U]) 
              | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[8U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0xdU])));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[9U]) 
              | ((2U & (vlSelf->__PVT__data_masked[4U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[4U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[5U]) 
                                | (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[0U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[1U]))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x11U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xdU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x12U]) 
              | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[9U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0xeU])));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[0xaU]) 
              | ((2U & (vlSelf->__PVT__data_masked[5U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[5U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[6U]) 
                                | (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[1U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[2U]))));
    vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[2U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[2U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[2U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x12U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xeU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x13U]) 
              | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xaU] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0xfU])));
    vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[0xbU]) 
              | ((2U & (vlSelf->__PVT__data_masked[6U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[2U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[6U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[7U]) 
                                | (1U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[2U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[2U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[3U]))));
    vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                           >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 7U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 4U)))));
    vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x10U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 8U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 5U)))));
    vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x11U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 9U)) | 
                                  (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 6U)))));
    vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x12U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[3U] 
                                           >> 7U)))));
    vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x13U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[3U] 
                                           >> 8U)))));
    vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x14U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[3U] 
                                           >> 9U)))));
    vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x15U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x16U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0xeU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x17U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0xfU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x18U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x19U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x1aU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x13U] 
                        >> 0x1bU)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                            >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 4U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 3U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x1aU))));
    vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 2U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x1bU))));
    vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        << 1U)) | (8U & (vlSelf->__PVT__data_masked[0xfU] 
                                         >> 0x1cU))));
    vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather)) 
           | ((0x10U & vlSelf->__PVT__data_masked[0x14U]) 
              | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                       << 3U))));
    vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 1U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         << 2U))));
    vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 2U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         << 1U))));
    vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xbU] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 3U)) | (8U & vlSelf->__PVT__data_masked[0x10U])));
    vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 0x1bU)) | 
                                (1U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 4U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 1U))));
    vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     << 1U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 0x1cU)) | 
                                (1U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 5U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 2U))));
    vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[0xcU]) 
              | ((2U & (vlSelf->__PVT__data_masked[7U] 
                        >> 0x1dU)) | (1U & (vlSelf->__PVT__data_masked[3U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 6U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 3U))));
    vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[7U] 
                                       >> 0x1eU)) | 
                                (1U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 7U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 4U))));
    vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       << 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 8U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 5U))));
    vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 3U)) | ((2U & vlSelf->__PVT__data_masked[8U]) 
                                | (1U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 9U)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                         >> 6U))));
    vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 1U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[3U] 
                                                     >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xaU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 7U))));
    vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 2U)) | (vlSelf->__PVT__data_masked[3U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xbU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 8U))));
    vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 3U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[4U]))));
    vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xcU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 9U))));
    vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[4U] 
                                                     >> 1U)))));
    vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xdU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[4U] 
                                                     >> 2U)))));
    vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xeU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather 
        = ((0x18U & (IData)(vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[0xcU] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[8U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[4U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather 
        = ((7U & (IData)(vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather)) 
           | ((0x10U & (vlSelf->__PVT__data_masked[0x14U] 
                        >> 0xfU)) | (8U & (vlSelf->__PVT__data_masked[0x10U] 
                                           >> 0xcU))));
    vlSelf->data_o[0U] = ((0xfffffff8U & vlSelf->data_o[0U]) 
                          | (((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather))) 
                              << 2U) | (((IData)((0U 
                                                  != (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather))) 
                                         << 1U) | (0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)))));
    vlSelf->data_o[0U] = ((0xffffffc7U & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)))) 
                             << 3U));
    vlSelf->data_o[0U] = ((0xfffffe3fU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)))) 
                             << 6U));
    vlSelf->data_o[0U] = ((0xfffff1ffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)))) 
                             << 9U));
    vlSelf->data_o[0U] = ((0xffff8fffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)))) 
                             << 0xcU));
    vlSelf->data_o[0U] = ((0xfffc7fffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)))) 
                             << 0xfU));
    vlSelf->data_o[0U] = ((0xffe3ffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)))) 
                             << 0x12U));
    vlSelf->data_o[0U] = ((0xff1fffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)))) 
                             << 0x15U));
    vlSelf->data_o[0U] = ((0xf8ffffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)))) 
                             << 0x18U));
    vlSelf->data_o[0U] = ((0xc7ffffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)))) 
                             << 0x1bU));
    vlSelf->data_o[0U] = ((0x3fffffffU & vlSelf->data_o[0U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)))) 
                             << 0x1eU));
    vlSelf->data_o[1U] = ((0xfffffffeU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)))) 
                             >> 2U));
    vlSelf->data_o[1U] = ((0xfffffff1U & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)))) 
                             << 1U));
    vlSelf->data_o[1U] = ((0xffffff8fU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)))) 
                             << 4U));
    vlSelf->data_o[1U] = ((0xfffffc7fU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)))) 
                             << 7U));
    vlSelf->data_o[1U] = ((0xffffe3ffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)))) 
                             << 0xaU));
    vlSelf->data_o[1U] = ((0xffff1fffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)))) 
                             << 0xdU));
    vlSelf->data_o[1U] = ((0xfff8ffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)))) 
                             << 0x10U));
    vlSelf->data_o[1U] = ((0xffc7ffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)))) 
                             << 0x13U));
    vlSelf->data_o[1U] = ((0xfe3fffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)))) 
                             << 0x16U));
    vlSelf->data_o[1U] = ((0xf1ffffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)))) 
                             << 0x19U));
    vlSelf->data_o[1U] = ((0x8fffffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)))) 
                             << 0x1cU));
    vlSelf->data_o[1U] = ((0x7fffffffU & vlSelf->data_o[1U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)))) 
                             << 0x1fU));
    vlSelf->data_o[2U] = ((0xfffffffcU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__65__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__64__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)))) 
                             >> 1U));
    vlSelf->data_o[2U] = ((0xffffffe3U & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__68__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__67__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__66__KET____DOT__gather)))) 
                             << 2U));
    vlSelf->data_o[2U] = ((0xffffff1fU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__71__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__70__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__69__KET____DOT__gather)))) 
                             << 5U));
    vlSelf->data_o[2U] = ((0xfffff8ffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__74__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__73__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__72__KET____DOT__gather)))) 
                             << 8U));
    vlSelf->data_o[2U] = ((0xffffc7ffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__77__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__76__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__75__KET____DOT__gather)))) 
                             << 0xbU));
    vlSelf->data_o[2U] = ((0xfffe3fffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__80__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__79__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__78__KET____DOT__gather)))) 
                             << 0xeU));
    vlSelf->data_o[2U] = ((0xfff1ffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__83__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__82__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__81__KET____DOT__gather)))) 
                             << 0x11U));
    vlSelf->data_o[2U] = ((0xff8fffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__86__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__85__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__84__KET____DOT__gather)))) 
                             << 0x14U));
    vlSelf->data_o[2U] = ((0xfc7fffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__89__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__88__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__87__KET____DOT__gather)))) 
                             << 0x17U));
    vlSelf->data_o[2U] = ((0xe3ffffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__92__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__91__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__90__KET____DOT__gather)))) 
                             << 0x1aU));
    vlSelf->data_o[2U] = ((0x1fffffffU & vlSelf->data_o[2U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__95__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__94__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__93__KET____DOT__gather)))) 
                             << 0x1dU));
    vlSelf->data_o[3U] = ((0xfffffff8U & vlSelf->data_o[3U]) 
                          | (((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__98__KET____DOT__gather))) 
                              << 2U) | (((IData)((0U 
                                                  != (IData)(vlSelf->__PVT__reduce__BRA__97__KET____DOT__gather))) 
                                         << 1U) | (0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__96__KET____DOT__gather)))));
    vlSelf->data_o[3U] = ((0xffffffc7U & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__101__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__100__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__99__KET____DOT__gather)))) 
                             << 3U));
    vlSelf->data_o[3U] = ((0xfffffe3fU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__104__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__103__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__102__KET____DOT__gather)))) 
                             << 6U));
    vlSelf->data_o[3U] = ((0xfffff1ffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__107__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__106__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__105__KET____DOT__gather)))) 
                             << 9U));
    vlSelf->data_o[3U] = ((0xffff8fffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__110__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__109__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__108__KET____DOT__gather)))) 
                             << 0xcU));
    vlSelf->data_o[3U] = ((0xfffc7fffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__113__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__112__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__111__KET____DOT__gather)))) 
                             << 0xfU));
    vlSelf->data_o[3U] = ((0xffe3ffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__116__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__115__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__114__KET____DOT__gather)))) 
                             << 0x12U));
    vlSelf->data_o[3U] = ((0xff1fffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__119__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__118__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__117__KET____DOT__gather)))) 
                             << 0x15U));
    vlSelf->data_o[3U] = ((0xf8ffffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__122__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__121__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__120__KET____DOT__gather)))) 
                             << 0x18U));
    vlSelf->data_o[3U] = ((0xc7ffffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__125__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__124__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__123__KET____DOT__gather)))) 
                             << 0x1bU));
    vlSelf->data_o[3U] = ((0x3fffffffU & vlSelf->data_o[3U]) 
                          | ((((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather))) 
                               << 2U) | (((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather))) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)))) 
                             << 0x1eU));
    vlSelf->data_o[4U] = ((0xeU & vlSelf->data_o[4U]) 
                          | (0xfU & ((((IData)((0U 
                                                != (IData)(vlSelf->__PVT__reduce__BRA__128__KET____DOT__gather))) 
                                       << 2U) | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__reduce__BRA__127__KET____DOT__gather))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__126__KET____DOT__gather)))) 
                                     >> 2U)));
    vlSelf->data_o[4U] = ((1U & vlSelf->data_o[4U]) 
                          | (0xfU & ((((IData)((0U 
                                                != (IData)(vlSelf->__PVT__reduce__BRA__131__KET____DOT__gather))) 
                                       << 2U) | (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__PVT__reduce__BRA__130__KET____DOT__gather))) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__129__KET____DOT__gather)))) 
                                     << 1U)));
}
