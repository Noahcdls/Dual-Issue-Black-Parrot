// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench___024root.h"

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__5(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__5\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h2fbbf282__0;
    VlWide<6>/*191:0*/ __Vtemp_h6a266eef__0;
    VlWide<6>/*191:0*/ __Vtemp_h1a2437ec__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__0;
    VlWide<3>/*95:0*/ __Vtemp_he7583494__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__1;
    VlWide<3>/*95:0*/ __Vtemp_h423d1808__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__2;
    VlWide<3>/*95:0*/ __Vtemp_h29c9e615__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__3;
    VlWide<3>/*95:0*/ __Vtemp_h43e6b91b__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__4;
    VlWide<3>/*95:0*/ __Vtemp_h593e7440__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__5;
    VlWide<3>/*95:0*/ __Vtemp_h79bff1da__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__6;
    VlWide<3>/*95:0*/ __Vtemp_he6ae551b__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__7;
    VlWide<3>/*95:0*/ __Vtemp_h731cea0d__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__8;
    VlWide<3>/*95:0*/ __Vtemp_he3364181__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__9;
    VlWide<3>/*95:0*/ __Vtemp_h52c1bc65__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__10;
    VlWide<3>/*95:0*/ __Vtemp_h24f19329__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__11;
    VlWide<3>/*95:0*/ __Vtemp_hc7cd7bca__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f174993__12;
    VlWide<3>/*95:0*/ __Vtemp_hca38ca05__0;
    VlWide<3>/*95:0*/ __Vtemp_h9c20ec34__0;
    VlWide<4>/*127:0*/ __Vtemp_h501ad076__0;
    VlWide<5>/*159:0*/ __Vtemp_h00611ea8__0;
    VlWide<7>/*223:0*/ __Vtemp_h2dfba4d4__0;
    VlWide<4>/*127:0*/ __Vtemp_hf08a09dc__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1465540__0;
    VlWide<4>/*127:0*/ __Vtemp_h60d41273__0;
    VlWide<4>/*127:0*/ __Vtemp_h85abdfdd__0;
    VlWide<4>/*127:0*/ __Vtemp_h64ecd35b__0;
    VlWide<4>/*127:0*/ __Vtemp_h056b0bc7__0;
    VlWide<3>/*95:0*/ __Vtemp_h833bec6d__0;
    VlWide<3>/*95:0*/ __Vtemp_h22fef48f__0;
    VlWide<3>/*95:0*/ __Vtemp_hed53fdf8__0;
    VlWide<3>/*95:0*/ __Vtemp_h833bbbbc__0;
    VlWide<6>/*191:0*/ __Vtemp_he3a5fa31__0;
    VlWide<4>/*127:0*/ __Vtemp_hc5046dc1__1;
    VlWide<4>/*127:0*/ __Vtemp_ha9945f8e__0;
    VlWide<4>/*127:0*/ __Vtemp_h765a69cd__0;
    VlWide<4>/*127:0*/ __Vtemp_h93ad291c__0;
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__roundIncr 
        = (((((0U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frm_li)) 
              & (((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                   >> 0x1fU) & ((3U == (3U & (IData)(
                                                     (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__alignedSig 
                                                      >> 1U)))) 
                                | (3U == (3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__alignedSig))))) 
                 | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__magJustBelowOne) 
                    & (0U != (3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__alignedSig)))))) 
             | ((4U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frm_li)) 
                & (((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                     >> 0x1fU) & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__alignedSig 
                                          >> 1U))) 
                   | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__magJustBelowOne)))) 
            | (((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frm_li)) 
                | (6U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frm_li))) 
               & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
                  & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_inexact)))) 
           | ((3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frm_li)) 
              & ((~ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]) 
                 & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_inexact))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant 
        = ((0U != (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_c_li[1U] 
                   >> 0x1dU)) & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign) 
                                 | (0x35U >= (0x1fffU 
                                              & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isMinCAlign)
            ? 0U : ((0xa1U > (0x1fffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist)))
                     ? (0xffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist))
                     : 0xa1U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_pkt[0U] 
        = (0x20U | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_result[0U] 
                     << 6U) | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__invalidExc) 
                                << 4U) | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__infiniteExc) 
                                           << 3U) | 
                                          (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__common_underflow)) 
                                               << 1U) 
                                              | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(32, 0x3ceU, 
                                                                  VL_EXTENDS_II(32,14, (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__sRoundedExp))) 
                                                       | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__roundRawOut__DOT__roundAnyRawFNToRecFN__DOT__genblk2__DOT__anyRound))))))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_pkt[1U] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_result[0U] 
            >> 0x1aU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_result[1U] 
                         << 6U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_pkt[2U] 
        = (0x8000U | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_result[1U] 
                       >> 0x1aU) | ((0x10000U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__wb_v_reg__DOT__data_r) 
                                                 << 0x10U)) 
                                    | ((0x7c00U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__wb_reg__DOT__data_r) 
                                                   << 2U)) 
                                       | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_result[2U] 
                                          << 6U)))));
    VL_EXTEND_WI(65,1, __Vtemp_h2fbbf282__0, (((IData)(
                                                       ((0xa00000U 
                                                         == 
                                                         (0x3f00000U 
                                                          & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) 
                                                        & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__feq_lo))) 
                                               | (IData)(
                                                         ((0xb00000U 
                                                           == 
                                                           (0x3f00000U 
                                                            & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) 
                                                          & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__flt_lo)))) 
                                              | (IData)(
                                                        ((0xc00000U 
                                                          == 
                                                          (0x3f00000U 
                                                           & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) 
                                                         & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__flt_lo) 
                                                            | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__feq_lo))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp_result[0U] 
        = __Vtemp_h2fbbf282__0[0U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp_result[1U] 
        = __Vtemp_h2fbbf282__0[1U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp_result[2U] 
        = ((((0x4000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])
              ? (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frm_li)
              : 7U) << 1U) | __Vtemp_h2fbbf282__0[2U]);
    if (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_is_nan) 
         & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_is_nan))) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[0U] = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[1U] = 0xe0080000U;
    } else if (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_is_nan) 
                & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_is_nan)))) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U];
    } else if (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_is_nan)) 
                & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_is_nan))) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U];
    } else if (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__feq_lo) {
        if ((1U & ((0xeU == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U] 
                                      >> 0x14U))) ^ 
                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]))) {
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[0U] 
                = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[0U];
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[1U] 
                = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U];
        } else {
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[0U] 
                = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[0U];
            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[1U] 
                = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U];
        }
    } else if (((0xdU == (0x3fU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U] 
                                   >> 0x14U))) ^ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__flt_lo))) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U];
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[1U];
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fminmax_result[2U] 
        = ((((0x4000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])
              ? (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frm_li)
              : 7U) << 1U) | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_is_nan) 
                               & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_is_nan))
                               ? 0U : (1U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_is_nan) 
                                              & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_is_nan)))
                                              ? vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U]
                                              : (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_is_nan)) 
                                                  & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_is_nan))
                                                  ? 
                                                 vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]
                                                  : 
                                                 ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__feq_lo)
                                                   ? 
                                                  ((1U 
                                                    & ((0xeU 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U] 
                                                            >> 0x14U))) 
                                                       ^ 
                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]))
                                                    ? 
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U]
                                                    : 
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U])
                                                   : 
                                                  (((0xdU 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U] 
                                                         >> 0x14U))) 
                                                    ^ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__flt_lo))
                                                    ? 
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]
                                                    : 
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_unbox__DOT__reg_cast_o[2U])))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__roundCarryBut2 
        = ((0x3fffffffffffffffULL == (0x3fffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__alignedSig[1U])) 
                                          << 0x1eU) 
                                         | ((QData)((IData)(
                                                            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__alignedSig[0U])) 
                                            >> 2U)))) 
           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__roundIncr));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__roundCarryBut2 
        = (IData)(((0xfffffffcULL == (0xfffffffcULL 
                                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__alignedSig)) 
                   & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__roundIncr)));
    __Vtemp_h6a266eef__0[0U] = (- (IData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __Vtemp_h6a266eef__0[1U] = (- (IData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __Vtemp_h6a266eef__0[2U] = (- (IData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)));
    __Vtemp_h6a266eef__0[3U] = (((IData)((0x3fffffffffffffULL 
                                          & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                              ? (~ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                              : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))) 
                                 << 0xfU) | (0x7fffU 
                                             & (- (IData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))));
    __Vtemp_h6a266eef__0[4U] = (((IData)((0x3fffffffffffffULL 
                                          & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                              ? (~ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                              : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC))) 
                                 >> 0x11U) | ((IData)(
                                                      ((0x3fffffffffffffULL 
                                                        & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                                            ? 
                                                           (~ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                                            : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)) 
                                                       >> 0x20U)) 
                                              << 0xfU));
    __Vtemp_h6a266eef__0[5U] = ((IData)(((0x3fffffffffffffULL 
                                          & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
                                              ? (~ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)
                                              : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sigC)) 
                                         >> 0x20U)) 
                                >> 0x11U);
    VL_SHIFTRS_WWI(165,165,8, __Vtemp_h1a2437ec__0, __Vtemp_h6a266eef__0, (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_h1a2437ec__0[0U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_h1a2437ec__0[1U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = __Vtemp_h1a2437ec__0[2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
        = __Vtemp_h1a2437ec__0[3U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
        = __Vtemp_h1a2437ec__0[4U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
        = (0xfU & __Vtemp_h1a2437ec__0[5U]);
    __Vtemp_h5f174993__0[0U] = 0U;
    __Vtemp_h5f174993__0[1U] = 0U;
    __Vtemp_h5f174993__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he7583494__0, __Vtemp_h5f174993__0, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    __Vtemp_h5f174993__1[0U] = 0U;
    __Vtemp_h5f174993__1[1U] = 0U;
    __Vtemp_h5f174993__1[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h423d1808__0, __Vtemp_h5f174993__1, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    __Vtemp_h5f174993__2[0U] = 0U;
    __Vtemp_h5f174993__2[1U] = 0U;
    __Vtemp_h5f174993__2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h29c9e615__0, __Vtemp_h5f174993__2, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1ff8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | ((4U & __Vtemp_he7583494__0[1U]) | ((2U 
                                                  & (__Vtemp_h423d1808__0[1U] 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (__Vtemp_h29c9e615__0[1U] 
                                                       >> 4U)))));
    __Vtemp_h5f174993__3[0U] = 0U;
    __Vtemp_h5f174993__3[1U] = 0U;
    __Vtemp_h5f174993__3[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h43e6b91b__0, __Vtemp_h5f174993__3, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    __Vtemp_h5f174993__4[0U] = 0U;
    __Vtemp_h5f174993__4[1U] = 0U;
    __Vtemp_h5f174993__4[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h593e7440__0, __Vtemp_h5f174993__4, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    __Vtemp_h5f174993__5[0U] = 0U;
    __Vtemp_h5f174993__5[1U] = 0U;
    __Vtemp_h5f174993__5[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h79bff1da__0, __Vtemp_h5f174993__5, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1fc7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | ((0x20U & (__Vtemp_h43e6b91b__0[0U] >> 0x1aU)) 
              | ((0x10U & (__Vtemp_h593e7440__0[1U] 
                           << 4U)) | (8U & (__Vtemp_h79bff1da__0[1U] 
                                            << 2U)))));
    __Vtemp_h5f174993__6[0U] = 0U;
    __Vtemp_h5f174993__6[1U] = 0U;
    __Vtemp_h5f174993__6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he6ae551b__0, __Vtemp_h5f174993__6, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    __Vtemp_h5f174993__7[0U] = 0U;
    __Vtemp_h5f174993__7[1U] = 0U;
    __Vtemp_h5f174993__7[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h731cea0d__0, __Vtemp_h5f174993__7, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    __Vtemp_h5f174993__8[0U] = 0U;
    __Vtemp_h5f174993__8[1U] = 0U;
    __Vtemp_h5f174993__8[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he3364181__0, __Vtemp_h5f174993__8, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x1e3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | ((0x100U & (__Vtemp_he6ae551b__0[0U] >> 0x14U)) 
              | ((0x80U & (__Vtemp_h731cea0d__0[0U] 
                           >> 0x16U)) | (0x40U & (__Vtemp_he3364181__0[0U] 
                                                  >> 0x18U)))));
    __Vtemp_h5f174993__9[0U] = 0U;
    __Vtemp_h5f174993__9[1U] = 0U;
    __Vtemp_h5f174993__9[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h52c1bc65__0, __Vtemp_h5f174993__9, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    __Vtemp_h5f174993__10[0U] = 0U;
    __Vtemp_h5f174993__10[1U] = 0U;
    __Vtemp_h5f174993__10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h24f19329__0, __Vtemp_h5f174993__10, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    __Vtemp_h5f174993__11[0U] = 0U;
    __Vtemp_h5f174993__11[1U] = 0U;
    __Vtemp_h5f174993__11[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc7cd7bca__0, __Vtemp_h5f174993__11, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0x11ffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | ((0x800U & (__Vtemp_h52c1bc65__0[0U] >> 0xeU)) 
              | ((0x400U & (__Vtemp_h24f19329__0[0U] 
                            >> 0x10U)) | (0x200U & 
                                          (__Vtemp_hc7cd7bca__0[0U] 
                                           >> 0x12U)))));
    __Vtemp_h5f174993__12[0U] = 0U;
    __Vtemp_h5f174993__12[1U] = 0U;
    __Vtemp_h5f174993__12[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hca38ca05__0, __Vtemp_h5f174993__12, 
                   (0x3fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist) 
                             >> 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask 
        = ((0xfffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)) 
           | (0x1000U & (__Vtemp_hca38ca05__0[0U] >> 0xcU)));
    if ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
         >> 0x1fU)) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__common_overflow 
            = (1U & ((0x40U <= (0x7ffU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                          >> 0x14U))) 
                     | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__signed_f2i)
                         ? ((1U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U])
                             ? (IData)(((0x3f00000U 
                                         == (0x7ff00000U 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])) 
                                        & ((0U != (0x7fffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__alignedSig[2U])) 
                                                       << 0x3eU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__alignedSig[1U])) 
                                                          << 0x1eU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__alignedSig[0U])) 
                                                            >> 2U))))) 
                                           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__roundIncr))))
                             : ((0x3fU == (0x7ffU & 
                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                            >> 0x14U))) 
                                | (IData)(((0x3e00000U 
                                            == (0x7ff00000U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])) 
                                           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__roundCarryBut2)))))
                         : (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
                            | ((IData)(((0x3f00000U 
                                         == (0x7ff00000U 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])) 
                                        & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__alignedSig[2U])) 
                               & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__roundCarryBut2))))));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_overflow 
            = (1U & ((0x20U <= (0x7ffU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                          >> 0x14U))) 
                     | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__signed_f2i)
                         ? ((1U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U])
                             ? (IData)(((0x1f00000U 
                                         == (0x7ff00000U 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])) 
                                        & ((0ULL != 
                                            (0x1fffffffcULL 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__alignedSig)) 
                                           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__roundIncr))))
                             : ((0x1fU == (0x7ffU & 
                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                            >> 0x14U))) 
                                | (IData)(((0x1e00000U 
                                            == (0x7ff00000U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])) 
                                           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__roundCarryBut2)))))
                         : (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U] 
                            | ((IData)(((0x1f00000U 
                                         == (0x7ff00000U 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[1U])) 
                                        & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__alignedSig 
                                           >> 0x20U))) 
                               & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__roundCarryBut2))))));
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__common_overflow 
            = (1U & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__signed_f2i)) 
                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]) 
                     & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__roundIncr)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_overflow 
            = (1U & (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__signed_f2i)) 
                      & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]) 
                     & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__roundIncr)));
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra 
        = (0U != ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4SigC) 
                  & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CExtraMask)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w_out 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__invalidExc) 
            | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_overflow))
            ? ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__signed_f2i) 
                 ^ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__iNFromException__DOT__maxInt)) 
                << 0x1fU) | (0x7fffffffU & (- (IData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__iNFromException__DOT__maxInt)))))
            : (((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__roundIncr) 
                       ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]))
                 ? ((IData)(1U) + vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__complUnroundedInt)
                 : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__complUnroundedInt) 
               | ((6U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frm_li)) 
                  & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_inexact))));
    if ((0x8000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__aux_reservation[7U])) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2i_fflags 
            = ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__invalidExc) 
                 | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_overflow)) 
                << 4U) | (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__invalidExc)) 
                           & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_overflow))) 
                          & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_inexact)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2i_result 
            = (((QData)((IData)((- (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w_out 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w_out)));
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2i_fflags 
            = ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__invalidExc) 
                 | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__common_overflow)) 
                << 4U) | (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__invalidExc)) 
                           & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__common_overflow))) 
                          & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__common_inexact)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2i_result 
            = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__invalidExc) 
                | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__common_overflow))
                ? (((QData)((IData)(((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__signed_f2i) 
                                     ^ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__iNFromException__DOT__maxInt)))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (- (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__iNFromException__DOT__maxInt)))))
                : (((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__roundIncr) 
                           ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_unbox__DOT__reg_cast_o[2U]))
                     ? (1ULL + vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__complUnroundedInt)
                     : vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__complUnroundedInt) 
                   | (QData)((IData)(((6U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frm_li)) 
                                      & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__common_inexact))))));
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U] 
        = (((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
             << 0x1eU) | (0x3ffffffeU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                         >> 2U))) | 
           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)
             ? ((7U == (7U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra)))
             : ((0U != (7U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
        = ((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                  >> 2U)) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                              << 0x1eU) | (0x3ffffffeU 
                                           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                              >> 2U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
        = ((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                  >> 2U)) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
                              << 0x1eU) | (0x3ffffffeU 
                                           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                              >> 2U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U] 
        = ((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
                  >> 2U)) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
                              << 0x1eU) | (0x3ffffffeU 
                                           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[3U] 
                                              >> 2U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[4U] 
        = ((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
                  >> 2U)) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
                              << 0x1eU) | (0x3ffffffeU 
                                           & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[4U] 
                                              >> 2U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[5U] 
        = ((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
                  >> 2U)) | (2U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__mainAlignedSigC[5U] 
                                   >> 2U)));
    __Vtemp_h9c20ec34__0[2U] = ((0xffffe000U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase) 
                                                 << 0x12U) 
                                                | (((((((IData)(
                                                                (0xe0000000U 
                                                                 == 
                                                                 (0xe0080000U 
                                                                  & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U]))) 
                                                        | (IData)(
                                                                  (0xe0000000U 
                                                                   == 
                                                                   (0xe0080000U 
                                                                    & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U])))) 
                                                       | (IData)(
                                                                 (0xe0000000U 
                                                                  == 
                                                                  (0xe0080000U 
                                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_c_li[1U])))) 
                                                      | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfA) 
                                                           & (0U 
                                                              == 
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U] 
                                                               >> 0x1dU))) 
                                                          | ((0U 
                                                              == 
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U] 
                                                               >> 0x1dU)) 
                                                             & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfB))) 
                                                         | ((((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB)) 
                                                              & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB)) 
                                                             & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                                            & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags)))) 
                                                     | ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                        & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd))) 
                                                    << 0x11U) 
                                                   | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isNaNAny) 
                                                        | ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__doSubMags))) 
                                                       << 0x10U) 
                                                      | (((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                            | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC)) 
                                                           | ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                              & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant))) 
                                                          << 0xfU) 
                                                         | ((0x4000U 
                                                             & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                                 | ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__specialCase)) 
                                                                    & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U])) 
                                                                << 0xeU)) 
                                                            | ((((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfAOrB) 
                                                                   & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                                  | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__isInfC) 
                                                                     & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                                 | ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                                      & (2U 
                                                                         != (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__frm_li))) 
                                                                     & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd)) 
                                                                    & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC))) 
                                                                | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros) 
                                                                    & (2U 
                                                                       == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__frm_li))) 
                                                                   & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__signProd) 
                                                                      | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__opSignC)))) 
                                                               << 0xdU))))))) 
                                | (0x1fffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CIsDominant)
                                               ? VL_EXTENDS_II(32,13, 
                                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_c_li[1U] 
                                                                >> 0x14U))
                                               : (VL_EXTENDS_II(32,14, (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd)) 
                                                  - (IData)(0x35U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[0U] 
        = (IData)((((QData)((IData)((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist)))) 
                    << 0x3aU) | ((0x3fffffffffffff8ULL 
                                  & (((QData)((IData)(
                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[5U])) 
                                      << 0x38U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[4U])) 
                                                    << 0x18U) 
                                                   | (0xfffffffffffff8ULL 
                                                      & ((QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U])) 
                                                         >> 8U))))) 
                                 | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__frm_li)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
        = (IData)(((((QData)((IData)((0x3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__CAlignDist)))) 
                     << 0x3aU) | ((0x3fffffffffffff8ULL 
                                   & (((QData)((IData)(
                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[5U])) 
                                       << 0x38U) | 
                                      (((QData)((IData)(
                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[4U])) 
                                        << 0x18U) | 
                                       (0xfffffffffffff8ULL 
                                        & ((QData)((IData)(
                                                           vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U])) 
                                           >> 8U))))) 
                                  | (QData)((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__frm_li)))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[2U] 
        = __Vtemp_h9c20ec34__0[2U];
    if ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_op_li))) {
        __Vtemp_h501ad076__0[2U] = (((IData)((QData)((IData)(
                                                             (0x7ffU 
                                                              & (((0x7ffU 
                                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U]) 
                                                                  * 
                                                                  (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U] 
                                                                   >> 0x15U)) 
                                                                 + 
                                                                 ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U] 
                                                                   >> 0x15U) 
                                                                  * 
                                                                  (0x7ffU 
                                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[0U]))))))) 
                                     >> 0xbU) | ((IData)(
                                                         ((QData)((IData)(
                                                                          (0x7ffU 
                                                                           & (((0x7ffU 
                                                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U]) 
                                                                               * 
                                                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U] 
                                                                                >> 0x15U)) 
                                                                              + 
                                                                              ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U] 
                                                                                >> 0x15U) 
                                                                               * 
                                                                               (0x7ffU 
                                                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[0U])))))) 
                                                          >> 0x20U)) 
                                                 << 0x15U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[0U] = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[1U] 
            = ((IData)((QData)((IData)((0x7ffU & ((
                                                   (0x7ffU 
                                                    & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U]) 
                                                   * 
                                                   (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U] 
                                                    >> 0x15U)) 
                                                  + 
                                                  ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U] 
                                                    >> 0x15U) 
                                                   * 
                                                   (0x7ffU 
                                                    & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[0U]))))))) 
               << 0x15U);
    } else {
        __Vtemp_h501ad076__0[2U] = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U] 
                                     << 0x1fU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                                                  >> 1U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[0U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                << 0x1fU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[0U] 
                             >> 1U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[1U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[2U] 
                << 0x1fU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[1U] 
                             >> 1U));
    }
    __Vtemp_h00611ea8__0[3U] = (((IData)((0x1fffffffffffffULL 
                                          & ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_op_li))
                                              ? (0x1fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[0U]))))
                                              : (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U] 
                                                                    >> 0x1dU)))) 
                                                  << 0x34U) 
                                                 | (0xfffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[0U])))))))) 
                                 << 0xaU) | (0x3ffU 
                                             & ((4U 
                                                 & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_op_li))
                                                 ? 
                                                ((IData)(
                                                         ((QData)((IData)(
                                                                          (0x7ffU 
                                                                           & (((0x7ffU 
                                                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U]) 
                                                                               * 
                                                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U] 
                                                                                >> 0x15U)) 
                                                                              + 
                                                                              ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U] 
                                                                                >> 0x15U) 
                                                                               * 
                                                                               (0x7ffU 
                                                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[0U])))))) 
                                                          >> 0x20U)) 
                                                 >> 0xbU)
                                                 : 
                                                ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[4U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_preMul__DOT__alignedSigC[3U] 
                                                    >> 1U)))));
    __Vtemp_h00611ea8__0[4U] = (((IData)((0x1fffffffffffffULL 
                                          & ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_op_li))
                                              ? (0x1fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[0U]))))
                                              : (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U] 
                                                                    >> 0x1dU)))) 
                                                  << 0x34U) 
                                                 | (0xfffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[0U])))))))) 
                                 >> 0x16U) | ((IData)(
                                                      ((0x1fffffffffffffULL 
                                                        & ((4U 
                                                            & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_op_li))
                                                            ? 
                                                           (0x1fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[0U]))))
                                                            : 
                                                           (((QData)((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U] 
                                                                               >> 0x1dU)))) 
                                                             << 0x34U) 
                                                            | (0xfffffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li[0U]))))))) 
                                                       >> 0x20U)) 
                                              << 0xaU));
    __Vtemp_h2dfba4d4__0[5U] = (((IData)((0x1fffffffffffffULL 
                                          & ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_op_li))
                                              ? (0x1fffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U]))))
                                              : (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U] 
                                                                    >> 0x1dU)))) 
                                                  << 0x34U) 
                                                 | (0xfffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U])))))))) 
                                 >> 1U) | ((IData)(
                                                   ((0x1fffffffffffffULL 
                                                     & ((4U 
                                                         & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_op_li))
                                                         ? 
                                                        (0x1fffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U]))))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U] 
                                                                            >> 0x1dU)))) 
                                                          << 0x34U) 
                                                         | (0xfffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U]))))))) 
                                                    >> 0x20U)) 
                                           << 0x1fU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[2U] 
        = __Vtemp_h501ad076__0[2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[3U] 
        = __Vtemp_h00611ea8__0[3U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[4U] 
        = (((IData)((0x1fffffffffffffULL & ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_op_li))
                                             ? (0x1fffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U]))))
                                             : (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U] 
                                                                   >> 0x1dU)))) 
                                                 << 0x34U) 
                                                | (0xfffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U])))))))) 
            << 0x1fU) | __Vtemp_h00611ea8__0[4U]);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[5U] 
        = __Vtemp_h2dfba4d4__0[5U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[6U] 
        = ((IData)(((0x1fffffffffffffULL & ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_op_li))
                                             ? (0x1fffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U]))))
                                             : (((QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U] 
                                                                   >> 0x1dU)))) 
                                                 << 0x34U) 
                                                | (0xfffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li[0U]))))))) 
                    >> 0x20U)) >> 1U);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1ff8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | ((4U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                    (0xfU & (~ ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                 << 4U) 
                                                | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                   >> 0x1cU))))) 
                     >> 9U)) | ((2U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                      (0xfU 
                                                       & (~ 
                                                          ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                            << 4U) 
                                                           | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                              >> 0x1cU))))) 
                                       >> 0xbU)) | 
                                (1U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                      (0xfU 
                                                       & (~ 
                                                          ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                            << 4U) 
                                                           | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                              >> 0x1cU))))) 
                                       >> 0xdU)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1fc7U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                       (0xfU & (~ (
                                                   (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                    << 4U) 
                                                   | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                      >> 0x1cU))))) 
                        >> 3U)) | ((0x10U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                            (0xfU 
                                                             & (~ 
                                                                ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                  << 4U) 
                                                                 | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                    >> 0x1cU))))) 
                                             >> 5U)) 
                                   | (8U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                           (0xfU 
                                                            & (~ 
                                                               ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                 << 4U) 
                                                                | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                   >> 0x1cU))))) 
                                            >> 7U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x1e3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | ((0x100U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                        (0xfU & (~ 
                                                 ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                   << 4U) 
                                                  | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                     >> 0x1cU))))) 
                         << 3U)) | ((0x80U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                             (0xfU 
                                                              & (~ 
                                                                 ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                   << 4U) 
                                                                  | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                     >> 0x1cU))))) 
                                              << 1U)) 
                                    | (0x40U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                               (0xfU 
                                                                & (~ 
                                                                   ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                     << 4U) 
                                                                    | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                       >> 0x1cU))))) 
                                                >> 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0x11ffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | ((0x800U & (VL_SHIFTRS_III(32,17,4, 0x10000U, 
                                        (0xfU & (~ 
                                                 ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                   << 4U) 
                                                  | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                     >> 0x1cU))))) 
                         << 9U)) | ((0x400U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                              (0xfU 
                                                               & (~ 
                                                                  ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                    << 4U) 
                                                                   | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                      >> 0x1cU))))) 
                                               << 7U)) 
                                    | (0x200U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                                                (0xfU 
                                                                 & (~ 
                                                                    ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                      << 4U) 
                                                                     | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                                        >> 0x1cU))))) 
                                                 << 5U)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask 
        = ((0xfffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_sigExtraMask)) 
           | (0x1000U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                        (0xfU & (~ 
                                                 ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                   << 4U) 
                                                  | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                                     >> 0x1cU))))) 
                         << 0xbU)));
    VL_EXTEND_WQ(107,53, __Vtemp_hf08a09dc__0, (0x1fffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[6U])) 
                                                    << 0x21U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[5U])) 
                                                       << 1U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[4U])) 
                                                         >> 0x1fU)))));
    VL_EXTEND_WQ(107,53, __Vtemp_hf1465540__0, (0x1fffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[4U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[3U])) 
                                                      >> 0xaU))));
    VL_MUL_W(4, __Vtemp_h60d41273__0, __Vtemp_hf08a09dc__0, __Vtemp_hf1465540__0);
    __Vtemp_h85abdfdd__0[0U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[0U];
    __Vtemp_h85abdfdd__0[1U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[1U];
    __Vtemp_h85abdfdd__0[2U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[2U];
    __Vtemp_h85abdfdd__0[3U] = (0x3ffU & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT____Vcellinp__pre_mul_add__data_i[3U]);
    VL_EXTEND_WW(107,106, __Vtemp_h64ecd35b__0, __Vtemp_h85abdfdd__0);
    VL_ADD_W(4, __Vtemp_h056b0bc7__0, __Vtemp_h60d41273__0, __Vtemp_h64ecd35b__0);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[0U] 
        = __Vtemp_h056b0bc7__0[0U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[1U] 
        = __Vtemp_h056b0bc7__0[1U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[2U] 
        = __Vtemp_h056b0bc7__0[2U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[3U] 
        = (0x7ffU & __Vtemp_h056b0bc7__0[3U]);
    VL_EXTENDS_WQ(68,64, __Vtemp_h833bec6d__0, (((QData)((IData)(
                                                                 vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[0U]))));
    __Vtemp_h22fef48f__0[0U] = __Vtemp_h833bec6d__0[0U];
    __Vtemp_h22fef48f__0[1U] = __Vtemp_h833bec6d__0[1U];
    __Vtemp_h22fef48f__0[2U] = (0xfU & __Vtemp_h833bec6d__0[2U]);
    VL_SHIFTRS_WWI(68,68,32, __Vtemp_hed53fdf8__0, __Vtemp_h22fef48f__0, 0x20U);
    VL_EXTEND_WQ(68,64, __Vtemp_h833bbbbc__0, (((QData)((IData)(
                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[0U]))));
    if ((0x8000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__fma_reservation[7U])) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__data_delayed[0U] 
            = __Vtemp_hed53fdf8__0[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__data_delayed[1U] 
            = __Vtemp_hed53fdf8__0[1U];
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__data_delayed[0U] 
            = __Vtemp_h833bbbbc__0[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__data_delayed[1U] 
            = __Vtemp_h833bbbbc__0[1U];
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__data_delayed[2U] 
        = ((0xfffffff0U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__data_delayed[2U]) 
           | (0xfU & ((0x8000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__fma_reservation[7U])
                       ? __Vtemp_hed53fdf8__0[2U] : 
                      __Vtemp_h833bbbbc__0[2U])));
    __Vtemp_he3a5fa31__0[4U] = (((IData)((0x7fffffffffffffULL 
                                          & ((0x400U 
                                              & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[3U])
                                              ? (1ULL 
                                                 + 
                                                 (((QData)((IData)(
                                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                      << 0x1dU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[0U])) 
                                                        >> 3U))))
                                              : (((QData)((IData)(
                                                                  vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                     << 0x1dU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[0U])) 
                                                       >> 3U)))))) 
                                 >> 0x15U) | ((IData)(
                                                      ((0x7fffffffffffffULL 
                                                        & ((0x400U 
                                                            & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[3U])
                                                            ? 
                                                           (1ULL 
                                                            + 
                                                            (((QData)((IData)(
                                                                              vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                              << 0x3dU) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                                 << 0x1dU) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[0U])) 
                                                                   >> 3U))))
                                                            : 
                                                           (((QData)((IData)(
                                                                             vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                             << 0x3dU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                                << 0x1dU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[0U])) 
                                                                  >> 3U))))) 
                                                       >> 0x20U)) 
                                              << 0xbU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[0U] 
            << 1U) | (1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[2U] 
                            >> 0xeU)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[0U] 
            >> 0x1fU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[1U] 
                         << 1U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[1U] 
            >> 0x1fU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[2U] 
                         << 1U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
        = (((IData)((0x7fffffffffffffULL & ((0x400U 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[3U])
                                             ? (1ULL 
                                                + (
                                                   ((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                       << 0x1dU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[0U])) 
                                                         >> 3U))))
                                             : (((QData)((IData)(
                                                                 vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[0U])) 
                                                      >> 3U)))))) 
            << 0xbU) | ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[2U] 
                         >> 0x1fU) | (0x7feU & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[3U] 
                                                << 1U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
        = __Vtemp_he3a5fa31__0[4U];
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[5U] 
        = ((IData)(((0x7fffffffffffffULL & ((0x400U 
                                             & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAdd__DOT__o_r[3U])
                                             ? (1ULL 
                                                + (
                                                   ((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                       << 0x1dU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[0U])) 
                                                         >> 3U))))
                                             : (((QData)((IData)(
                                                                 vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[0U])) 
                                                      >> 3U))))) 
                    >> 0x20U)) >> 0x15U);
    if ((0x10000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[2U])) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U] 
            = (~ ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                   << 0xaU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                               >> 0x16U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U] 
            = (~ ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                   << 0xaU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                               >> 0x16U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[2U] 
            = (~ ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                   << 0xaU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                               >> 0x16U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[3U] 
            = (0xfffU & (~ ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[5U] 
                             << 0xaU) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                                         >> 0x16U))));
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                << 9U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U] 
                          >> 0x17U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                << 9U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U] 
                          >> 0x17U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[2U] 
            = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                << 9U) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U] 
                          >> 0x17U));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[3U] 
            = (0xfffU & ((0x600U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                                    >> 0xfU)) | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[4U] 
                                                 >> 0x17U)));
    }
    __Vtemp_hc5046dc1__1[0U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U];
    __Vtemp_hc5046dc1__1[1U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U];
    __Vtemp_hc5046dc1__1[2U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U];
    __Vtemp_hc5046dc1__1[3U] = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U];
    VL_EXTEND_WI(109,1, __Vtemp_ha9945f8e__0, (1U & 
                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[2U] 
                                                >> 0x10U)));
    VL_ADD_W(4, __Vtemp_h765a69cd__0, __Vtemp_hc5046dc1__1, __Vtemp_ha9945f8e__0);
    if ((0x2000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U])) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
            = (~ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[0U]);
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
            = (~ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[1U]);
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
            = (~ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[2U]);
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
            = (0x1fffU & (~ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__sigSum[3U]));
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
            = __Vtemp_h765a69cd__0[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
            = __Vtemp_h765a69cd__0[1U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
            = __Vtemp_h765a69cd__0[2U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
            = (0x1fffU & __Vtemp_h765a69cd__0[3U]);
    }
    VL_SHIFTL_WWI(108,108,6, __Vtemp_h93ad291c__0, vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum, 
                  (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT____Vcellinp__shuntMulAdd__data_i[1U] 
                   >> 0x1aU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_mainSig 
        = (0x3ffffffffffffffULL & (((QData)((IData)(
                                                    (0xfffU 
                                                     & __Vtemp_h93ad291c__0[3U]))) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  __Vtemp_h93ad291c__0[2U])) 
                                                  << 0xeU) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp_h93ad291c__0[1U])) 
                                                    >> 0x12U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3ffcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | (((IData)((0U != (0xfU & (IData)((0x7ffffffffffffULL 
                                               & ((0xfffffffc0000000ULL 
                                                   & ((QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                      << 0x1eU)) 
                                                  | (0xfffffffffffffffULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                        >> 2U)))))))) 
               << 1U) | (0U != (0xfU & (IData)((0x7ffffffffffffcULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                    << 0x22U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                      << 2U))))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3ff3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((((IData)((0U != (0xfU & (IData)((0x7ffffffffffULL 
                                                & ((0xfffffffc00000ULL 
                                                    & ((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                       << 0x16U)) 
                                                   | (0xfffffffffffffULL 
                                                      & ((QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                         >> 0xaU)))))))) 
                << 1U) | (0U != (0xfU & (IData)((0x7fffffffffffULL 
                                                 & ((0xfffffffc000000ULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                        << 0x1aU)) 
                                                    | (0xffffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                          >> 6U)))))))) 
              << 2U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3fcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((((IData)((0U != (0xfU & (IData)((0x7ffffffffULL 
                                                & ((0xfffffffc000ULL 
                                                    & ((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                       << 0xeU)) 
                                                   | (0xfffffffffffULL 
                                                      & ((QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                         >> 0x12U)))))))) 
                << 1U) | (0U != (0xfU & (IData)((0x7fffffffffULL 
                                                 & ((0xfffffffc0000ULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                        << 0x12U)) 
                                                    | (0xffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                          >> 0xeU)))))))) 
              << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3f3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((((IData)((0U != (0xfU & (IData)((0x7ffffffULL 
                                                & ((0xfffffffc0ULL 
                                                    & ((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                       << 6U)) 
                                                   | (0xfffffffffULL 
                                                      & ((QData)((IData)(
                                                                         vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                         >> 0x1aU)))))))) 
                << 1U) | (0U != (0xfU & (IData)((0x7fffffffULL 
                                                 & ((0xfffffffc00ULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                        << 0xaU)) 
                                                    | (0xffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                          >> 0x16U)))))))) 
              << 6U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x3cffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((((IData)((0U != (0xfU & (IData)((0x7ffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                    >> 2U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                      >> 0x22U))))))) 
                << 1U) | (0U != (0xfU & (IData)((0x7fffffULL 
                                                 & ((0xfffffffcULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                        << 2U)) 
                                                    | (0xffffffffULL 
                                                       & ((QData)((IData)(
                                                                          vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                          >> 0x1eU)))))))) 
              << 8U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0x33ffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((((IData)((0U != (0xfU & (IData)((0x7ffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                    >> 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                      >> 0x2aU))))))) 
                << 1U) | (0U != (0xfU & (IData)((0x7fffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     >> 6U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0x26U))))))) 
              << 0xaU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig 
        = ((0xfffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig)) 
           | ((((IData)((0U != (7U & (IData)((7ULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                  >> 0x12U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                    >> 0x32U))))))) 
                << 1U) | (0U != (0xfU & (IData)((0x7fULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[1U])) 
                                                     >> 0xeU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum[0U])) 
                                                       >> 0x2eU))))))) 
              << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffffffffffffcULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | (IData)((IData)((((IData)((0U != (3U & 
                                               (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                >> 2U)))) 
                               << 1U) | (0U != (3U 
                                                & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U]))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffffffffffff3ULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                   >> 6U)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                    >> 4U)))))) 
              << 2U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fffffffffffcfULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                   >> 0xaU)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                    >> 8U)))))) 
              << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fffffffffff3fULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                   >> 0xeU)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                    >> 0xcU)))))) 
              << 6U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffffffffffcffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                   >> 0x12U)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                    >> 0x10U)))))) 
              << 8U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffffffffff3ffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                   >> 0x16U)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                    >> 0x14U)))))) 
              << 0xaU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fffffffffcfffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                   >> 0x1aU)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                    >> 0x18U)))))) 
              << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fffffffff3fffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                >> 0x1eU))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                    >> 0x1cU)))))) 
              << 0xeU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffffffffcffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                   >> 2U)))) 
                                << 1U) | (0U != (3U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U]))))) 
              << 0x10U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffffffff3ffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                   >> 6U)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                    >> 4U)))))) 
              << 0x12U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fffffffcfffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                   >> 0xaU)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                    >> 8U)))))) 
              << 0x14U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fffffff3fffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                   >> 0xeU)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                    >> 0xcU)))))) 
              << 0x16U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffffffcffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                   >> 0x12U)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                    >> 0x10U)))))) 
              << 0x18U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffffff3ffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                   >> 0x16U)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                    >> 0x14U)))))) 
              << 0x1aU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fffffcfffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                   >> 0x1aU)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                    >> 0x18U)))))) 
              << 0x1cU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fffff3fffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                >> 0x1eU))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                    >> 0x1cU)))))) 
              << 0x1eU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffffcffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                   >> 2U)))) 
                                << 1U) | (0U != (3U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U]))))) 
              << 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffff3ffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                   >> 6U)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                    >> 4U)))))) 
              << 0x22U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fffcfffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                   >> 0xaU)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                    >> 8U)))))) 
              << 0x24U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fff3fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                   >> 0xeU)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                    >> 0xcU)))))) 
              << 0x26U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ffcffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                   >> 0x12U)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                    >> 0x10U)))))) 
              << 0x28U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7ff3ffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                   >> 0x16U)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                    >> 0x14U)))))) 
              << 0x2aU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7fcfffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                   >> 0x1aU)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                    >> 0x18U)))))) 
              << 0x2cU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7f3fffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                >> 0x1eU))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                    >> 0x1cU)))))) 
              << 0x2eU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x7cffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                   >> 2U)))) 
                                << 1U) | (0U != (3U 
                                                 & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U]))))) 
              << 0x30U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x73ffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                   >> 6U)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                    >> 4U)))))) 
              << 0x32U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x4fffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((((IData)((0U != (3U 
                                                & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                   >> 0xaU)))) 
                                << 1U) | (0U != (3U 
                                                 & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                    >> 8U)))))) 
              << 0x34U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
        = ((0x3fffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
           | ((QData)((IData)((1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                     >> 0xcU)))) << 0x36U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3ffcU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (((IData)((0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                             >> 2U))))) 
               << 1U) | (0U != (3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3ff3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((((IData)((0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                              >> 6U))))) 
                << 1U) | (0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 4U))))) 
              << 2U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3fcfU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((((IData)((0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                              >> 0xaU))))) 
                << 1U) | (0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 8U))))) 
              << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3f3fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((((IData)((0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                              >> 0xeU))))) 
                << 1U) | (0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0xcU))))) 
              << 6U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x3cffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((((IData)((0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                              >> 0x12U))))) 
                << 1U) | (0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x10U))))) 
              << 8U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0x33ffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | ((((IData)((0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                              >> 0x16U))))) 
                << 1U) | (0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x14U))))) 
              << 0xaU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum 
        = ((0xfffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum)) 
           | (((2U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                               >> 0x1aU)) << 1U)) | 
               (0U != (3U & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                     >> 0x18U))))) 
              << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xfffffffffffff8ULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                              >> 0x34U)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                             >> 0x35U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x36U))))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xffffffffffffc7ULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x33U))))))) 
              << 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xfffffffffffe3fULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x30U))))))) 
              << 6U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xfffffffffff1ffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x2dU))))))) 
              << 9U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xffffffffff8fffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x2aU))))))) 
              << 0xcU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xfffffffffc7fffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x27U))))))) 
              << 0xfU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xffffffffe3ffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x24U))))))) 
              << 0x12U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xffffffff1fffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x21U))))))) 
              << 0x15U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xfffffff8ffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x1eU))))))) 
              << 0x18U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xffffffc7ffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x1bU))))))) 
              << 0x1bU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xfffffe3fffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x18U))))))) 
              << 0x1eU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xfffff1ffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x15U))))))) 
              << 0x21U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xffff8fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0x12U))))))) 
              << 0x24U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xfffc7fffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0xfU))))))) 
              << 0x27U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xffe3ffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 0xcU))))))) 
              << 0x2aU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xff1fffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 9U))))))) 
              << 0x2dU));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xf8ffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 6U))))))) 
              << 0x30U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0xc7ffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
                                                               >> 3U))))))) 
              << 0x33U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed 
        = ((0x3fffffffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed) 
           | ((QData)((IData)((2U | (1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))))) 
              << 0x36U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)(VL_STREAML_FAST_QQI(56, vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed, 0));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = ((0xff000000U & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
           | (IData)((VL_STREAML_FAST_QQI(56, vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddRecFNToRaw__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed, 0) 
                      >> 0x20U)));
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__14(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__14\n"); );
    // Body
    if (vlSelf->reset_i) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__cycle_cnt = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[0U] = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[1U] = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[2U] = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[3U] = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[4U] = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[5U] = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[6U] = 0U;
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__cycle_cnt 
            = (0x3fffffffU & ((IData)(1U) + vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__cycle_cnt));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[0U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_stage_n[0U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[1U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_stage_n[1U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[2U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_stage_n[2U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[3U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_stage_n[3U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[4U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_stage_n[4U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[5U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_stage_n[5U];
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_pipe__DOT__data_r[6U] 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__stall_stage_n[6U];
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__8__KET____DOT__ch_reg__DOT__data_r 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed) 
                 >> 7U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__7__KET____DOT__ch_reg__DOT__data_r 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed) 
                 >> 6U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed) 
                 >> 1U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r 
        = (1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__6__KET____DOT__ch_reg__DOT__data_r 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed) 
                 >> 5U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__5__KET____DOT__ch_reg__DOT__data_r 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed) 
                 >> 4U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__4__KET____DOT__ch_reg__DOT__data_r 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed) 
                 >> 3U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r 
        = (1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed) 
                 >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed 
        = ((0x7fU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed)) 
           | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__8__KET____DOT__ch_reg__DOT__data_r) 
               << 8U) | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__7__KET____DOT__ch_reg__DOT__data_r) 
                         << 7U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed 
        = ((0x187U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__data_delayed)) 
           | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__6__KET____DOT__ch_reg__DOT__data_r) 
               << 6U) | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__5__KET____DOT__ch_reg__DOT__data_r) 
                          << 5U) | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__4__KET____DOT__ch_reg__DOT__data_r) 
                                     << 4U) | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__freeze_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r) 
                                               << 3U)))));
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__15(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__15\n"); );
    // Init
    CData/*5:0*/ __Vdly__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum;
    // Body
    __Vdly__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum 
        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum;
    if (vlSelf->reset_i) {
        __Vdly__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                      | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__inValid)))) {
        __Vdly__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum 
            = (0x3fU & ((((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__entering) 
                            & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__normalCase_S)))
                            ? 1U : 0U) | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase)
                                           ? ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fsqrt_v_li)
                                               ? ((0x100000U 
                                                   & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U])
                                                   ? 0x35U
                                                   : 0x36U)
                                               : 0x37U)
                                           : 0U)) | 
                         ((1U & ((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                                 & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))))
                           ? ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum) 
                              - (IData)(1U)) : 0U)) 
                        | (((~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__idle)) 
                            & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__skipCycle2))
                            ? 1U : 0U)));
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum 
        = __Vdly__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__idle 
        = (0U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 
        = ((3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
                      >> 0x36U)));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__fdiv_ready_lo 
        = (((1U >= (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
            & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__wb_v_reg__DOT__data_r))) 
           & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__v_li)));
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__19(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__19\n"); );
    // Init
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__file_name;
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__info_file_name;
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__eng_file_name;
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__mem_file_name;
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__acc_file_name;
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file_name;
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__pc_profiler__DOT__file_name;
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__branch_profiler__DOT__file_name;
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__vm_tracer__DOT__file_name;
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__clint_tracer__DOT__file_name;
    // Body
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file_name 
        = VL_SFORMATF_NX("commit_%x.trace",1,(1U & 
                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                               >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file_name)
                                                                                , 
                                                                                std::string("w"));
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__pc_profiler__DOT__file_name 
        = VL_SFORMATF_NX("pc_%x.histogram",1,(1U & 
                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                               >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__pc_profiler__DOT__file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__pc_profiler__DOT__file_name)
                                                                                , 
                                                                                std::string("w"));
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__branch_profiler__DOT__file_name 
        = VL_SFORMATF_NX("branch_%x.stats",1,(1U & 
                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                               >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__branch_profiler__DOT__file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__branch_profiler__DOT__file_name)
                                                                                , 
                                                                                std::string("w"));
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__vm_tracer__DOT__file_name 
        = VL_SFORMATF_NX("vm_%x.trace",1,(1U & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                                >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__vm_tracer__DOT__file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__vm_tracer__DOT__file_name)
                                                                                , 
                                                                                std::string("w"));
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__clint_tracer__DOT__file_name 
        = VL_SFORMATF_NX("clint_%x.trace",1,(1U & (
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                                   >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__clint_tracer__DOT__file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__clint_tracer__DOT__file_name)
                                                                                , 
                                                                                std::string("w"));
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__file_name 
        = VL_SFORMATF_NX("icache_%x.trace",1,(1U & 
                                              (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                               >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__file_name)
                                                                                , 
                                                                                std::string("w"));
    VL_FWRITEF(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__file,"Coherent L1: 00000000\n");
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__info_file_name 
        = VL_SFORMATF_NX("dcache_%x.info.trace",1,(1U 
                                                   & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                                      >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__info_file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__info_file_name)
                                                                                , 
                                                                                std::string("w"));
    VL_FWRITEF(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__info_file,"Coherent L1: 00000000\n");
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__eng_file_name 
        = VL_SFORMATF_NX("dcache_%x.eng.trace",1,(1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                                     >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__eng_file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__eng_file_name)
                                                                                , 
                                                                                std::string("w"));
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__mem_file_name 
        = VL_SFORMATF_NX("dcache_%x.mem.trace",1,(1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                                     >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__mem_file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__mem_file_name)
                                                                                , 
                                                                                std::string("w"));
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__acc_file_name 
        = VL_SFORMATF_NX("dcache_%x.acc.trace",1,(1U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                                     >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__acc_file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__acc_file_name)
                                                                                , 
                                                                                std::string("w"));
}

VL_INLINE_OPT void Vtestbench___024root___multiclk__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___multiclk__TOP__1\n"); );
    // Body
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[0U] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][0U];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[1U] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][1U];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[2U] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][2U];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[3U] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][3U];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[4U] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][4U];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[5U] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][5U];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[6U] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][6U];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[7U] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][7U];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[8U] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][8U];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[9U] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][9U];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[0xaU] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][0xaU];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[0xbU] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][0xbU];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[0xcU] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][0xcU];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[0xdU] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][0xdU];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[0xeU] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][0xeU];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_data_o_tmp[0xfU] 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r))][0xfU];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__r_data_o_tmp 
        = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
        [(7U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_r))];
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__reorder_v_li 
        = (3U & ((- (IData)(((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__r_valid_o_tmp) 
                             & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__data_afifo__DOT__r_valid_o_tmp)))) 
                 & ((IData)(1U) << (1U & (vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem
                                          [(3U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__ch_addr_afifo__DOT__bapg_rd__DOT__w_ptr_r))] 
                                          >> 0x1eU)))));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT__piso__DOT__fifo_v_li 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__reorder_v_li) 
                 & ((~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT__piso__DOT__two_fifo__DOT__fifo0__DOT__full_r)) 
                    & (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT__piso__DOT__piso__DOT__fifo1__DOT__dff_full__DOT__data_r)))));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT__piso__DOT__fifo_v_li 
        = (IData)(((((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__reorder_v_li) 
                     >> 1U) & (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT__piso__DOT__two_fifo__DOT__fifo0__DOT__full_r))) 
                   & (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT__piso__DOT__piso__DOT__fifo1__DOT__dff_full__DOT__data_r))));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT__piso__DOT__two_fifo__DOT__fifo0__DOT__enq_i 
        = ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT__piso__DOT__fifo_v_li) 
           & (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT__piso__DOT__two_fifo__DOT__fifo0__DOT__full_r)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT__piso__DOT__piso__DOT__fifo1__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT__piso__DOT__piso__DOT__fifo1__DOT__dff_full__DOT__data_r)
                  ? (~ ((6U == (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT__piso__DOT__piso__DOT__shift_ctr_r)) 
                        & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT____Vcellinp__piso__yumi_i)))
                  : (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__0__KET____DOT__reorder0__DOT__piso__DOT__fifo_v_li)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT__piso__DOT__two_fifo__DOT__fifo0__DOT__enq_i 
        = ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT__piso__DOT__fifo_v_li) 
           & (~ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT__piso__DOT__two_fifo__DOT__fifo0__DOT__full_r)));
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT__piso__DOT__piso__DOT__fifo1__DOT____Vcellinp__dff_full__data_i 
        = (1U & ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT__piso__DOT__piso__DOT__fifo1__DOT__dff_full__DOT__data_r)
                  ? (~ ((6U == (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT__piso__DOT__piso__DOT__shift_ctr_r)) 
                        & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT____Vcellinp__piso__yumi_i)))
                  : (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__rx0__DOT__re__BRA__1__KET____DOT__reorder0__DOT__piso__DOT__fifo_v_li)));
}

