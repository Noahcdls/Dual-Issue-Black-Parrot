// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_fp_to_reg__Bz1.h"

VL_ATTR_COLD void Vtestbench_bp_be_fp_to_reg__Bz1___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__fp_to_reg__1(Vtestbench_bp_be_fp_to_reg__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_fp_to_reg__Bz1___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__fp_to_reg__1\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffffcU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((2U & (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U])))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffffcfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                   << 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffcffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                    << 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffffcfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffcffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xffcfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfcffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xcfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffffcU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((2U & (IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U])))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffcfU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                   << 4U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffffcffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                    << 8U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffcfffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfffcffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffcfffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xfcffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xcfffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffffff8U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                            >> 4U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffffff8U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                            >> 4U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
                                              | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfffffff0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                            >> 8U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[6U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfffffff0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                      | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                            >> 8U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U]) 
                                          | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[7U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU] 
        = ((0xffffffe0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                           | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[8U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU] 
        = ((0xffffffe0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                           | ((vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[9U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU] 
        = ((0xffffffc0U & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 4U)) | (0x1fU & (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xaU] 
                                            | vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xbU]))));
    vlSelf->__PVT__in64_rec__DOT__normDist = ((0ULL 
                                               == (
                                                   (vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                    - 1ULL) 
                                                   & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo))
                                               ? (0x3fU 
                                                  & vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0xcU])
                                               : 0U);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffffcU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((2U & (IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U])))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffffcfU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                   << 4U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffffcffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x200U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                    << 8U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffffcfffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x2000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfffcffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xffcfffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xfcffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x2000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
        = ((0xcfffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
           | ((0x20000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffffff8U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((4U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                      | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                            >> 4U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfffff8ffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x400U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xfff8ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x40000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                          | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
        = ((0xf8ffffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfffffff0U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((8U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                      | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                            >> 8U))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
        = ((0xfff0ffffU & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U]) 
           | ((0x80000U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U]) 
                                          | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[3U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U] 
        = ((0xffffffe0U & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U]) 
           | ((0x10U & ((IData)(vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                           | ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[4U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__in32_rec__DOT__normDist = ((0U == 
                                               ((vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                 - (IData)(1U)) 
                                                & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo))
                                               ? (0x1fU 
                                                  & vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[5U])
                                               : 0U);
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = (0xfffU 
                                                 & (((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                  >> 0x34U))))
                                                      ? 
                                                     (0xfffU 
                                                      ^ (IData)(vlSelf->__PVT__in64_rec__DOT__normDist))
                                                      : 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                 >> 0x34U)))) 
                                                    + 
                                                    (0x400U 
                                                     | ((0U 
                                                         == 
                                                         (0x7ffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                     >> 0x34U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = (0x1ffU 
                                                 & (((0U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                  >> 0x17U))))
                                                      ? 
                                                     (0x1ffU 
                                                      ^ (IData)(vlSelf->__PVT__in32_rec__DOT__normDist))
                                                      : 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                 >> 0x17U)))) 
                                                    + 
                                                    (0x80U 
                                                     | ((0U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                     >> 0x17U))))
                                                         ? 2U
                                                         : 1U))));
    vlSelf->__PVT__in64_rec__DOT__exp = ((0xe00U & 
                                          (((3U == 
                                             (3U & 
                                              ((IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp) 
                                               >> 0xaU)))
                                             ? (6U 
                                                | (0ULL 
                                                   != 
                                                   (0xfffffffffffffULL 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data)))
                                             : ((IData)(
                                                        (0ULL 
                                                         == 
                                                         (0x7fffffffffffffffULL 
                                                          & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data)))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp) 
                                                 >> 9U))) 
                                           << 9U)) 
                                         | (0x1ffU 
                                            & (IData)(vlSelf->__PVT__in64_rec__DOT__adjustedExp)));
    vlSelf->__PVT__in32_rec__DOT__exp = ((0x1c0U & 
                                          (((3U == 
                                             (3U & 
                                              ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                               >> 7U)))
                                             ? (6U 
                                                | (0U 
                                                   != 
                                                   (0x7fffffU 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data))))
                                             : ((IData)(
                                                        (0ULL 
                                                         == 
                                                         (0x7fffffffULL 
                                                          & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data)))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp) 
                                                 >> 6U))) 
                                           << 6U)) 
                                         | (0x3fU & (IData)(vlSelf->__PVT__in32_rec__DOT__adjustedExp)));
    vlSelf->__Vcellout__in32_rec__out = (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSelf->__PVT__in32_rec__DOT__exp) 
                                                             << 0x17U) 
                                                            | (0x7fffffU 
                                                               & ((0U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data 
                                                                               >> 0x17U))))
                                                                   ? 
                                                                  (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data) 
                                                                    << (IData)(vlSelf->__PVT__in32_rec__DOT__normDist)) 
                                                                   << 1U)
                                                                   : (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_float_raw_data)))))));
}
