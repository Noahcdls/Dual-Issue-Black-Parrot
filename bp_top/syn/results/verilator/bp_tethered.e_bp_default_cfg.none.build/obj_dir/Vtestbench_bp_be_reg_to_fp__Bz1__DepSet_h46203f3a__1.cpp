// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_reg_to_fp__Bz1.h"

extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h3dcda147_0;
extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h00a543f7_0;

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__10__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_he9367125__0;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__1;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__2;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__3;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__4;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__5;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__6;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__7;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__8;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__9;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__10;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__11;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__12;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__13;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__14;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__15;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__16;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__17;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__18;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__19;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__20;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__21;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__22;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__23;
    VlWide<17>/*543:0*/ __Vtemp_he9367125__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40U 
                                                             == 
                                                             (0xe0U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                                    << 4U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                                      >> 0x1cU)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                          >> 6U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                                 >> 5U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U])) 
                                                    >> 8U))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0U 
                                                == 
                                                (0xe0U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                               >> 0x1bU)) 
                                           & (0xe0U 
                                              == (0xe0U 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x500U == (0xf00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U]))) 
           | (IData)((0x600U == (0xf00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_he9367125__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_he9367125__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_he9367125__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_he9367125__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_he9367125__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_he9367125__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_he9367125__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_he9367125__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_he9367125__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_he9367125__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_he9367125__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_he9367125__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_he9367125__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_he9367125__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_he9367125__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_he9367125__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_he9367125__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_he9367125__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_he9367125__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_he9367125__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_he9367125__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_he9367125__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_he9367125__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_he9367125__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_he9367125__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_he9367125__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                              >> 5U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U])) 
                                                 >> 8U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0U == (0xe0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                          >> 9U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                          >> 9U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U])) 
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
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                                    << 4U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                                      >> 0x1cU))))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                              >> 8U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                                                >> 5U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                              >> 5U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                         >> 8U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                                          >> 5U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                                            >> 5U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                                         << 1U)) 
                                                                     | (0x3fU 
                                                                        & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                                            << 4U) 
                                                                           | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                                              >> 0x1cU))))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U] 
                                                                          << 4U) 
                                                                         | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
                                                                            >> 0x1cU))))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x16U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__11__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__0;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__1;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__2;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__3;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__4;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__5;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__6;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__7;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__8;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__9;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__10;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__11;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__12;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__13;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__14;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__15;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__16;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__17;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__18;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__19;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__20;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__21;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__22;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__23;
    VlWide<17>/*543:0*/ __Vtemp_h04ff3323__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x400U 
                                                             == 
                                                             (0xe00U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U])))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                                          >> 0xaU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc00U 
                                                     == 
                                                     (0xe00U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                                                 >> 9U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x18U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U])) 
                                                    >> 0xcU))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc00U 
                                                == 
                                                (0xe00U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x18U] 
                                               >> 0x1fU)) 
                                           & (0xe00U 
                                              == (0xe00U 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x5000U == (0xf000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))) 
           | (IData)((0x6000U == (0xf000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h04ff3323__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h04ff3323__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h04ff3323__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h04ff3323__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h04ff3323__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h04ff3323__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h04ff3323__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h04ff3323__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h04ff3323__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h04ff3323__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h04ff3323__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h04ff3323__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h04ff3323__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h04ff3323__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h04ff3323__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h04ff3323__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h04ff3323__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h04ff3323__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h04ff3323__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h04ff3323__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h04ff3323__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h04ff3323__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h04ff3323__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h04ff3323__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h04ff3323__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h04ff3323__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                                              >> 9U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x18U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x17U])) 
                                                 >> 0xcU))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe00U == (0xe00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                          >> 0xdU))) | (4U == (7U & 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                          >> 0xdU))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U])) 
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
                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                                              >> 0xcU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                                                                >> 9U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                              >> 9U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                                         >> 0xcU)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                                                          >> 9U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                                                            >> 9U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U] 
                                                                         >> 3U)) 
                                                                     | (0x3fU 
                                                                        & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U]))) 
                                                                   << 0x17U) 
                                                                  | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x18U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__12__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__0;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__1;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__2;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__3;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__4;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__5;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__6;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__7;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__8;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__9;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__10;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__11;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__12;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__13;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__14;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__15;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__16;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__17;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__18;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__19;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__20;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__21;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__22;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__23;
    VlWide<17>/*543:0*/ __Vtemp_h74dbfe35__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x4000U 
                                                             == 
                                                             (0xe000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                                   >> 4U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                          >> 0xeU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xe000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                                 >> 0xdU))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU])) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1aU])) 
                                                     << 0x10U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U])) 
                                                       >> 0x10U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc000U 
                                                == 
                                                (0xe000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe000U 
                                                   == 
                                                   (0xe008U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50000U == (0xf0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU]))) 
           | (IData)((0x60000U == (0xf0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h74dbfe35__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h74dbfe35__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h74dbfe35__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h74dbfe35__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h74dbfe35__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h74dbfe35__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h74dbfe35__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h74dbfe35__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h74dbfe35__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h74dbfe35__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h74dbfe35__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h74dbfe35__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h74dbfe35__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h74dbfe35__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h74dbfe35__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h74dbfe35__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h74dbfe35__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h74dbfe35__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h74dbfe35__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h74dbfe35__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h74dbfe35__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h74dbfe35__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h74dbfe35__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h74dbfe35__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h74dbfe35__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h74dbfe35__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                              >> 0xdU))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU])) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1aU])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x19U])) 
                                                    >> 0x10U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe000U == (0xe000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                          >> 0x11U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                          >> 0x11U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU])) 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                                   >> 4U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                              >> 0x10U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                                                >> 0xdU)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                              >> 0xdU)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                                          >> 0xdU))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                                            >> 0xdU))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                                         >> 7U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                                           >> 4U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                                         >> 4U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU] 
                                                                         << 0x13U) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1aU] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__13__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__0;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__1;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__2;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__3;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__4;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__5;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__6;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__7;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__8;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__9;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__10;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__11;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__12;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__13;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__14;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__15;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__16;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__17;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__18;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__19;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__20;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__21;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__22;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__23;
    VlWide<17>/*543:0*/ __Vtemp_heb668d22__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000U 
                                                             == 
                                                             (0xe0000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                                   >> 8U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                          >> 0x12U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0000U 
                                                     == 
                                                     (0xe0000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                                 >> 0x11U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU])) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1cU])) 
                                                     << 0xcU) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU])) 
                                                       >> 0x14U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0000U 
                                                == 
                                                (0xe0000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe0000U 
                                                   == 
                                                   (0xe0080U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x500000U == (0xf00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU]))) 
           | (IData)((0x600000U == (0xf00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_heb668d22__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_heb668d22__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_heb668d22__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_heb668d22__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_heb668d22__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_heb668d22__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_heb668d22__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_heb668d22__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_heb668d22__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_heb668d22__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_heb668d22__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_heb668d22__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_heb668d22__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_heb668d22__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_heb668d22__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_heb668d22__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_heb668d22__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_heb668d22__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_heb668d22__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_heb668d22__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_heb668d22__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_heb668d22__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_heb668d22__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_heb668d22__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_heb668d22__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_heb668d22__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                              >> 0x11U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU])) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1cU])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1bU])) 
                                                    >> 0x14U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0000U == (0xe0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                          >> 0x15U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                          >> 0x15U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU])) 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                                   >> 8U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                              >> 0x14U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                                                >> 0x11U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                              >> 0x11U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                         >> 0x14U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                                          >> 0x11U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                                            >> 0x11U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                                         >> 0xbU)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                                           >> 8U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                                         >> 8U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU] 
                                                                         << 0xfU) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1cU] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__14__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__0;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__1;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__2;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__3;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__4;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__5;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__6;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__7;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__8;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__9;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__10;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__11;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__12;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__13;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__14;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__15;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__16;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__17;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__18;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__19;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__20;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__21;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__22;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__23;
    VlWide<17>/*543:0*/ __Vtemp_h967fc73f__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x400000U 
                                                             == 
                                                             (0xe00000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                                   >> 0xcU))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                          >> 0x16U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc00000U 
                                                     == 
                                                     (0xe00000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                                 >> 0x15U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU])) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1eU])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU])) 
                                                       >> 0x18U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc00000U 
                                                == 
                                                (0xe00000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe00000U 
                                                   == 
                                                   (0xe00800U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x5000000U == (0xf000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU]))) 
           | (IData)((0x6000000U == (0xf000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h967fc73f__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h967fc73f__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h967fc73f__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h967fc73f__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h967fc73f__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h967fc73f__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h967fc73f__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h967fc73f__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h967fc73f__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h967fc73f__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h967fc73f__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h967fc73f__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h967fc73f__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h967fc73f__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h967fc73f__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h967fc73f__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h967fc73f__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h967fc73f__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h967fc73f__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h967fc73f__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h967fc73f__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h967fc73f__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h967fc73f__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h967fc73f__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h967fc73f__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h967fc73f__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                              >> 0x15U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU])) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1eU])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1dU])) 
                                                    >> 0x18U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe00000U == (0xe00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                          >> 0x19U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                          >> 0x19U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU])) 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                                   >> 0xcU)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                              >> 0x18U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                                                >> 0x15U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                              >> 0x15U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                         >> 0x18U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                                          >> 0x15U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                                            >> 0x15U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                                         >> 0xfU)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                                           >> 0xcU)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                                         >> 0xcU)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU] 
                                                                         << 0xbU) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1eU] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__15__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__0;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__1;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__2;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__3;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__4;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__5;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__6;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__7;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__8;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__9;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__10;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__11;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__12;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__13;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__14;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__15;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__16;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__17;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__18;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__19;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__20;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__21;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__22;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__23;
    VlWide<17>/*543:0*/ __Vtemp_h4e0d23f2__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x4000000U 
                                                             == 
                                                             (0xe000000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                                   >> 0x10U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                          >> 0x1aU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                                 >> 0x19U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U])) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x20U])) 
                                                     << 4U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU])) 
                                                       >> 0x1cU)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc000000U 
                                                == 
                                                (0xe000000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe000000U 
                                                   == 
                                                   (0xe008000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50000000U == (0xf0000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U]))) 
           | (IData)((0x60000000U == (0xf0000000U & 
                                      vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h4e0d23f2__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h4e0d23f2__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h4e0d23f2__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h4e0d23f2__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h4e0d23f2__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h4e0d23f2__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h4e0d23f2__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h4e0d23f2__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h4e0d23f2__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h4e0d23f2__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h4e0d23f2__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h4e0d23f2__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h4e0d23f2__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h4e0d23f2__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h4e0d23f2__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h4e0d23f2__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h4e0d23f2__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h4e0d23f2__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h4e0d23f2__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h4e0d23f2__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h4e0d23f2__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h4e0d23f2__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h4e0d23f2__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h4e0d23f2__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4e0d23f2__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h4e0d23f2__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                              >> 0x19U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x20U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x1fU])) 
                                                    >> 0x1cU)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe000000U == (0xe000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                    >> 0x1dU)) | (4U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
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
        = (0x3ffffffU & (((((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                    >> 0x1dU)) | (4U 
                                                  == 
                                                  (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                   >> 0x1dU))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ ((((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
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
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                                   >> 0x10U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                              >> 0x1cU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                                                >> 0x19U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                              >> 0x19U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                         >> 0x1cU)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                                          >> 0x19U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                                            >> 0x19U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                                         >> 0x13U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                                           >> 0x10U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                                         >> 0x10U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x21U] 
                                                                         << 7U) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x20U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__16__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__0;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__1;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__2;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__3;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__4;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__5;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__6;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__7;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__8;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__9;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__10;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__11;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__12;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__13;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__14;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__15;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__16;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__17;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__18;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__19;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__20;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__21;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__22;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__23;
    VlWide<17>/*543:0*/ __Vtemp_h910e6b51__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = (
                                                   ((2U 
                                                     == 
                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                      >> 0x1dU)) 
                                                    & (1U 
                                                       >= 
                                                       (0x1ffU 
                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                           >> 0x14U)))) 
                                                   | (0U 
                                                      == 
                                                      (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                       >> 0x1eU)));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000U 
                                                     == 
                                                     (0xe0000000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                              >> 0x1dU)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x22U])))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0000000U 
                                                == 
                                                (0xe0000000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe0000000U 
                                                   == 
                                                   (0xe0080000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((5U == (0xfU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U]))) 
           | (IData)(((6U == (0xeU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U])) 
                      & (~ vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h910e6b51__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h910e6b51__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h910e6b51__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h910e6b51__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h910e6b51__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h910e6b51__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h910e6b51__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h910e6b51__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h910e6b51__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h910e6b51__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h910e6b51__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h910e6b51__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h910e6b51__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h910e6b51__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h910e6b51__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h910e6b51__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h910e6b51__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h910e6b51__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h910e6b51__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h910e6b51__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h910e6b51__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h910e6b51__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h910e6b51__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h910e6b51__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h910e6b51__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h910e6b51__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                           >> 0x1dU)))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x22U])))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0000000U == (0xe0000000U & 
                                      vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U] 
                          >> 1U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U] 
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
           & (0U != (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U] 
                                          >> 1U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                                >> 0x14U))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U] 
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
                                                           & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U])))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
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
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
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
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                                                >> 0x1dU))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                        >> 0x1dU)) ? 
                                (((QData)((IData)((1U 
                                                   & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((((0U 
                                                                   == 
                                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                                    >> 0x1dU)) 
                                                                  | (6U 
                                                                     <= 
                                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                                      >> 0x1dU)))
                                                                  ? 
                                                                 ((0x1c0U 
                                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                                      >> 0x17U)) 
                                                                  | (0x3fU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                                        >> 0x14U)))
                                                                  : 
                                                                 ((IData)(0x100U) 
                                                                  + 
                                                                  (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                                   >> 0x14U))) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x23U] 
                                                                      << 3U) 
                                                                     | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x22U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__17__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__0;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__1;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__2;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__3;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__4;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__5;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__6;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__7;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__8;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__9;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__10;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__11;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__12;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__13;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__14;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__15;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__16;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__17;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__18;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__19;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__20;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__21;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__22;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__23;
    VlWide<17>/*543:0*/ __Vtemp_h610fe617__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((4U 
                                                             == 
                                                             (0xeU 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                                      >> 0x18U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                          >> 2U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xeU 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                                 >> 1U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U])) 
                                                    >> 4U))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xcU 
                                                == 
                                                (0xeU 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                               >> 0x17U)) 
                                           & (0xeU 
                                              == (0xeU 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50U == (0xf0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U]))) 
           | (IData)((0x60U == (0xf0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h610fe617__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h610fe617__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h610fe617__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h610fe617__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h610fe617__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h610fe617__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h610fe617__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h610fe617__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h610fe617__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h610fe617__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h610fe617__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h610fe617__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h610fe617__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h610fe617__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h610fe617__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h610fe617__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h610fe617__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h610fe617__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h610fe617__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h610fe617__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h610fe617__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h610fe617__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h610fe617__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h610fe617__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h610fe617__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h610fe617__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                              >> 1U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x24U])) 
                                                 >> 4U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xeU == (0xeU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                          >> 5U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                          >> 5U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U])) 
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
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                                      >> 0x18U))))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                              >> 4U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                                                >> 1U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                              >> 1U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                         >> 4U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                                          >> 1U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                                            >> 1U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                                         << 5U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                                           >> 0x18U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U] 
                                                                          << 8U) 
                                                                         | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
                                                                            >> 0x18U))))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x25U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__18__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__0;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__1;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__2;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__3;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__4;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__5;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__6;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__7;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__8;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__9;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__10;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__11;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__12;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__13;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__14;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__15;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__16;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__17;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__18;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__19;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__20;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__21;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__22;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__23;
    VlWide<17>/*543:0*/ __Vtemp_hbe59c393__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40U 
                                                             == 
                                                             (0xe0U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                                    << 4U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                                      >> 0x1cU)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                          >> 6U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                                 >> 5U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U])) 
                                                    >> 8U))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0U 
                                                == 
                                                (0xe0U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                               >> 0x1bU)) 
                                           & (0xe0U 
                                              == (0xe0U 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x500U == (0xf00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U]))) 
           | (IData)((0x600U == (0xf00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_hbe59c393__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_hbe59c393__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_hbe59c393__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_hbe59c393__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_hbe59c393__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hbe59c393__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hbe59c393__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbe59c393__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbe59c393__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hbe59c393__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbe59c393__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbe59c393__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hbe59c393__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbe59c393__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbe59c393__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hbe59c393__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_hbe59c393__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_hbe59c393__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbe59c393__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hbe59c393__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hbe59c393__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbe59c393__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_hbe59c393__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hbe59c393__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe59c393__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbe59c393__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                              >> 5U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x26U])) 
                                                 >> 8U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0U == (0xe0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                          >> 9U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                          >> 9U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U])) 
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
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                                    << 4U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                                      >> 0x1cU))))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                              >> 8U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                                                >> 5U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                              >> 5U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                         >> 8U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                                          >> 5U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                                            >> 5U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                                         << 1U)) 
                                                                     | (0x3fU 
                                                                        & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                                            << 4U) 
                                                                           | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                                              >> 0x1cU))))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U] 
                                                                          << 4U) 
                                                                         | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
                                                                            >> 0x1cU))))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x27U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__19__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__0;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__1;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__2;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__3;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__4;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__5;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__6;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__7;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__8;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__9;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__10;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__11;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__12;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__13;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__14;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__15;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__16;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__17;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__18;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__19;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__20;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__21;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__22;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__23;
    VlWide<17>/*543:0*/ __Vtemp_h5c579ef9__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x400U 
                                                             == 
                                                             (0xe00U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU])))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                                          >> 0xaU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc00U 
                                                     == 
                                                     (0xe00U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                                                 >> 9U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x29U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U])) 
                                                    >> 0xcU))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc00U 
                                                == 
                                                (0xe00U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x29U] 
                                               >> 0x1fU)) 
                                           & (0xe00U 
                                              == (0xe00U 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x5000U == (0xf000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))) 
           | (IData)((0x6000U == (0xf000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h5c579ef9__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h5c579ef9__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h5c579ef9__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h5c579ef9__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h5c579ef9__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h5c579ef9__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h5c579ef9__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h5c579ef9__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h5c579ef9__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h5c579ef9__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h5c579ef9__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h5c579ef9__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h5c579ef9__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h5c579ef9__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h5c579ef9__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h5c579ef9__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h5c579ef9__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h5c579ef9__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h5c579ef9__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h5c579ef9__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h5c579ef9__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h5c579ef9__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h5c579ef9__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h5c579ef9__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5c579ef9__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h5c579ef9__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                                              >> 9U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x29U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x28U])) 
                                                 >> 0xcU))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe00U == (0xe00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                          >> 0xdU))) | (4U == (7U & 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                          >> 0xdU))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU])) 
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
                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                                              >> 0xcU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                                                                >> 9U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                              >> 9U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                                         >> 0xcU)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                                                          >> 9U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                                                            >> 9U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU] 
                                                                         >> 3U)) 
                                                                     | (0x3fU 
                                                                        & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU]))) 
                                                                   << 0x17U) 
                                                                  | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x29U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__20__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__0;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__1;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__2;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__3;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__4;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__5;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__6;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__7;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__8;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__9;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__10;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__11;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__12;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__13;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__14;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__15;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__16;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__17;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__18;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__19;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__20;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__21;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__22;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__23;
    VlWide<17>/*543:0*/ __Vtemp_hbf6cfe02__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x4000U 
                                                             == 
                                                             (0xe000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                                   >> 4U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                          >> 0xeU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xe000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                                 >> 0xdU))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU])) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2bU])) 
                                                     << 0x10U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU])) 
                                                       >> 0x10U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc000U 
                                                == 
                                                (0xe000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe000U 
                                                   == 
                                                   (0xe008U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50000U == (0xf0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU]))) 
           | (IData)((0x60000U == (0xf0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_hbf6cfe02__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_hbf6cfe02__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_hbf6cfe02__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_hbf6cfe02__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_hbf6cfe02__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hbf6cfe02__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hbf6cfe02__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbf6cfe02__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbf6cfe02__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hbf6cfe02__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbf6cfe02__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbf6cfe02__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hbf6cfe02__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbf6cfe02__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbf6cfe02__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hbf6cfe02__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_hbf6cfe02__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_hbf6cfe02__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbf6cfe02__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hbf6cfe02__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hbf6cfe02__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbf6cfe02__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_hbf6cfe02__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hbf6cfe02__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbf6cfe02__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbf6cfe02__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                              >> 0xdU))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU])) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2bU])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2aU])) 
                                                    >> 0x10U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe000U == (0xe000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                          >> 0x11U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                          >> 0x11U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU])) 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                                   >> 4U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                              >> 0x10U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                                                >> 0xdU)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                              >> 0xdU)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                                          >> 0xdU))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                                            >> 0xdU))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                                         >> 7U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                                           >> 4U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                                         >> 4U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU] 
                                                                         << 0x13U) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2bU] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__21__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__0;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__1;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__2;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__3;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__4;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__5;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__6;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__7;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__8;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__9;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__10;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__11;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__12;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__13;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__14;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__15;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__16;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__17;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__18;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__19;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__20;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__21;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__22;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__23;
    VlWide<17>/*543:0*/ __Vtemp_h5ed9a79b__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000U 
                                                             == 
                                                             (0xe0000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                                   >> 8U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                          >> 0x12U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0000U 
                                                     == 
                                                     (0xe0000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                                 >> 0x11U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU])) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2dU])) 
                                                     << 0xcU) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU])) 
                                                       >> 0x14U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0000U 
                                                == 
                                                (0xe0000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe0000U 
                                                   == 
                                                   (0xe0080U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x500000U == (0xf00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU]))) 
           | (IData)((0x600000U == (0xf00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h5ed9a79b__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h5ed9a79b__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h5ed9a79b__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h5ed9a79b__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h5ed9a79b__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h5ed9a79b__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h5ed9a79b__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h5ed9a79b__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h5ed9a79b__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h5ed9a79b__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h5ed9a79b__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h5ed9a79b__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h5ed9a79b__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h5ed9a79b__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h5ed9a79b__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h5ed9a79b__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h5ed9a79b__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h5ed9a79b__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h5ed9a79b__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h5ed9a79b__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h5ed9a79b__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h5ed9a79b__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h5ed9a79b__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h5ed9a79b__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h5ed9a79b__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h5ed9a79b__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                              >> 0x11U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU])) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2dU])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2cU])) 
                                                    >> 0x14U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0000U == (0xe0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                          >> 0x15U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                          >> 0x15U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU])) 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                                   >> 8U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                              >> 0x14U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                                                >> 0x11U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                              >> 0x11U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                         >> 0x14U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                                          >> 0x11U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                                            >> 0x11U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                                         >> 0xbU)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                                           >> 8U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                                         >> 8U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU] 
                                                                         << 0xfU) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2dU] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__22__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__0;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__1;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__2;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__3;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__4;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__5;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__6;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__7;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__8;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__9;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__10;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__11;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__12;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__13;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__14;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__15;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__16;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__17;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__18;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__19;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__20;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__21;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__22;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__23;
    VlWide<17>/*543:0*/ __Vtemp_hd8b8cf9a__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x400000U 
                                                             == 
                                                             (0xe00000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                                   >> 0xcU))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                          >> 0x16U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc00000U 
                                                     == 
                                                     (0xe00000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                                 >> 0x15U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U])) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2fU])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU])) 
                                                       >> 0x18U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc00000U 
                                                == 
                                                (0xe00000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe00000U 
                                                   == 
                                                   (0xe00800U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x5000000U == (0xf000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U]))) 
           | (IData)((0x6000000U == (0xf000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_hd8b8cf9a__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_hd8b8cf9a__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_hd8b8cf9a__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_hd8b8cf9a__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_hd8b8cf9a__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hd8b8cf9a__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hd8b8cf9a__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hd8b8cf9a__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hd8b8cf9a__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hd8b8cf9a__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hd8b8cf9a__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hd8b8cf9a__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hd8b8cf9a__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hd8b8cf9a__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hd8b8cf9a__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hd8b8cf9a__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_hd8b8cf9a__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_hd8b8cf9a__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hd8b8cf9a__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hd8b8cf9a__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hd8b8cf9a__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hd8b8cf9a__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_hd8b8cf9a__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hd8b8cf9a__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hd8b8cf9a__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hd8b8cf9a__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                              >> 0x15U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U])) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2fU])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2eU])) 
                                                    >> 0x18U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe00000U == (0xe00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                          >> 0x19U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                          >> 0x19U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U])) 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                                   >> 0xcU)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                              >> 0x18U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                                                >> 0x15U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                              >> 0x15U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                         >> 0x18U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                                          >> 0x15U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                                            >> 0x15U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                                         >> 0xfU)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                                           >> 0xcU)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                                         >> 0xcU)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x30U] 
                                                                         << 0xbU) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x2fU] 
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