VL_INLINE_OPT void Vtestbench___024root___multiclk__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___multiclk__TOP__2\n"); );
    // Body
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__dram_yumi_lo 
        = ((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__dram__DOT__yumi_lo) 
           & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__r_valid_o_tmp));
    if (vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__dram_yumi_lo) {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_p1_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_n 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_gray_n 
            = (0xfU & (((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r) 
                        >> 1U) ^ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_p1_n 
            = (0xfU & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_n 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_r;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__w_ptr_gray_n 
            = (0xfU & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r));
    }
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__22(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__22\n"); );
    // Body
    VL_WRITEF("__________ ___________  _______________________________\n\\______   \\\\_   _____/ /   _____/\\_   _____/\\__    ___/\n |       _/ |    __)_  \\_____  \\  |    __)_   |    |   \n |    |   \\ |        \\ /        \\ |        \\  |    |  1->0 time = %10#\n |____|_  //_______  //_______  //_______  /  |____|   \n ASYNC  \\/         \\/         \\/         \\/            \n",
              32,(IData)(VL_TIME_UNITED_Q(1)));
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__29(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__29\n"); );
    // Init
    std::string testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__file_name;
    // Body
    testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__file_name 
        = VL_SFORMATF_NX("stall_%x.trace",1,(1U & (
                                                   vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                                   >> 0x18U))) ;
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__file = VL_FOPEN_NN(
                                                                                VL_CVT_PACK_STR_NN(testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__file_name)
                                                                                , 
                                                                                std::string("w"));
    VL_FWRITEF(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__core_profiler__DOT__file,"cycle,x,y,pc,operation\n");
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__30(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__30\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__entering 
        = ((1U >= (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__inValid));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__rem 
        = (0xffffffffffffffULL & (((((1U >= (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                     & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S)))
                                     ? (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                                        << 1U) : 0ULL) 
                                   | (((1U >= (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                       & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S))
                                       ? (((QData)((IData)(
                                                           (3U 
                                                            & ((IData)(
                                                                       (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                                                                        >> 0x33U)) 
                                                               - (IData)(1U))))) 
                                           << 0x36U) 
                                          | (0x3ffffffffffff8ULL 
                                             & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__sigA_S 
                                                << 3U)))
                                       : 0ULL)) | (
                                                   (1U 
                                                    >= (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__rem_Z 
                                                    << 1U))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__entering) 
           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__normalCase_S));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__trialRem 
        = (0x1ffffffffffffffULL & (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__rem 
                                   - (0x7fffffffffffffULL 
                                      & (((((((1U >= (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                              & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fsqrt_v_li)))
                                              ? (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__sigB_S 
                                                 << 1U)
                                              : 0ULL) 
                                            | (((1U 
                                                 >= (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                                & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fsqrt_v_li) 
                                                   & (~ 
                                                      (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__frs1_unbox__DOT__reg_cast_o[1U] 
                                                       >> 0x14U))))
                                                ? 0x20000000000000ULL
                                                : 0ULL)) 
                                           | (((1U 
                                                >= (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                               & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S))
                                               ? 0x50000000000000ULL
                                               : 0ULL)) 
                                          | (((1U < (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                              & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z)))
                                              ? (0x20000000000000ULL 
                                                 | (vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__fractB_Z 
                                                    << 1U))
                                              : 0ULL)) 
                                         | (((1U < (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                             & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z))
                                             ? ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__sigX_Z 
                                                 << 1U) 
                                                | (0x3fffffffffffffULL 
                                                   & ((1ULL 
                                                       << (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtRecFNToRaw__DOT__cycleNum)) 
                                                      >> 2U)))
                                             : 0ULL)))));
}

VL_INLINE_OPT void Vtestbench___024root___multiclk__TOP__6(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___multiclk__TOP__6\n"); );
    // Body
    vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__dram_data_yumi_lo 
        = (((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__r_valid_o_tmp) 
            & (vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__req_afifo__DOT__r_data_o_tmp 
               >> 0x1fU)) & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__dram_yumi_lo));
    if (vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__dram_data_yumi_lo) {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r)));
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_n 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_gray_n 
            = (7U & (((IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r) 
                      >> 1U) ^ (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r)));
    } else {
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_n 
            = (7U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_p1_r));
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_n 
            = vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_r;
        vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__w_ptr_gray_n 
            = (7U & (IData)(vlSelf->testbench__DOT__dram__DOT__dramsim3__DOT__cache_to_tram__DOT__tx0__DOT__data_afifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r));
    }
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__31(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__31\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
        = (IData)(((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__npc_r 
                    << 0x19U) | (QData)((IData)((0x4000U 
                                                 | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__icache_mode_r) 
                                                     << 0x12U) 
                                                    | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__dcache_mode_r) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cce_mode_r) 
                                                           << 7U) 
                                                          | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__hio_mask_r)))))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[1U] 
        = (IData)((((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__npc_r 
                     << 0x19U) | (QData)((IData)((0x4000U 
                                                  | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__icache_mode_r) 
                                                      << 0x12U) 
                                                     | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__dcache_mode_r) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cce_mode_r) 
                                                            << 7U) 
                                                           | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__hio_mask_r)))))))) 
                   >> 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[2U] 
        = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__freeze_r;
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__32(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__32\n"); );
    // Body
    if (vlSelf->reset_i) {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__7__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__6__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__5__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__4__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__3__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__2__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__1__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_r = 0ULL;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_p1_r = 1ULL;
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__7__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_n 
                                >> 0x38U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__6__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_n 
                                >> 0x30U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__5__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_n 
                                >> 0x28U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__4__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_n 
                                >> 0x20U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__3__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_n 
                                >> 0x18U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__2__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_n 
                                >> 0x10U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__1__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_n 
                                >> 8U)));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_n));
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_r 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_p1_r;
        vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_p1_r 
            = vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_p1_n;
    }
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_r 
        = ((0xffffffffULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_r) 
           | ((QData)((IData)((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__7__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                << 0x18U) | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__6__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__5__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                                 << 8U) 
                                                | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__4__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)))))) 
              << 0x20U));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_r 
        = ((0xffffffff00000000ULL & vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_r) 
           | (IData)((IData)((((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__3__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                               << 0x18U) | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__2__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__1__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r) 
                                                << 8U) 
                                               | (IData)(vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r)))))));
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_p1_n 
        = (1ULL + vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_p1_r);
    vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_gray_n 
        = ((vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_p1_r 
            >> 1U) ^ vlSelf->testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__clint__DOT__mtime_gray__DOT__w_ptr_p1_r);
}

VL_INLINE_OPT void Vtestbench___024root___sequent__TOP__33(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___sequent__TOP__33\n"); );
    // Body
    vlSelf->reset_i = ((0U == (IData)(vlSelf->testbench__DOT__reset_gen__DOT__ctr_lo_r)) 
                       ^ (0x14U == (IData)(vlSelf->testbench__DOT__reset_gen__DOT__ctr_hi_r)));
}

QData Vtestbench___024root___change_request_1(Vtestbench___024root* vlSelf);

VL_INLINE_OPT QData Vtestbench___024root___change_request(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___change_request\n"); );
    // Body
    return (Vtestbench___024root___change_request_1(vlSelf));
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
