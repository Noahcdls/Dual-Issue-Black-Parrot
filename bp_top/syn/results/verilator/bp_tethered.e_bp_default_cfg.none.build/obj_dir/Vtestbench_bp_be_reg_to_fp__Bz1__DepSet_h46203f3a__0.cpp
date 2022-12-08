// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_reg_to_fp__Bz1.h"

extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h3dcda147_0;
extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h00a543f7_0;

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_rec2raw__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_rec2raw__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__0;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__1;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__2;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__3;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__4;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__5;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__6;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__7;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__8;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__9;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__10;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__11;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__12;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__13;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__14;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__15;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__16;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__17;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__18;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__19;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__20;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__21;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__22;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__23;
    VlWide<17>/*543:0*/ __Vtemp_h606c65e8__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = (
                                                   ((2U 
                                                     == 
                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                      >> 0x1dU)) 
                                                    & (1U 
                                                       >= 
                                                       (0x1ffU 
                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                           >> 0x14U)))) 
                                                   | (0U 
                                                      == 
                                                      (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                       >> 0x1eU)));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000U 
                                                     == 
                                                     (0xe0000000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                              >> 0x1dU)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[0U])))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0000000U 
                                                == 
                                                (0xe0000000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe0000000U 
                                                   == 
                                                   (0xe0080000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((5U == vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U])) 
           | (IData)(((6U == (0xeU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U])) 
                      & (~ vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h606c65e8__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h606c65e8__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h606c65e8__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h606c65e8__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h606c65e8__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h606c65e8__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h606c65e8__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h606c65e8__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h606c65e8__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h606c65e8__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h606c65e8__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h606c65e8__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h606c65e8__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h606c65e8__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h606c65e8__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h606c65e8__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h606c65e8__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h606c65e8__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h606c65e8__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h606c65e8__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h606c65e8__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h606c65e8__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h606c65e8__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h606c65e8__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h606c65e8__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h606c65e8__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                           >> 0x1dU)))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[0U])))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0000000U == (0xe0000000U & 
                                      vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
                          >> 1U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
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
           & (0U != (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                     >> 0x1dU)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 >> 3U) & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                           >> 2U)))) 
           | (0U != (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                     & (1U | (6U & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                    << 1U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                 & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask) 
                                >> 3U))) | (0U != (7U 
                                                   & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                      & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRoundExtra));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
                                          >> 1U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                                >> 0x14U))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
                              >> 1U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow 
        = ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->fflags_o = (((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
                                       >> 1U))) | (7U 
                                                   == 
                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                    >> 0x1dU)))
                         ? 0U : (((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
                                  << 4U) | (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
                                                 & (VL_GTS_III(32, 0x6bU, 
                                                               VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))) 
                                                    | ((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound) 
                                                         & VL_GTES_III(32, 0U, 
                                                                       VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,14, 
                                                                                (0x3fffU 
                                                                                & ((IData)(0x3900U) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                                                >> 0x14U))))), 8U))) 
                                                        & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
                                                       & (~ 
                                                          ((((~ 
                                                              (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
                                                               >> 1U)) 
                                                             & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                                                >> 0x18U)) 
                                                            & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                                                           & ((((0U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
                                                                     >> 1U))) 
                                                                | (4U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
                                                                       >> 1U)))) 
                                                               & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                                                  >> 1U)) 
                                                              | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                                                                 & (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig))))))))) 
                                                << 1U) 
                                               | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow) 
                                                  | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
                                                     & (VL_GTS_III(32, 0x6bU, 
                                                                   VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))) 
                                                        | (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound))))))));
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
                                                           & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U])))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
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
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
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
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                                                >> 0x1dU))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                        >> 0x1dU)) ? 
                                (((QData)((IData)((1U 
                                                   & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((((0U 
                                                                   == 
                                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                                    >> 0x1dU)) 
                                                                  | (6U 
                                                                     <= 
                                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                                      >> 0x1dU)))
                                                                  ? 
                                                                 ((0x1c0U 
                                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                                      >> 0x17U)) 
                                                                  | (0x3fU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                                        >> 0x14U)))
                                                                  : 
                                                                 ((IData)(0x100U) 
                                                                  + 
                                                                  (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                                   >> 0x14U))) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                                      << 3U) 
                                                                     | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[0U] 
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
    vlSelf->raw_o = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
                                   >> 1U))) ? (((QData)((IData)(
                                                                (1U 
                                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]))) 
                                                << 0x3fU) 
                                               | (((QData)((IData)(
                                                                   (0x7ffU 
                                                                    & (((IData)(vlSelf->__PVT__out_dp_rec__DOT__isSubnormal)
                                                                         ? 0U
                                                                         : 
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                                           >> 0x14U) 
                                                                          - (IData)(0x402U)))) 
                                                                       | (((IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U]))) 
                                                                           | (IData)(vlSelf->__PVT__out_dp_rec__DOT__isInf))
                                                                           ? 0x7ffU
                                                                           : 0U))))) 
                                                   << 0x34U) 
                                                  | (0xfffffffffffffULL 
                                                     & ((IData)(vlSelf->__PVT__out_dp_rec__DOT__isSubnormal)
                                                         ? 
                                                        ((0x3fffffffffffffULL 
                                                          & (vlSelf->__PVT__out_dp_rec__DOT__sig 
                                                             >> 1U)) 
                                                         >> 
                                                         (0x3fU 
                                                          & ((IData)(1U) 
                                                             - 
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                              >> 0x14U))))
                                                         : 
                                                        ((IData)(vlSelf->__PVT__out_dp_rec__DOT__isInf)
                                                          ? 0ULL
                                                          : vlSelf->__PVT__out_dp_rec__DOT__sig)))))
                      : (0xffffffff00000000ULL | (QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->__PVT__dp2sp_rec 
                                                                            >> 0x20U)) 
                                                                   << 0x1fU) 
                                                                  | ((0x7f800000U 
                                                                      & ((((IData)(vlSelf->__PVT__out_sp_rec__DOT__isSubnormal)
                                                                            ? 0U
                                                                            : 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            ((0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__dp2sp_rec 
                                                                                >> 0x17U))) 
                                                                             - (IData)(0x82U)))) 
                                                                          | (((IData)(
                                                                                (0xe0000000ULL 
                                                                                == 
                                                                                (0xe0000000ULL 
                                                                                & vlSelf->__PVT__dp2sp_rec))) 
                                                                              | (IData)(vlSelf->__PVT__out_sp_rec__DOT__isInf))
                                                                              ? 0xffU
                                                                              : 0U)) 
                                                                         << 0x17U)) 
                                                                     | (0x7fffffU 
                                                                        & ((IData)(vlSelf->__PVT__out_sp_rec__DOT__isSubnormal)
                                                                            ? 
                                                                           ((vlSelf->__PVT__out_sp_rec__DOT__sig 
                                                                             >> 1U) 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(1U) 
                                                                                - 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__dp2sp_rec 
                                                                                >> 0x17U))))))
                                                                            : 
                                                                           ((IData)(vlSelf->__PVT__out_sp_rec__DOT__isInf)
                                                                             ? 0U
                                                                             : vlSelf->__PVT__out_sp_rec__DOT__sig)))))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_rec2raw__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_rec2raw__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__0;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__1;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__2;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__3;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__4;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__5;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__6;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__7;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__8;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__9;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__10;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__11;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__12;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__13;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__14;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__15;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__16;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__17;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__18;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__19;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__20;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__21;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__22;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__23;
    VlWide<17>/*543:0*/ __Vtemp_hbe34a3fc__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = (
                                                   ((2U 
                                                     == 
                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                      >> 0x1dU)) 
                                                    & (1U 
                                                       >= 
                                                       (0x1ffU 
                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                           >> 0x14U)))) 
                                                   | (0U 
                                                      == 
                                                      (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                       >> 0x1eU)));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000U 
                                                     == 
                                                     (0xe0000000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                              >> 0x1dU)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[0U])))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0000000U 
                                                == 
                                                (0xe0000000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe0000000U 
                                                   == 
                                                   (0xe0080000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((5U == vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U])) 
           | (IData)(((6U == (0xeU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U])) 
                      & (~ vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_hbe34a3fc__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_hbe34a3fc__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_hbe34a3fc__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_hbe34a3fc__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_hbe34a3fc__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hbe34a3fc__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hbe34a3fc__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbe34a3fc__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbe34a3fc__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hbe34a3fc__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbe34a3fc__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbe34a3fc__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hbe34a3fc__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hbe34a3fc__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hbe34a3fc__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hbe34a3fc__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_hbe34a3fc__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_hbe34a3fc__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbe34a3fc__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hbe34a3fc__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hbe34a3fc__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbe34a3fc__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_hbe34a3fc__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hbe34a3fc__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hbe34a3fc__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hbe34a3fc__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                           >> 0x1dU)))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[0U])))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0000000U == (0xe0000000U & 
                                      vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U] 
                          >> 1U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U] 
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
           & (0U != (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U] 
                                          >> 1U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                                >> 0x14U))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U] 
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
                                                           & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U])))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
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
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
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
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                                                >> 0x1dU))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                        >> 0x1dU)) ? 
                                (((QData)((IData)((1U 
                                                   & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((((0U 
                                                                   == 
                                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                                    >> 0x1dU)) 
                                                                  | (6U 
                                                                     <= 
                                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                                      >> 0x1dU)))
                                                                  ? 
                                                                 ((0x1c0U 
                                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                                      >> 0x17U)) 
                                                                  | (0x3fU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                                        >> 0x14U)))
                                                                  : 
                                                                 ((IData)(0x100U) 
                                                                  + 
                                                                  (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                                   >> 0x14U))) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                                      << 3U) 
                                                                     | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[0U] 
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
    vlSelf->raw_o = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U] 
                                   >> 1U))) ? (((QData)((IData)(
                                                                (1U 
                                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U]))) 
                                                << 0x3fU) 
                                               | (((QData)((IData)(
                                                                   (0x7ffU 
                                                                    & (((IData)(vlSelf->__PVT__out_dp_rec__DOT__isSubnormal)
                                                                         ? 0U
                                                                         : 
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                                           >> 0x14U) 
                                                                          - (IData)(0x402U)))) 
                                                                       | (((IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U]))) 
                                                                           | (IData)(vlSelf->__PVT__out_dp_rec__DOT__isInf))
                                                                           ? 0x7ffU
                                                                           : 0U))))) 
                                                   << 0x34U) 
                                                  | (0xfffffffffffffULL 
                                                     & ((IData)(vlSelf->__PVT__out_dp_rec__DOT__isSubnormal)
                                                         ? 
                                                        ((0x3fffffffffffffULL 
                                                          & (vlSelf->__PVT__out_dp_rec__DOT__sig 
                                                             >> 1U)) 
                                                         >> 
                                                         (0x3fU 
                                                          & ((IData)(1U) 
                                                             - 
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U] 
                                                              >> 0x14U))))
                                                         : 
                                                        ((IData)(vlSelf->__PVT__out_dp_rec__DOT__isInf)
                                                          ? 0ULL
                                                          : vlSelf->__PVT__out_dp_rec__DOT__sig)))))
                      : (0xffffffff00000000ULL | (QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->__PVT__dp2sp_rec 
                                                                            >> 0x20U)) 
                                                                   << 0x1fU) 
                                                                  | ((0x7f800000U 
                                                                      & ((((IData)(vlSelf->__PVT__out_sp_rec__DOT__isSubnormal)
                                                                            ? 0U
                                                                            : 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            ((0x1ffU 
                                                                              & (IData)(
                                                                                (vlSelf->__PVT__dp2sp_rec 
                                                                                >> 0x17U))) 
                                                                             - (IData)(0x82U)))) 
                                                                          | (((IData)(
                                                                                (0xe0000000ULL 
                                                                                == 
                                                                                (0xe0000000ULL 
                                                                                & vlSelf->__PVT__dp2sp_rec))) 
                                                                              | (IData)(vlSelf->__PVT__out_sp_rec__DOT__isInf))
                                                                              ? 0xffU
                                                                              : 0U)) 
                                                                         << 0x17U)) 
                                                                     | (0x7fffffU 
                                                                        & ((IData)(vlSelf->__PVT__out_sp_rec__DOT__isSubnormal)
                                                                            ? 
                                                                           ((vlSelf->__PVT__out_sp_rec__DOT__sig 
                                                                             >> 1U) 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(1U) 
                                                                                - 
                                                                                (0x1ffU 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__dp2sp_rec 
                                                                                >> 0x17U))))))
                                                                            : 
                                                                           ((IData)(vlSelf->__PVT__out_sp_rec__DOT__isInf)
                                                                             ? 0U
                                                                             : vlSelf->__PVT__out_sp_rec__DOT__sig)))))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__reg_to_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__reg_to_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__0;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__1;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__2;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__3;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__4;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__5;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__6;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__7;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__8;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__9;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__10;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__11;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__12;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__13;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__14;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__15;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__16;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__17;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__18;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__19;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__20;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__21;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__22;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__23;
    VlWide<17>/*543:0*/ __Vtemp_h90e0d19e__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])) 
                                                    & (1U 
                                                       >= 
                                                       (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                        >> 0x17U))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                          >> 1U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    ((6U 
                                                      == 
                                                      (6U 
                                                       & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])) 
                                                     & (~ 
                                                        vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[1U])) 
                                                    >> 3U))));
    vlSelf->__PVT__round__DOT__isInf = (IData)(((6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])) 
                                                & (~ 
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((7U == (7U 
                                                   & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])) 
                                           & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                 >> 0x16U)));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x28U == (0x78U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U]))) 
           | (IData)((0x30U == (0x78U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h90e0d19e__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h90e0d19e__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h90e0d19e__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h90e0d19e__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h90e0d19e__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h90e0d19e__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h90e0d19e__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h90e0d19e__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h90e0d19e__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h90e0d19e__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h90e0d19e__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h90e0d19e__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h90e0d19e__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h90e0d19e__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h90e0d19e__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h90e0d19e__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h90e0d19e__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h90e0d19e__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h90e0d19e__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h90e0d19e__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h90e0d19e__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h90e0d19e__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h90e0d19e__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h90e0d19e__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h90e0d19e__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                    << 9U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                      >> 0x17U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h90e0d19e__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[1U])) 
                                                 >> 3U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((7U == (7U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                          >> 4U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                   >> 4U)))) 
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
           & (0U != (7U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])));
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                          >> 4U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                            >> 4U)))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ (((IData)(((0U == 
                                              (0x70U 
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])) 
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
                                                          ((0x60U 
                                                            == 
                                                            (0x70U 
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])) 
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
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                                      >> 0x17U))))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                              >> 4U)))));
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                              >> 3U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])) 
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
                                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])) 
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
                                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U]))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U]))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                         >> 3U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U])))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                                         << 6U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                                           >> 0x17U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[3U] 
                                                                          << 9U) 
                                                                         | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U] 
                                                                            >> 0x17U))))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r[2U])))))
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__0__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__0;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__1;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__2;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__3;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__4;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__5;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__6;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__7;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__8;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__9;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__10;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__11;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__12;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__13;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__14;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__15;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__16;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__17;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__18;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__19;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__20;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__21;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__22;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__23;
    VlWide<17>/*543:0*/ __Vtemp_hdc205789__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = (
                                                   ((2U 
                                                     == 
                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                      >> 0x1dU)) 
                                                    & (1U 
                                                       >= 
                                                       (0x1ffU 
                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                           >> 0x14U)))) 
                                                   | (0U 
                                                      == 
                                                      (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                       >> 0x1eU)));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000U 
                                                     == 
                                                     (0xe0000000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                              >> 0x1dU)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0U])))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0000000U 
                                                == 
                                                (0xe0000000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe0000000U 
                                                   == 
                                                   (0xe0080000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((5U == (0xfU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U]))) 
           | (IData)(((6U == (0xeU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U])) 
                      & (~ vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_hdc205789__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_hdc205789__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_hdc205789__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_hdc205789__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_hdc205789__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hdc205789__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hdc205789__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hdc205789__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hdc205789__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_hdc205789__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hdc205789__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hdc205789__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hdc205789__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hdc205789__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_hdc205789__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hdc205789__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_hdc205789__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_hdc205789__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hdc205789__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hdc205789__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hdc205789__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hdc205789__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_hdc205789__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_hdc205789__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hdc205789__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_hdc205789__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                           >> 0x1dU)))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0U])))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0000000U == (0xe0000000U & 
                                      vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U] 
                          >> 1U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U] 
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
           & (0U != (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U] 
                                          >> 1U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                                >> 0x14U))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U] 
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
                                                           & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U])))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
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
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
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
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                                                >> 0x1dU))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                        >> 0x1dU)) ? 
                                (((QData)((IData)((1U 
                                                   & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((((0U 
                                                                   == 
                                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                                    >> 0x1dU)) 
                                                                  | (6U 
                                                                     <= 
                                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                                      >> 0x1dU)))
                                                                  ? 
                                                                 ((0x1c0U 
                                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                                      >> 0x17U)) 
                                                                  | (0x3fU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                                        >> 0x14U)))
                                                                  : 
                                                                 ((IData)(0x100U) 
                                                                  + 
                                                                  (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                                   >> 0x14U))) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[1U] 
                                                                      << 3U) 
                                                                     | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__1__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__0;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__1;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__2;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__3;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__4;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__5;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__6;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__7;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__8;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__9;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__10;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__11;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__12;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__13;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__14;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__15;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__16;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__17;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__18;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__19;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__20;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__21;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__22;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__23;
    VlWide<17>/*543:0*/ __Vtemp_h33b8c07e__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((4U 
                                                             == 
                                                             (0xeU 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                                      >> 0x18U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                          >> 2U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xeU 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                                 >> 1U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U])) 
                                                    >> 4U))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xcU 
                                                == 
                                                (0xeU 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                               >> 0x17U)) 
                                           & (0xeU 
                                              == (0xeU 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50U == (0xf0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U]))) 
           | (IData)((0x60U == (0xf0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h33b8c07e__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h33b8c07e__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h33b8c07e__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h33b8c07e__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h33b8c07e__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h33b8c07e__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h33b8c07e__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h33b8c07e__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h33b8c07e__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h33b8c07e__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h33b8c07e__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h33b8c07e__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h33b8c07e__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h33b8c07e__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h33b8c07e__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h33b8c07e__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h33b8c07e__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h33b8c07e__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h33b8c07e__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h33b8c07e__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h33b8c07e__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h33b8c07e__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h33b8c07e__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h33b8c07e__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h33b8c07e__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h33b8c07e__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                              >> 1U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[2U])) 
                                                 >> 4U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xeU == (0xeU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                          >> 5U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                          >> 5U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U])) 
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
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                                      >> 0x18U))))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                              >> 4U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                                                >> 1U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                              >> 1U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                         >> 4U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                                          >> 1U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                                            >> 1U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                                         << 5U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                                           >> 0x18U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U] 
                                                                          << 8U) 
                                                                         | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
                                                                            >> 0x18U))))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[3U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__2__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__0;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__1;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__2;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__3;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__4;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__5;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__6;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__7;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__8;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__9;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__10;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__11;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__12;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__13;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__14;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__15;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__16;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__17;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__18;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__19;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__20;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__21;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__22;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__23;
    VlWide<17>/*543:0*/ __Vtemp_h8cbfe8de__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40U 
                                                             == 
                                                             (0xe0U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                                    << 4U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                                      >> 0x1cU)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                          >> 6U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0U 
                                                     == 
                                                     (0xe0U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                                 >> 5U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U])) 
                                                    >> 8U))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0U 
                                                == 
                                                (0xe0U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                               >> 0x1bU)) 
                                           & (0xe0U 
                                              == (0xe0U 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x500U == (0xf00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U]))) 
           | (IData)((0x600U == (0xf00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h8cbfe8de__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h8cbfe8de__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h8cbfe8de__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h8cbfe8de__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h8cbfe8de__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h8cbfe8de__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h8cbfe8de__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h8cbfe8de__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h8cbfe8de__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h8cbfe8de__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h8cbfe8de__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h8cbfe8de__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h8cbfe8de__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h8cbfe8de__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h8cbfe8de__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h8cbfe8de__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h8cbfe8de__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h8cbfe8de__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h8cbfe8de__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h8cbfe8de__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h8cbfe8de__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h8cbfe8de__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h8cbfe8de__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h8cbfe8de__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8cbfe8de__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                      >> 0x1cU))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h8cbfe8de__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                              >> 5U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[4U])) 
                                                 >> 8U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0U == (0xe0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                          >> 9U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                          >> 9U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U])) 
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
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                                    << 4U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                                      >> 0x1cU))))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                              >> 8U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                                                >> 5U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                              >> 5U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                         >> 8U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                                          >> 5U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                                            >> 5U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                                         << 1U)) 
                                                                     | (0x3fU 
                                                                        & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                                            << 4U) 
                                                                           | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                                              >> 0x1cU))))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U] 
                                                                          << 4U) 
                                                                         | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
                                                                            >> 0x1cU))))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[5U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__3__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__0;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__1;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__2;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__3;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__4;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__5;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__6;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__7;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__8;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__9;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__10;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__11;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__12;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__13;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__14;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__15;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__16;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__17;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__18;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__19;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__20;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__21;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__22;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__23;
    VlWide<17>/*543:0*/ __Vtemp_h2208ba3b__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x400U 
                                                             == 
                                                             (0xe00U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U])))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                                          >> 0xaU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc00U 
                                                     == 
                                                     (0xe00U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                                                 >> 9U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[7U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U])) 
                                                    >> 0xcU))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc00U 
                                                == 
                                                (0xe00U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[7U] 
                                               >> 0x1fU)) 
                                           & (0xe00U 
                                              == (0xe00U 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x5000U == (0xf000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))) 
           | (IData)((0x6000U == (0xf000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h2208ba3b__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h2208ba3b__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h2208ba3b__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h2208ba3b__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h2208ba3b__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h2208ba3b__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h2208ba3b__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h2208ba3b__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h2208ba3b__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h2208ba3b__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h2208ba3b__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h2208ba3b__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h2208ba3b__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h2208ba3b__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h2208ba3b__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h2208ba3b__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h2208ba3b__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h2208ba3b__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h2208ba3b__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h2208ba3b__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h2208ba3b__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h2208ba3b__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h2208ba3b__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h2208ba3b__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h2208ba3b__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h2208ba3b__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                                              >> 9U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[7U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[6U])) 
                                                 >> 0xcU))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe00U == (0xe00U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                          >> 0xdU))) | (4U == (7U & 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                          >> 0xdU))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U])) 
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
                                                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                                              >> 0xcU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                                                                >> 9U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                              >> 9U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                                         >> 0xcU)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                                                          >> 9U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                                                            >> 9U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U] 
                                                                         >> 3U)) 
                                                                     | (0x3fU 
                                                                        & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U]))) 
                                                                   << 0x17U) 
                                                                  | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[7U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__4__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__0;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__1;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__2;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__3;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__4;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__5;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__6;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__7;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__8;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__9;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__10;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__11;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__12;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__13;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__14;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__15;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__16;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__17;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__18;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__19;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__20;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__21;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__22;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__23;
    VlWide<17>/*543:0*/ __Vtemp_h31d69275__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x4000U 
                                                             == 
                                                             (0xe000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                                   >> 4U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                          >> 0xeU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xe000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                                 >> 0xdU))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU])) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[9U])) 
                                                     << 0x10U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U])) 
                                                       >> 0x10U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc000U 
                                                == 
                                                (0xe000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe000U 
                                                   == 
                                                   (0xe008U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50000U == (0xf0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU]))) 
           | (IData)((0x60000U == (0xf0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h31d69275__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h31d69275__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h31d69275__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h31d69275__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h31d69275__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h31d69275__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h31d69275__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h31d69275__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h31d69275__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h31d69275__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h31d69275__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h31d69275__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h31d69275__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h31d69275__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h31d69275__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h31d69275__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h31d69275__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h31d69275__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h31d69275__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h31d69275__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h31d69275__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h31d69275__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h31d69275__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h31d69275__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h31d69275__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                   >> 4U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h31d69275__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                              >> 0xdU))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU])) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[9U])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[8U])) 
                                                    >> 0x10U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe000U == (0xe000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                          >> 0x11U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                          >> 0x11U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU])) 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                                   >> 4U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                              >> 0x10U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                                                >> 0xdU)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                              >> 0xdU)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                                          >> 0xdU))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                                            >> 0xdU))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                                         >> 7U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                                           >> 4U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                                         >> 4U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU] 
                                                                         << 0x13U) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[9U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__5__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__0;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__1;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__2;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__3;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__4;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__5;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__6;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__7;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__8;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__9;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__10;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__11;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__12;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__13;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__14;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__15;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__16;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__17;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__18;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__19;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__20;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__21;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__22;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__23;
    VlWide<17>/*543:0*/ __Vtemp_h4ed7da77__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x40000U 
                                                             == 
                                                             (0xe0000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                                   >> 8U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                          >> 0x12U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0000U 
                                                     == 
                                                     (0xe0000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                                 >> 0x11U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU])) 
                                                  << 0x2cU) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xbU])) 
                                                     << 0xcU) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU])) 
                                                       >> 0x14U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0000U 
                                                == 
                                                (0xe0000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe0000U 
                                                   == 
                                                   (0xe0080U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x500000U == (0xf00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU]))) 
           | (IData)((0x600000U == (0xf00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h4ed7da77__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h4ed7da77__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h4ed7da77__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h4ed7da77__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h4ed7da77__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h4ed7da77__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h4ed7da77__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h4ed7da77__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h4ed7da77__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h4ed7da77__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h4ed7da77__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h4ed7da77__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h4ed7da77__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h4ed7da77__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h4ed7da77__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h4ed7da77__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h4ed7da77__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h4ed7da77__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h4ed7da77__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h4ed7da77__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h4ed7da77__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h4ed7da77__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h4ed7da77__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h4ed7da77__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h4ed7da77__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                   >> 8U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h4ed7da77__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                              >> 0x11U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU])) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xbU])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xaU])) 
                                                    >> 0x14U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0000U == (0xe0000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                          >> 0x15U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                          >> 0x15U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU])) 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                                   >> 8U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                              >> 0x14U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                                                >> 0x11U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                              >> 0x11U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                         >> 0x14U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                                          >> 0x11U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                                            >> 0x11U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                                         >> 0xbU)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                                           >> 8U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                                         >> 8U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU] 
                                                                         << 0xfU) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xbU] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__6__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__0;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__1;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__2;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__3;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__4;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__5;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__6;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__7;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__8;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__9;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__10;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__11;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__12;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__13;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__14;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__15;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__16;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__17;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__18;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__19;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__20;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__21;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__22;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__23;
    VlWide<17>/*543:0*/ __Vtemp_h7d169e28__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x400000U 
                                                             == 
                                                             (0xe00000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                                   >> 0xcU))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                          >> 0x16U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc00000U 
                                                     == 
                                                     (0xe00000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                                 >> 0x15U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU])) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xdU])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU])) 
                                                       >> 0x18U)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc00000U 
                                                == 
                                                (0xe00000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe00000U 
                                                   == 
                                                   (0xe00800U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x5000000U == (0xf000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU]))) 
           | (IData)((0x6000000U == (0xf000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h7d169e28__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h7d169e28__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h7d169e28__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h7d169e28__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h7d169e28__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h7d169e28__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h7d169e28__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h7d169e28__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h7d169e28__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h7d169e28__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h7d169e28__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h7d169e28__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h7d169e28__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h7d169e28__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h7d169e28__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h7d169e28__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h7d169e28__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h7d169e28__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h7d169e28__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h7d169e28__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h7d169e28__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h7d169e28__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h7d169e28__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h7d169e28__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h7d169e28__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                   >> 0xcU)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h7d169e28__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                              >> 0x15U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU])) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xdU])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xcU])) 
                                                    >> 0x18U)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe00000U == (0xe00000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                          >> 0x19U))) | (4U == (7U 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                          >> 0x19U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU])) 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                                   >> 0xcU)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                              >> 0x18U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                                                >> 0x15U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                              >> 0x15U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                         >> 0x18U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                                          >> 0x15U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                                            >> 0x15U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                                         >> 0xfU)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                                           >> 0xcU)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                                         >> 0xcU)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU] 
                                                                         << 0xbU) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xdU] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__7__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__0;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__1;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__2;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__3;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__4;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__5;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__6;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__7;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__8;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__9;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__10;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__11;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__12;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__13;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__14;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__15;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__16;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__17;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__18;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__19;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__20;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__21;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__22;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__23;
    VlWide<17>/*543:0*/ __Vtemp_h6423bff4__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((0x4000000U 
                                                             == 
                                                             (0xe000000U 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                                   >> 0x10U))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                          >> 0x1aU))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                                 >> 0x19U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U])) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xfU])) 
                                                     << 4U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU])) 
                                                       >> 0x1cU)))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc000000U 
                                                == 
                                                (0xe000000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe000000U 
                                                   == 
                                                   (0xe008000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50000000U == (0xf0000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U]))) 
           | (IData)((0x60000000U == (0xf0000000U & 
                                      vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h6423bff4__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h6423bff4__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h6423bff4__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h6423bff4__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h6423bff4__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h6423bff4__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h6423bff4__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h6423bff4__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h6423bff4__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h6423bff4__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h6423bff4__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h6423bff4__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h6423bff4__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h6423bff4__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h6423bff4__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h6423bff4__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h6423bff4__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h6423bff4__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h6423bff4__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h6423bff4__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h6423bff4__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h6423bff4__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h6423bff4__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h6423bff4__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h6423bff4__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x10U)))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h6423bff4__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                              >> 0x19U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U])) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xfU])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xeU])) 
                                                    >> 0x1cU)))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe000000U == (0xe000000U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                    >> 0x1dU)) | (4U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
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
        = (0x3ffffffU & (((((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                    >> 0x1dU)) | (4U 
                                                  == 
                                                  (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                   >> 0x1dU))) 
                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosBit)) 
                          | ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
                             & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                          ? (((IData)(1U) + ((vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__adjustedSig 
                                              >> 2U) 
                                             | (0x3fffffffU 
                                                & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main))) 
                             & (~ ((((0U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
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
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
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
                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                                   >> 0x10U)))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                              >> 0x1cU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                                                >> 0x19U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                              >> 0x19U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                         >> 0x1cU)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                                          >> 0x19U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                                            >> 0x19U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                                         >> 0x13U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                                           >> 0x10U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                                         >> 0x10U)))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x10U] 
                                                                         << 7U) 
                                                                        | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0xfU] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__8__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__0;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__1;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__2;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__3;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__4;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__5;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__6;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__7;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__8;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__9;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__10;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__11;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__12;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__13;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__14;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__15;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__16;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__17;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__18;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__19;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__20;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__21;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__22;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__23;
    VlWide<17>/*543:0*/ __Vtemp_h8be59d2a__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = (
                                                   ((2U 
                                                     == 
                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                      >> 0x1dU)) 
                                                    & (1U 
                                                       >= 
                                                       (0x1ffU 
                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                           >> 0x14U)))) 
                                                   | (0U 
                                                      == 
                                                      (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                       >> 0x1eU)));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xc0000000U 
                                                     == 
                                                     (0xe0000000U 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                              >> 0x1dU)))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x11U])))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xc0000000U 
                                                == 
                                                (0xe0000000U 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U])));
    vlSelf->__PVT__round__DOT__isSigNaN = (IData)((0xe0000000U 
                                                   == 
                                                   (0xe0080000U 
                                                    & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((5U == (0xfU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U]))) 
           | (IData)(((6U == (0xeU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U])) 
                      & (~ vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h8be59d2a__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h8be59d2a__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h8be59d2a__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h8be59d2a__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h8be59d2a__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h8be59d2a__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h8be59d2a__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h8be59d2a__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h8be59d2a__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h8be59d2a__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h8be59d2a__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h8be59d2a__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h8be59d2a__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h8be59d2a__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h8be59d2a__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h8be59d2a__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h8be59d2a__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h8be59d2a__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h8be59d2a__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h8be59d2a__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h8be59d2a__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h8be59d2a__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h8be59d2a__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h8be59d2a__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h8be59d2a__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                >> 0x14U))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h8be59d2a__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                           >> 0x1dU)))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x11U])))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xe0000000U == (0xe0000000U & 
                                      vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U] 
                          >> 1U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U] 
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
           & (0U != (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U] 
                                          >> 1U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U])) 
                                                           & (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__anyRound)))
                                                   ? 
                                                  (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundPosMask 
                                                   >> 1U)
                                                   : 0U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                                >> 0x14U))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U] 
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
                                                           & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U])))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
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
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
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
                                                                                (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                                                >> 0x1dU))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                        >> 0x1dU)) ? 
                                (((QData)((IData)((1U 
                                                   & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((((0U 
                                                                   == 
                                                                   (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                                    >> 0x1dU)) 
                                                                  | (6U 
                                                                     <= 
                                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                                      >> 0x1dU)))
                                                                  ? 
                                                                 ((0x1c0U 
                                                                   & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                                      >> 0x17U)) 
                                                                  | (0x3fU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                                        >> 0x14U)))
                                                                  : 
                                                                 ((IData)(0x100U) 
                                                                  + 
                                                                  (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                                   >> 0x14U))) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x12U] 
                                                                      << 3U) 
                                                                     | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x11U] 
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

