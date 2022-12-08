// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_mem_1rw_sync__pi87.h"

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[1U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[1U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[1U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[1U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[2U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[2U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[2U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[2U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[3U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[3U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[3U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[3U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[4U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[4U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[4U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[4U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[5U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[5U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[5U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[5U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[6U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[6U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[6U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[6U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[7U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[7U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[7U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[7U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[8U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[8U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[8U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[8U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[9U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[9U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[9U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[9U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xaU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xaU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xaU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xaU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xbU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xbU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xbU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xbU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xcU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xcU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xcU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xcU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xdU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xdU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xdU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xdU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xeU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xeU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xeU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xeU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xfU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xfU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xfU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_data_li[0xfU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__0__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[1U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[1U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[1U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[1U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[2U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[2U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[2U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[2U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[3U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[3U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[3U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[3U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[4U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[4U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[4U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[4U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[5U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[5U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[5U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[5U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[6U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[6U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[6U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[6U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[7U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[7U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[7U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[7U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[8U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[8U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[8U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[8U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[9U]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[9U] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[9U] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[9U] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xaU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xaU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xaU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xaU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xbU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xbU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xbU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xbU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xcU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xcU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xcU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xcU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xdU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xdU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xdU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xdU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xeU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xeU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xeU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xeU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xfU]);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xfU] 
                      >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (0xffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xfU] 
                      >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__addr_r = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__read_en)
                                                   ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li)
                                                   : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__mem__v0 = 
            (vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_data_li[0xfU] 
             >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__mem__v0 = vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.__PVT__data_mem_addr_li;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__data_out = 
        vlSelf->__PVT__synth__DOT__nz__DOT__mem[vlSelf->__PVT__synth__DOT__nz__DOT__addr_r];
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0(Vtestbench_bsg_mem_1rw_sync__pi87* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bsg_mem_1rw_sync__pi87___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0\n"); );
    // Body
    vlSelf->__PVT__synth__DOT__nz__DOT__read_en = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i) 
                                                   & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__l2s__DOT__bank__BRA__1__KET____DOT__cache.data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i)));
}
