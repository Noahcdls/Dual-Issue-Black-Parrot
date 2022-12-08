// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_mux_one_hot__W40_E8.h"

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W40_E8___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux__0(Vtestbench_bsg_mux_one_hot__W40_E8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W40_E8___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select)))))));
    vlSelf->__PVT__data_masked[1U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[2U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[2U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                       >> 1U)))))));
    vlSelf->__PVT__data_masked[3U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[2U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                        >> 1U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[4U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[4U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                       >> 2U)))))));
    vlSelf->__PVT__data_masked[5U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[5U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[4U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                        >> 2U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[6U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[6U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                       >> 3U)))))));
    vlSelf->__PVT__data_masked[7U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[7U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[6U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                        >> 3U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[8U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[8U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                       >> 4U)))))));
    vlSelf->__PVT__data_masked[9U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[9U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[8U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                        >> 4U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[0xaU] = (IData)(((((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xbU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xaU]))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                         >> 5U)))))));
    vlSelf->__PVT__data_masked[0xbU] = (IData)((((((QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xbU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xaU]))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                          >> 5U)))))) 
                                                >> 0x20U));
    vlSelf->__PVT__data_masked[0xcU] = (IData)(((((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xdU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xcU]))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                         >> 6U)))))));
    vlSelf->__PVT__data_masked[0xdU] = (IData)((((((QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xdU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xcU]))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                          >> 6U)))))) 
                                                >> 0x20U));
    vlSelf->__PVT__data_masked[0xeU] = (IData)(((((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xfU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xeU]))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                         >> 7U)))))));
    vlSelf->__PVT__data_masked[0xfU] = (IData)((((((QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xfU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg__DOT__data_r[0xeU]))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                          >> 7U)))))) 
                                                >> 0x20U));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       << 1U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[0U]))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            << 3U)))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 6U))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     << 1U)) | ((2U & vlSelf->__PVT__data_masked[2U]) 
                                | (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 1U)))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            << 2U)))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 5U))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[4U]) 
              | ((2U & (vlSelf->__PVT__data_masked[2U] 
                        >> 1U)) | (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 2U)))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            << 1U)))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 4U))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 2U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 1U)) 
                                   | (8U & vlSelf->__PVT__data_masked[6U]))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 3U))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 1U)) | ((0x10U & vlSelf->__PVT__data_masked[8U]) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 1U)))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 2U))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 5U)))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__data_masked[0xaU]) 
              | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                           >> 1U)) | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 2U)))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 1U))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 6U)))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 1U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 3U)))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 1U)) | (0x40U & vlSelf->__PVT__data_masked[0xcU])));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 7U)))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x80U & vlSelf->__PVT__data_masked[0xeU]) 
              | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                          >> 1U))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 7U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 8U)))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 5U)))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 1U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 2U))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 9U)))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 5U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 6U)))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 3U))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 6U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 7U)))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 4U))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0xaU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 6U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 7U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 8U)))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 5U))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 7U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 9U)))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 6U))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 8U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 9U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 7U))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 9U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 0xaU)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 8U))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xaU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xbU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 8U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 9U))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xfU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xbU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xcU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 9U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0x10U)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xcU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xdU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xaU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xdU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xeU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xbU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xeU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xfU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xcU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xfU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0x10U)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xdU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x10U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x11U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xeU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x11U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x12U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xfU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x12U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x13U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x10U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x13U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x14U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x11U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x14U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x15U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x12U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x16U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x13U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x14U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x18U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x15U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1cU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x19U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x16U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1dU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x1aU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x17U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->__PVT__data_masked[0U] 
                                      >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x1bU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x18U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       << 1U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[1U]))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            << 3U)))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 6U))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     << 1U)) | ((2U & vlSelf->__PVT__data_masked[3U]) 
                                | (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 1U)))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            << 2U)))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 5U))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[5U]) 
              | ((2U & (vlSelf->__PVT__data_masked[3U] 
                        >> 1U)) | (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 2U)))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            << 1U)))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 4U))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 2U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 1U)) 
                                   | (8U & vlSelf->__PVT__data_masked[7U]))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 3U))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 4U)))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 1U)) | ((0x10U & vlSelf->__PVT__data_masked[9U]) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 1U)))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 2U))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 5U)))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__data_masked[0xbU]) 
              | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                           >> 1U)) | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 2U)))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 1U))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 6U)))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 1U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 3U)))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 1U)) | (0x40U & vlSelf->__PVT__data_masked[0xdU])));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 7U)))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((0x80U & vlSelf->__PVT__data_masked[0xfU]) 
              | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                          >> 1U))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 7U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 8U)))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 5U)))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 1U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 2U))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 9U)))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 5U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 6U)))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 3U))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 6U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 7U)))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 4U))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0xaU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 6U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 7U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 8U)))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 5U))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 7U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 9U)))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 6U))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 8U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 9U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 7U))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 9U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 0xaU)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 8U))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xaU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xbU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 8U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 9U))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xfU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xbU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xcU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 9U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0x10U)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xcU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xdU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xaU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xdU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xeU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xbU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xeU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xfU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xcU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xfU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0x10U)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xdU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x10U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x11U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xeU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x11U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x12U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xfU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x12U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x13U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x10U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x13U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x14U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x11U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x14U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x15U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x12U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x16U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x13U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x14U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x18U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x15U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1cU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x19U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x16U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1dU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x1aU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x17U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->__PVT__data_masked[1U] 
                                      >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x1bU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x18U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x19U))));
    vlSelf->data_o = ((0xfffffffffffffff8ULL & vlSelf->data_o) 
                      | (IData)((IData)((((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather))) 
                                          << 2U) | 
                                         (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)))))));
    vlSelf->data_o = ((0xffffffffffffffc7ULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)))))) 
                         << 3U));
    vlSelf->data_o = ((0xfffffffffffffe3fULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)))))) 
                         << 6U));
    vlSelf->data_o = ((0xfffffffffffff1ffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)))))) 
                         << 9U));
    vlSelf->data_o = ((0xffffffffffff8fffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)))))) 
                         << 0xcU));
    vlSelf->data_o = ((0xfffffffffffc7fffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)))))) 
                         << 0xfU));
    vlSelf->data_o = ((0xffffffffffe3ffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)))))) 
                         << 0x12U));
    vlSelf->data_o = ((0xffffffffff1fffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)))))) 
                         << 0x15U));
    vlSelf->data_o = ((0xfffffffff8ffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)))))) 
                         << 0x18U));
    vlSelf->data_o = ((0xffffffffc7ffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)))))) 
                         << 0x1bU));
    vlSelf->data_o = ((0xfffffffe3fffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)))))) 
                         << 0x1eU));
    vlSelf->data_o = ((0xfffffff1ffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)))))) 
                         << 0x21U));
    vlSelf->data_o = ((0xffffff8fffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)))))) 
                         << 0x24U));
    vlSelf->data_o = ((0xfffffc7fffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)))))) 
                         << 0x27U));
    vlSelf->data_o = ((0xffffe3ffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)))))) 
                         << 0x2aU));
    vlSelf->data_o = ((0xffff1fffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)))))) 
                         << 0x2dU));
    vlSelf->data_o = ((0xfff8ffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)))))) 
                         << 0x30U));
    vlSelf->data_o = ((0xffc7ffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)))))) 
                         << 0x33U));
    vlSelf->data_o = ((0xfe3fffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)))))) 
                         << 0x36U));
    vlSelf->data_o = ((0xf1ffffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)))))) 
                         << 0x39U));
    vlSelf->data_o = ((0x8fffffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)))))) 
                         << 0x3cU));
    vlSelf->data_o = ((0x7fffffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)))) 
                         << 0x3fU));
}

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W40_E8___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux2__0(Vtestbench_bsg_mux_one_hot__W40_E8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W40_E8___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux2__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select)))))));
    vlSelf->__PVT__data_masked[1U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[2U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[2U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                       >> 1U)))))));
    vlSelf->__PVT__data_masked[3U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[2U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                        >> 1U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[4U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[4U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                       >> 2U)))))));
    vlSelf->__PVT__data_masked[5U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[5U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[4U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                        >> 2U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[6U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[6U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                       >> 3U)))))));
    vlSelf->__PVT__data_masked[7U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[7U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[6U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                        >> 3U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[8U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[8U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                       >> 4U)))))));
    vlSelf->__PVT__data_masked[9U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[9U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[8U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                        >> 4U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[0xaU] = (IData)(((((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xbU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xaU]))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                         >> 5U)))))));
    vlSelf->__PVT__data_masked[0xbU] = (IData)((((((QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xbU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xaU]))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                          >> 5U)))))) 
                                                >> 0x20U));
    vlSelf->__PVT__data_masked[0xcU] = (IData)(((((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xdU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xcU]))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                         >> 6U)))))));
    vlSelf->__PVT__data_masked[0xdU] = (IData)((((((QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xdU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xcU]))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                          >> 6U)))))) 
                                                >> 0x20U));
    vlSelf->__PVT__data_masked[0xeU] = (IData)(((((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xfU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xeU]))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                         >> 7U)))))));
    vlSelf->__PVT__data_masked[0xfU] = (IData)((((((QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xfU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_tv_reg2__DOT__data_r[0xeU]))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select) 
                                                                          >> 7U)))))) 
                                                >> 0x20U));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       << 1U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[0U]))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            << 3U)))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 6U))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     << 1U)) | ((2U & vlSelf->__PVT__data_masked[2U]) 
                                | (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 1U)))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            << 2U)))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 5U))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[4U]) 
              | ((2U & (vlSelf->__PVT__data_masked[2U] 
                        >> 1U)) | (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 2U)))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            << 1U)))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 4U))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 2U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 1U)) 
                                   | (8U & vlSelf->__PVT__data_masked[6U]))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 3U))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 1U)) | ((0x10U & vlSelf->__PVT__data_masked[8U]) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 1U)))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 2U))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 5U)))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__data_masked[0xaU]) 
              | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                           >> 1U)) | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 2U)))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 1U))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 6U)))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 1U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 3U)))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 1U)) | (0x40U & vlSelf->__PVT__data_masked[0xcU])));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 7U)))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x80U & vlSelf->__PVT__data_masked[0xeU]) 
              | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                          >> 1U))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 7U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 8U)))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 5U)))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 1U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 2U))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 9U)))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 5U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 6U)))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 3U))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 6U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 7U)))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 4U))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0xaU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 6U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 7U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 8U)))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 5U))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 7U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 9U)))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 6U))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 8U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 9U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 7U))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 9U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 0xaU)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 8U))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xaU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xbU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 8U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 9U))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xfU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xbU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xcU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 9U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0x10U)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xcU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xdU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xaU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xdU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xeU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xbU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xeU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xfU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xcU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xfU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0x10U)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xdU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x10U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x11U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xeU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x11U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x12U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xfU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x12U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x13U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x10U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x13U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x14U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x11U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x14U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x15U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x12U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x16U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x13U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x14U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x18U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x15U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1cU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x19U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x16U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1dU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x1aU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x17U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->__PVT__data_masked[0U] 
                                      >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x1bU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x18U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       << 1U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[1U]))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            << 3U)))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 6U))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     << 1U)) | ((2U & vlSelf->__PVT__data_masked[3U]) 
                                | (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 1U)))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            << 2U)))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 5U))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[5U]) 
              | ((2U & (vlSelf->__PVT__data_masked[3U] 
                        >> 1U)) | (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 2U)))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            << 1U)))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 4U))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 2U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 1U)) 
                                   | (8U & vlSelf->__PVT__data_masked[7U]))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 3U))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 4U)))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 1U)) | ((0x10U & vlSelf->__PVT__data_masked[9U]) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 1U)))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 2U))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 5U)))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__data_masked[0xbU]) 
              | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                           >> 1U)) | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 2U)))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 1U))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 6U)))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 1U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 3U)))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 1U)) | (0x40U & vlSelf->__PVT__data_masked[0xdU])));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 7U)))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((0x80U & vlSelf->__PVT__data_masked[0xfU]) 
              | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                          >> 1U))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 7U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 8U)))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 5U)))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 1U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 2U))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 9U)))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 5U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 6U)))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 3U))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 6U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 7U)))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 4U))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0xaU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 6U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 7U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 8U)))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 5U))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 7U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 9U)))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 6U))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 8U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 9U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 7U))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 9U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 0xaU)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 8U))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xaU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xbU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 8U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 9U))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xfU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xbU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xcU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 9U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0x10U)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xcU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xdU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xaU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xdU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xeU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xbU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xeU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xfU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xcU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xfU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0x10U)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xdU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x10U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x11U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xeU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x11U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x12U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xfU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x12U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x13U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x10U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x13U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x14U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x11U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x14U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x15U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x12U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x16U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x13U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x14U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x18U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x15U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1cU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x19U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x16U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1dU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x1aU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x17U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->__PVT__data_masked[1U] 
                                      >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x1bU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x18U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x19U))));
    vlSelf->data_o = ((0xfffffffffffffff8ULL & vlSelf->data_o) 
                      | (IData)((IData)((((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather))) 
                                          << 2U) | 
                                         (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)))))));
    vlSelf->data_o = ((0xffffffffffffffc7ULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)))))) 
                         << 3U));
    vlSelf->data_o = ((0xfffffffffffffe3fULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)))))) 
                         << 6U));
    vlSelf->data_o = ((0xfffffffffffff1ffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)))))) 
                         << 9U));
    vlSelf->data_o = ((0xffffffffffff8fffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)))))) 
                         << 0xcU));
    vlSelf->data_o = ((0xfffffffffffc7fffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)))))) 
                         << 0xfU));
    vlSelf->data_o = ((0xffffffffffe3ffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)))))) 
                         << 0x12U));
    vlSelf->data_o = ((0xffffffffff1fffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)))))) 
                         << 0x15U));
    vlSelf->data_o = ((0xfffffffff8ffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)))))) 
                         << 0x18U));
    vlSelf->data_o = ((0xffffffffc7ffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)))))) 
                         << 0x1bU));
    vlSelf->data_o = ((0xfffffffe3fffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)))))) 
                         << 0x1eU));
    vlSelf->data_o = ((0xfffffff1ffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)))))) 
                         << 0x21U));
    vlSelf->data_o = ((0xffffff8fffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)))))) 
                         << 0x24U));
    vlSelf->data_o = ((0xfffffc7fffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)))))) 
                         << 0x27U));
    vlSelf->data_o = ((0xffffe3ffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)))))) 
                         << 0x2aU));
    vlSelf->data_o = ((0xffff1fffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)))))) 
                         << 0x2dU));
    vlSelf->data_o = ((0xfff8ffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)))))) 
                         << 0x30U));
    vlSelf->data_o = ((0xffc7ffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)))))) 
                         << 0x33U));
    vlSelf->data_o = ((0xfe3fffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)))))) 
                         << 0x36U));
    vlSelf->data_o = ((0xf1ffffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)))))) 
                         << 0x39U));
    vlSelf->data_o = ((0x8fffffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)))))) 
                         << 0x3cU));
    vlSelf->data_o = ((0x7fffffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)))) 
                         << 0x3fU));
}

