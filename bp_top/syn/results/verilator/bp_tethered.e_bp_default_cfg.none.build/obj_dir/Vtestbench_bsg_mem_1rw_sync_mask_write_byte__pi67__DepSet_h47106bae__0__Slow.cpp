// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67.h"

VL_ATTR_COLD void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__0__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__0__KET____DOT__data_mem__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r];
    vlSelf->data_o = ((0xffffffffff000000ULL & vlSelf->data_o) 
                      | (IData)((IData)(((((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                            ? (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out)
                                            : (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                          << 0x10U) 
                                         | ((((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                               ? (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out)
                                               : (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                             << 8U) 
                                            | ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                ? (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out)
                                                : (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))))));
    vlSelf->data_o = ((0xffff000000ffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)(((((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                             ? (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out)
                                             : (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                           << 0x10U) 
                                          | ((((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                ? (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out)
                                                : (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                              << 8U) 
                                             | ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                                 ? (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out)
                                                 : (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)))))) 
                         << 0x18U));
    vlSelf->data_o = ((0xffffffffffffULL & vlSelf->data_o) 
                      | ((QData)((IData)(((((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                             ? (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out)
                                             : (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r)) 
                                           << 8U) | 
                                          ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r)
                                            ? (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out)
                                            : (IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r))))) 
                         << 0x30U));
}

VL_ATTR_COLD void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___ctor_var_reset(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = 0;
    vlSelf->reset_i = 0;
    vlSelf->v_i = 0;
    vlSelf->w_i = 0;
    vlSelf->addr_i = 0;
    vlSelf->data_i = 0;
    vlSelf->write_mask_i = 0;
    vlSelf->data_o = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
}
