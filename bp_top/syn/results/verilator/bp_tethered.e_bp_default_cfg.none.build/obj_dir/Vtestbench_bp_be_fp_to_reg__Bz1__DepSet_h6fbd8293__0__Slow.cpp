// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bp_be_fp_to_reg__Bz1.h"

VL_ATTR_COLD void Vtestbench_bp_be_fp_to_reg__Bz1___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg__0(Vtestbench_bp_be_fp_to_reg__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_fp_to_reg__Bz1___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_fp_to_reg__0\n"); );
    // Body
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0U] = 0U;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[1U] = 0U;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr[0U] = 0U;
}

VL_ATTR_COLD void Vtestbench_bp_be_fp_to_reg__Bz1___ctor_var_reset(Vtestbench_bp_be_fp_to_reg__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bp_be_fp_to_reg__Bz1___ctor_var_reset\n"); );
    // Body
    vlSelf->raw_i = 0;
    VL_ZERO_RESET_W(68, vlSelf->reg_o);
    vlSelf->__Vcellout__in32_rec__out = 0;
    vlSelf->__PVT__in32_rec__DOT__normDist = 0;
    vlSelf->__PVT__in32_rec__DOT__adjustedExp = 0;
    vlSelf->__PVT__in32_rec__DOT__exp = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__reversed = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__enc_lo = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo = 0;
    VL_ZERO_RESET_W(144, vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t);
    VL_ZERO_RESET_W(192, vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr);
    VL_ZERO_RESET_W(192, vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v);
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in32_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__normDist = 0;
    vlSelf->__PVT__in64_rec__DOT__adjustedExp = 0;
    vlSelf->__PVT__in64_rec__DOT__exp = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__reversed = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__enc_lo = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__scan_lo = 0;
    VL_ZERO_RESET_W(371, vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t);
    VL_ZERO_RESET_W(448, vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__addr);
    VL_ZERO_RESET_W(448, vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__v);
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__in64_rec__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
}
