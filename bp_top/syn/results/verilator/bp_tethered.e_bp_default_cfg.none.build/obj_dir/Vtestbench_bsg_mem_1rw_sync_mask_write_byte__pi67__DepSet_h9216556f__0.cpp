// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67.h"

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__0__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__0__KET____DOT__data_mem__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U])
            : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U])
            : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U])
            : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U])
            : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U])
            : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U])
            : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U])
            : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U])
            : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0U]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U]);
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0U] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U]);
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0U] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U]);
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0U] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U]);
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[1U]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U]);
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[1U] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U]);
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[1U] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U]);
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[1U] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U]);
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
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

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__0__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__0__KET____DOT__data_mem__0\n"); );
    // Body
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                 & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li)));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                 & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                            >> 1U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                 & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                            >> 2U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                 & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                            >> 3U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                 & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                            >> 4U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                 & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                            >> 5U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                 & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                            >> 6U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                 & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                            >> 7U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                 & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li)) 
                    | (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                 & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li)) 
                    | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                               >> 1U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                 & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li)) 
                    | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                               >> 2U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                 & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li)) 
                    | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                               >> 3U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                 & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li)) 
                    | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                               >> 4U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                 & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li)) 
                    | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                               >> 5U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                 & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li)) 
                    | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                               >> 6U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = (1U & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                 & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li)) 
                    | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                               >> 7U)))));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__1__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__1__KET____DOT__data_mem__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U)) : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[2U]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[2U] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[2U] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[2U] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[3U]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[3U] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[3U] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[3U] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 9U));
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
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

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__1__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__1__KET____DOT__data_mem__0\n"); );
    // Body
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 1U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 8U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 1U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 9U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 1U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0xaU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 1U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0xbU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 1U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0xcU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 1U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0xdU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 1U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0xeU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 1U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0xfU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 1U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 1U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 8U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 1U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 1U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 9U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 1U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 1U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0xaU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 1U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 1U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0xbU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 1U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 1U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0xcU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 1U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 1U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0xdU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 1U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 1U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0xeU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 1U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 1U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0xfU)))));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__2__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__2__KET____DOT__data_mem__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U)) : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[4U]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[4U] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[4U] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[4U] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[5U]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[5U] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[5U] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[5U] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                         >> 0x12U));
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
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

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__2__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__2__KET____DOT__data_mem__0\n"); );
    // Body
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 2U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x10U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 2U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x11U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 2U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x12U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 2U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x13U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 2U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x14U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 2U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x15U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 2U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x16U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 2U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x17U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 2U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 2U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x10U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 2U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 2U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x11U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 2U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 2U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x12U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 2U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 2U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x13U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 2U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 2U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x14U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 2U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 2U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x15U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 2U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 2U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x16U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 2U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 2U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x17U)))));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__3__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__3__KET____DOT__data_mem__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU))) : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[6U]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[6U] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[6U] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[6U] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[7U]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[7U] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[7U] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[7U] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                          << 5U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[0U] 
                                    >> 0x1bU)));
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
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

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__3__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__3__KET____DOT__data_mem__0\n"); );
    // Body
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 3U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x18U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 3U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x19U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 3U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x1aU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 3U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x1bU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 3U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x1cU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 3U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x1dU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 3U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x1eU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 3U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x1fU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 3U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x18U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 3U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x19U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 3U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x1aU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 3U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x1bU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 3U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x1cU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 3U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x1dU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 3U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x1eU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 3U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 3U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x1fU)))));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__4__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__4__KET____DOT__data_mem__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U)) : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[8U]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[8U] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[8U] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[8U] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[9U]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[9U] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[9U] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[9U] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 4U));
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
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

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__4__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__4__KET____DOT__data_mem__0\n"); );
    // Body
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 4U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x20U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 4U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x21U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 4U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x22U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 4U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x23U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 4U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x24U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 4U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x25U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 4U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x26U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 4U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x27U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 4U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 4U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x20U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 4U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 4U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x21U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 4U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 4U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x22U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 4U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 4U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x23U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 4U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 4U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x24U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 4U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 4U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x25U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 4U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 4U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x26U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 4U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 4U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x27U)))));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__5__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__5__KET____DOT__data_mem__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU)) : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xaU]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xaU] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xaU] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xaU] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xbU]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xbU] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xbU] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xbU] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0xdU));
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
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

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__5__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__5__KET____DOT__data_mem__0\n"); );
    // Body
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 5U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x28U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 5U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x29U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 5U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x2aU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 5U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x2bU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 5U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x2cU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 5U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x2dU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 5U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x2eU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 5U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x2fU))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 5U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 5U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x28U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 5U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 5U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x29U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 5U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 5U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x2aU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 5U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 5U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x2bU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 5U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 5U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x2cU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 5U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 5U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x2dU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 5U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 5U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x2eU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 5U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 5U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x2fU)))));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__6__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__6__KET____DOT__data_mem__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U)) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U)) : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xcU]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xcU] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xcU] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xcU] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xdU]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xdU] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xdU] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xdU] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                         >> 0x16U));
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
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

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__6__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__6__KET____DOT__data_mem__0\n"); );
    // Body
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 6U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x30U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 6U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x31U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 6U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x32U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 6U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x33U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 6U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x34U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 6U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x35U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 6U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x36U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                  >> 6U) & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                    >> 0x37U))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 6U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 6U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x30U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 6U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 6U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x31U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 6U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 6U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x32U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 6U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 6U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x33U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 6U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 6U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x34U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 6U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 6U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x35U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 6U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 6U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x36U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = (1U & (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                  >> 6U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                >> 6U)) | (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                   >> 0x37U)))));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i)));
}

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__7__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__7__KET____DOT__data_mem__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    // Body
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU))) : 0U);
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r 
        = ((IData)(vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en)
            ? (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU))) : 0U);
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r 
            = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xeU]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xeU] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xeU] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xeU] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xfU]);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xfU] 
                        >> 8U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0xffU & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xfU] 
                        >> 0x10U));
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU)));
    }
    if (((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
         & (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i))) {
        __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_data_li[0xfU] 
               >> 0x18U);
        __Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0 
            = (0x1ffU & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[2U] 
                          << 1U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_addr_li[1U] 
                                    >> 0x1fU)));
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    if (__Vdlyvset__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0] 
            = __Vdlyvval__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem__v0;
    }
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r 
        = vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
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