VL_INLINE_OPT void Vtestbench_bsg_mux_one_hot__W40_E8___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_set_select_mux__0(Vtestbench_bsg_mux_one_hot__W40_E8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_mux_one_hot__W40_E8___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_set_select_mux__0\n"); );
    // Body
    vlSelf->__PVT__data_masked[0U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select)))))));
    vlSelf->__PVT__data_masked[1U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[2U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[2U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                       >> 1U)))))));
    vlSelf->__PVT__data_masked[3U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[2U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                        >> 1U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[4U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[4U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                       >> 2U)))))));
    vlSelf->__PVT__data_masked[5U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[5U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[4U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                        >> 2U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[6U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[7U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[6U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                       >> 3U)))))));
    vlSelf->__PVT__data_masked[7U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[7U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[6U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                        >> 3U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[8U] = (IData)(((((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[9U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[8U]))) 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                       >> 4U)))))));
    vlSelf->__PVT__data_masked[9U] = (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[9U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[8U]))) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                        >> 4U)))))) 
                                              >> 0x20U));
    vlSelf->__PVT__data_masked[0xaU] = (IData)(((((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xbU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xaU]))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                         >> 5U)))))));
    vlSelf->__PVT__data_masked[0xbU] = (IData)((((((QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xbU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xaU]))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                          >> 5U)))))) 
                                                >> 0x20U));
    vlSelf->__PVT__data_masked[0xcU] = (IData)(((((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xdU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xcU]))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                         >> 6U)))))));
    vlSelf->__PVT__data_masked[0xdU] = (IData)((((((QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xdU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xcU]))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                          >> 6U)))))) 
                                                >> 0x20U));
    vlSelf->__PVT__data_masked[0xeU] = (IData)(((((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xfU])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xeU]))) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                         >> 7U)))))));
    vlSelf->__PVT__data_masked[0xfU] = (IData)((((((QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xfU])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_tv_reg__DOT__data_r[0xeU]))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select) 
                                                                          >> 7U)))))) 
                                                >> 0x20U));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       << 1U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[0U]))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            << 3U)))));
    vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 6U))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     << 1U)) | ((2U & vlSelf->__PVT__data_masked[2U]) 
                                | (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 1U)))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            << 2U)))));
    vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 5U))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[4U]) 
              | ((2U & (vlSelf->__PVT__data_masked[2U] 
                        >> 1U)) | (1U & (vlSelf->__PVT__data_masked[0U] 
                                         >> 2U)))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            << 1U)))));
    vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 4U))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 2U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             << 1U)) 
                                   | (8U & vlSelf->__PVT__data_masked[6U]))));
    vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 3U))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 4U)))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        << 1U)) | ((0x10U & vlSelf->__PVT__data_masked[8U]) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 1U)))));
    vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 2U))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 5U)))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__data_masked[0xaU]) 
              | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                           >> 1U)) | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 2U)))));
    vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            << 1U))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 6U)))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 1U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 3U)))));
    vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        << 1U)) | (0x40U & vlSelf->__PVT__data_masked[0xcU])));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 7U)))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 4U)))));
    vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x80U & vlSelf->__PVT__data_masked[0xeU]) 
              | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                          >> 1U))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 7U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 8U)))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 5U)))));
    vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 1U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 2U))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 9U)))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 5U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 6U)))));
    vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 3U))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[0U] 
                                                     >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 6U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 7U)))));
    vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 4U))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                       >> 0xaU)) | 
                                (1U & (vlSelf->__PVT__data_masked[0U] 
                                       >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 6U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 7U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 8U)))));
    vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 5U))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 7U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 8U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 9U)))));
    vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 6U))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 8U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 9U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 7U))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 9U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                             >> 0xaU)) 
                                   | (8U & (vlSelf->__PVT__data_masked[6U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 8U))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xaU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xbU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 8U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 9U))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0xfU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xbU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xcU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 9U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                            >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                         >> 0x10U)) 
                                  | (1U & (vlSelf->__PVT__data_masked[0U] 
                                           >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xcU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xdU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xaU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xdU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xeU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xbU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xeU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0xfU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xcU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0xfU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                               >> 0x10U)) 
                                     | (8U & (vlSelf->__PVT__data_masked[6U] 
                                              >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xdU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x10U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x11U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xeU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x11U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x12U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0xfU)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                              >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x12U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x13U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x10U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x13U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x14U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x11U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x14U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x15U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x12U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x16U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x13U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x14U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x18U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x15U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1cU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x19U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x16U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1dU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[0U] 
                                            >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x1aU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x17U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[4U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[2U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->__PVT__data_masked[0U] 
                                      >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xaU] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__data_masked[8U] 
                                                >> 0x1bU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[6U] 
                                               >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xeU] 
                        >> 0x18U)) | (0x40U & (vlSelf->__PVT__data_masked[0xcU] 
                                               >> 0x19U))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     << 2U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       << 1U)) | (1U 
                                                  & vlSelf->__PVT__data_masked[1U]))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            << 3U)))));
    vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 6U))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     << 1U)) | ((2U & vlSelf->__PVT__data_masked[3U]) 
                                | (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 1U)))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            << 2U)))));
    vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 5U))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__data_masked[5U]) 
              | ((2U & (vlSelf->__PVT__data_masked[3U] 
                        >> 1U)) | (1U & (vlSelf->__PVT__data_masked[1U] 
                                         >> 2U)))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            << 1U)))));
    vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 4U))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 2U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 3U)))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             << 1U)) 
                                   | (8U & vlSelf->__PVT__data_masked[7U]))));
    vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 3U))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 4U)))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        << 1U)) | ((0x10U & vlSelf->__PVT__data_masked[9U]) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 1U)))));
    vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 2U))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 4U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 5U)))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__data_masked[0xbU]) 
              | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                           >> 1U)) | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 2U)))));
    vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            << 1U))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 5U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 6U)))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 1U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 2U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 3U)))));
    vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        << 1U)) | (0x40U & vlSelf->__PVT__data_masked[0xdU])));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 6U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 7U)))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 2U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 3U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 4U)))));
    vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)) 
           | ((0x80U & vlSelf->__PVT__data_masked[0xfU]) 
              | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                          >> 1U))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 7U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 8U)))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 3U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 4U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 5U)))));
    vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 1U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 2U))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 9U)))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 4U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 5U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 6U)))));
    vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 2U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 3U))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->__PVT__data_masked[1U] 
                                                     >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 6U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 7U)))));
    vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 3U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 4U))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                       >> 0xaU)) | 
                                (1U & (vlSelf->__PVT__data_masked[1U] 
                                       >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 6U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 7U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 8U)))));
    vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 4U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 5U))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xbU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 7U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 8U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 9U)))));
    vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 5U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 6U))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xcU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 8U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 9U)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 0xaU)))));
    vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 6U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 7U))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xdU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 9U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                             >> 0xaU)) 
                                   | (8U & (vlSelf->__PVT__data_masked[7U] 
                                            >> 0xbU)))));
    vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 7U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 8U))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xeU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xaU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xbU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xcU)))));
    vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 8U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 9U))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0xfU)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xbU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xcU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xdU)))));
    vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 9U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                            >> 0xaU))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                         >> 0x10U)) 
                                  | (1U & (vlSelf->__PVT__data_masked[1U] 
                                           >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xcU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xdU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xeU)))));
    vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xaU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xbU))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x11U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xdU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xeU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0xfU)))));
    vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xbU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xcU))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x11U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x12U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xeU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0xfU)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0x10U)))));
    vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xcU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xdU))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x13U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0xfU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                               >> 0x10U)) 
                                     | (8U & (vlSelf->__PVT__data_masked[7U] 
                                              >> 0x11U)))));
    vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xdU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xeU))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x14U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x10U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x11U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x12U)))));
    vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xeU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0xfU))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x14U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x15U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x11U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x12U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0xfU)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                              >> 0x10U))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x15U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x16U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x12U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x13U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x10U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x11U))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x16U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x17U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x13U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x14U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x11U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x12U))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x17U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x18U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x14U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x15U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x12U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x13U))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x18U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x19U)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x16U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x13U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x14U))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x19U)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1aU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x14U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x15U))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1aU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x18U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x19U)))));
    vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x15U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x16U))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1cU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1dU)))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x19U)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x1aU)))));
    vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x16U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x17U))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1cU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1dU)) 
                                   | (1U & (vlSelf->__PVT__data_masked[1U] 
                                            >> 0x1eU)))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x1aU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x1bU)))));
    vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x17U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x18U))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0xf8U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__data_masked[5U] 
                     >> 0x1dU)) | ((2U & (vlSelf->__PVT__data_masked[3U] 
                                          >> 0x1eU)) 
                                   | (vlSelf->__PVT__data_masked[1U] 
                                      >> 0x1fU))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0xc7U & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__data_masked[0xbU] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__data_masked[9U] 
                                                >> 0x1bU)) 
                                      | (8U & (vlSelf->__PVT__data_masked[7U] 
                                               >> 0x1cU)))));
    vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)) 
           | ((0x80U & (vlSelf->__PVT__data_masked[0xfU] 
                        >> 0x18U)) | (0x40U & (vlSelf->__PVT__data_masked[0xdU] 
                                               >> 0x19U))));
    vlSelf->data_o = ((0xfffffffffffffff8ULL & vlSelf->data_o) 
                      | (IData)((IData)((((IData)((0U 
                                                   != (IData)(vlSelf->__PVT__reduce__BRA__2__KET____DOT__gather))) 
                                          << 2U) | 
                                         (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__1__KET____DOT__gather))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->__PVT__reduce__BRA__0__KET____DOT__gather)))))));
    vlSelf->data_o = ((0xffffffffffffffc7ULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__5__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__4__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__3__KET____DOT__gather)))))) 
                         << 3U));
    vlSelf->data_o = ((0xfffffffffffffe3fULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__8__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__7__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__6__KET____DOT__gather)))))) 
                         << 6U));
    vlSelf->data_o = ((0xfffffffffffff1ffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__11__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__10__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__9__KET____DOT__gather)))))) 
                         << 9U));
    vlSelf->data_o = ((0xffffffffffff8fffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__14__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__13__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__12__KET____DOT__gather)))))) 
                         << 0xcU));
    vlSelf->data_o = ((0xfffffffffffc7fffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__17__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__16__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__15__KET____DOT__gather)))))) 
                         << 0xfU));
    vlSelf->data_o = ((0xffffffffffe3ffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__20__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__19__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__18__KET____DOT__gather)))))) 
                         << 0x12U));
    vlSelf->data_o = ((0xffffffffff1fffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__23__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__22__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__21__KET____DOT__gather)))))) 
                         << 0x15U));
    vlSelf->data_o = ((0xfffffffff8ffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__26__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__25__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__24__KET____DOT__gather)))))) 
                         << 0x18U));
    vlSelf->data_o = ((0xffffffffc7ffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__29__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__28__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__27__KET____DOT__gather)))))) 
                         << 0x1bU));
    vlSelf->data_o = ((0xfffffffe3fffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__32__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__31__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__30__KET____DOT__gather)))))) 
                         << 0x1eU));
    vlSelf->data_o = ((0xfffffff1ffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__35__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__34__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__33__KET____DOT__gather)))))) 
                         << 0x21U));
    vlSelf->data_o = ((0xffffff8fffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__38__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__37__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__36__KET____DOT__gather)))))) 
                         << 0x24U));
    vlSelf->data_o = ((0xfffffc7fffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__41__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__40__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__39__KET____DOT__gather)))))) 
                         << 0x27U));
    vlSelf->data_o = ((0xffffe3ffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__44__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__43__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__42__KET____DOT__gather)))))) 
                         << 0x2aU));
    vlSelf->data_o = ((0xffff1fffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__47__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__46__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__45__KET____DOT__gather)))))) 
                         << 0x2dU));
    vlSelf->data_o = ((0xfff8ffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__50__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__49__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__48__KET____DOT__gather)))))) 
                         << 0x30U));
    vlSelf->data_o = ((0xffc7ffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__53__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__52__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__51__KET____DOT__gather)))))) 
                         << 0x33U));
    vlSelf->data_o = ((0xfe3fffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__56__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__55__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__54__KET____DOT__gather)))))) 
                         << 0x36U));
    vlSelf->data_o = ((0xf1ffffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__59__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__58__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__57__KET____DOT__gather)))))) 
                         << 0x39U));
    vlSelf->data_o = ((0x8fffffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__reduce__BRA__62__KET____DOT__gather))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->__PVT__reduce__BRA__61__KET____DOT__gather))) 
                                            << 1U) 
                                           | (0U != (IData)(vlSelf->__PVT__reduce__BRA__60__KET____DOT__gather)))))) 
                         << 0x3cU));
    vlSelf->data_o = ((0x7fffffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)((0U != (IData)(vlSelf->__PVT__reduce__BRA__63__KET____DOT__gather)))) 
                         << 0x3fU));
}
