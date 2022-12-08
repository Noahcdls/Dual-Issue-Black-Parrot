// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bp_uce__pi24.h"

VL_INLINE_OPT void Vtestbench_bp_uce__pi24___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce__0(Vtestbench_bp_uce__pi24* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_uce__pi24___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__icache_uce__0\n"); );
    // Body
    vlSelf->__PVT__load_resp_v_li = ((IData)(vlSelf->__PVT__fsm_resp_v_li) 
                                     & (((0U == (0xfU 
                                                 & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U])) 
                                         | (2U == (0xfU 
                                                   & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U]))) 
                                        | (5U == (0xfU 
                                                  & vlSelf->__PVT__uce_pump_in__DOT__fsm_base_header_cast_o[0U]))));
}