VL_INLINE_OPT void Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__7__KET____DOT__data_mem__0(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__7__KET____DOT__data_mem__0\n"); );
    // Body
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                    >> 7U) & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                              >> 0x38U)));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                    >> 7U) & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                              >> 0x39U)));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                    >> 7U) & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                              >> 0x3aU)));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                    >> 7U) & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                              >> 0x3bU)));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                    >> 7U) & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                              >> 0x3cU)));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                    >> 7U) & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                              >> 0x3dU)));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                    >> 7U) & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                              >> 0x3eU)));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                    >> 7U) & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                              >> 0x3fU)));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                    >> 7U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                  >> 7U)) | (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                     >> 0x38U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                    >> 7U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                  >> 7U)) | (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                     >> 0x39U)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                    >> 7U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                  >> 7U)) | (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                     >> 0x3aU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                    >> 7U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                  >> 7U)) | (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                     >> 0x3bU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                    >> 7U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                  >> 7U)) | (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                     >> 0x3cU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                    >> 7U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                  >> 7U)) | (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                     >> 0x3dU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                    >> 7U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                  >> 7U)) | (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                     >> 0x3eU)))));
    vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i 
        = (IData)((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_v_li) 
                    >> 7U) & ((~ ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_w_li) 
                                  >> 7U)) | (IData)(
                                                    (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_mask_li 
                                                     >> 0x3fU)))));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i)));
    vlSelf->__PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en 
        = ((IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i) 
           & (~ (IData)(vlSelf->synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i)));
}