VL_INLINE_OPT void Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__debug_fp__0(Vtestbench_bp_be_reg_to_fp__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_reg_to_fp__Bz1___multiclk__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fwb__BRA__9__KET____DOT__debug_fp__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__0;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__1;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__2;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__3;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__4;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__5;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__6;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__7;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__8;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__9;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__10;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__11;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__12;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__13;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__14;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__15;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__16;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__17;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__18;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__19;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__20;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__21;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__22;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__23;
    VlWide<17>/*543:0*/ __Vtemp_h64e0f67b__24;
    // Body
    vlSelf->__PVT__out_dp_rec__DOT__isSubnormal = ((IData)(
                                                           ((4U 
                                                             == 
                                                             (0xeU 
                                                              & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U])) 
                                                            & (1U 
                                                               >= 
                                                               (0x1ffU 
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                                      >> 0x18U)))))) 
                                                   | (0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                          >> 2U))));
    vlSelf->__PVT__out_dp_rec__DOT__isInf = (IData)(
                                                    (0xcU 
                                                     == 
                                                     (0xeU 
                                                      & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U])));
    vlSelf->__PVT__out_dp_rec__DOT__sig = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                                 >> 1U))))) 
                                            << 0x34U) 
                                           | (0xfffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U])) 
                                                    >> 4U))));
    vlSelf->__PVT__round__DOT__isInf = (IData)((0xcU 
                                                == 
                                                (0xeU 
                                                 & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U])));
    vlSelf->__PVT__round__DOT__isSigNaN = ((~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                               >> 0x17U)) 
                                           & (0xeU 
                                              == (0xeU 
                                                  & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U])));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp 
        = ((IData)((0x50U == (0xf0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U]))) 
           | (IData)((0x60U == (0xf0U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U]))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffff8U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((4U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                      & __Vtemp_h64e0f67b__0[4U]) << 2U)) 
              | ((2U & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                        & __Vtemp_h64e0f67b__1[4U])) 
                 | (1U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                           & __Vtemp_h64e0f67b__2[4U]) 
                          >> 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ffffc7U & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                         & __Vtemp_h64e0f67b__3[3U]) 
                        >> 0x18U)) | ((0x10U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                 & __Vtemp_h64e0f67b__4[3U]) 
                                                >> 0x1aU)) 
                                      | (8U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h64e0f67b__5[3U]) 
                                               >> 0x1cU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fffe3fU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h64e0f67b__6[3U]) 
                         >> 0x12U)) | ((0x80U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h64e0f67b__7[3U]) 
                                                 >> 0x14U)) 
                                       | (0x40U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h64e0f67b__8[3U]) 
                                                   >> 0x16U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fff1ffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                          & __Vtemp_h64e0f67b__9[3U]) 
                         >> 0xcU)) | ((0x400U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h64e0f67b__10[3U]) 
                                                 >> 0xeU)) 
                                      | (0x200U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h64e0f67b__11[3U]) 
                                                   >> 0x10U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1ff8fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x4000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h64e0f67b__12[3U]) 
                          >> 6U)) | ((0x2000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h64e0f67b__13[3U]) 
                                                 >> 8U)) 
                                     | (0x1000U & (
                                                   (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                    & __Vtemp_h64e0f67b__14[3U]) 
                                                   >> 0xaU)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1fc7fffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x20000U & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h64e0f67b__15[3U])) 
              | ((0x10000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                               & __Vtemp_h64e0f67b__16[3U]) 
                              >> 2U)) | (0x8000U & 
                                         ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                           & __Vtemp_h64e0f67b__17[3U]) 
                                          >> 4U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1e3ffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x100000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h64e0f67b__18[3U]) 
                            << 6U)) | ((0x80000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h64e0f67b__19[3U]) 
                                         << 4U)) | 
                                       (0x40000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h64e0f67b__20[3U]) 
                                         << 2U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x11fffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | ((0x800000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h64e0f67b__21[3U]) 
                            << 0xcU)) | ((0x400000U 
                                          & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                              & __Vtemp_h64e0f67b__22[3U]) 
                                             << 0xaU)) 
                                         | (0x200000U 
                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                & __Vtemp_h64e0f67b__23[3U]) 
                                               << 8U)))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h64e0f67b__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0xfffU 
                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                      >> 0x18U))))))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0xffffffU & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__genblk1__DOT__roundMask_main) 
           | (0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                             & __Vtemp_h64e0f67b__24[3U]) 
                            << 0xeU)));
    vlSelf->__PVT__round__DOT__sigIn = (((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                              >> 1U))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x13U])) 
                                                 >> 4U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__isNaNOut 
        = ((IData)(vlSelf->__PVT__round__DOT__isSigNaN) 
           | (IData)((0xeU == (0xeU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U]))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__overflow_roundMagUp 
        = (((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                          >> 5U))) | (4U == (7U & (
                                                   vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
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
           & (0U != (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
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
        = (0x3ffffffU & (((((0U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                          >> 5U))) 
                            | (4U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
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
                                               & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U])) 
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
                                                             & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U])) 
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
                                                                & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                                      >> 0x18U))))))) 
                      + (0x3ffffffU & (vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig 
                                       >> 0x18U))));
    vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__commonCase) 
            & VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp)))) 
           & ((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__roundMagUp) 
              | (6U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
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
                                                           & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                              >> 4U))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((((((((((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp) 
                                                                             & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
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
                                                                                & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                                                >> 1U)))) 
                                                                               & VL_LTES_III(32, 0x6bU, 
                                                                                VL_EXTENDS_II(32,15, (IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__sRoundedExp))))
                                                                               ? 
                                                                              (0x3fffffU 
                                                                               & vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__genblk2__DOT__roundedSig)
                                                                               : 0U)) 
                                                                          | (- (IData)((IData)(vlSelf->__PVT__round__DOT__genblk1__DOT__roundRawInToOut__DOT__pegMaxFiniteMagOut)))))))));
    vlSelf->__PVT__dp2sp_rec = ((7U == (7U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                              >> 1U)))
                                 ? (((QData)((IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                         >> 4U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                                          >> 1U))) 
                                                                     | (6U 
                                                                        <= 
                                                                        (7U 
                                                                         & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                                            >> 1U))))
                                                                     ? 
                                                                    ((0x1c0U 
                                                                      & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                                         << 5U)) 
                                                                     | (0x3fU 
                                                                        & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                                           >> 0x18U)))
                                                                     : 
                                                                    ((IData)(0x100U) 
                                                                     + 
                                                                     (0xfffU 
                                                                      & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x15U] 
                                                                          << 8U) 
                                                                         | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
                                                                            >> 0x18U))))) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__frd_data_r[0x14U] 
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
