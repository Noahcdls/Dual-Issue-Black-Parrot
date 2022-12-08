// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bsg_mem_1rw_sync__pi87.h"

VL_ATTR_COLD void Vtestbench_bsg_mem_1rw_sync__pi87___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_ATTR_COLD void Vtestbench_bsg_mem_1rw_sync__pi87___ctor_var_reset(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    vlSelf->__PVT__data_i = 0;
    vlSelf->__PVT__addr_i = 0;
    vlSelf->__PVT__v_i = 0;
    vlSelf->__PVT__w_i = 0;
    vlSelf->__PVT__data_o = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
}
