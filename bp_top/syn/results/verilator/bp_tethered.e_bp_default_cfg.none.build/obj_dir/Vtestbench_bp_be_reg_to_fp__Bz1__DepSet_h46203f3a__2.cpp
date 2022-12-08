// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_reg_to_fp__Bz1.h"

extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h3dcda147_0;
extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h00a543f7_0;

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__23__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__0;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__1;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__2;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__3;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__4;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__5;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__6;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__7;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__8;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__9;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__10;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__11;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__12;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__13;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__14;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__15;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__16;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__17;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__18;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__19;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__20;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__21;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__22;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__23;
    VlWide<17>/*543:0*/ __Vtemp_h74f2a5b0__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x4000000U 
                                                             == 
                                                             (0xe000000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                   >> 0x10U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                          >> 0x1aU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                 >> 0x19U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U])) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x31U])) 
                                                     << 4U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U])) 
                                                       >> 0x1cU)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc000000U 
                                                == 
                                                (0xe000000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe000000U 
                                                   == 
                                                   (0xe008000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50000000U == (0xf0000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U]))) 
           | (IData)((0x60000000U == (0xf0000000U & 
                                      vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h74f2a5b0__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h74f2a5b0__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h74f2a5b0__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h74f2a5b0__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h74f2a5b0__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h74f2a5b0__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h74f2a5b0__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h74f2a5b0__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h74f2a5b0__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h74f2a5b0__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h74f2a5b0__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h74f2a5b0__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h74f2a5b0__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h74f2a5b0__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h74f2a5b0__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h74f2a5b0__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h74f2a5b0__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h74f2a5b0__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h74f2a5b0__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h74f2a5b0__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h74f2a5b0__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h74f2a5b0__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h74f2a5b0__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h74f2a5b0__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74f2a5b0__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h74f2a5b0__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                              >> 0x19U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x31U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U])) 
                                                    >> 0x1cU)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe000000U == (0xe000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                    >> 0x1dU)) | (4U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                         >> 0x1dU))) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U)))) & (3U 
                                                 | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                    << 2U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlSelf->__PVT__round__DOT__sigIn 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlSelf->__PVT__round__DOT__sigIn))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlSelf->__PVT__round__DOT__isInf))) 
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                           >> 0x19U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                    >> 0x1dU)) | (4U 
                                                  == 
                                                  (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                   >> 0x1dU))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ ((((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                             >> 0x1dU)) 
                                     & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                                    & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra)))
                                    ? (1U | (0x7ffffffeU 
                                             & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                << 1U)))
                                    : 0U))) : (((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                 & (~ 
                                                    (3U 
                                                     | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 2U)))) 
                                                >> 2U) 
                                               | (((6U 
                                                    == 
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                     >> 0x1dU)) 
                                                   & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0xfffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                   >> 0x10U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                        >> 0x1dU))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isInf) 
           | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__Vcellout__round__out = (((QData)((IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                              >> 0x1cU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                                >> 0x19U))) 
                                                                                | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                                 ? 0xffffff94U
                                                                                 : 0U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                                ? 0x80U
                                                                                : 0U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                               ? 0x40U
                                                                               : 0U))) 
                                                                         | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                             ? 0x6bU
                                                                             : 0U)) 
                                                                        | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                            ? 0x17fU
                                                                            : 0U)) 
                                                                       | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                           ? 0x180U
                                                                           : 0U)) 
                                                                      | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                          ? 0x1c0U
                                                                          : 0U)) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & (((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                              ? 0x400000U
                                                                              : 0U) 
                                                                            | (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                                >> 0x19U))) 
                                                                                & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                                : 0U)) 
                                                                           | ((((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                                >> 0x19U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                              >> 0x19U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                         >> 0x1cU)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                          >> 0x19U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                            >> 0x19U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                         >> 0x13U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                           >> 0x10U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                         >> 0x10U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x32U] 
                                                                         << 7U) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x31U] 
                                                                           >> 0x19U)))))))
                                 : vlSelf->__Vcellout__round__out);
    vlSelf->__PVT__out_sp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->__PVT__dp2sp_rec)) 
                                                            & (1U 
                                                               >= 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__dp2sp_rec 
                                                                           >> 0x17U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__dp2sp_rec 
                                                                   >> 0x17U)) 
                                                          >> 7U))));
    vlSelf->__PVT__out_sp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000ULL 
                                                     == 
                                                     (0xe0000000ULL 
                                                      & vlSelf->__PVT__dp2sp_rec)));
    vlSelf->__PVT__out_sp_rec__DOT__sig = (((0U != 
                                             (7U & 
                                              ((IData)(
                                                       (vlSelf->__PVT__dp2sp_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__dp2sp_rec)));
}

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__24__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__0;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__1;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__2;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__3;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__4;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__5;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__6;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__7;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__8;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__9;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__10;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__11;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__12;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__13;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__14;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__15;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__16;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__17;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__18;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__19;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__20;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__21;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__22;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__23;
    VlWide<17>/*543:0*/ __Vtemp_hbd1337a0__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = (
                                                   ((2U 
                                                     == 
                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                      >> 0x1dU)) 
                                                    & (1U 
                                                       >= 
                                                       (0x1ffU 
                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                           >> 0x14U)))) 
                                                   | (0U 
                                                      == 
                                                      (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                       >> 0x1eU)));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000U 
                                                     == 
                                                     (0xe0000000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                              >> 0x1dU)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x33U])))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0000000U 
                                                == 
                                                (0xe0000000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe0000000U 
                                                   == 
                                                   (0xe0080000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((5U == (0xfU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U]))) 
           | (IData)(((6U == (0xeU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U])) 
                      & (~ vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_hbd1337a0__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_hbd1337a0__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_hbd1337a0__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_hbd1337a0__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_hbd1337a0__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hbd1337a0__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hbd1337a0__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbd1337a0__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbd1337a0__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hbd1337a0__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbd1337a0__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbd1337a0__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hbd1337a0__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbd1337a0__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbd1337a0__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hbd1337a0__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_hbd1337a0__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_hbd1337a0__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbd1337a0__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hbd1337a0__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hbd1337a0__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbd1337a0__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_hbd1337a0__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hbd1337a0__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbd1337a0__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbd1337a0__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                           >> 0x1dU)))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x33U])))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0000000U == (0xe0000000U & 
                                      vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U] 
                          >> 1U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U] 
                                                   >> 1U)))) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U)))) & (3U 
                                                 | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                    << 2U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlSelf->__PVT__round__DOT__sigIn 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlSelf->__PVT__round__DOT__sigIn))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlSelf->__PVT__round__DOT__isInf))) 
           & (0U != (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                     >> 0x1dU)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U] 
                                          >> 1U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U] 
                                            >> 1U)))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ (((IData)(((0U == 
                                              (0xeU 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U])) 
                                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit))) 
                                    & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra)))
                                    ? (1U | (0x7ffffffeU 
                                             & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                << 1U)))
                                    : 0U))) : (((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                 & (~ 
                                                    (3U 
                                                     | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 2U)))) 
                                                >> 2U) 
                                               | ((IData)(
                                                          ((0xcU 
                                                            == 
                                                            (0xeU 
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                                >> 0x14U))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U] 
                              >> 1U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isInf) 
           | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__Vcellout__round__out = (((QData)((IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                           & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U])))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                                                >> 0x1dU)) 
                                                                                | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                                 ? 0xffffff94U
                                                                                 : 0U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                                ? 0x80U
                                                                                : 0U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                               ? 0x40U
                                                                               : 0U))) 
                                                                         | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                             ? 0x6bU
                                                                             : 0U)) 
                                                                        | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                            ? 0x17fU
                                                                            : 0U)) 
                                                                       | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                           ? 0x180U
                                                                           : 0U)) 
                                                                      | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                          ? 0x1c0U
                                                                          : 0U)) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & (((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                              ? 0x400000U
                                                                              : 0U) 
                                                                            | (((0U 
                                                                                != 
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                                                >> 0x1dU)) 
                                                                                & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                                : 0U)) 
                                                                           | ((((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                                                & (0U 
                                                                                != 
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                                                >> 0x1dU))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                        >> 0x1dU)) ? 
                                (((QData)((IData)((1U 
                                                   & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((((0U 
                                                                   == 
                                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                                    >> 0x1dU)) 
                                                                  | (6U 
                                                                     <= 
                                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                                      >> 0x1dU)))
                                                                  ? 
                                                                 ((0x1c0U 
                                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                                      >> 0x17U)) 
                                                                  | (0x3fU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                                        >> 0x14U)))
                                                                  : 
                                                                 ((IData)(0x100U) 
                                                                  + 
                                                                  (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                                   >> 0x14U))) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x34U] 
                                                                      << 3U) 
                                                                     | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x33U] 
                                                                        >> 0x1dU)))))))
                                 : vlSelf->__Vcellout__round__out);
    vlSelf->__PVT__out_sp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->__PVT__dp2sp_rec)) 
                                                            & (1U 
                                                               >= 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__dp2sp_rec 
                                                                           >> 0x17U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__dp2sp_rec 
                                                                   >> 0x17U)) 
                                                          >> 7U))));
    vlSelf->__PVT__out_sp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000ULL 
                                                     == 
                                                     (0xe0000000ULL 
                                                      & vlSelf->__PVT__dp2sp_rec)));
    vlSelf->__PVT__out_sp_rec__DOT__sig = (((0U != 
                                             (7U & 
                                              ((IData)(
                                                       (vlSelf->__PVT__dp2sp_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__dp2sp_rec)));
}

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__25__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__0;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__1;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__2;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__3;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__4;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__5;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__6;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__7;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__8;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__9;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__10;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__11;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__12;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__13;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__14;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__15;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__16;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__17;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__18;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__19;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__20;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__21;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__22;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__23;
    VlWide<17>/*543:0*/ __Vtemp_ha200a083__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((4U 
                                                             == 
                                                             (0xeU 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                                      >> 0x18U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                          >> 2U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xeU 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                                 >> 1U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U])) 
                                                    >> 4U))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xcU 
                                                == 
                                                (0xeU 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                               >> 0x17U)) 
                                           & (0xeU 
                                              == (0xeU 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50U == (0xf0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U]))) 
           | (IData)((0x60U == (0xf0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_ha200a083__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_ha200a083__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_ha200a083__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_ha200a083__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_ha200a083__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_ha200a083__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_ha200a083__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_ha200a083__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_ha200a083__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_ha200a083__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_ha200a083__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_ha200a083__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_ha200a083__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_ha200a083__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_ha200a083__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_ha200a083__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_ha200a083__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_ha200a083__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_ha200a083__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_ha200a083__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_ha200a083__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_ha200a083__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_ha200a083__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_ha200a083__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha200a083__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_ha200a083__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                              >> 1U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x35U])) 
                                                 >> 4U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xeU == (0xeU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                          >> 5U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                   >> 5U)))) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U)))) & (3U 
                                                 | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                    << 2U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlSelf->__PVT__round__DOT__sigIn 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlSelf->__PVT__round__DOT__sigIn))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlSelf->__PVT__round__DOT__isInf))) 
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                           >> 1U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                          >> 5U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                            >> 5U)))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ (((IData)(((0U == 
                                              (0xe0U 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U])) 
                                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit))) 
                                    & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra)))
                                    ? (1U | (0x7ffffffeU 
                                             & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                << 1U)))
                                    : 0U))) : (((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                 & (~ 
                                                    (3U 
                                                     | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 2U)))) 
                                                >> 2U) 
                                               | ((IData)(
                                                          ((0xc0U 
                                                            == 
                                                            (0xe0U 
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0xfffU 
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                                      >> 0x18U))))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                              >> 5U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isInf) 
           | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__Vcellout__round__out = (((QData)((IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                              >> 4U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                                                >> 1U))) 
                                                                                | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                                 ? 0xffffff94U
                                                                                 : 0U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                                ? 0x80U
                                                                                : 0U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                               ? 0x40U
                                                                               : 0U))) 
                                                                         | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                             ? 0x6bU
                                                                             : 0U)) 
                                                                        | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                            ? 0x17fU
                                                                            : 0U)) 
                                                                       | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                           ? 0x180U
                                                                           : 0U)) 
                                                                      | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                          ? 0x1c0U
                                                                          : 0U)) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & (((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                              ? 0x400000U
                                                                              : 0U) 
                                                                            | (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                                                >> 1U))) 
                                                                                & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                                : 0U)) 
                                                                           | ((((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                                                >> 1U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                              >> 1U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                         >> 4U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                                          >> 1U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                                            >> 1U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                                         << 5U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                                           >> 0x18U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U] 
                                                                          << 8U) 
                                                                         | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                                            >> 0x18U))))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x36U] 
                                                                        >> 1U))))))
                                 : vlSelf->__Vcellout__round__out);
    vlSelf->__PVT__out_sp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->__PVT__dp2sp_rec)) 
                                                            & (1U 
                                                               >= 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__dp2sp_rec 
                                                                           >> 0x17U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__dp2sp_rec 
                                                                   >> 0x17U)) 
                                                          >> 7U))));
    vlSelf->__PVT__out_sp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000ULL 
                                                     == 
                                                     (0xe0000000ULL 
                                                      & vlSelf->__PVT__dp2sp_rec)));
    vlSelf->__PVT__out_sp_rec__DOT__sig = (((0U != 
                                             (7U & 
                                              ((IData)(
                                                       (vlSelf->__PVT__dp2sp_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__dp2sp_rec)));
}

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__26__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__0;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__1;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__2;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__3;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__4;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__5;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__6;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__7;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__8;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__9;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__10;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__11;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__12;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__13;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__14;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__15;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__16;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__17;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__18;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__19;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__20;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__21;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__22;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__23;
    VlWide<17>/*543:0*/ __Vtemp_hc845465a__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40U 
                                                             == 
                                                             (0xe0U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                    << 4U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                                      >> 0x1cU)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                          >> 6U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                 >> 5U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U])) 
                                                    >> 8U))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0U 
                                                == 
                                                (0xe0U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                               >> 0x1bU)) 
                                           & (0xe0U 
                                              == (0xe0U 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x500U == (0xf00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U]))) 
           | (IData)((0x600U == (0xf00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_hc845465a__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_hc845465a__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_hc845465a__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_hc845465a__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_hc845465a__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hc845465a__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hc845465a__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hc845465a__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hc845465a__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hc845465a__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hc845465a__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hc845465a__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hc845465a__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hc845465a__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hc845465a__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hc845465a__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_hc845465a__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_hc845465a__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hc845465a__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hc845465a__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hc845465a__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hc845465a__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_hc845465a__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hc845465a__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc845465a__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hc845465a__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                              >> 5U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x37U])) 
                                                 >> 8U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0U == (0xe0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                          >> 9U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                   >> 9U)))) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U)))) & (3U 
                                                 | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                    << 2U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlSelf->__PVT__round__DOT__sigIn 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlSelf->__PVT__round__DOT__sigIn))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlSelf->__PVT__round__DOT__isInf))) 
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                           >> 5U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                          >> 9U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                            >> 9U)))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ (((IData)(((0U == 
                                              (0xe00U 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U])) 
                                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit))) 
                                    & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra)))
                                    ? (1U | (0x7ffffffeU 
                                             & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                << 1U)))
                                    : 0U))) : (((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                 & (~ 
                                                    (3U 
                                                     | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 2U)))) 
                                                >> 2U) 
                                               | ((IData)(
                                                          ((0xc00U 
                                                            == 
                                                            (0xe00U 
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0xfffU 
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                    << 4U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                                      >> 0x1cU))))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                              >> 9U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isInf) 
           | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__Vcellout__round__out = (((QData)((IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                              >> 8U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                                >> 5U))) 
                                                                                | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                                 ? 0xffffff94U
                                                                                 : 0U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                                ? 0x80U
                                                                                : 0U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                               ? 0x40U
                                                                               : 0U))) 
                                                                         | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                             ? 0x6bU
                                                                             : 0U)) 
                                                                        | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                            ? 0x17fU
                                                                            : 0U)) 
                                                                       | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                           ? 0x180U
                                                                           : 0U)) 
                                                                      | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                          ? 0x1c0U
                                                                          : 0U)) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & (((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                              ? 0x400000U
                                                                              : 0U) 
                                                                            | (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                                >> 5U))) 
                                                                                & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                                : 0U)) 
                                                                           | ((((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                                >> 5U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                              >> 5U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                         >> 8U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                          >> 5U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                            >> 5U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                         << 1U)) 
                                                                     | (0x3fU 
                                                                        & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                            << 4U) 
                                                                           | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                                              >> 0x1cU))))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U] 
                                                                          << 4U) 
                                                                         | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                                            >> 0x1cU))))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x38U] 
                                                                        >> 5U))))))
                                 : vlSelf->__Vcellout__round__out);
    vlSelf->__PVT__out_sp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->__PVT__dp2sp_rec)) 
                                                            & (1U 
                                                               >= 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__dp2sp_rec 
                                                                           >> 0x17U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__dp2sp_rec 
                                                                   >> 0x17U)) 
                                                          >> 7U))));
    vlSelf->__PVT__out_sp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000ULL 
                                                     == 
                                                     (0xe0000000ULL 
                                                      & vlSelf->__PVT__dp2sp_rec)));
    vlSelf->__PVT__out_sp_rec__DOT__sig = (((0U != 
                                             (7U & 
                                              ((IData)(
                                                       (vlSelf->__PVT__dp2sp_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__dp2sp_rec)));
}

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__27__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__0;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__1;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__2;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__3;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__4;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__5;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__6;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__7;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__8;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__9;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__10;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__11;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__12;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__13;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__14;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__15;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__16;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__17;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__18;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__19;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__20;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__21;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__22;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__23;
    VlWide<17>/*543:0*/ __Vtemp_ha53c789c__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x400U 
                                                             == 
                                                             (0xe00U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU])))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                          >> 0xaU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc00U 
                                                     == 
                                                     (0xe00U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                                 >> 9U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3aU])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U])) 
                                                    >> 0xcU))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc00U 
                                                == 
                                                (0xe00U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3aU] 
                                               >> 0x1fU)) 
                                           & (0xe00U 
                                              == (0xe00U 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x5000U == (0xf000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))) 
           | (IData)((0x6000U == (0xf000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_ha53c789c__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_ha53c789c__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_ha53c789c__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_ha53c789c__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_ha53c789c__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_ha53c789c__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_ha53c789c__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_ha53c789c__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_ha53c789c__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_ha53c789c__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_ha53c789c__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_ha53c789c__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_ha53c789c__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_ha53c789c__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_ha53c789c__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_ha53c789c__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_ha53c789c__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_ha53c789c__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_ha53c789c__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_ha53c789c__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_ha53c789c__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_ha53c789c__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_ha53c789c__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_ha53c789c__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_ha53c789c__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_ha53c789c__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                              >> 9U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3aU])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x39U])) 
                                                 >> 0xcU))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe00U == (0xe00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                          >> 0xdU))) | (4U == (7U & 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                >> 0xdU)))) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U)))) & (3U 
                                                 | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                    << 2U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlSelf->__PVT__round__DOT__sigIn 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlSelf->__PVT__round__DOT__sigIn))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlSelf->__PVT__round__DOT__isInf))) 
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                           >> 9U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                          >> 0xdU))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                            >> 0xdU)))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ (((IData)(((0U == 
                                              (0xe000U 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU])) 
                                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit))) 
                                    & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra)))
                                    ? (1U | (0x7ffffffeU 
                                             & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                << 1U)))
                                    : 0U))) : (((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                 & (~ 
                                                    (3U 
                                                     | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 2U)))) 
                                                >> 2U) 
                                               | ((IData)(
                                                          ((0xc000U 
                                                            == 
                                                            (0xe000U 
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0xfffU 
                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                              >> 0xdU)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isInf) 
           | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__Vcellout__round__out = (((QData)((IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                              >> 0xcU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                                                >> 9U))) 
                                                                                | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                                 ? 0xffffff94U
                                                                                 : 0U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                                ? 0x80U
                                                                                : 0U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                               ? 0x40U
                                                                               : 0U))) 
                                                                         | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                             ? 0x6bU
                                                                             : 0U)) 
                                                                        | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                            ? 0x17fU
                                                                            : 0U)) 
                                                                       | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                           ? 0x180U
                                                                           : 0U)) 
                                                                      | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                          ? 0x1c0U
                                                                          : 0U)) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & (((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                              ? 0x400000U
                                                                              : 0U) 
                                                                            | (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                                                >> 9U))) 
                                                                                & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                                : 0U)) 
                                                                           | ((((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                                                >> 9U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                              >> 9U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                         >> 0xcU)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                                          >> 9U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                                            >> 9U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU] 
                                                                         >> 3U)) 
                                                                     | (0x3fU 
                                                                        & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU]))) 
                                                                   << 0x17U) 
                                                                  | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3aU] 
                                                                     >> 9U)))))
                                 : vlSelf->__Vcellout__round__out);
    vlSelf->__PVT__out_sp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->__PVT__dp2sp_rec)) 
                                                            & (1U 
                                                               >= 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__dp2sp_rec 
                                                                           >> 0x17U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__dp2sp_rec 
                                                                   >> 0x17U)) 
                                                          >> 7U))));
    vlSelf->__PVT__out_sp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000ULL 
                                                     == 
                                                     (0xe0000000ULL 
                                                      & vlSelf->__PVT__dp2sp_rec)));
    vlSelf->__PVT__out_sp_rec__DOT__sig = (((0U != 
                                             (7U & 
                                              ((IData)(
                                                       (vlSelf->__PVT__dp2sp_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__dp2sp_rec)));
}

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__28__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__0;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__1;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__2;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__3;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__4;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__5;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__6;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__7;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__8;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__9;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__10;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__11;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__12;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__13;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__14;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__15;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__16;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__17;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__18;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__19;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__20;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__21;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__22;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__23;
    VlWide<17>/*543:0*/ __Vtemp_h645052a1__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x4000U 
                                                             == 
                                                             (0xe000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                   >> 4U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                          >> 0xeU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xe000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                 >> 0xdU))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU])) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3cU])) 
                                                     << 0x10U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU])) 
                                                       >> 0x10U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc000U 
                                                == 
                                                (0xe000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe000U 
                                                   == 
                                                   (0xe008U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50000U == (0xf0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU]))) 
           | (IData)((0x60000U == (0xf0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h645052a1__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h645052a1__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h645052a1__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h645052a1__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h645052a1__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h645052a1__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h645052a1__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h645052a1__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h645052a1__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h645052a1__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h645052a1__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h645052a1__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h645052a1__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h645052a1__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h645052a1__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h645052a1__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h645052a1__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h645052a1__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h645052a1__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h645052a1__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h645052a1__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h645052a1__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h645052a1__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h645052a1__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h645052a1__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h645052a1__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                              >> 0xdU))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU])) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3cU])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3bU])) 
                                                    >> 0x10U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe000U == (0xe000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                          >> 0x11U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                   >> 0x11U)))) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U)))) & (3U 
                                                 | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                    << 2U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlSelf->__PVT__round__DOT__sigIn 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlSelf->__PVT__round__DOT__sigIn))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlSelf->__PVT__round__DOT__isInf))) 
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                           >> 0xdU))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                          >> 0x11U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                            >> 0x11U)))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ (((IData)(((0U == 
                                              (0xe0000U 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU])) 
                                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit))) 
                                    & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra)))
                                    ? (1U | (0x7ffffffeU 
                                             & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                << 1U)))
                                    : 0U))) : (((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                 & (~ 
                                                    (3U 
                                                     | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 2U)))) 
                                                >> 2U) 
                                               | ((IData)(
                                                          ((0xc0000U 
                                                            == 
                                                            (0xe0000U 
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0xfffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                   >> 4U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                              >> 0x11U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isInf) 
           | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__Vcellout__round__out = (((QData)((IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                              >> 0x10U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                                >> 0xdU))) 
                                                                                | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                                 ? 0xffffff94U
                                                                                 : 0U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                                ? 0x80U
                                                                                : 0U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                               ? 0x40U
                                                                               : 0U))) 
                                                                         | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                             ? 0x6bU
                                                                             : 0U)) 
                                                                        | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                            ? 0x17fU
                                                                            : 0U)) 
                                                                       | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                           ? 0x180U
                                                                           : 0U)) 
                                                                      | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                          ? 0x1c0U
                                                                          : 0U)) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & (((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                              ? 0x400000U
                                                                              : 0U) 
                                                                            | (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                                >> 0xdU))) 
                                                                                & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                                : 0U)) 
                                                                           | ((((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                                >> 0xdU)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                              >> 0xdU)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                          >> 0xdU))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                            >> 0xdU))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                         >> 7U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                           >> 4U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                         >> 4U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU] 
                                                                         << 0x13U) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3cU] 
                                                                           >> 0xdU)))))))
                                 : vlSelf->__Vcellout__round__out);
    vlSelf->__PVT__out_sp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->__PVT__dp2sp_rec)) 
                                                            & (1U 
                                                               >= 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__dp2sp_rec 
                                                                           >> 0x17U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__dp2sp_rec 
                                                                   >> 0x17U)) 
                                                          >> 7U))));
    vlSelf->__PVT__out_sp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000ULL 
                                                     == 
                                                     (0xe0000000ULL 
                                                      & vlSelf->__PVT__dp2sp_rec)));
    vlSelf->__PVT__out_sp_rec__DOT__sig = (((0U != 
                                             (7U & 
                                              ((IData)(
                                                       (vlSelf->__PVT__dp2sp_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__dp2sp_rec)));
}

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__29__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__0;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__1;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__2;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__3;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__4;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__5;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__6;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__7;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__8;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__9;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__10;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__11;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__12;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__13;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__14;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__15;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__16;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__17;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__18;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__19;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__20;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__21;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__22;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__23;
    VlWide<17>/*543:0*/ __Vtemp_hd613d81f__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000U 
                                                             == 
                                                             (0xe0000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                   >> 8U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                          >> 0x12U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0000U 
                                                     == 
                                                     (0xe0000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                 >> 0x11U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU])) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3eU])) 
                                                     << 0xcU) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU])) 
                                                       >> 0x14U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0000U 
                                                == 
                                                (0xe0000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe0000U 
                                                   == 
                                                   (0xe0080U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x500000U == (0xf00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU]))) 
           | (IData)((0x600000U == (0xf00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_hd613d81f__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_hd613d81f__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_hd613d81f__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_hd613d81f__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_hd613d81f__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hd613d81f__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hd613d81f__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hd613d81f__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hd613d81f__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hd613d81f__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hd613d81f__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hd613d81f__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hd613d81f__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hd613d81f__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hd613d81f__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hd613d81f__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_hd613d81f__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_hd613d81f__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hd613d81f__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hd613d81f__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hd613d81f__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hd613d81f__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_hd613d81f__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hd613d81f__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd613d81f__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hd613d81f__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                              >> 0x11U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU])) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3eU])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3dU])) 
                                                    >> 0x14U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0000U == (0xe0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                          >> 0x15U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                   >> 0x15U)))) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U)))) & (3U 
                                                 | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                    << 2U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlSelf->__PVT__round__DOT__sigIn 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlSelf->__PVT__round__DOT__sigIn))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlSelf->__PVT__round__DOT__isInf))) 
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                           >> 0x11U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                          >> 0x15U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                            >> 0x15U)))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ (((IData)(((0U == 
                                              (0xe00000U 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU])) 
                                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit))) 
                                    & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra)))
                                    ? (1U | (0x7ffffffeU 
                                             & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                << 1U)))
                                    : 0U))) : (((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                 & (~ 
                                                    (3U 
                                                     | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 2U)))) 
                                                >> 2U) 
                                               | ((IData)(
                                                          ((0xc00000U 
                                                            == 
                                                            (0xe00000U 
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0xfffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                   >> 8U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                              >> 0x15U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isInf) 
           | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__Vcellout__round__out = (((QData)((IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                              >> 0x14U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                                >> 0x11U))) 
                                                                                | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                                 ? 0xffffff94U
                                                                                 : 0U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                                ? 0x80U
                                                                                : 0U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                               ? 0x40U
                                                                               : 0U))) 
                                                                         | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                             ? 0x6bU
                                                                             : 0U)) 
                                                                        | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                            ? 0x17fU
                                                                            : 0U)) 
                                                                       | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                           ? 0x180U
                                                                           : 0U)) 
                                                                      | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                          ? 0x1c0U
                                                                          : 0U)) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & (((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                              ? 0x400000U
                                                                              : 0U) 
                                                                            | (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                                >> 0x11U))) 
                                                                                & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                                : 0U)) 
                                                                           | ((((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                                >> 0x11U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                              >> 0x11U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                         >> 0x14U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                          >> 0x11U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                            >> 0x11U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                         >> 0xbU)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                           >> 8U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                         >> 8U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU] 
                                                                         << 0xfU) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3eU] 
                                                                           >> 0x11U)))))))
                                 : vlSelf->__Vcellout__round__out);
    vlSelf->__PVT__out_sp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->__PVT__dp2sp_rec)) 
                                                            & (1U 
                                                               >= 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__dp2sp_rec 
                                                                           >> 0x17U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__dp2sp_rec 
                                                                   >> 0x17U)) 
                                                          >> 7U))));
    vlSelf->__PVT__out_sp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000ULL 
                                                     == 
                                                     (0xe0000000ULL 
                                                      & vlSelf->__PVT__dp2sp_rec)));
    vlSelf->__PVT__out_sp_rec__DOT__sig = (((0U != 
                                             (7U & 
                                              ((IData)(
                                                       (vlSelf->__PVT__dp2sp_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__dp2sp_rec)));
}

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__30__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__0;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__1;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__2;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__3;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__4;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__5;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__6;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__7;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__8;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__9;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__10;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__11;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__12;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__13;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__14;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__15;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__16;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__17;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__18;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__19;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__20;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__21;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__22;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__23;
    VlWide<17>/*543:0*/ __Vtemp_h217143ad__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x400000U 
                                                             == 
                                                             (0xe00000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                   >> 0xcU))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                          >> 0x16U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc00000U 
                                                     == 
                                                     (0xe00000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                 >> 0x15U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U])) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x40U])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU])) 
                                                       >> 0x18U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc00000U 
                                                == 
                                                (0xe00000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe00000U 
                                                   == 
                                                   (0xe00800U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x5000000U == (0xf000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U]))) 
           | (IData)((0x6000000U == (0xf000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h217143ad__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h217143ad__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h217143ad__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h217143ad__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h217143ad__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h217143ad__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h217143ad__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h217143ad__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h217143ad__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h217143ad__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h217143ad__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h217143ad__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h217143ad__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h217143ad__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h217143ad__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h217143ad__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h217143ad__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h217143ad__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h217143ad__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h217143ad__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h217143ad__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h217143ad__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h217143ad__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h217143ad__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h217143ad__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h217143ad__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                              >> 0x15U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U])) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x40U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x3fU])) 
                                                    >> 0x18U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe00000U == (0xe00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                          >> 0x19U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                   >> 0x19U)))) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U)))) & (3U 
                                                 | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                    << 2U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlSelf->__PVT__round__DOT__sigIn 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlSelf->__PVT__round__DOT__sigIn))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlSelf->__PVT__round__DOT__isInf))) 
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                           >> 0x15U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                          >> 0x19U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                            >> 0x19U)))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ (((IData)(((0U == 
                                              (0xe000000U 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U])) 
                                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit))) 
                                    & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra)))
                                    ? (1U | (0x7ffffffeU 
                                             & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                << 1U)))
                                    : 0U))) : (((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                 & (~ 
                                                    (3U 
                                                     | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 2U)))) 
                                                >> 2U) 
                                               | ((IData)(
                                                          ((0xc000000U 
                                                            == 
                                                            (0xe000000U 
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0xfffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                   >> 0xcU)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                              >> 0x19U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isInf) 
           | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__Vcellout__round__out = (((QData)((IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                              >> 0x18U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                                >> 0x15U))) 
                                                                                | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                                 ? 0xffffff94U
                                                                                 : 0U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                                ? 0x80U
                                                                                : 0U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                               ? 0x40U
                                                                               : 0U))) 
                                                                         | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                             ? 0x6bU
                                                                             : 0U)) 
                                                                        | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                            ? 0x17fU
                                                                            : 0U)) 
                                                                       | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                           ? 0x180U
                                                                           : 0U)) 
                                                                      | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                          ? 0x1c0U
                                                                          : 0U)) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & (((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                              ? 0x400000U
                                                                              : 0U) 
                                                                            | (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                                >> 0x15U))) 
                                                                                & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                                : 0U)) 
                                                                           | ((((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                                >> 0x15U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                              >> 0x15U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                         >> 0x18U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                          >> 0x15U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                            >> 0x15U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                         >> 0xfU)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                           >> 0xcU)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                         >> 0xcU)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U] 
                                                                         << 0xbU) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x40U] 
                                                                           >> 0x15U)))))))
                                 : vlSelf->__Vcellout__round__out);
    vlSelf->__PVT__out_sp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->__PVT__dp2sp_rec)) 
                                                            & (1U 
                                                               >= 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__dp2sp_rec 
                                                                           >> 0x17U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__dp2sp_rec 
                                                                   >> 0x17U)) 
                                                          >> 7U))));
    vlSelf->__PVT__out_sp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000ULL 
                                                     == 
                                                     (0xe0000000ULL 
                                                      & vlSelf->__PVT__dp2sp_rec)));
    vlSelf->__PVT__out_sp_rec__DOT__sig = (((0U != 
                                             (7U & 
                                              ((IData)(
                                                       (vlSelf->__PVT__dp2sp_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__dp2sp_rec)));
}

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__31__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__0;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__1;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__2;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__3;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__4;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__5;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__6;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__7;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__8;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__9;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__10;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__11;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__12;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__13;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__14;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__15;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__16;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__17;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__18;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__19;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__20;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__21;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__22;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__23;
    VlWide<17>/*543:0*/ __Vtemp_h446e738a__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x4000000U 
                                                             == 
                                                             (0xe000000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                   >> 0x10U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                          >> 0x1aU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                 >> 0x19U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U])) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x42U])) 
                                                     << 4U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U])) 
                                                       >> 0x1cU)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc000000U 
                                                == 
                                                (0xe000000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe000000U 
                                                   == 
                                                   (0xe008000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50000000U == (0xf0000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U]))) 
           | (IData)((0x60000000U == (0xf0000000U & 
                                      vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h446e738a__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h446e738a__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h446e738a__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h446e738a__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h446e738a__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h446e738a__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h446e738a__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h446e738a__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h446e738a__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h446e738a__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h446e738a__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h446e738a__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h446e738a__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h446e738a__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h446e738a__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h446e738a__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h446e738a__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h446e738a__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h446e738a__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h446e738a__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h446e738a__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h446e738a__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h446e738a__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h446e738a__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h446e738a__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h446e738a__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                              >> 0x19U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x42U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x41U])) 
                                                    >> 0x1cU)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe000000U == (0xe000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                    >> 0x1dU)) | (4U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                         >> 0x1dU))) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U)))) & (3U 
                                                 | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                    << 2U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
        = ((0x7fffffeU & ((IData)((vlSelf->__PVT__round__DOT__sigIn 
                                   >> 0x1cU)) << 1U)) 
           | (0U != (0xfffffffU & (IData)(vlSelf->__PVT__round__DOT__sigIn))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase 
        = (((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
            & (~ (IData)(vlSelf->__PVT__round__DOT__isInf))) 
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                           >> 0x19U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                    >> 0x1dU)) | (4U 
                                                  == 
                                                  (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                   >> 0x1dU))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ ((((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                             >> 0x1dU)) 
                                     & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                                    & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra)))
                                    ? (1U | (0x7ffffffeU 
                                             & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                << 1U)))
                                    : 0U))) : (((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                 & (~ 
                                                    (3U 
                                                     | (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                        << 2U)))) 
                                                >> 2U) 
                                               | (((6U 
                                                    == 
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                     >> 0x1dU)) 
                                                   & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0xfffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                   >> 0x10U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                        >> 0x1dU))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
           & (~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isInf) 
           | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
              & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp)));
    vlSelf->__Vcellout__round__out = (((QData)((IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                              >> 0x1cU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                                >> 0x19U))) 
                                                                                | VL_GTS_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                            & (~ 
                                                                               ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                                 ? 0xffffff94U
                                                                                 : 0U))) 
                                                                           & (~ 
                                                                              ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                                ? 0x80U
                                                                                : 0U))) 
                                                                          & (~ 
                                                                             ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                               ? 0x40U
                                                                               : 0U))) 
                                                                         | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut)
                                                                             ? 0x6bU
                                                                             : 0U)) 
                                                                        | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)
                                                                            ? 0x17fU
                                                                            : 0U)) 
                                                                       | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__notNaN_isInfOut)
                                                                           ? 0x180U
                                                                           : 0U)) 
                                                                      | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                          ? 0x1c0U
                                                                          : 0U)) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & (((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)
                                                                              ? 0x400000U
                                                                              : 0U) 
                                                                            | (((0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                                >> 0x19U))) 
                                                                                & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                                ? 
                                                                               (0x400000U 
                                                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                                : 0U)) 
                                                                           | ((((~ (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut)) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                                >> 0x19U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                              >> 0x19U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                         >> 0x1cU)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                          >> 0x19U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                            >> 0x19U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                         >> 0x13U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                           >> 0x10U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                         >> 0x10U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x43U] 
                                                                         << 7U) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x42U] 
                                                                           >> 0x19U)))))))
                                 : vlSelf->__Vcellout__round__out);
    vlSelf->__PVT__out_sp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000000ULL 
                                                             == 
                                                             (0xe0000000ULL 
                                                              & vlSelf->__PVT__dp2sp_rec)) 
                                                            & (1U 
                                                               >= 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->__PVT__dp2sp_rec 
                                                                           >> 0x17U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(
                                                                  (vlSelf->__PVT__dp2sp_rec 
                                                                   >> 0x17U)) 
                                                          >> 7U))));
    vlSelf->__PVT__out_sp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000ULL 
                                                     == 
                                                     (0xe0000000ULL 
                                                      & vlSelf->__PVT__dp2sp_rec)));
    vlSelf->__PVT__out_sp_rec__DOT__sig = (((0U != 
                                             (7U & 
                                              ((IData)(
                                                       (vlSelf->__PVT__dp2sp_rec 
                                                        >> 0x17U)) 
                                               >> 6U))) 
                                            << 0x17U) 
                                           | (0x7fffffU 
                                              & (IData)(vlSelf->__PVT__dp2sp_rec)));
}
