// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_mux_one_hot__W84_E3.h"

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W84_E3___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot__0(Vtestbench_bsg_mux_one_hot__W84_E3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W84_E3___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o)))));
    vlSelf->__PVT__data_masked[1U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o)))));
    vlSelf->__PVT__data_masked[2U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o)))));
    vlSelf->__PVT__data_masked[3U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[3U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o)))));
    vlSelf->__PVT__data_masked[4U] = ((0xfffffff0U 
                                       & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[4U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o)))))));
    vlSelf->__PVT__data_masked[4U] = ((0xfU & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[4U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 1U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[5U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[5U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 1U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[5U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 1U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[6U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[6U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 1U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[6U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 1U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[7U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[7U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 1U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[7U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 1U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[8U] = ((0xffffff00U 
                                       & vlSelf->__PVT__data_masked[8U]) 
                                      | ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 1U)))) 
                                                     >> 0x1cU))) 
                                         | (0xf0U & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 1U)))) 
                                                << 4U)))));
    vlSelf->__PVT__data_masked[8U] = ((0xffU & vlSelf->__PVT__data_masked[8U]) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 2U)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[9U] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[9U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 2U)))) 
                                                   >> 0x18U))) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[9U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 2U)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[0xaU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xaU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 2U)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xaU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xbU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xbU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 2U)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xbU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 2U)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xcU] = (0xfffU & ((0xffU 
                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xcU] 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                        >> 2U)))) 
                                                         >> 0x18U))) 
                                                  | (0xf00U 
                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xcU] 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                          >> 2U)))) 
                                                           << 8U)))));
    vlSelf->data_o[0U] = ((0xfffffffeU & vlSelf->data_o[0U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[8U] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[4U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0xfffffffdU & vlSelf->data_o[0U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffffbU & vlSelf->data_o[0U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffff7U & vlSelf->data_o[0U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffefU & vlSelf->data_o[0U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffdfU & vlSelf->data_o[0U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffbfU & vlSelf->data_o[0U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffff7fU & vlSelf->data_o[0U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffeffU & vlSelf->data_o[0U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffdffU & vlSelf->data_o[0U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffbffU & vlSelf->data_o[0U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffff7ffU & vlSelf->data_o[0U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffefffU & vlSelf->data_o[0U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffdfffU & vlSelf->data_o[0U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffbfffU & vlSelf->data_o[0U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffff7fffU & vlSelf->data_o[0U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffeffffU & vlSelf->data_o[0U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffdffffU & vlSelf->data_o[0U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffbffffU & vlSelf->data_o[0U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfff7ffffU & vlSelf->data_o[0U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffefffffU & vlSelf->data_o[0U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffdfffffU & vlSelf->data_o[0U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffbfffffU & vlSelf->data_o[0U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xff7fffffU & vlSelf->data_o[0U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfeffffffU & vlSelf->data_o[0U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[9U] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfdffffffU & vlSelf->data_o[0U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfbffffffU & vlSelf->data_o[0U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xf7ffffffU & vlSelf->data_o[0U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xefffffffU & vlSelf->data_o[0U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[9U] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xdfffffffU & vlSelf->data_o[0U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0xbfffffffU & vlSelf->data_o[0U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0x7fffffffU & vlSelf->data_o[0U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[1U] = ((0xfffffffeU & vlSelf->data_o[1U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[9U] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[5U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0xfffffffdU & vlSelf->data_o[1U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffffbU & vlSelf->data_o[1U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffff7U & vlSelf->data_o[1U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffefU & vlSelf->data_o[1U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffdfU & vlSelf->data_o[1U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffbfU & vlSelf->data_o[1U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffff7fU & vlSelf->data_o[1U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffeffU & vlSelf->data_o[1U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffdffU & vlSelf->data_o[1U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffbffU & vlSelf->data_o[1U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffff7ffU & vlSelf->data_o[1U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffefffU & vlSelf->data_o[1U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffdfffU & vlSelf->data_o[1U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffbfffU & vlSelf->data_o[1U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffff7fffU & vlSelf->data_o[1U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffeffffU & vlSelf->data_o[1U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffdffffU & vlSelf->data_o[1U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffbffffU & vlSelf->data_o[1U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfff7ffffU & vlSelf->data_o[1U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffefffffU & vlSelf->data_o[1U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffdfffffU & vlSelf->data_o[1U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffbfffffU & vlSelf->data_o[1U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xff7fffffU & vlSelf->data_o[1U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfeffffffU & vlSelf->data_o[1U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfdffffffU & vlSelf->data_o[1U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfbffffffU & vlSelf->data_o[1U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xf7ffffffU & vlSelf->data_o[1U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xefffffffU & vlSelf->data_o[1U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xaU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xdfffffffU & vlSelf->data_o[1U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0xbfffffffU & vlSelf->data_o[1U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0x7fffffffU & vlSelf->data_o[1U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[2U] = ((0xfffffffeU & vlSelf->data_o[2U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xaU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[6U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0xfffffffdU & vlSelf->data_o[2U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffffbU & vlSelf->data_o[2U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffff7U & vlSelf->data_o[2U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffefU & vlSelf->data_o[2U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffdfU & vlSelf->data_o[2U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffbfU & vlSelf->data_o[2U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffff7fU & vlSelf->data_o[2U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffeffU & vlSelf->data_o[2U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffdffU & vlSelf->data_o[2U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffbffU & vlSelf->data_o[2U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffff7ffU & vlSelf->data_o[2U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffefffU & vlSelf->data_o[2U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffdfffU & vlSelf->data_o[2U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffbfffU & vlSelf->data_o[2U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffff7fffU & vlSelf->data_o[2U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffeffffU & vlSelf->data_o[2U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffdffffU & vlSelf->data_o[2U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffbffffU & vlSelf->data_o[2U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfff7ffffU & vlSelf->data_o[2U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffefffffU & vlSelf->data_o[2U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffdfffffU & vlSelf->data_o[2U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffbfffffU & vlSelf->data_o[2U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xff7fffffU & vlSelf->data_o[2U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfeffffffU & vlSelf->data_o[2U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfdffffffU & vlSelf->data_o[2U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfbffffffU & vlSelf->data_o[2U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xf7ffffffU & vlSelf->data_o[2U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xefffffffU & vlSelf->data_o[2U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xbU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xdfffffffU & vlSelf->data_o[2U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0xbfffffffU & vlSelf->data_o[2U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0x7fffffffU & vlSelf->data_o[2U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[3U] = ((0xfffffffeU & vlSelf->data_o[3U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xbU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[7U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0xfffffffdU & vlSelf->data_o[3U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffffbU & vlSelf->data_o[3U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffff7U & vlSelf->data_o[3U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffefU & vlSelf->data_o[3U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffdfU & vlSelf->data_o[3U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffbfU & vlSelf->data_o[3U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffff7fU & vlSelf->data_o[3U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffeffU & vlSelf->data_o[3U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffdffU & vlSelf->data_o[3U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffbffU & vlSelf->data_o[3U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffff7ffU & vlSelf->data_o[3U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffefffU & vlSelf->data_o[3U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffdfffU & vlSelf->data_o[3U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffbfffU & vlSelf->data_o[3U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffff7fffU & vlSelf->data_o[3U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffeffffU & vlSelf->data_o[3U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffdffffU & vlSelf->data_o[3U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffbffffU & vlSelf->data_o[3U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfff7ffffU & vlSelf->data_o[3U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffefffffU & vlSelf->data_o[3U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffdfffffU & vlSelf->data_o[3U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffbfffffU & vlSelf->data_o[3U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xff7fffffU & vlSelf->data_o[3U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfeffffffU & vlSelf->data_o[3U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfdffffffU & vlSelf->data_o[3U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfbffffffU & vlSelf->data_o[3U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xf7ffffffU & vlSelf->data_o[3U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xefffffffU & vlSelf->data_o[3U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xcU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xdfffffffU & vlSelf->data_o[3U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0xbfffffffU & vlSelf->data_o[3U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0x7fffffffU & vlSelf->data_o[3U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[4U] = ((0xeU & vlSelf->data_o[4U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xcU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[8U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[4U]))));
    vlSelf->data_o[4U] = ((0xdU & vlSelf->data_o[4U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[4U])))));
    vlSelf->data_o[4U] = ((0xbU & vlSelf->data_o[4U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[4U])))));
    vlSelf->data_o[4U] = ((7U & vlSelf->data_o[4U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[4U])))));
}

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W84_E3___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot__0(Vtestbench_bsg_mux_one_hot__W84_E3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W84_E3___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 3U)))));
    vlSelf->__PVT__data_masked[1U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 3U)))));
    vlSelf->__PVT__data_masked[2U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 3U)))));
    vlSelf->__PVT__data_masked[3U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[3U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 3U)))));
    vlSelf->__PVT__data_masked[4U] = ((0xfffffff0U 
                                       & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[4U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 3U)))))));
    vlSelf->__PVT__data_masked[4U] = ((0xfU & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[4U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 4U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[5U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[5U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 4U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[5U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 4U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[6U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[6U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 4U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[6U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 4U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[7U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[7U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 4U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[7U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 4U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[8U] = ((0xffffff00U 
                                       & vlSelf->__PVT__data_masked[8U]) 
                                      | ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 4U)))) 
                                                     >> 0x1cU))) 
                                         | (0xf0U & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 4U)))) 
                                                << 4U)))));
    vlSelf->__PVT__data_masked[8U] = ((0xffU & vlSelf->__PVT__data_masked[8U]) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 5U)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[9U] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[9U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 5U)))) 
                                                   >> 0x18U))) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[9U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 5U)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[0xaU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xaU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 5U)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xaU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 5U)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xbU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xbU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 5U)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xbU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 5U)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xcU] = (0xfffU & ((0xffU 
                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xcU] 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                        >> 5U)))) 
                                                         >> 0x18U))) 
                                                  | (0xf00U 
                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xcU] 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                          >> 5U)))) 
                                                           << 8U)))));
    vlSelf->data_o[0U] = ((0xfffffffeU & vlSelf->data_o[0U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[8U] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[4U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0xfffffffdU & vlSelf->data_o[0U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffffbU & vlSelf->data_o[0U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffff7U & vlSelf->data_o[0U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffefU & vlSelf->data_o[0U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffdfU & vlSelf->data_o[0U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffbfU & vlSelf->data_o[0U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffff7fU & vlSelf->data_o[0U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffeffU & vlSelf->data_o[0U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffdffU & vlSelf->data_o[0U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffbffU & vlSelf->data_o[0U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffff7ffU & vlSelf->data_o[0U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffefffU & vlSelf->data_o[0U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffdfffU & vlSelf->data_o[0U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffbfffU & vlSelf->data_o[0U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffff7fffU & vlSelf->data_o[0U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffeffffU & vlSelf->data_o[0U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffdffffU & vlSelf->data_o[0U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffbffffU & vlSelf->data_o[0U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfff7ffffU & vlSelf->data_o[0U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffefffffU & vlSelf->data_o[0U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffdfffffU & vlSelf->data_o[0U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffbfffffU & vlSelf->data_o[0U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xff7fffffU & vlSelf->data_o[0U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfeffffffU & vlSelf->data_o[0U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[9U] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfdffffffU & vlSelf->data_o[0U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfbffffffU & vlSelf->data_o[0U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xf7ffffffU & vlSelf->data_o[0U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xefffffffU & vlSelf->data_o[0U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[9U] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xdfffffffU & vlSelf->data_o[0U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0xbfffffffU & vlSelf->data_o[0U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0x7fffffffU & vlSelf->data_o[0U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[1U] = ((0xfffffffeU & vlSelf->data_o[1U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[9U] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[5U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0xfffffffdU & vlSelf->data_o[1U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffffbU & vlSelf->data_o[1U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffff7U & vlSelf->data_o[1U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffefU & vlSelf->data_o[1U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffdfU & vlSelf->data_o[1U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffbfU & vlSelf->data_o[1U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffff7fU & vlSelf->data_o[1U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffeffU & vlSelf->data_o[1U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffdffU & vlSelf->data_o[1U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffbffU & vlSelf->data_o[1U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffff7ffU & vlSelf->data_o[1U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffefffU & vlSelf->data_o[1U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffdfffU & vlSelf->data_o[1U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffbfffU & vlSelf->data_o[1U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffff7fffU & vlSelf->data_o[1U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffeffffU & vlSelf->data_o[1U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffdffffU & vlSelf->data_o[1U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffbffffU & vlSelf->data_o[1U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfff7ffffU & vlSelf->data_o[1U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffefffffU & vlSelf->data_o[1U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffdfffffU & vlSelf->data_o[1U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffbfffffU & vlSelf->data_o[1U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xff7fffffU & vlSelf->data_o[1U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfeffffffU & vlSelf->data_o[1U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfdffffffU & vlSelf->data_o[1U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfbffffffU & vlSelf->data_o[1U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xf7ffffffU & vlSelf->data_o[1U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xefffffffU & vlSelf->data_o[1U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xaU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xdfffffffU & vlSelf->data_o[1U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0xbfffffffU & vlSelf->data_o[1U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0x7fffffffU & vlSelf->data_o[1U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[2U] = ((0xfffffffeU & vlSelf->data_o[2U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xaU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[6U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0xfffffffdU & vlSelf->data_o[2U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffffbU & vlSelf->data_o[2U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffff7U & vlSelf->data_o[2U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffefU & vlSelf->data_o[2U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffdfU & vlSelf->data_o[2U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffbfU & vlSelf->data_o[2U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffff7fU & vlSelf->data_o[2U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffeffU & vlSelf->data_o[2U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffdffU & vlSelf->data_o[2U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffbffU & vlSelf->data_o[2U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffff7ffU & vlSelf->data_o[2U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffefffU & vlSelf->data_o[2U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffdfffU & vlSelf->data_o[2U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffbfffU & vlSelf->data_o[2U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffff7fffU & vlSelf->data_o[2U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffeffffU & vlSelf->data_o[2U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffdffffU & vlSelf->data_o[2U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffbffffU & vlSelf->data_o[2U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfff7ffffU & vlSelf->data_o[2U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffefffffU & vlSelf->data_o[2U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffdfffffU & vlSelf->data_o[2U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffbfffffU & vlSelf->data_o[2U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xff7fffffU & vlSelf->data_o[2U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfeffffffU & vlSelf->data_o[2U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfdffffffU & vlSelf->data_o[2U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfbffffffU & vlSelf->data_o[2U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xf7ffffffU & vlSelf->data_o[2U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xefffffffU & vlSelf->data_o[2U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xbU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xdfffffffU & vlSelf->data_o[2U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0xbfffffffU & vlSelf->data_o[2U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0x7fffffffU & vlSelf->data_o[2U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[3U] = ((0xfffffffeU & vlSelf->data_o[3U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xbU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[7U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0xfffffffdU & vlSelf->data_o[3U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffffbU & vlSelf->data_o[3U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffff7U & vlSelf->data_o[3U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffefU & vlSelf->data_o[3U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffdfU & vlSelf->data_o[3U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffbfU & vlSelf->data_o[3U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffff7fU & vlSelf->data_o[3U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffeffU & vlSelf->data_o[3U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffdffU & vlSelf->data_o[3U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffbffU & vlSelf->data_o[3U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffff7ffU & vlSelf->data_o[3U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffefffU & vlSelf->data_o[3U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffdfffU & vlSelf->data_o[3U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffbfffU & vlSelf->data_o[3U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffff7fffU & vlSelf->data_o[3U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffeffffU & vlSelf->data_o[3U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffdffffU & vlSelf->data_o[3U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffbffffU & vlSelf->data_o[3U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfff7ffffU & vlSelf->data_o[3U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffefffffU & vlSelf->data_o[3U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffdfffffU & vlSelf->data_o[3U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffbfffffU & vlSelf->data_o[3U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xff7fffffU & vlSelf->data_o[3U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfeffffffU & vlSelf->data_o[3U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfdffffffU & vlSelf->data_o[3U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfbffffffU & vlSelf->data_o[3U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xf7ffffffU & vlSelf->data_o[3U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xefffffffU & vlSelf->data_o[3U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xcU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xdfffffffU & vlSelf->data_o[3U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0xbfffffffU & vlSelf->data_o[3U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0x7fffffffU & vlSelf->data_o[3U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[4U] = ((0xeU & vlSelf->data_o[4U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xcU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[8U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[4U]))));
    vlSelf->data_o[4U] = ((0xdU & vlSelf->data_o[4U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[4U])))));
    vlSelf->data_o[4U] = ((0xbU & vlSelf->data_o[4U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[4U])))));
    vlSelf->data_o[4U] = ((7U & vlSelf->data_o[4U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[4U])))));
}

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W84_E3___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot__0(Vtestbench_bsg_mux_one_hot__W84_E3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W84_E3___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 6U)))));
    vlSelf->__PVT__data_masked[1U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 6U)))));
    vlSelf->__PVT__data_masked[2U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 6U)))));
    vlSelf->__PVT__data_masked[3U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[3U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 6U)))));
    vlSelf->__PVT__data_masked[4U] = ((0xfffffff0U 
                                       & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[4U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 6U)))))));
    vlSelf->__PVT__data_masked[4U] = ((0xfU & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[4U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 7U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[5U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[5U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 7U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[5U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 7U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[6U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[6U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 7U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[6U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 7U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[7U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[7U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 7U)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[7U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 7U)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[8U] = ((0xffffff00U 
                                       & vlSelf->__PVT__data_masked[8U]) 
                                      | ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 7U)))) 
                                                     >> 0x1cU))) 
                                         | (0xf0U & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 7U)))) 
                                                << 4U)))));
    vlSelf->__PVT__data_masked[8U] = ((0xffU & vlSelf->__PVT__data_masked[8U]) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 8U)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[9U] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[9U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 8U)))) 
                                                   >> 0x18U))) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[9U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 8U)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[0xaU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xaU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 8U)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xaU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 8U)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xbU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xbU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 8U)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xbU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 8U)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xcU] = (0xfffU & ((0xffU 
                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xcU] 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                        >> 8U)))) 
                                                         >> 0x18U))) 
                                                  | (0xf00U 
                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xcU] 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                          >> 8U)))) 
                                                           << 8U)))));
    vlSelf->data_o[0U] = ((0xfffffffeU & vlSelf->data_o[0U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[8U] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[4U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0xfffffffdU & vlSelf->data_o[0U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffffbU & vlSelf->data_o[0U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffff7U & vlSelf->data_o[0U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffefU & vlSelf->data_o[0U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffdfU & vlSelf->data_o[0U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffbfU & vlSelf->data_o[0U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffff7fU & vlSelf->data_o[0U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffeffU & vlSelf->data_o[0U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffdffU & vlSelf->data_o[0U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffbffU & vlSelf->data_o[0U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffff7ffU & vlSelf->data_o[0U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffefffU & vlSelf->data_o[0U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffdfffU & vlSelf->data_o[0U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffbfffU & vlSelf->data_o[0U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffff7fffU & vlSelf->data_o[0U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffeffffU & vlSelf->data_o[0U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffdffffU & vlSelf->data_o[0U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffbffffU & vlSelf->data_o[0U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfff7ffffU & vlSelf->data_o[0U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffefffffU & vlSelf->data_o[0U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffdfffffU & vlSelf->data_o[0U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffbfffffU & vlSelf->data_o[0U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xff7fffffU & vlSelf->data_o[0U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfeffffffU & vlSelf->data_o[0U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[9U] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfdffffffU & vlSelf->data_o[0U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfbffffffU & vlSelf->data_o[0U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xf7ffffffU & vlSelf->data_o[0U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xefffffffU & vlSelf->data_o[0U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[9U] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xdfffffffU & vlSelf->data_o[0U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0xbfffffffU & vlSelf->data_o[0U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0x7fffffffU & vlSelf->data_o[0U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[1U] = ((0xfffffffeU & vlSelf->data_o[1U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[9U] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[5U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0xfffffffdU & vlSelf->data_o[1U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffffbU & vlSelf->data_o[1U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffff7U & vlSelf->data_o[1U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffefU & vlSelf->data_o[1U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffdfU & vlSelf->data_o[1U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffbfU & vlSelf->data_o[1U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffff7fU & vlSelf->data_o[1U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffeffU & vlSelf->data_o[1U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffdffU & vlSelf->data_o[1U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffbffU & vlSelf->data_o[1U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffff7ffU & vlSelf->data_o[1U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffefffU & vlSelf->data_o[1U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffdfffU & vlSelf->data_o[1U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffbfffU & vlSelf->data_o[1U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffff7fffU & vlSelf->data_o[1U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffeffffU & vlSelf->data_o[1U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffdffffU & vlSelf->data_o[1U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffbffffU & vlSelf->data_o[1U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfff7ffffU & vlSelf->data_o[1U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffefffffU & vlSelf->data_o[1U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffdfffffU & vlSelf->data_o[1U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffbfffffU & vlSelf->data_o[1U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xff7fffffU & vlSelf->data_o[1U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfeffffffU & vlSelf->data_o[1U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfdffffffU & vlSelf->data_o[1U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfbffffffU & vlSelf->data_o[1U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xf7ffffffU & vlSelf->data_o[1U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xefffffffU & vlSelf->data_o[1U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xaU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xdfffffffU & vlSelf->data_o[1U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0xbfffffffU & vlSelf->data_o[1U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0x7fffffffU & vlSelf->data_o[1U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[2U] = ((0xfffffffeU & vlSelf->data_o[2U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xaU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[6U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0xfffffffdU & vlSelf->data_o[2U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffffbU & vlSelf->data_o[2U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffff7U & vlSelf->data_o[2U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffefU & vlSelf->data_o[2U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffdfU & vlSelf->data_o[2U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffbfU & vlSelf->data_o[2U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffff7fU & vlSelf->data_o[2U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffeffU & vlSelf->data_o[2U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffdffU & vlSelf->data_o[2U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffbffU & vlSelf->data_o[2U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffff7ffU & vlSelf->data_o[2U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffefffU & vlSelf->data_o[2U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffdfffU & vlSelf->data_o[2U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffbfffU & vlSelf->data_o[2U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffff7fffU & vlSelf->data_o[2U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffeffffU & vlSelf->data_o[2U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffdffffU & vlSelf->data_o[2U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffbffffU & vlSelf->data_o[2U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfff7ffffU & vlSelf->data_o[2U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffefffffU & vlSelf->data_o[2U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffdfffffU & vlSelf->data_o[2U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffbfffffU & vlSelf->data_o[2U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xff7fffffU & vlSelf->data_o[2U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfeffffffU & vlSelf->data_o[2U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfdffffffU & vlSelf->data_o[2U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfbffffffU & vlSelf->data_o[2U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xf7ffffffU & vlSelf->data_o[2U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xefffffffU & vlSelf->data_o[2U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xbU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xdfffffffU & vlSelf->data_o[2U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0xbfffffffU & vlSelf->data_o[2U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0x7fffffffU & vlSelf->data_o[2U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[3U] = ((0xfffffffeU & vlSelf->data_o[3U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xbU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[7U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0xfffffffdU & vlSelf->data_o[3U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffffbU & vlSelf->data_o[3U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffff7U & vlSelf->data_o[3U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffefU & vlSelf->data_o[3U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffdfU & vlSelf->data_o[3U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffbfU & vlSelf->data_o[3U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffff7fU & vlSelf->data_o[3U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffeffU & vlSelf->data_o[3U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffdffU & vlSelf->data_o[3U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffbffU & vlSelf->data_o[3U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffff7ffU & vlSelf->data_o[3U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffefffU & vlSelf->data_o[3U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffdfffU & vlSelf->data_o[3U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffbfffU & vlSelf->data_o[3U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffff7fffU & vlSelf->data_o[3U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffeffffU & vlSelf->data_o[3U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffdffffU & vlSelf->data_o[3U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffbffffU & vlSelf->data_o[3U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfff7ffffU & vlSelf->data_o[3U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffefffffU & vlSelf->data_o[3U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffdfffffU & vlSelf->data_o[3U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffbfffffU & vlSelf->data_o[3U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xff7fffffU & vlSelf->data_o[3U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfeffffffU & vlSelf->data_o[3U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfdffffffU & vlSelf->data_o[3U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfbffffffU & vlSelf->data_o[3U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xf7ffffffU & vlSelf->data_o[3U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xefffffffU & vlSelf->data_o[3U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xcU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xdfffffffU & vlSelf->data_o[3U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0xbfffffffU & vlSelf->data_o[3U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0x7fffffffU & vlSelf->data_o[3U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[4U] = ((0xeU & vlSelf->data_o[4U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xcU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[8U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[4U]))));
    vlSelf->data_o[4U] = ((0xdU & vlSelf->data_o[4U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[4U])))));
    vlSelf->data_o[4U] = ((0xbU & vlSelf->data_o[4U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[4U])))));
    vlSelf->data_o[4U] = ((7U & vlSelf->data_o[4U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[4U])))));
}

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W84_E3___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot__0(Vtestbench_bsg_mux_one_hot__W84_E3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W84_E3___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 9U)))));
    vlSelf->__PVT__data_masked[1U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 9U)))));
    vlSelf->__PVT__data_masked[2U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 9U)))));
    vlSelf->__PVT__data_masked[3U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[3U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 9U)))));
    vlSelf->__PVT__data_masked[4U] = ((0xfffffff0U 
                                       & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[4U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 9U)))))));
    vlSelf->__PVT__data_masked[4U] = ((0xfU & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[4U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xaU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[5U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[5U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xaU)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[5U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xaU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[6U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[6U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xaU)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[6U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xaU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[7U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[7U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xaU)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[7U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xaU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[8U] = ((0xffffff00U 
                                       & vlSelf->__PVT__data_masked[8U]) 
                                      | ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 0xaU)))) 
                                                     >> 0x1cU))) 
                                         | (0xf0U & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 0xaU)))) 
                                                << 4U)))));
    vlSelf->__PVT__data_masked[8U] = ((0xffU & vlSelf->__PVT__data_masked[8U]) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xbU)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[9U] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[9U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 0xbU)))) 
                                                   >> 0x18U))) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[9U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xbU)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[0xaU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xaU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 0xbU)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xaU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xbU)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xbU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xbU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 0xbU)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xbU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xbU)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xcU] = (0xfffU & ((0xffU 
                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xcU] 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                        >> 0xbU)))) 
                                                         >> 0x18U))) 
                                                  | (0xf00U 
                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xcU] 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                          >> 0xbU)))) 
                                                           << 8U)))));
    vlSelf->data_o[0U] = ((0xfffffffeU & vlSelf->data_o[0U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[8U] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[4U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0xfffffffdU & vlSelf->data_o[0U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffffbU & vlSelf->data_o[0U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffff7U & vlSelf->data_o[0U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffefU & vlSelf->data_o[0U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffdfU & vlSelf->data_o[0U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffbfU & vlSelf->data_o[0U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffff7fU & vlSelf->data_o[0U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffeffU & vlSelf->data_o[0U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffdffU & vlSelf->data_o[0U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffbffU & vlSelf->data_o[0U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffff7ffU & vlSelf->data_o[0U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffefffU & vlSelf->data_o[0U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffdfffU & vlSelf->data_o[0U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffbfffU & vlSelf->data_o[0U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffff7fffU & vlSelf->data_o[0U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffeffffU & vlSelf->data_o[0U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffdffffU & vlSelf->data_o[0U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffbffffU & vlSelf->data_o[0U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfff7ffffU & vlSelf->data_o[0U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffefffffU & vlSelf->data_o[0U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffdfffffU & vlSelf->data_o[0U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffbfffffU & vlSelf->data_o[0U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xff7fffffU & vlSelf->data_o[0U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfeffffffU & vlSelf->data_o[0U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[9U] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfdffffffU & vlSelf->data_o[0U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfbffffffU & vlSelf->data_o[0U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xf7ffffffU & vlSelf->data_o[0U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xefffffffU & vlSelf->data_o[0U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[9U] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xdfffffffU & vlSelf->data_o[0U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0xbfffffffU & vlSelf->data_o[0U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0x7fffffffU & vlSelf->data_o[0U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[1U] = ((0xfffffffeU & vlSelf->data_o[1U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[9U] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[5U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0xfffffffdU & vlSelf->data_o[1U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffffbU & vlSelf->data_o[1U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffff7U & vlSelf->data_o[1U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffefU & vlSelf->data_o[1U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffdfU & vlSelf->data_o[1U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffbfU & vlSelf->data_o[1U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffff7fU & vlSelf->data_o[1U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffeffU & vlSelf->data_o[1U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffdffU & vlSelf->data_o[1U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffbffU & vlSelf->data_o[1U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffff7ffU & vlSelf->data_o[1U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffefffU & vlSelf->data_o[1U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffdfffU & vlSelf->data_o[1U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffbfffU & vlSelf->data_o[1U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffff7fffU & vlSelf->data_o[1U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffeffffU & vlSelf->data_o[1U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffdffffU & vlSelf->data_o[1U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffbffffU & vlSelf->data_o[1U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfff7ffffU & vlSelf->data_o[1U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffefffffU & vlSelf->data_o[1U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffdfffffU & vlSelf->data_o[1U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffbfffffU & vlSelf->data_o[1U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xff7fffffU & vlSelf->data_o[1U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfeffffffU & vlSelf->data_o[1U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfdffffffU & vlSelf->data_o[1U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfbffffffU & vlSelf->data_o[1U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xf7ffffffU & vlSelf->data_o[1U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xefffffffU & vlSelf->data_o[1U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xaU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xdfffffffU & vlSelf->data_o[1U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0xbfffffffU & vlSelf->data_o[1U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0x7fffffffU & vlSelf->data_o[1U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[2U] = ((0xfffffffeU & vlSelf->data_o[2U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xaU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[6U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0xfffffffdU & vlSelf->data_o[2U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffffbU & vlSelf->data_o[2U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffff7U & vlSelf->data_o[2U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffefU & vlSelf->data_o[2U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffdfU & vlSelf->data_o[2U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffbfU & vlSelf->data_o[2U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffff7fU & vlSelf->data_o[2U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffeffU & vlSelf->data_o[2U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffdffU & vlSelf->data_o[2U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffbffU & vlSelf->data_o[2U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffff7ffU & vlSelf->data_o[2U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffefffU & vlSelf->data_o[2U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffdfffU & vlSelf->data_o[2U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffbfffU & vlSelf->data_o[2U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffff7fffU & vlSelf->data_o[2U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffeffffU & vlSelf->data_o[2U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffdffffU & vlSelf->data_o[2U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffbffffU & vlSelf->data_o[2U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfff7ffffU & vlSelf->data_o[2U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffefffffU & vlSelf->data_o[2U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffdfffffU & vlSelf->data_o[2U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffbfffffU & vlSelf->data_o[2U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xff7fffffU & vlSelf->data_o[2U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfeffffffU & vlSelf->data_o[2U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfdffffffU & vlSelf->data_o[2U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfbffffffU & vlSelf->data_o[2U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xf7ffffffU & vlSelf->data_o[2U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xefffffffU & vlSelf->data_o[2U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xbU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xdfffffffU & vlSelf->data_o[2U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0xbfffffffU & vlSelf->data_o[2U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0x7fffffffU & vlSelf->data_o[2U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[3U] = ((0xfffffffeU & vlSelf->data_o[3U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xbU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[7U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0xfffffffdU & vlSelf->data_o[3U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffffbU & vlSelf->data_o[3U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffff7U & vlSelf->data_o[3U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffefU & vlSelf->data_o[3U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffdfU & vlSelf->data_o[3U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffbfU & vlSelf->data_o[3U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffff7fU & vlSelf->data_o[3U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffeffU & vlSelf->data_o[3U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffdffU & vlSelf->data_o[3U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffbffU & vlSelf->data_o[3U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffff7ffU & vlSelf->data_o[3U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffefffU & vlSelf->data_o[3U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffdfffU & vlSelf->data_o[3U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffbfffU & vlSelf->data_o[3U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffff7fffU & vlSelf->data_o[3U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffeffffU & vlSelf->data_o[3U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffdffffU & vlSelf->data_o[3U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffbffffU & vlSelf->data_o[3U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfff7ffffU & vlSelf->data_o[3U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffefffffU & vlSelf->data_o[3U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffdfffffU & vlSelf->data_o[3U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffbfffffU & vlSelf->data_o[3U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xff7fffffU & vlSelf->data_o[3U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfeffffffU & vlSelf->data_o[3U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfdffffffU & vlSelf->data_o[3U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfbffffffU & vlSelf->data_o[3U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xf7ffffffU & vlSelf->data_o[3U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xefffffffU & vlSelf->data_o[3U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xcU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xdfffffffU & vlSelf->data_o[3U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0xbfffffffU & vlSelf->data_o[3U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0x7fffffffU & vlSelf->data_o[3U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[4U] = ((0xeU & vlSelf->data_o[4U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xcU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[8U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[4U]))));
    vlSelf->data_o[4U] = ((0xdU & vlSelf->data_o[4U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[4U])))));
    vlSelf->data_o[4U] = ((0xbU & vlSelf->data_o[4U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[4U])))));
    vlSelf->data_o[4U] = ((7U & vlSelf->data_o[4U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[4U])))));
}

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W84_E3___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot__0(Vtestbench_bsg_mux_one_hot__W84_E3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W84_E3___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 0xcU)))));
    vlSelf->__PVT__data_masked[1U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 0xcU)))));
    vlSelf->__PVT__data_masked[2U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 0xcU)))));
    vlSelf->__PVT__data_masked[3U] = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[3U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                       >> 0xcU)))));
    vlSelf->__PVT__data_masked[4U] = ((0xfffffff0U 
                                       & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[4U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 0xcU)))))));
    vlSelf->__PVT__data_masked[4U] = ((0xfU & vlSelf->__PVT__data_masked[4U]) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[4U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xdU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[5U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[5U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xdU)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[5U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xdU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[6U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[6U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xdU)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[6U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xdU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[7U] = ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[7U] 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                 >> 0xdU)))) 
                                                  >> 0x1cU))) 
                                      | (0xfffffff0U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[7U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xdU)))) 
                                               << 4U))));
    vlSelf->__PVT__data_masked[8U] = ((0xffffff00U 
                                       & vlSelf->__PVT__data_masked[8U]) 
                                      | ((0xfU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 0xdU)))) 
                                                     >> 0x1cU))) 
                                         | (0xf0U & 
                                            (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                               >> 0xdU)))) 
                                                << 4U)))));
    vlSelf->__PVT__data_masked[8U] = ((0xffU & vlSelf->__PVT__data_masked[8U]) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[8U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xeU)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[9U] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[9U] 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                  >> 0xeU)))) 
                                                   >> 0x18U))) 
                                      | (0xffffff00U 
                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[9U] 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                              >> 0xeU)))) 
                                               << 8U))));
    vlSelf->__PVT__data_masked[0xaU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xaU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 0xeU)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xaU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xeU)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xbU] = ((0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xbU] 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                    >> 0xeU)))) 
                                                     >> 0x18U))) 
                                        | (0xffffff00U 
                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xbU] 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                >> 0xeU)))) 
                                                 << 8U))));
    vlSelf->__PVT__data_masked[0xcU] = (0xfffU & ((0xffU 
                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xcU] 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                        >> 0xeU)))) 
                                                         >> 0x18U))) 
                                                  | (0xf00U 
                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT__source_combine[0xcU] 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cmd_xbar__DOT____Vcellout__cbc__grants_oi_one_hot_o) 
                                                                          >> 0xeU)))) 
                                                           << 8U)))));
    vlSelf->data_o[0U] = ((0xfffffffeU & vlSelf->data_o[0U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[8U] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[4U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0xfffffffdU & vlSelf->data_o[0U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffffbU & vlSelf->data_o[0U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffff7U & vlSelf->data_o[0U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[8U] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[4U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffefU & vlSelf->data_o[0U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffdfU & vlSelf->data_o[0U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffffbfU & vlSelf->data_o[0U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffff7fU & vlSelf->data_o[0U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[4U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffeffU & vlSelf->data_o[0U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffdffU & vlSelf->data_o[0U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffffbffU & vlSelf->data_o[0U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffff7ffU & vlSelf->data_o[0U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[8U] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[4U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffefffU & vlSelf->data_o[0U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffdfffU & vlSelf->data_o[0U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffffbfffU & vlSelf->data_o[0U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffff7fffU & vlSelf->data_o[0U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[8U] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[4U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffeffffU & vlSelf->data_o[0U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffdffffU & vlSelf->data_o[0U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfffbffffU & vlSelf->data_o[0U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfff7ffffU & vlSelf->data_o[0U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[4U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffefffffU & vlSelf->data_o[0U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffdfffffU & vlSelf->data_o[0U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xffbfffffU & vlSelf->data_o[0U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xff7fffffU & vlSelf->data_o[0U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[8U] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[4U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfeffffffU & vlSelf->data_o[0U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[9U] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfdffffffU & vlSelf->data_o[0U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xfbffffffU & vlSelf->data_o[0U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xf7ffffffU & vlSelf->data_o[0U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[9U] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[4U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xefffffffU & vlSelf->data_o[0U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[9U] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[0U])))));
    vlSelf->data_o[0U] = ((0xdfffffffU & vlSelf->data_o[0U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0xbfffffffU & vlSelf->data_o[0U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[0U] = ((0x7fffffffU & vlSelf->data_o[0U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[9U] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[5U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[0U]))));
    vlSelf->data_o[1U] = ((0xfffffffeU & vlSelf->data_o[1U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[9U] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[5U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0xfffffffdU & vlSelf->data_o[1U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffffbU & vlSelf->data_o[1U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffff7U & vlSelf->data_o[1U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[9U] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[5U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffefU & vlSelf->data_o[1U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffdfU & vlSelf->data_o[1U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffffbfU & vlSelf->data_o[1U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffff7fU & vlSelf->data_o[1U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[9U] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[5U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffeffU & vlSelf->data_o[1U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffdffU & vlSelf->data_o[1U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffffbffU & vlSelf->data_o[1U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffff7ffU & vlSelf->data_o[1U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[9U] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[5U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffefffU & vlSelf->data_o[1U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffdfffU & vlSelf->data_o[1U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffffbfffU & vlSelf->data_o[1U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffff7fffU & vlSelf->data_o[1U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[9U] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[5U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffeffffU & vlSelf->data_o[1U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffdffffU & vlSelf->data_o[1U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfffbffffU & vlSelf->data_o[1U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfff7ffffU & vlSelf->data_o[1U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[5U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffefffffU & vlSelf->data_o[1U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffdfffffU & vlSelf->data_o[1U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xffbfffffU & vlSelf->data_o[1U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xff7fffffU & vlSelf->data_o[1U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[9U] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[5U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfeffffffU & vlSelf->data_o[1U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfdffffffU & vlSelf->data_o[1U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xfbffffffU & vlSelf->data_o[1U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xf7ffffffU & vlSelf->data_o[1U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xaU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[5U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xefffffffU & vlSelf->data_o[1U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xaU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[1U])))));
    vlSelf->data_o[1U] = ((0xdfffffffU & vlSelf->data_o[1U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0xbfffffffU & vlSelf->data_o[1U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[1U] = ((0x7fffffffU & vlSelf->data_o[1U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xaU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[6U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[1U]))));
    vlSelf->data_o[2U] = ((0xfffffffeU & vlSelf->data_o[2U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xaU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[6U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0xfffffffdU & vlSelf->data_o[2U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffffbU & vlSelf->data_o[2U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffff7U & vlSelf->data_o[2U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xaU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[6U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffefU & vlSelf->data_o[2U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffdfU & vlSelf->data_o[2U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffffbfU & vlSelf->data_o[2U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffff7fU & vlSelf->data_o[2U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[0xaU] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[6U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffeffU & vlSelf->data_o[2U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffdffU & vlSelf->data_o[2U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffffbffU & vlSelf->data_o[2U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffff7ffU & vlSelf->data_o[2U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[0xaU] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffefffU & vlSelf->data_o[2U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffdfffU & vlSelf->data_o[2U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffffbfffU & vlSelf->data_o[2U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffff7fffU & vlSelf->data_o[2U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[0xaU] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[6U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffeffffU & vlSelf->data_o[2U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffdffffU & vlSelf->data_o[2U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfffbffffU & vlSelf->data_o[2U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfff7ffffU & vlSelf->data_o[2U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[0xaU] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[6U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffefffffU & vlSelf->data_o[2U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffdfffffU & vlSelf->data_o[2U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xffbfffffU & vlSelf->data_o[2U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xff7fffffU & vlSelf->data_o[2U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[0xaU] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[6U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfeffffffU & vlSelf->data_o[2U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfdffffffU & vlSelf->data_o[2U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xfbffffffU & vlSelf->data_o[2U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xf7ffffffU & vlSelf->data_o[2U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xbU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[6U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xefffffffU & vlSelf->data_o[2U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xbU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[2U])))));
    vlSelf->data_o[2U] = ((0xdfffffffU & vlSelf->data_o[2U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0xbfffffffU & vlSelf->data_o[2U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[2U] = ((0x7fffffffU & vlSelf->data_o[2U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xbU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[7U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[2U]))));
    vlSelf->data_o[3U] = ((0xfffffffeU & vlSelf->data_o[3U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xbU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[7U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0xfffffffdU & vlSelf->data_o[3U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffffbU & vlSelf->data_o[3U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffff7U & vlSelf->data_o[3U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xbU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[7U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffefU & vlSelf->data_o[3U]) 
                          | (0x10U & ((0xfffff0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xffffff0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xfffffff0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffdfU & vlSelf->data_o[3U]) 
                          | (0x20U & ((0xffffe0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffffe0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffffe0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffffbfU & vlSelf->data_o[3U]) 
                          | (0x40U & ((0xffffc0U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffffc0U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffffc0U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffff7fU & vlSelf->data_o[3U]) 
                          | (0x80U & ((0xffff80U & 
                                       (vlSelf->__PVT__data_masked[0xbU] 
                                        >> 8U)) | (
                                                   (0xfffff80U 
                                                    & (vlSelf->__PVT__data_masked[7U] 
                                                       >> 4U)) 
                                                   | (0xffffff80U 
                                                      & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffeffU & vlSelf->data_o[3U]) 
                          | (0x100U & ((0xffff00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xfffff00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xffffff00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffdffU & vlSelf->data_o[3U]) 
                          | (0x200U & ((0xfffe00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffffe00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffffe00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffffbffU & vlSelf->data_o[3U]) 
                          | (0x400U & ((0xfffc00U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffffc00U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffffc00U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffff7ffU & vlSelf->data_o[3U]) 
                          | (0x800U & ((0xfff800U & 
                                        (vlSelf->__PVT__data_masked[0xbU] 
                                         >> 8U)) | 
                                       ((0xffff800U 
                                         & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)) 
                                        | (0xfffff800U 
                                           & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffefffU & vlSelf->data_o[3U]) 
                          | (0x1000U & ((0xfff000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xffff000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xfffff000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffdfffU & vlSelf->data_o[3U]) 
                          | (0x2000U & ((0xffe000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfffe000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffffe000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffffbfffU & vlSelf->data_o[3U]) 
                          | (0x4000U & ((0xffc000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfffc000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffffc000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffff7fffU & vlSelf->data_o[3U]) 
                          | (0x8000U & ((0xff8000U 
                                         & (vlSelf->__PVT__data_masked[0xbU] 
                                            >> 8U)) 
                                        | ((0xfff8000U 
                                            & (vlSelf->__PVT__data_masked[7U] 
                                               >> 4U)) 
                                           | (0xffff8000U 
                                              & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffeffffU & vlSelf->data_o[3U]) 
                          | (0x10000U & ((0xff0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xfff0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xffff0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffdffffU & vlSelf->data_o[3U]) 
                          | (0x20000U & ((0xfe0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xffe0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfffe0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfffbffffU & vlSelf->data_o[3U]) 
                          | (0x40000U & ((0xfc0000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xffc0000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfffc0000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfff7ffffU & vlSelf->data_o[3U]) 
                          | (0x80000U & ((0xf80000U 
                                          & (vlSelf->__PVT__data_masked[0xbU] 
                                             >> 8U)) 
                                         | ((0xff80000U 
                                             & (vlSelf->__PVT__data_masked[7U] 
                                                >> 4U)) 
                                            | (0xfff80000U 
                                               & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffefffffU & vlSelf->data_o[3U]) 
                          | (0x100000U & ((0xf00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xff00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xfff00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffdfffffU & vlSelf->data_o[3U]) 
                          | (0x200000U & ((0xe00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xfe00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xffe00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xffbfffffU & vlSelf->data_o[3U]) 
                          | (0x400000U & ((0xc00000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xfc00000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xffc00000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xff7fffffU & vlSelf->data_o[3U]) 
                          | (0x800000U & ((0x800000U 
                                           & (vlSelf->__PVT__data_masked[0xbU] 
                                              >> 8U)) 
                                          | ((0xf800000U 
                                              & (vlSelf->__PVT__data_masked[7U] 
                                                 >> 4U)) 
                                             | (0xff800000U 
                                                & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfeffffffU & vlSelf->data_o[3U]) 
                          | (0x1000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                            << 0x18U) 
                                           | ((0xf000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xff000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfdffffffU & vlSelf->data_o[3U]) 
                          | (0x2000000U & ((0xfe000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0xe000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xfe000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xfbffffffU & vlSelf->data_o[3U]) 
                          | (0x4000000U & ((0xfc000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0xc000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xfc000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xf7ffffffU & vlSelf->data_o[3U]) 
                          | (0x8000000U & ((0xf8000000U 
                                            & (vlSelf->__PVT__data_masked[0xcU] 
                                               << 0x18U)) 
                                           | ((0x8000000U 
                                               & (vlSelf->__PVT__data_masked[7U] 
                                                  >> 4U)) 
                                              | (0xf8000000U 
                                                 & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xefffffffU & vlSelf->data_o[3U]) 
                          | (0x10000000U & ((0xf0000000U 
                                             & (vlSelf->__PVT__data_masked[0xcU] 
                                                << 0x18U)) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | (0xf0000000U 
                                                  & vlSelf->__PVT__data_masked[3U])))));
    vlSelf->data_o[3U] = ((0xdfffffffU & vlSelf->data_o[3U]) 
                          | (0x20000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0xbfffffffU & vlSelf->data_o[3U]) 
                          | (0x40000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[3U] = ((0x7fffffffU & vlSelf->data_o[3U]) 
                          | (0x80000000U & ((vlSelf->__PVT__data_masked[0xcU] 
                                             << 0x18U) 
                                            | ((vlSelf->__PVT__data_masked[8U] 
                                                << 0x1cU) 
                                               | vlSelf->__PVT__data_masked[3U]))));
    vlSelf->data_o[4U] = ((0xeU & vlSelf->data_o[4U]) 
                          | (1U & ((vlSelf->__PVT__data_masked[0xcU] 
                                    >> 8U) | ((vlSelf->__PVT__data_masked[8U] 
                                               >> 4U) 
                                              | vlSelf->__PVT__data_masked[4U]))));
    vlSelf->data_o[4U] = ((0xdU & vlSelf->data_o[4U]) 
                          | (2U & ((0xfffffeU & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffffeU & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffffeU 
                                                   & vlSelf->__PVT__data_masked[4U])))));
    vlSelf->data_o[4U] = ((0xbU & vlSelf->data_o[4U]) 
                          | (4U & ((0xfffffcU & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffffcU & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffffcU 
                                                   & vlSelf->__PVT__data_masked[4U])))));
    vlSelf->data_o[4U] = ((7U & vlSelf->data_o[4U]) 
                          | (8U & ((0xfffff8U & (vlSelf->__PVT__data_masked[0xcU] 
                                                 >> 8U)) 
                                   | ((0xffffff8U & 
                                       (vlSelf->__PVT__data_masked[8U] 
                                        >> 4U)) | (0xfffffff8U 
                                                   & vlSelf->__PVT__data_masked[4U])))));
}
