// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_mmu__Bz1_T8_TB0.h"

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1__0(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he83e6463__0;
    VlWide<4>/*127:0*/ __Vtemp_hd6c9ec37__0;
    VlWide<4>/*127:0*/ __Vtemp_he59f0001__0;
    VlWide<3>/*95:0*/ __Vtemp_h655e95a2__0;
    VlWide<4>/*127:0*/ __Vtemp_h46a5b04f__0;
    VlWide<4>/*127:0*/ __Vtemp_h808575b4__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8823fb2__0;
    VlWide<4>/*127:0*/ __Vtemp_hfdb4e887__0;
    VlWide<4>/*127:0*/ __Vtemp_hbafe29eb__0;
    VlWide<3>/*95:0*/ __Vtemp_h416dddc8__0;
    VlWide<4>/*127:0*/ __Vtemp_h00c805e6__0;
    VlWide<4>/*127:0*/ __Vtemp_h00c29039__0;
    VlWide<3>/*95:0*/ __Vtemp_h761bf65b__0;
    VlWide<4>/*127:0*/ __Vtemp_he11366b2__0;
    VlWide<4>/*127:0*/ __Vtemp_h312ed941__0;
    VlWide<3>/*95:0*/ __Vtemp_hc60b9a8a__0;
    VlWide<4>/*127:0*/ __Vtemp_h70d35a23__0;
    VlWide<4>/*127:0*/ __Vtemp_hda77ff93__0;
    VlWide<3>/*95:0*/ __Vtemp_h1057693f__0;
    VlWide<4>/*127:0*/ __Vtemp_h0eb73411__0;
    VlWide<4>/*127:0*/ __Vtemp_h472c41f3__0;
    VlWide<3>/*95:0*/ __Vtemp_h487870e4__0;
    VlWide<4>/*127:0*/ __Vtemp_h057fc472__0;
    VlWide<4>/*127:0*/ __Vtemp_hc5b9ef01__0;
    // Body
    vlSelf->__PVT__r_misaligned_r = (0U != (3U & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__r_eaddr_li1)));
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__etag_reg__DOT__data_r = 0ULL;
        vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
    } else {
        vlSelf->__PVT__etag_reg__DOT__data_r = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__r_eaddr_li1 
                                                >> 0xcU);
        if (((0U != (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
             | (IData)(vlSelf->tlb__DOT__w_v_li))) {
            vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r 
                = vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo;
        }
        vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
            = ((vlSelf->w_vtag_li << 1U) | (IData)(vlSelf->tlb__DOT__r_v_li));
        if ((0x80U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((0x40U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((0x20U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((8U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((4U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((2U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__tlb_bypass_reg__DOT__data_r)))) {
        vlSelf->__PVT__entry_reg__DOT__dff__DOT__data_r 
            = vlSelf->__Vcellinp__entry_reg__data_i;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_he83e6463__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_he83e6463__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_he83e6463__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_hd6c9ec37__0, __Vtemp_he83e6463__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_he59f0001__0, __Vtemp_hd6c9ec37__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_he59f0001__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_he59f0001__0[1U])) 
                                               >> 3U)));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h655e95a2__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_h655e95a2__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_h655e95a2__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h46a5b04f__0, __Vtemp_h655e95a2__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h808575b4__0, __Vtemp_h46a5b04f__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h808575b4__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h808575b4__0[1U])) 
                                               >> 3U)));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_ha8823fb2__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_ha8823fb2__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_ha8823fb2__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_hfdb4e887__0, __Vtemp_ha8823fb2__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_hbafe29eb__0, __Vtemp_hfdb4e887__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_hbafe29eb__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_hbafe29eb__0[1U])) 
                                               >> 3U)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h416dddc8__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_h416dddc8__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_h416dddc8__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h00c805e6__0, __Vtemp_h416dddc8__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h00c29039__0, __Vtemp_h00c805e6__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h00c29039__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h00c29039__0[1U])) 
                                               >> 3U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h761bf65b__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_h761bf65b__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_h761bf65b__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_he11366b2__0, __Vtemp_h761bf65b__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h312ed941__0, __Vtemp_he11366b2__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h312ed941__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h312ed941__0[1U])) 
                                               >> 3U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_hc60b9a8a__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_hc60b9a8a__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_hc60b9a8a__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h70d35a23__0, __Vtemp_hc60b9a8a__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_hda77ff93__0, __Vtemp_h70d35a23__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_hda77ff93__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_hda77ff93__0[1U])) 
                                               >> 3U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h1057693f__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_h1057693f__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_h1057693f__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h0eb73411__0, __Vtemp_h1057693f__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h472c41f3__0, __Vtemp_h0eb73411__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h472c41f3__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h472c41f3__0[1U])) 
                                               >> 3U)));
    }
    if ((1U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h487870e4__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_h487870e4__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_h487870e4__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h057fc472__0, __Vtemp_h487870e4__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_hc5b9ef01__0, __Vtemp_h057fc472__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_hc5b9ef01__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_hc5b9ef01__0[1U])) 
                                               >> 3U)));
    }
    if ((IData)((((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                  >> 7U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 6U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 3U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 2U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 1U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
               & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    vlSelf->__PVT__eaddr_fault_v = ((~ (IData)((0x3ffffffU 
                                                == 
                                                (0x3ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__etag_reg__DOT__data_r 
                                                            >> 0x1aU)))))) 
                                    & (0U != (0x3ffffffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__etag_reg__DOT__data_r 
                                                         >> 0x1aU)))));
    vlSelf->__PVT__tlb_bypass_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP.reset_i)) 
                                                  & (IData)(vlSelf->__PVT__tlb_bypass));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U] = (
                                                   (0x7fffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x17U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[4U] = (0xffU 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      >> 9U));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U] = ((0x3fffffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x1eU));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[4U] = (0xffffU 
                                                  & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r) 
                                                     >> 2U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U] = (
                                                   (0xff80003fU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U]) 
                                                   | (0x7fffc0U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         << 6U)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U] = ((0xc0000fffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U]) 
                                                  | (0x3ffff000U 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r) 
                                                        << 0xcU)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U] = (
                                                   (0x1fffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x15U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U] = (
                                                   (0xffffffc0U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U]) 
                                                   | (0x3fU 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         >> 0xbU)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U] = ((0x3ffffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x1aU));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U] = ((0xfffff000U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U]) 
                                                  | (0xfffU 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r) 
                                                        >> 6U)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U] = (
                                                   (0xffe0000fU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U]) 
                                                   | (0x1ffff0U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         << 4U)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U] = ((0xfc0000ffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U]) 
                                                  | (0x3ffff00U 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r) 
                                                        << 8U)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U] = (
                                                   (0x7ffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x13U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U] = (
                                                   (0xfffffff0U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U]) 
                                                   | (0xfU 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         >> 0xdU)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U] = ((0x3fffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x16U));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U] = ((0xffffff00U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U]) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r) 
                                                        >> 0xaU)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U] = (
                                                   (0xfff80003U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U]) 
                                                   | (0x7fffcU 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         << 2U)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U] = ((0xffc0000fU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U]) 
                                                  | (0x3ffff0U 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r) 
                                                        << 4U)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U] = (
                                                   (0x1ffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x11U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U] = (
                                                   (0xfffffffcU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U]) 
                                                   | (3U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         >> 0xfU)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U] = ((0x3ffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x12U));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U] = ((0xfffffff0U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U]) 
                                                  | (0xfU 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r) 
                                                        >> 0xeU)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U] = (
                                                   (0xfffe0000U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U]) 
                                                   | (0x1ffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r 
                                                                 >> 0x12U))));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U] = ((0xfffc0000U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U]) 
                                                  | (0x3ffffU 
                                                     & (IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r)));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
        = ((0xfffU & vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U]) 
           | ((IData)((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                        << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r)))) 
              << 0xcU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[4U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                      << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r)))) 
            >> 0x14U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                                    << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r))) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
        = (((0xffcU & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                       << 2U)) | ((IData)(((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                                             << 0x1bU) 
                                            | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r))) 
                                           >> 0x20U)) 
                                  >> 0x14U)) | ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                                 << 0x1dU) 
                                                | (0xfffff000U 
                                                   & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                                                      << 2U))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[6U] 
        = (0xffffffU & (((0xfffU & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                    >> 3U)) | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                                               >> 0x1eU)) 
                        | (0x1ffff000U & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                          >> 3U))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r)) 
                    << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[1U] 
        = ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
            << 0x16U) | (IData)(((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r)) 
                                   << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r))) 
                                 >> 0x20U)));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[2U] 
        = ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
            << 0x11U) | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
                         >> 0xaU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
        = ((0xfffff000U & vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U]) 
           | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
              >> 0xfU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r 
        = ((0xfU & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
           | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r) 
               << 7U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r) 
                          << 6U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r) 
                                     << 5U) | ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r) 
                                               << 4U)))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r 
        = ((0xf0U & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
           | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r) 
               << 3U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r) 
                          << 2U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                     << 1U) | (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r)))));
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[0U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[4U] 
        = ((vlSelf->__PVT__tlb__DOT__data_1g_high_r 
            << 8U) | vlSelf->__PVT__tlb__DOT__data_4k_high_r[4U]);
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[0U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[4U] 
        = ((0xffff0000U & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                           << 0xfU)) | vlSelf->__PVT__tlb__DOT__data_4k_low_r[4U]);
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[5U] 
        = (3U & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                 >> 0x11U));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0xfcU 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((2U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 1U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)))));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0xf3U 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((8U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 3U)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                           >> 2U)) 
                                                         << 2U))));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0xcfU 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((0x20U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 5U)) 
                                                       << 5U)) 
                                                   | (0x10U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                           >> 4U)) 
                                                         << 4U))));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0x3fU 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 7U)) 
                                                       << 7U)) 
                                                   | (0x40U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                           >> 6U)) 
                                                         << 6U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xfeU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | ((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                      & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                     & ((0x7ffffffU 
                                                         & vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[0U]) 
                                                        == 
                                                        (0x7ffffffU 
                                                         & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                            >> 1U)))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xfdU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffffeU 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 1U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[1U] 
                                                                 << 5U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[0U] 
                                                                   >> 0x1bU))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 1U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xfbU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffffcU 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 2U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[2U] 
                                                                 << 0xaU) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[1U] 
                                                                   >> 0x16U))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 2U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xf7U 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffff8U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 3U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
                                                                 << 0xfU) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[2U] 
                                                                   >> 0x11U))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 3U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xefU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffff0U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 4U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[4U] 
                                                                 << 0x14U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
                                                                   >> 0xcU))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 4U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xdfU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xffffffe0U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 5U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
                                                                 << 0x19U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[4U] 
                                                                   >> 7U))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 5U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xbfU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xffffffc0U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 6U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
                                                                >> 2U)) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 6U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0x7fU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xffffff80U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 7U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[6U] 
                                                                 << 3U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
                                                                   >> 0x1dU))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 7U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | VL_STREAML_FAST_III(8, (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo), 0));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
        = ((0xfffe0000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U]) 
           | (0x1ffffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[0U] 
                          & (- (IData)((1U & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
        = ((0x1ffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U]) 
           | (0xfffe0000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[0U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 1U)))) 
                                << 0x11U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
        = ((0xfffffffcU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
           | (3U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
                    & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                         >> 1U)))) 
                       >> 0xfU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
        = ((0xfff80003U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
           | (0x7fffcU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
                          & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                               >> 2U)))) 
                             << 2U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
        = ((0x7ffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
           | (0xfff80000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 3U)))) 
                                << 0x13U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
        = ((0xfffffff0U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
           | (0xfU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
                      & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                           >> 3U)))) 
                         >> 0xdU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
        = ((0xffe0000fU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
           | (0x1ffff0U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
                           & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                >> 4U)))) 
                              << 4U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
        = ((0x1fffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
           | (0xffe00000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 5U)))) 
                                << 0x15U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
        = ((0xffffffc0U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
           | (0x3fU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
                       & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                            >> 5U)))) 
                          >> 0xbU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
        = ((0xff80003fU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
           | (0x7fffc0U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
                           & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                >> 6U)))) 
                              << 6U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
        = ((0x7fffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
           | (0xff800000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 7U)))) 
                                << 0x17U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
        = ((0x1ffff00U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
           | (0xffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[4U] 
                       & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                            >> 7U)))) 
                          >> 9U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
        = ((0xffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
           | (0x1ffff00U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[4U] 
                            & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                 >> 8U)))) 
                               << 8U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
        = ((0xfffc0000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U]) 
           | (0x3ffffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[0U] 
                          & (- (IData)((1U & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
        = ((0x3ffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U]) 
           | (0xfffc0000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[0U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 1U)))) 
                                << 0x12U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
        = ((0xfffffff0U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
           | (0xfU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
                      & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                           >> 1U)))) 
                         >> 0xeU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
        = ((0xffc0000fU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
           | (0x3ffff0U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
                           & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                >> 2U)))) 
                              << 4U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
        = ((0x3fffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
           | (0xffc00000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 3U)))) 
                                << 0x16U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]) 
           | (0xffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
                       & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                            >> 3U)))) 
                          >> 0xaU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
        = ((0xfc0000ffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]) 
           | (0x3ffff00U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
                            & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                 >> 4U)))) 
                               << 8U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
        = ((0x3ffffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]) 
           | (0xfc000000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 5U)))) 
                                << 0x1aU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
        = ((0xfffff000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
           | (0xfffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
                        & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                             >> 5U)))) 
                           >> 6U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
        = ((0xc0000fffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
           | (0x3ffff000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 6U)))) 
                                << 0xcU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
        = ((0x3fffffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
           | (0xc0000000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 7U)))) 
                                << 0x1eU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
        = ((0xffff0000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U]) 
           | (0xffffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[4U] 
                         & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                              >> 7U)))) 
                            >> 2U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
        = ((0xffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U]) 
           | (0xffff0000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[4U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 8U)))) 
                                << 0x10U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[5U] 
        = (3U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[5U] 
                 & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                      >> 8U)))) >> 0x10U)));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
              | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                        >> 0x10U)) | (1U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x10U)) | ((0x10U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x100U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
              | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                           >> 0x10U)) | (0x40U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x11U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x11U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 1U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x11U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 1U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x11U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x12U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 2U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x12U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 2U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x12U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x13U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x13U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 3U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 3U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x13U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x14U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x14U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 4U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 4U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x14U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x15U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 5U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 5U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 5U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x15U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 5U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x16U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 6U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 6U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x16U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x17U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 7U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 7U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x17U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x18U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 8U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 8U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x18U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x19U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 9U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x19U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 9U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                              << 7U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 0xaU)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x1aU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xaU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 6U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xbU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xbU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 5U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xcU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xcU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 4U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1dU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xdU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                            << 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xdU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 3U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1eU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xeU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                            << 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xeU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 2U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                         << 1U)) | 
                                  (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 1U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xfU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                            << 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xfU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 1U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0x10U)) | ((2U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
                                   | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
              | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                           >> 0x10U)) | (8U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0x10U)) | ((0x80U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                   >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x11U)) | 
                                (1U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 4U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 8U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                              >> 0x17U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 5U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 9U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                              >> 0x18U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x13U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 6U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xaU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 7U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x14U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 7U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xbU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 6U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x15U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 8U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xcU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 5U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x16U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 5U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 9U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xdU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 4U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x17U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xaU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x19U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xeU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 3U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x18U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xbU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xfU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 2U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x19U)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xcU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x10U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 << 1U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xdU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x11U)) | ((0x80U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U]) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 1U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xeU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            << 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x12U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 1U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
              | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                           >> 0xfU)) | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                              << 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x13U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 2U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x11U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1dU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 1U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x10U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            << 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x14U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 3U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x12U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1eU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 2U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x11U)) 
                                   | (8U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x15U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 4U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x13U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                          << 1U)) | 
                                   (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                          >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 3U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x12U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x16U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 5U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x14U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x11U)) | ((2U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
                                   | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 4U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x13U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x17U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 6U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x15U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                          >> 1U)) | 
                                   (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                          >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x14U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[5U] 
                         << 8U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                              >> 7U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 0x16U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                          >> 2U)) | 
                                   (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                          >> 0x11U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 6U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x15U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[5U] 
                         << 7U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                              >> 8U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 0x17U)))));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1fff8U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather))) 
               << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather))) 
                          << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)))));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1ffc7U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)))) 
              << 3U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1fe3fU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)))) 
              << 6U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1f1ffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)))) 
              << 9U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x18fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)))) 
              << 0xcU));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x7fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather))) 
                << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather))) 
              << 0xfU));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3fff8U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather))) 
               << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather))) 
                          << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)))));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3ffc7U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)))) 
              << 3U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3fe3fU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)))) 
              << 6U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3f1ffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)))) 
              << 9U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x38fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)))) 
              << 0xcU));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x7fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)))) 
              << 0xfU));
    vlSelf->__PVT__tlb__DOT__r_entry = (((QData)((IData)(vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o)) 
                                         << 0x12U) 
                                        | (QData)((IData)(vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o)));
    vlSelf->__Vcellinp__entry_reg__data_i = (((QData)((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                               & (0U 
                                                                  != (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo))))) 
                                              << 0x23U) 
                                             | (0x7ffffffffULL 
                                                & (((QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__tlb__DOT__r_entry) 
                                                                      << 3U) 
                                                                     | (IData)(
                                                                               (vlSelf->__PVT__tlb__DOT__r_entry 
                                                                                >> 0x20U))))) 
                                                    << 4U) 
                                                   | ((QData)((IData)(vlSelf->__PVT__tlb__DOT__r_entry)) 
                                                      >> 0x1cU))));
    vlSelf->__Vcellout__entry_reg__data_o = ((IData)(vlSelf->__PVT__tlb_bypass_reg__DOT__data_r)
                                              ? vlSelf->__PVT__entry_reg__DOT__dff__DOT__data_r
                                              : vlSelf->__Vcellinp__entry_reg__data_i);
}

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1__1(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1__1\n"); );
    // Body
    vlSelf->__PVT__r_v_reg__DOT__data_r = ((IData)(vlSymsp->TOP.reset_i)
                                            ? 0U : 
                                           (0xcU | 
                                            (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_r) 
                                              << 5U) 
                                             | ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_r) 
                                                << 4U))));
    if ((0x10U & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) {
        vlSelf->__PVT__tlb_v_lo = (1U & (IData)((vlSelf->__Vcellout__entry_reg__data_o 
                                                 >> 0x23U)));
        vlSelf->__PVT__tlb_entry_lo = (0x7ffffffffULL 
                                       & vlSelf->__Vcellout__entry_reg__data_o);
    } else {
        vlSelf->__PVT__tlb_v_lo = (1U & ((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                         >> 3U));
        vlSelf->__PVT__tlb_entry_lo = (0x7ffffffffULL 
                                       & ((QData)((IData)(
                                                          ((IData)(vlSelf->__PVT__etag_reg__DOT__data_r) 
                                                           << 4U))) 
                                          << 3U));
    }
    vlSelf->__PVT__data_priv_page_fault = ((IData)(vlSelf->__PVT__tlb_v_lo) 
                                           & (((IData)(
                                                       (0x20U 
                                                        == 
                                                        (0xe0U 
                                                         & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r)))) 
                                               & (IData)(
                                                         (vlSelf->__PVT__tlb_entry_lo 
                                                          >> 3U))) 
                                              | (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x60U 
                                                           & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) 
                                                         & (~ 
                                                            (vlSelf->__PVT__tlb_entry_lo 
                                                             >> 3U))))));
    vlSelf->__PVT__instr_page_fault_v = ((IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r)))) 
                                         & ((IData)(vlSelf->__PVT__tlb_v_lo) 
                                            & (((IData)(
                                                        ((0x20U 
                                                          == 
                                                          (0x60U 
                                                           & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) 
                                                         & (vlSelf->__PVT__tlb_entry_lo 
                                                            >> 3U))) 
                                                | (IData)(
                                                          ((0U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) 
                                                           & (~ 
                                                              (vlSelf->__PVT__tlb_entry_lo 
                                                               >> 3U))))) 
                                               | (~ (IData)(
                                                            (vlSelf->__PVT__tlb_entry_lo 
                                                             >> 2U))))));
    vlSelf->__PVT__any_page_fault_v = ((IData)(vlSelf->__PVT__instr_page_fault_v) 
                                       | (((IData)(
                                                   (0x12U 
                                                    == 
                                                    (0x12U 
                                                     & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r)))) 
                                           & (((IData)(vlSelf->__PVT__data_priv_page_fault) 
                                               | ((IData)(vlSelf->__PVT__tlb_v_lo) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__tlb_entry_lo) 
                                                      | ((IData)(
                                                                 (vlSelf->__PVT__tlb_entry_lo 
                                                                  >> 2U)) 
                                                         & ((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                                            >> 8U)))))) 
                                              | (IData)(vlSelf->__PVT__eaddr_fault_v))) 
                                          | ((((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                               >> 4U) 
                                              & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r)) 
                                             & (((IData)(vlSelf->__PVT__data_priv_page_fault) 
                                                 | ((IData)(vlSelf->__PVT__tlb_v_lo) 
                                                    & (~ (IData)(
                                                                 (0x12ULL 
                                                                  == 
                                                                  (0x12ULL 
                                                                   & vlSelf->__PVT__tlb_entry_lo)))))) 
                                                | (IData)(vlSelf->__PVT__eaddr_fault_v)))));
}

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1__2(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1__2\n"); );
    // Body
    vlSelf->w_vtag_li = (0x7ffffffU & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fill_v)
                                        ? ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[2U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U] 
                                              >> 0x1fU))
                                        : (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__r_eaddr_li1 
                                                   >> 0xcU))));
    vlSelf->__PVT__tlb_bypass = ((((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fill_v)) 
                                   & (0x18U == (0x18U 
                                                & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r)))) 
                                  & ((0x7ffffffU & (IData)(
                                                           (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__r_eaddr_li1 
                                                            >> 0xcU))) 
                                     == (0x7ffffffU 
                                         & (IData)(vlSelf->__PVT__etag_reg__DOT__data_r)))) 
                                 & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_r));
    vlSelf->__Vcellinp__tlb__v_i = ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_r) 
                                    & (~ (IData)(vlSelf->__PVT__tlb_bypass)));
    vlSelf->tlb__DOT__r_v_li = ((IData)(vlSelf->__Vcellinp__tlb__v_i) 
                                & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fill_v)));
    vlSelf->tlb__DOT__w_v_li = ((IData)(vlSelf->__Vcellinp__tlb__v_i) 
                                & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fill_v));
}

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1__1(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu1__1\n"); );
    // Body
    vlSelf->r_uncached_o = (IData)(((((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                      >> 3U) & (IData)(vlSelf->__PVT__tlb_v_lo)) 
                                    & (((IData)((0ULL 
                                                 != 
                                                 (0x7f8000000ULL 
                                                  & vlSelf->__PVT__tlb_entry_lo))) 
                                        | (0x80000U 
                                           > (0xfffffffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__tlb_entry_lo 
                                                         >> 7U))))) 
                                       | (0U == (3U 
                                                 & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U] 
                                                    >> 0x12U))))));
    vlSelf->__PVT__hio_fault_v = ((((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                    >> 2U) & (0U != 
                                              (0x7fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__tlb_entry_lo 
                                                          >> 0x1cU))))) 
                                  | (0U != (0x7fU & 
                                            ((IData)(
                                                     (vlSelf->__PVT__tlb_entry_lo 
                                                      >> 0x1cU)) 
                                             & (~ vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U])))));
    vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li = (0xffU 
                                              & ((- (IData)((IData)(vlSelf->tlb__DOT__w_v_li))) 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo))));
    vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li = (0xffU 
                                              & (((- (IData)((IData)(vlSelf->tlb__DOT__w_v_li))) 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo))) 
                                                 | (- (IData)((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo 
        = ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
           & (- (IData)((IData)(vlSelf->tlb__DOT__w_v_li))));
    vlSelf->__PVT__instr_access_fault_v = (((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                            >> 2U) 
                                           & (IData)(vlSelf->__PVT__hio_fault_v));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo 
        = ((0x7cU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo)) 
           | ((2U & (((2U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                       ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                          >> 1U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                    >> 1U)) << 1U)) 
              | (1U & ((1U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                        ? (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)
                        : (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo 
        = ((0x73U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo)) 
           | ((8U & (((8U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                       ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                          >> 3U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                    >> 3U)) << 3U)) 
              | (4U & (((4U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                         ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                            >> 2U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                      >> 2U)) << 2U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo 
        = ((0x4fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo)) 
           | ((0x20U & (((0x20U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                          ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                             >> 5U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                       >> 5U)) << 5U)) 
              | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                            ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                               >> 4U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                         >> 4U)) << 4U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                         ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                            >> 6U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__any_access_fault_v = ((IData)(vlSelf->__PVT__instr_access_fault_v) 
                                         | ((((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                              >> 1U) 
                                             | (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r)) 
                                            & (IData)(vlSelf->__PVT__hio_fault_v)));
}

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu2__0(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu2__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he83e6463__0;
    VlWide<4>/*127:0*/ __Vtemp_hd6c9ec37__0;
    VlWide<4>/*127:0*/ __Vtemp_he59f0001__0;
    VlWide<3>/*95:0*/ __Vtemp_h655e95a2__0;
    VlWide<4>/*127:0*/ __Vtemp_h46a5b04f__0;
    VlWide<4>/*127:0*/ __Vtemp_h808575b4__0;
    VlWide<3>/*95:0*/ __Vtemp_ha8823fb2__0;
    VlWide<4>/*127:0*/ __Vtemp_hfdb4e887__0;
    VlWide<4>/*127:0*/ __Vtemp_hbafe29eb__0;
    VlWide<3>/*95:0*/ __Vtemp_h416dddc8__0;
    VlWide<4>/*127:0*/ __Vtemp_h00c805e6__0;
    VlWide<4>/*127:0*/ __Vtemp_h00c29039__0;
    VlWide<3>/*95:0*/ __Vtemp_h761bf65b__0;
    VlWide<4>/*127:0*/ __Vtemp_he11366b2__0;
    VlWide<4>/*127:0*/ __Vtemp_h312ed941__0;
    VlWide<3>/*95:0*/ __Vtemp_hc60b9a8a__0;
    VlWide<4>/*127:0*/ __Vtemp_h70d35a23__0;
    VlWide<4>/*127:0*/ __Vtemp_hda77ff93__0;
    VlWide<3>/*95:0*/ __Vtemp_h1057693f__0;
    VlWide<4>/*127:0*/ __Vtemp_h0eb73411__0;
    VlWide<4>/*127:0*/ __Vtemp_h472c41f3__0;
    VlWide<3>/*95:0*/ __Vtemp_h487870e4__0;
    VlWide<4>/*127:0*/ __Vtemp_h057fc472__0;
    VlWide<4>/*127:0*/ __Vtemp_hc5b9ef01__0;
    // Body
    vlSelf->__PVT__r_misaligned_r = (0U != (3U & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__r_eaddr_li2)));
    if ((1U & (~ (IData)(vlSelf->__PVT__tlb_bypass_reg__DOT__data_r)))) {
        vlSelf->__PVT__entry_reg__DOT__dff__DOT__data_r 
            = vlSelf->__Vcellinp__entry_reg__data_i;
    }
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__etag_reg__DOT__data_r = 0ULL;
        vlSelf->__PVT__r_v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
    } else {
        vlSelf->__PVT__etag_reg__DOT__data_r = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__r_eaddr_li2 
                                                >> 0xcU);
        vlSelf->__PVT__r_v_reg__DOT__data_r = (0xcU 
                                               | (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_r) 
                                                   << 5U) 
                                                  | ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_r) 
                                                     << 4U)));
        if (((0U != (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
             | (IData)(vlSelf->tlb__DOT__w_v_li))) {
            vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r 
                = vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo;
        }
        vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
            = ((vlSelf->w_vtag_li << 1U) | ((IData)(vlSelf->__Vcellinp__tlb__v_i) 
                                            & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fill_v))));
        if ((0x80U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((0x40U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((0x20U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((8U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((4U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((2U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)));
        }
    }
    if ((IData)((((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                  >> 7U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 6U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 5U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 4U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 3U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 2U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 1U) & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
               & (~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_he83e6463__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_he83e6463__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_he83e6463__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_hd6c9ec37__0, __Vtemp_he83e6463__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_he59f0001__0, __Vtemp_hd6c9ec37__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_he59f0001__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_he59f0001__0[1U])) 
                                               >> 3U)));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h655e95a2__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_h655e95a2__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_h655e95a2__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h46a5b04f__0, __Vtemp_h655e95a2__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h808575b4__0, __Vtemp_h46a5b04f__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h808575b4__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h808575b4__0[1U])) 
                                               >> 3U)));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_ha8823fb2__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_ha8823fb2__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_ha8823fb2__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_hfdb4e887__0, __Vtemp_ha8823fb2__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_hbafe29eb__0, __Vtemp_hfdb4e887__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_hbafe29eb__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_hbafe29eb__0[1U])) 
                                               >> 3U)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h416dddc8__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_h416dddc8__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_h416dddc8__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h00c805e6__0, __Vtemp_h416dddc8__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h00c29039__0, __Vtemp_h00c805e6__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h00c29039__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h00c29039__0[1U])) 
                                               >> 3U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h761bf65b__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_h761bf65b__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_h761bf65b__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_he11366b2__0, __Vtemp_h761bf65b__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h312ed941__0, __Vtemp_he11366b2__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h312ed941__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h312ed941__0[1U])) 
                                               >> 3U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_hc60b9a8a__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_hc60b9a8a__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_hc60b9a8a__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h70d35a23__0, __Vtemp_hc60b9a8a__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_hda77ff93__0, __Vtemp_h70d35a23__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_hda77ff93__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_hda77ff93__0[1U])) 
                                               >> 3U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h1057693f__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_h1057693f__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_h1057693f__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h0eb73411__0, __Vtemp_h1057693f__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h472c41f3__0, __Vtemp_h0eb73411__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h472c41f3__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h472c41f3__0[1U])) 
                                               >> 3U)));
    }
    if ((1U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h487870e4__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                << 0x13U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                  >> 0xdU))));
        __Vtemp_h487870e4__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                  << 0x13U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                    >> 0xdU)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                            << 0x13U) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                              >> 0xdU))) 
                                                       >> 0x20U)));
        __Vtemp_h487870e4__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                           << 0x13U) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                             >> 0xdU)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U])) 
                                                              << 0x13U) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[0U])) 
                                                                >> 0xdU))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h057fc472__0, __Vtemp_h487870e4__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_hc5b9ef01__0, __Vtemp_h057fc472__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_hc5b9ef01__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_hc5b9ef01__0[1U])) 
                                               >> 3U)));
    }
    vlSelf->__PVT__tlb_bypass_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP.reset_i)) 
                                                  & (IData)(vlSelf->__PVT__tlb_bypass));
    vlSelf->__PVT__eaddr_fault_v = ((~ (IData)((0x3ffffffU 
                                                == 
                                                (0x3ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__etag_reg__DOT__data_r 
                                                            >> 0x1aU)))))) 
                                    & (0U != (0x3ffffffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__etag_reg__DOT__data_r 
                                                         >> 0x1aU)))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
        = ((0xfffU & vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U]) 
           | ((IData)((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                        << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r)))) 
              << 0xcU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[4U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                      << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r)))) 
            >> 0x14U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                                    << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r))) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
        = (((0xffcU & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                       << 2U)) | ((IData)(((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                                             << 0x1bU) 
                                            | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r))) 
                                           >> 0x20U)) 
                                  >> 0x14U)) | ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                                 << 0x1dU) 
                                                | (0xfffff000U 
                                                   & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                                                      << 2U))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[6U] 
        = (0xffffffU & (((0xfffU & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                    >> 3U)) | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                                               >> 0x1eU)) 
                        | (0x1ffff000U & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                          >> 3U))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r)) 
                    << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[1U] 
        = ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
            << 0x16U) | (IData)(((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r)) 
                                   << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r))) 
                                 >> 0x20U)));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[2U] 
        = ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
            << 0x11U) | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
                         >> 0xaU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
        = ((0xfffff000U & vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U]) 
           | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
              >> 0xfU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r 
        = ((0xfU & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
           | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r) 
               << 7U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r) 
                          << 6U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r) 
                                     << 5U) | ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r) 
                                               << 4U)))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r 
        = ((0xf0U & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
           | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r) 
               << 3U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r) 
                          << 2U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                     << 1U) | (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r)))));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U] = (
                                                   (0x7fffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x17U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[4U] = (0xffU 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      >> 9U));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U] = ((0x3fffffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x1eU));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[4U] = (0xffffU 
                                                  & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r) 
                                                     >> 2U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U] = (
                                                   (0xff80003fU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U]) 
                                                   | (0x7fffc0U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         << 6U)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U] = ((0xc0000fffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U]) 
                                                  | (0x3ffff000U 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r) 
                                                        << 0xcU)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U] = (
                                                   (0x1fffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x15U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U] = (
                                                   (0xffffffc0U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U]) 
                                                   | (0x3fU 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         >> 0xbU)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U] = ((0x3ffffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x1aU));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U] = ((0xfffff000U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U]) 
                                                  | (0xfffU 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r) 
                                                        >> 6U)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U] = (
                                                   (0xffe0000fU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U]) 
                                                   | (0x1ffff0U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         << 4U)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U] = ((0xfc0000ffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U]) 
                                                  | (0x3ffff00U 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r) 
                                                        << 8U)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U] = (
                                                   (0x7ffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x13U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U] = (
                                                   (0xfffffff0U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U]) 
                                                   | (0xfU 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         >> 0xdU)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U] = ((0x3fffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x16U));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U] = ((0xffffff00U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U]) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r) 
                                                        >> 0xaU)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U] = (
                                                   (0xfff80003U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U]) 
                                                   | (0x7fffcU 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         << 2U)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U] = ((0xffc0000fU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U]) 
                                                  | (0x3ffff0U 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r) 
                                                        << 4U)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U] = (
                                                   (0x1ffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x11U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U] = (
                                                   (0xfffffffcU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U]) 
                                                   | (3U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         >> 0xfU)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U] = ((0x3ffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x12U));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U] = ((0xfffffff0U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U]) 
                                                  | (0xfU 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r) 
                                                        >> 0xeU)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U] = (
                                                   (0xfffe0000U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U]) 
                                                   | (0x1ffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r 
                                                                 >> 0x12U))));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U] = ((0xfffc0000U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U]) 
                                                  | (0x3ffffU 
                                                     & (IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r)));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0xfcU 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((2U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 1U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)))));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0xf3U 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((8U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 3U)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                           >> 2U)) 
                                                         << 2U))));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0xcfU 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((0x20U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 5U)) 
                                                       << 5U)) 
                                                   | (0x10U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                           >> 4U)) 
                                                         << 4U))));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0x3fU 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 7U)) 
                                                       << 7U)) 
                                                   | (0x40U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                           >> 6U)) 
                                                         << 6U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xfeU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | ((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                      & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                     & ((0x7ffffffU 
                                                         & vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[0U]) 
                                                        == 
                                                        (0x7ffffffU 
                                                         & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                            >> 1U)))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xfdU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffffeU 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 1U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[1U] 
                                                                 << 5U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[0U] 
                                                                   >> 0x1bU))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 1U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xfbU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffffcU 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 2U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[2U] 
                                                                 << 0xaU) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[1U] 
                                                                   >> 0x16U))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 2U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xf7U 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffff8U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 3U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
                                                                 << 0xfU) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[2U] 
                                                                   >> 0x11U))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 3U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xefU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffff0U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 4U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[4U] 
                                                                 << 0x14U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
                                                                   >> 0xcU))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 4U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xdfU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xffffffe0U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 5U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
                                                                 << 0x19U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[4U] 
                                                                   >> 7U))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 5U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xbfU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xffffffc0U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 6U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
                                                                >> 2U)) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 6U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0x7fU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xffffff80U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 7U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[6U] 
                                                                 << 3U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
                                                                   >> 0x1dU))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 7U))));
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[0U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[4U] 
        = ((vlSelf->__PVT__tlb__DOT__data_1g_high_r 
            << 8U) | vlSelf->__PVT__tlb__DOT__data_4k_high_r[4U]);
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[0U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[4U] 
        = ((0xffff0000U & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                           << 0xfU)) | vlSelf->__PVT__tlb__DOT__data_4k_low_r[4U]);
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[5U] 
        = (3U & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                 >> 0x11U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | VL_STREAML_FAST_III(8, (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo), 0));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
        = ((0xfffe0000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U]) 
           | (0x1ffffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[0U] 
                          & (- (IData)((1U & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
        = ((0x1ffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U]) 
           | (0xfffe0000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[0U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 1U)))) 
                                << 0x11U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
        = ((0xfffffffcU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
           | (3U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
                    & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                         >> 1U)))) 
                       >> 0xfU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
        = ((0xfff80003U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
           | (0x7fffcU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
                          & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                               >> 2U)))) 
                             << 2U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
        = ((0x7ffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
           | (0xfff80000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 3U)))) 
                                << 0x13U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
        = ((0xfffffff0U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
           | (0xfU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
                      & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                           >> 3U)))) 
                         >> 0xdU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
        = ((0xffe0000fU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
           | (0x1ffff0U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
                           & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                >> 4U)))) 
                              << 4U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
        = ((0x1fffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
           | (0xffe00000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 5U)))) 
                                << 0x15U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
        = ((0xffffffc0U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
           | (0x3fU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
                       & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                            >> 5U)))) 
                          >> 0xbU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
        = ((0xff80003fU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
           | (0x7fffc0U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
                           & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                >> 6U)))) 
                              << 6U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
        = ((0x7fffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
           | (0xff800000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 7U)))) 
                                << 0x17U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
        = ((0x1ffff00U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
           | (0xffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[4U] 
                       & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                            >> 7U)))) 
                          >> 9U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
        = ((0xffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
           | (0x1ffff00U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[4U] 
                            & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                 >> 8U)))) 
                               << 8U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
        = ((0xfffc0000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U]) 
           | (0x3ffffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[0U] 
                          & (- (IData)((1U & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
        = ((0x3ffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U]) 
           | (0xfffc0000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[0U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 1U)))) 
                                << 0x12U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
        = ((0xfffffff0U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
           | (0xfU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
                      & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                           >> 1U)))) 
                         >> 0xeU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
        = ((0xffc0000fU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
           | (0x3ffff0U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
                           & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                >> 2U)))) 
                              << 4U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
        = ((0x3fffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
           | (0xffc00000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 3U)))) 
                                << 0x16U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]) 
           | (0xffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
                       & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                            >> 3U)))) 
                          >> 0xaU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
        = ((0xfc0000ffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]) 
           | (0x3ffff00U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
                            & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                 >> 4U)))) 
                               << 8U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
        = ((0x3ffffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]) 
           | (0xfc000000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 5U)))) 
                                << 0x1aU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
        = ((0xfffff000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
           | (0xfffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
                        & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                             >> 5U)))) 
                           >> 6U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
        = ((0xc0000fffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
           | (0x3ffff000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 6U)))) 
                                << 0xcU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
        = ((0x3fffffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
           | (0xc0000000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 7U)))) 
                                << 0x1eU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
        = ((0xffff0000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U]) 
           | (0xffffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[4U] 
                         & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                              >> 7U)))) 
                            >> 2U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
        = ((0xffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U]) 
           | (0xffff0000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[4U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 8U)))) 
                                << 0x10U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[5U] 
        = (3U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[5U] 
                 & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                      >> 8U)))) >> 0x10U)));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
              | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                        >> 0x10U)) | (1U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x10U)) | ((0x10U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x100U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
              | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                           >> 0x10U)) | (0x40U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x11U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x11U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 1U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x11U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 1U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x11U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x12U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 2U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x12U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 2U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x12U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x13U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x13U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 3U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 3U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x13U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x14U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x14U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 4U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 4U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x14U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x15U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 5U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 5U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 5U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x15U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 5U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x16U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 6U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 6U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x16U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x17U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 7U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 7U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x17U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x18U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 8U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 8U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x18U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x19U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 9U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x19U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 9U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                              << 7U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 0xaU)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x1aU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xaU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 6U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xbU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xbU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 5U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xcU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xcU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 4U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1dU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xdU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                            << 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xdU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 3U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1eU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xeU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                            << 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xeU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 2U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                         << 1U)) | 
                                  (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 1U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xfU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                            << 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xfU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 1U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0x10U)) | ((2U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
                                   | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
              | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                           >> 0x10U)) | (8U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0x10U)) | ((0x80U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                   >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x11U)) | 
                                (1U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 4U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 8U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                              >> 0x17U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 5U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 9U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                              >> 0x18U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x13U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 6U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xaU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 7U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x14U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 7U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xbU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 6U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x15U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 8U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xcU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 5U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x16U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 5U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 9U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xdU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 4U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x17U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xaU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x19U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xeU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 3U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x18U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xbU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xfU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 2U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x19U)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xcU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x10U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 << 1U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xdU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x11U)) | ((0x80U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U]) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 1U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xeU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            << 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x12U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 1U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
              | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                           >> 0xfU)) | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                              << 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x13U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 2U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x11U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1dU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 1U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x10U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            << 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x14U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 3U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x12U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1eU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 2U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x11U)) 
                                   | (8U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x15U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 4U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x13U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                          << 1U)) | 
                                   (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                          >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 3U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x12U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x16U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 5U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x14U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x11U)) | ((2U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
                                   | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 4U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x13U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x17U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 6U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x15U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                          >> 1U)) | 
                                   (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                          >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x14U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[5U] 
                         << 8U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                              >> 7U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 0x16U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                          >> 2U)) | 
                                   (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                          >> 0x11U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 6U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x15U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[5U] 
                         << 7U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                              >> 8U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 0x17U)))));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1fff8U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather))) 
               << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather))) 
                          << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)))));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1ffc7U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)))) 
              << 3U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1fe3fU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)))) 
              << 6U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1f1ffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)))) 
              << 9U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x18fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)))) 
              << 0xcU));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x7fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather))) 
                << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather))) 
              << 0xfU));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3fff8U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather))) 
               << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather))) 
                          << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)))));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3ffc7U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)))) 
              << 3U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3fe3fU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)))) 
              << 6U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3f1ffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)))) 
              << 9U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x38fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)))) 
              << 0xcU));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x7fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)))) 
              << 0xfU));
    vlSelf->__PVT__tlb__DOT__r_entry = (((QData)((IData)(vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o)) 
                                         << 0x12U) 
                                        | (QData)((IData)(vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o)));
    vlSelf->__Vcellinp__entry_reg__data_i = (((QData)((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                               & (0U 
                                                                  != (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo))))) 
                                              << 0x23U) 
                                             | (0x7ffffffffULL 
                                                & (((QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__tlb__DOT__r_entry) 
                                                                      << 3U) 
                                                                     | (IData)(
                                                                               (vlSelf->__PVT__tlb__DOT__r_entry 
                                                                                >> 0x20U))))) 
                                                    << 4U) 
                                                   | ((QData)((IData)(vlSelf->__PVT__tlb__DOT__r_entry)) 
                                                      >> 0x1cU))));
    vlSelf->__Vcellout__entry_reg__data_o = ((IData)(vlSelf->__PVT__tlb_bypass_reg__DOT__data_r)
                                              ? vlSelf->__PVT__entry_reg__DOT__dff__DOT__data_r
                                              : vlSelf->__Vcellinp__entry_reg__data_i);
    if ((0x10U & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) {
        vlSelf->__PVT__tlb_v_lo = (1U & (IData)((vlSelf->__Vcellout__entry_reg__data_o 
                                                 >> 0x23U)));
        vlSelf->__PVT__tlb_entry_lo = (0x7ffffffffULL 
                                       & vlSelf->__Vcellout__entry_reg__data_o);
    } else {
        vlSelf->__PVT__tlb_v_lo = (1U & ((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                         >> 3U));
        vlSelf->__PVT__tlb_entry_lo = (0x7ffffffffULL 
                                       & ((QData)((IData)(
                                                          ((IData)(vlSelf->__PVT__etag_reg__DOT__data_r) 
                                                           << 4U))) 
                                          << 3U));
    }
    vlSelf->__PVT__data_priv_page_fault = ((IData)(vlSelf->__PVT__tlb_v_lo) 
                                           & (((IData)(
                                                       (0x20U 
                                                        == 
                                                        (0xe0U 
                                                         & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r)))) 
                                               & (IData)(
                                                         (vlSelf->__PVT__tlb_entry_lo 
                                                          >> 3U))) 
                                              | (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x60U 
                                                           & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) 
                                                         & (~ 
                                                            (vlSelf->__PVT__tlb_entry_lo 
                                                             >> 3U))))));
    vlSelf->__PVT__instr_page_fault_v = ((IData)((0x14U 
                                                  == 
                                                  (0x14U 
                                                   & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r)))) 
                                         & ((IData)(vlSelf->__PVT__tlb_v_lo) 
                                            & (((IData)(
                                                        ((0x20U 
                                                          == 
                                                          (0x60U 
                                                           & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) 
                                                         & (vlSelf->__PVT__tlb_entry_lo 
                                                            >> 3U))) 
                                                | (IData)(
                                                          ((0U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) 
                                                           & (~ 
                                                              (vlSelf->__PVT__tlb_entry_lo 
                                                               >> 3U))))) 
                                               | (~ (IData)(
                                                            (vlSelf->__PVT__tlb_entry_lo 
                                                             >> 2U))))));
}

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu2__0(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu2__0\n"); );
    // Init
    CData/*0:0*/ tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o;
    CData/*0:0*/ tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__2__KET____DOT__nz__DOT__mux__data_o;
    CData/*7:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
    CData/*7:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
    CData/*7:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
    // Body
    tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o 
        = (1U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                 >> (7U & ((IData)(1U) + (1U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_way_lo) 
                                                >> 2U))))));
    tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__2__KET____DOT__nz__DOT__mux__data_o 
        = (1U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                 >> (7U & ((IData)(3U) + (3U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_way_lo) 
                                                >> 1U))))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo 
        = ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
           & (- (IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fU & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 1U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fU & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 0xaU));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfU & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                   >> 0x14U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo 
        = ((0xf8U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                          >> 0x1dU)) 
                                   | (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                      >> 0x1fU))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo 
        = ((0xc7U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                               >> 0x19U)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo)) 
           | ((0x80U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                        >> 0x11U)) | (0x40U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                               >> 0x13U))));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v);
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                 >> 2U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                 >> 4U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                 >> 6U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                  >> 9U)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                                   >> 8U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                                     >> 0xcU)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                                      >> 0x10U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xfffffeffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | (0x100U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xfffffbffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | (0x400U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xffffefffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | (0x1000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                         << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xffffbfffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | (0x4000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
                         << 7U)));
    vlSelf->__PVT__hio_fault_v = ((((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                    >> 2U) & (0U != 
                                              (0x7fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__tlb_entry_lo 
                                                          >> 0x1cU))))) 
                                  | (0U != (0x7fU & 
                                            ((IData)(
                                                     (vlSelf->__PVT__tlb_entry_lo 
                                                      >> 0x1cU)) 
                                             & (~ vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__cfgs__DOT__cfg_bus_cast_o[0U])))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_way_lo 
        = ((4U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                  << 2U)) | (((IData)(tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o) 
                              << 1U) | (IData)(tlb__DOT__replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__2__KET____DOT__nz__DOT__mux__data_o)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffff00ffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff00U & ((vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                          | (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                         << 8U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xff00ffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff0000U & ((0xffff0000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                           << 8U)) 
                           | ((IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                              << 0x10U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | (0xff000000U & ((0xff000000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                             << 8U)) 
                             | ((IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted) 
                                << 0x18U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo 
        = ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo) 
           & (1U | (0xfeU & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo)) 
                             << 1U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xfffffeffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xfffffbffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xffffefffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xffffbfffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xfffeffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xffefffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xfeffffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xfffcffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x500U 
                                                   & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr))) 
                                         << 0x10U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xffcfffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr))) 
                                          << 0x14U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
        = ((0xf8ffffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
                                               << 8U) 
                                              | (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
                                                 << 4U)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li 
        = ((0U == (((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                    - (IData)(1U)) & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))
            ? (7U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr 
                     >> 0x18U)) : 0U);
    vlSelf->__PVT__instr_access_fault_v = (((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                            >> 2U) 
                                           & (IData)(vlSelf->__PVT__hio_fault_v));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x7dU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (2U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                     & (~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                           >> 2U))) << 1U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x7bU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
               & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                  >> 2U)) << 2U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x77U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (8U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                     << 2U) & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                                   >> 1U)) << 3U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x6fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (0x10U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                        & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li)) 
                       << 3U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x5fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (0x20U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                        << 3U) & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                                      >> 1U)) << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo)) 
           | (0x40U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                        << 4U) & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                                  << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x7eU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (1U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                    & (~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                          >> 2U)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x7dU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (2U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                    & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                           >> 1U)) << 1U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x7bU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (4U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                    & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li) 
                           >> 1U)) << 2U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x77U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (8U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                    & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li)) 
                       << 3U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x6fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (0x10U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                       & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li)) 
                          << 4U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x5fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | (0x20U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                       & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li)) 
                          << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)) 
           | ((IData)((((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
                        >> 6U) & (~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li)))) 
              << 6U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v);
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                 >> 2U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                 >> 4U));
    __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                 >> 6U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                  >> 9U)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                                   >> 8U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                                     >> 0xcU)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                                      >> 0x10U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xfffffeffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | (0x100U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xfffffbffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | (0x400U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xffffefffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | (0x1000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                         << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xffffbfffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | (0x4000U & (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
                         << 7U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo 
        = ((0x7cU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo)) 
           | ((2U & (((2U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                       ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                          >> 1U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                    >> 1U)) << 1U)) 
              | (1U & ((1U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                        ? (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo)
                        : (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo 
        = ((0x73U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo)) 
           | ((8U & (((8U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                       ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                          >> 3U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                    >> 3U)) << 3U)) 
              | (4U & (((4U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                         ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                            >> 2U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                      >> 2U)) << 2U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo 
        = ((0x4fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo)) 
           | ((0x20U & (((0x20U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                          ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                             >> 5U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                       >> 5U)) << 5U)) 
              | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                            ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                               >> 4U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                         >> 4U)) << 4U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo))
                         ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo) 
                            >> 6U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                                      >> 6U)) << 6U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xfffffeffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xfffffbffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xffffefffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xffffbfffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xfffeffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xffefffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v 
        = ((0xfeffffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v) 
           | ((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xfffcffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | ((0x20000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x500U 
                                                   & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr))) 
                                         << 0x10U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xffcfffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | ((0x200000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x5000U 
                                                    & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr))) 
                                          << 0x14U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
        = ((0xf8ffffffU & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr) 
           | ((0x4000000U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
                                               << 8U) 
                                              | (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
                                                 << 4U)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo 
        = (7U & ((0x80U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo))
                  ? ((0U == (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo) 
                              - (IData)(1U)) & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo)))
                      ? (vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr 
                         >> 0x18U) : 0U) : (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_way_lo)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x7dU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (2U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                     & (~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                           >> 2U))) << 1U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x7bU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
               & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                  >> 2U)) << 2U));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x77U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (8U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                     << 2U) & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                                   >> 1U)) << 3U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x6fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (0x10U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                        & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo)) 
                       << 3U)));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x5fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (0x20U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                        << 3U) & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                                      >> 1U)) << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo)) 
           | (0x40U & (((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                        << 4U) & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                                  << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x7eU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (1U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                    & (~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                          >> 2U)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x7dU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (2U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                    & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                           >> 1U)) << 1U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x7bU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (4U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                    & ((~ ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo) 
                           >> 1U)) << 2U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x77U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (8U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                    & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo)) 
                       << 3U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x6fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (0x10U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                       & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo)) 
                          << 4U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x5fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | (0x20U & ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                       & ((~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo)) 
                          << 5U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)) 
           | ((IData)((((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                        >> 6U) & (~ (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo)))) 
              << 6U));
}

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu2__1(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu2__1\n"); );
    // Body
    vlSelf->w_vtag_li = (0x7ffffffU & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fill_v)
                                        ? ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[2U] 
                                            << 1U) 
                                           | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT____Vcellout__fifo_mem__r_data_o[1U] 
                                              >> 0x1fU))
                                        : (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__r_eaddr_li2 
                                                   >> 0xcU))));
    vlSelf->__PVT__tlb_bypass = ((((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fill_v)) 
                                   & (0x18U == (0x18U 
                                                & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r)))) 
                                  & ((0x7ffffffU & (IData)(
                                                           (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__r_eaddr_li2 
                                                            >> 0xcU))) 
                                     == (0x7ffffffU 
                                         & (IData)(vlSelf->__PVT__etag_reg__DOT__data_r)))) 
                                 & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_r));
    vlSelf->__Vcellinp__tlb__v_i = ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_r) 
                                    & (~ (IData)(vlSelf->__PVT__tlb_bypass)));
    vlSelf->tlb__DOT__w_v_li = ((IData)(vlSelf->__Vcellinp__tlb__v_i) 
                                & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fill_v));
}

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu2__1(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__immu2__1\n"); );
    // Body
    vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li = (0xffU 
                                              & ((- (IData)((IData)(vlSelf->tlb__DOT__w_v_li))) 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo))));
    vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li = (0xffU 
                                              & (((- (IData)((IData)(vlSelf->tlb__DOT__w_v_li))) 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo))) 
                                                 | (- (IData)((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo 
        = ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
           & (- (IData)((IData)(vlSelf->tlb__DOT__w_v_li))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo 
        = ((0x7cU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo)) 
           | ((2U & (((2U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                       ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                          >> 1U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                    >> 1U)) << 1U)) 
              | (1U & ((1U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                        ? (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo)
                        : (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo)))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo 
        = ((0x73U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo)) 
           | ((8U & (((8U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                       ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                          >> 3U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                    >> 3U)) << 3U)) 
              | (4U & (((4U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                         ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                            >> 2U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                      >> 2U)) << 2U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo 
        = ((0x4fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo)) 
           | ((0x20U & (((0x20U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                          ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                             >> 5U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                       >> 5U)) << 5U)) 
              | (0x10U & (((0x10U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                            ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                               >> 4U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                         >> 4U)) << 4U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo)) 
           | (0x40U & (((0x40U & (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                         ? ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo) 
                            >> 6U) : ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo) 
                                      >> 6U)) << 6U)));
}

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__0(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha9d7a740__0;
    VlWide<4>/*127:0*/ __Vtemp_h55f279e8__0;
    VlWide<4>/*127:0*/ __Vtemp_h4df7cd4c__0;
    VlWide<3>/*95:0*/ __Vtemp_h63b54f61__0;
    VlWide<4>/*127:0*/ __Vtemp_hc3428c74__0;
    VlWide<4>/*127:0*/ __Vtemp_h797d6782__0;
    VlWide<3>/*95:0*/ __Vtemp_hb98829b5__0;
    VlWide<4>/*127:0*/ __Vtemp_h813b877d__0;
    VlWide<4>/*127:0*/ __Vtemp_he53ec450__0;
    VlWide<3>/*95:0*/ __Vtemp_h4cee86f8__0;
    VlWide<4>/*127:0*/ __Vtemp_hf30fd8ed__0;
    VlWide<4>/*127:0*/ __Vtemp_hf95d9e6f__0;
    VlWide<3>/*95:0*/ __Vtemp_hbdad16ab__0;
    VlWide<4>/*127:0*/ __Vtemp_h1800452d__0;
    VlWide<4>/*127:0*/ __Vtemp_ha92975a1__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ce3e9a9__0;
    VlWide<4>/*127:0*/ __Vtemp_h0b54e23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h67e65fe8__0;
    VlWide<3>/*95:0*/ __Vtemp_h3eb4dec6__0;
    VlWide<4>/*127:0*/ __Vtemp_h1cd213e6__0;
    VlWide<4>/*127:0*/ __Vtemp_hede86327__0;
    VlWide<3>/*95:0*/ __Vtemp_had281b91__0;
    VlWide<4>/*127:0*/ __Vtemp_h99f836ad__0;
    VlWide<4>/*127:0*/ __Vtemp_hc17e0a69__0;
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__tlb_bypass_reg__DOT__data_r)))) {
        vlSelf->__PVT__entry_reg__DOT__dff__DOT__data_r 
            = vlSelf->__Vcellinp__entry_reg__data_i;
    }
    vlSelf->__PVT__r_misaligned_r = (1U & ((1U == (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__size))
                                            ? (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr)
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__size))
                                                ? (0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr)))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__size)) 
                                                   & (0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr)))))));
    if (vlSymsp->TOP.reset_i) {
        vlSelf->__PVT__etag_reg__DOT__data_r = 0ULL;
        vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
    } else {
        vlSelf->__PVT__etag_reg__DOT__data_r = (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                >> 0xcU);
        if (((0U != (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
             | (IData)(vlSelf->tlb__DOT__w_v_li))) {
            vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r 
                = vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo;
        }
        vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
            = ((vlSelf->w_vtag_li << 1U) | (IData)(vlSelf->tlb__DOT__r_v_li));
        if ((0x80U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                            >> 0xaU)));
        }
        if ((0x40U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                            >> 0xaU)));
        }
        if ((0x20U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                            >> 0xaU)));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                            >> 0xaU)));
        }
        if ((8U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                            >> 0xaU)));
        }
        if ((4U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                            >> 0xaU)));
        }
        if ((2U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                            >> 0xaU)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                            >> 0xaU)));
        }
    }
    if ((0x80U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_ha9d7a740__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                  >> 0x13U))));
        __Vtemp_ha9d7a740__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                    >> 0x13U)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                            << 0xdU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                              >> 0x13U))) 
                                                       >> 0x20U)));
        __Vtemp_ha9d7a740__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                           << 0xdU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                             >> 0x13U)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                              << 0xdU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                                >> 0x13U))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h55f279e8__0, __Vtemp_ha9d7a740__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h4df7cd4c__0, __Vtemp_h55f279e8__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h4df7cd4c__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h4df7cd4c__0[1U])) 
                                               >> 3U)));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h63b54f61__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                  >> 0x13U))));
        __Vtemp_h63b54f61__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                    >> 0x13U)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                            << 0xdU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                              >> 0x13U))) 
                                                       >> 0x20U)));
        __Vtemp_h63b54f61__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                           << 0xdU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                             >> 0x13U)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                              << 0xdU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                                >> 0x13U))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_hc3428c74__0, __Vtemp_h63b54f61__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h797d6782__0, __Vtemp_hc3428c74__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h797d6782__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h797d6782__0[1U])) 
                                               >> 3U)));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_hb98829b5__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                  >> 0x13U))));
        __Vtemp_hb98829b5__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                    >> 0x13U)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                            << 0xdU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                              >> 0x13U))) 
                                                       >> 0x20U)));
        __Vtemp_hb98829b5__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                           << 0xdU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                             >> 0x13U)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                              << 0xdU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                                >> 0x13U))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h813b877d__0, __Vtemp_hb98829b5__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_he53ec450__0, __Vtemp_h813b877d__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_he53ec450__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_he53ec450__0[1U])) 
                                               >> 3U)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h4cee86f8__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                  >> 0x13U))));
        __Vtemp_h4cee86f8__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                    >> 0x13U)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                            << 0xdU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                              >> 0x13U))) 
                                                       >> 0x20U)));
        __Vtemp_h4cee86f8__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                           << 0xdU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                             >> 0x13U)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                              << 0xdU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                                >> 0x13U))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_hf30fd8ed__0, __Vtemp_h4cee86f8__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_hf95d9e6f__0, __Vtemp_hf30fd8ed__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_hf95d9e6f__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_hf95d9e6f__0[1U])) 
                                               >> 3U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_hbdad16ab__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                  >> 0x13U))));
        __Vtemp_hbdad16ab__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                    >> 0x13U)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                            << 0xdU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                              >> 0x13U))) 
                                                       >> 0x20U)));
        __Vtemp_hbdad16ab__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                           << 0xdU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                             >> 0x13U)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                              << 0xdU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                                >> 0x13U))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h1800452d__0, __Vtemp_hbdad16ab__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_ha92975a1__0, __Vtemp_h1800452d__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_ha92975a1__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_ha92975a1__0[1U])) 
                                               >> 3U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h2ce3e9a9__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                  >> 0x13U))));
        __Vtemp_h2ce3e9a9__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                    >> 0x13U)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                            << 0xdU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                              >> 0x13U))) 
                                                       >> 0x20U)));
        __Vtemp_h2ce3e9a9__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                           << 0xdU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                             >> 0x13U)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                              << 0xdU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                                >> 0x13U))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h0b54e23f__0, __Vtemp_h2ce3e9a9__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_h67e65fe8__0, __Vtemp_h0b54e23f__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_h67e65fe8__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_h67e65fe8__0[1U])) 
                                               >> 3U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_h3eb4dec6__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                  >> 0x13U))));
        __Vtemp_h3eb4dec6__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                    >> 0x13U)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                            << 0xdU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                              >> 0x13U))) 
                                                       >> 0x20U)));
        __Vtemp_h3eb4dec6__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                           << 0xdU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                             >> 0x13U)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                              << 0xdU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                                >> 0x13U))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h1cd213e6__0, __Vtemp_h3eb4dec6__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_hede86327__0, __Vtemp_h1cd213e6__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_hede86327__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_hede86327__0[1U])) 
                                               >> 3U)));
    }
    if ((1U & (IData)(vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li))) {
        __Vtemp_had281b91__0[0U] = (IData)((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                  >> 0x13U))));
        __Vtemp_had281b91__0[1U] = (((IData)((0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                    >> 0x13U)))) 
                                     << 3U) | (IData)(
                                                      ((0x7ffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                            << 0xdU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                              >> 0x13U))) 
                                                       >> 0x20U)));
        __Vtemp_had281b91__0[2U] = (0x3fU & (((IData)(
                                                      (0x7ffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                           << 0xdU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                             >> 0x13U)))) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((0x7ffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[1U])) 
                                                              << 0xdU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])) 
                                                                >> 0x13U))) 
                                                         >> 0x20U)) 
                                                << 3U)));
        VL_EXTEND_WW(105,70, __Vtemp_h99f836ad__0, __Vtemp_had281b91__0);
        VL_SHIFTL_WWI(105,105,6, __Vtemp_hc17e0a69__0, __Vtemp_h99f836ad__0, 0x1cU);
        vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffffULL & (((QData)((IData)(__Vtemp_hc17e0a69__0[2U])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               __Vtemp_hc17e0a69__0[1U])) 
                                               >> 3U)));
    }
    if ((IData)((((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                  >> 7U) & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                               >> 0xaU))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 6U) & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                             >> 0xaU))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 5U) & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                             >> 0xaU))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 4U) & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                             >> 0xaU))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 3U) & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                             >> 0xaU))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 2U) & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                             >> 0xaU))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & (((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
                >> 1U) & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                             >> 0xaU))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    if ((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li) 
               & (~ (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                     >> 0xaU))))) {
        vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSelf->w_vtag_li;
    }
    vlSelf->__PVT__tlb_bypass_reg__DOT__data_r = ((~ (IData)(vlSymsp->TOP.reset_i)) 
                                                  & (IData)(vlSelf->__PVT__tlb_bypass));
    vlSelf->__PVT__eaddr_fault_v = ((~ (IData)((0x3ffffffU 
                                                == 
                                                (0x3ffffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__etag_reg__DOT__data_r 
                                                            >> 0x1aU)))))) 
                                    & (0U != (0x3ffffffU 
                                              & (IData)(
                                                        (vlSelf->__PVT__etag_reg__DOT__data_r 
                                                         >> 0x1aU)))));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U] = (
                                                   (0x7fffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x17U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[4U] = (0xffU 
                                                   & ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      >> 9U));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U] = ((0x3fffffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x1eU));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[4U] = (0xffffU 
                                                  & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r) 
                                                     >> 2U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U] = (
                                                   (0xff80003fU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U]) 
                                                   | (0x7fffc0U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         << 6U)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U] = ((0xc0000fffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U]) 
                                                  | (0x3ffff000U 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r) 
                                                        << 0xcU)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U] = (
                                                   (0x1fffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x15U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U] = (
                                                   (0xffffffc0U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U]) 
                                                   | (0x3fU 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         >> 0xbU)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U] = ((0x3ffffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x1aU));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U] = ((0xfffff000U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U]) 
                                                  | (0xfffU 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r) 
                                                        >> 6U)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U] = (
                                                   (0xffe0000fU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U]) 
                                                   | (0x1ffff0U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         << 4U)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U] = ((0xfc0000ffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U]) 
                                                  | (0x3ffff00U 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r) 
                                                        << 8U)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U] = (
                                                   (0x7ffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x13U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U] = (
                                                   (0xfffffff0U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U]) 
                                                   | (0xfU 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         >> 0xdU)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U] = ((0x3fffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x16U));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U] = ((0xffffff00U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U]) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r) 
                                                        >> 0xaU)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U] = (
                                                   (0xfff80003U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U]) 
                                                   | (0x7fffcU 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         << 2U)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U] = ((0xffc0000fU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U]) 
                                                  | (0x3ffff0U 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r) 
                                                        << 4U)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U] = (
                                                   (0x1ffffU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U]) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
                                                               >> 0x12U)) 
                                                      << 0x11U));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U] = (
                                                   (0xfffffffcU 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U]) 
                                                   | (3U 
                                                      & ((IData)(
                                                                 (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
                                                                  >> 0x12U)) 
                                                         >> 0xfU)));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U] = ((0x3ffffU 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U]) 
                                                  | ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r) 
                                                     << 0x12U));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U] = ((0xfffffff0U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U]) 
                                                  | (0xfU 
                                                     & ((IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r) 
                                                        >> 0xeU)));
    vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U] = (
                                                   (0xfffe0000U 
                                                    & vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U]) 
                                                   | (0x1ffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r 
                                                                 >> 0x12U))));
    vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U] = ((0xfffc0000U 
                                                   & vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U]) 
                                                  | (0x3ffffU 
                                                     & (IData)(vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r)));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
        = ((0xfffU & vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U]) 
           | ((IData)((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                        << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r)))) 
              << 0xcU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[4U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                      << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r)))) 
            >> 0x14U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                                    << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r))) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
        = (((0xffcU & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                       << 2U)) | ((IData)(((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r)) 
                                             << 0x1bU) 
                                            | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r))) 
                                           >> 0x20U)) 
                                  >> 0x14U)) | ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                                 << 0x1dU) 
                                                | (0xfffff000U 
                                                   & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                                                      << 2U))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[6U] 
        = (0xffffffU & (((0xfffU & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                    >> 3U)) | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                                               >> 0x1eU)) 
                        | (0x1ffff000U & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                          >> 3U))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r)) 
                    << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[1U] 
        = ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
            << 0x16U) | (IData)(((((QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r)) 
                                   << 0x1bU) | (QData)((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r))) 
                                 >> 0x20U)));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[2U] 
        = ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
            << 0x11U) | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
                         >> 0xaU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
        = ((0xfffff000U & vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U]) 
           | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
              >> 0xfU));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r 
        = ((0xfU & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
           | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r) 
               << 7U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r) 
                          << 6U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r) 
                                     << 5U) | ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r) 
                                               << 4U)))));
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r 
        = ((0xf0U & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
           | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r) 
               << 3U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r) 
                          << 2U) | (((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                     << 1U) | (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r)))));
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[0U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[0U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[1U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[2U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_high_r[3U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[4U] 
        = ((vlSelf->__PVT__tlb__DOT__data_1g_high_r 
            << 8U) | vlSelf->__PVT__tlb__DOT__data_4k_high_r[4U]);
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[0U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[0U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[1U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[2U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
        = vlSelf->__PVT__tlb__DOT__data_4k_low_r[3U];
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[4U] 
        = ((0xffff0000U & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                           << 0xfU)) | vlSelf->__PVT__tlb__DOT__data_4k_low_r[4U]);
    vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[5U] 
        = (3U & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                 >> 0x11U));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0xfcU 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((2U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 1U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)))));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0xf3U 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((8U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 3U)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                           >> 2U)) 
                                                         << 2U))));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0xcfU 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((0x20U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 5U)) 
                                                       << 5U)) 
                                                   | (0x10U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                           >> 4U)) 
                                                         << 4U))));
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = ((0x3fU 
                                                 & (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                         >> 7U)) 
                                                       << 7U)) 
                                                   | (0x40U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r) 
                                                           >> 6U)) 
                                                         << 6U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xfeU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | ((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                      & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                     & ((0x7ffffffU 
                                                         & vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[0U]) 
                                                        == 
                                                        (0x7ffffffU 
                                                         & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                            >> 1U)))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xfdU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffffeU 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 1U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[1U] 
                                                                 << 5U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[0U] 
                                                                   >> 0x1bU))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 1U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xfbU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffffcU 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 2U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[2U] 
                                                                 << 0xaU) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[1U] 
                                                                   >> 0x16U))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 2U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xf7U 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffff8U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 3U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
                                                                 << 0xfU) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[2U] 
                                                                   >> 0x11U))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 3U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xefU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xfffffff0U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 4U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[4U] 
                                                                 << 0x14U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[3U] 
                                                                   >> 0xcU))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 4U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xdfU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xffffffe0U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 5U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
                                                                 << 0x19U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[4U] 
                                                                   >> 7U))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 5U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0xbfU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xffffffc0U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 6U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
                                                                >> 2U)) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 6U))));
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = ((0x7fU 
                                                   & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)) 
                                                  | (0xffffff80U 
                                                     & (((vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                          << 7U) 
                                                         & (IData)(vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r)) 
                                                        & (((0x7ffffffU 
                                                             & ((vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[6U] 
                                                                 << 3U) 
                                                                | (vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r[5U] 
                                                                   >> 0x1dU))) 
                                                            == 
                                                            (0x7ffffffU 
                                                             & (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                                >> 1U))) 
                                                           << 7U))));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
           | VL_STREAML_FAST_III(8, (IData)(vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo), 0));
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v) 
           | (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
        = ((0xfffe0000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U]) 
           | (0x1ffffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[0U] 
                          & (- (IData)((1U & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
        = ((0x1ffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U]) 
           | (0xfffe0000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[0U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 1U)))) 
                                << 0x11U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
        = ((0xfffffffcU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
           | (3U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
                    & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                         >> 1U)))) 
                       >> 0xfU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
        = ((0xfff80003U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
           | (0x7fffcU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
                          & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                               >> 2U)))) 
                             << 2U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
        = ((0x7ffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
           | (0xfff80000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[1U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 3U)))) 
                                << 0x13U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
        = ((0xfffffff0U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
           | (0xfU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
                      & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                           >> 3U)))) 
                         >> 0xdU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
        = ((0xffe0000fU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
           | (0x1ffff0U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
                           & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                >> 4U)))) 
                              << 4U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
        = ((0x1fffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
           | (0xffe00000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[2U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 5U)))) 
                                << 0x15U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
        = ((0xffffffc0U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
           | (0x3fU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
                       & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                            >> 5U)))) 
                          >> 0xbU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
        = ((0xff80003fU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
           | (0x7fffc0U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
                           & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                >> 6U)))) 
                              << 6U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
        = ((0x7fffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
           | (0xff800000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[3U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 7U)))) 
                                << 0x17U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
        = ((0x1ffff00U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
           | (0xffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[4U] 
                       & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                            >> 7U)))) 
                          >> 9U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
        = ((0xffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
           | (0x1ffff00U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i[4U] 
                            & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                 >> 8U)))) 
                               << 8U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
        = ((0xfffc0000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U]) 
           | (0x3ffffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[0U] 
                          & (- (IData)((1U & (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
        = ((0x3ffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U]) 
           | (0xfffc0000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[0U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 1U)))) 
                                << 0x12U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
        = ((0xfffffff0U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
           | (0xfU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
                      & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                           >> 1U)))) 
                         >> 0xeU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
        = ((0xffc0000fU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
           | (0x3ffff0U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
                           & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                >> 2U)))) 
                              << 4U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
        = ((0x3fffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
           | (0xffc00000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[1U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 3U)))) 
                                << 0x16U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
        = ((0xffffff00U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]) 
           | (0xffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
                       & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                            >> 3U)))) 
                          >> 0xaU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
        = ((0xfc0000ffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]) 
           | (0x3ffff00U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
                            & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                 >> 4U)))) 
                               << 8U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
        = ((0x3ffffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]) 
           | (0xfc000000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[2U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 5U)))) 
                                << 0x1aU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
        = ((0xfffff000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
           | (0xfffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
                        & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                             >> 5U)))) 
                           >> 6U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
        = ((0xc0000fffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
           | (0x3ffff000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 6U)))) 
                                << 0xcU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
        = ((0x3fffffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
           | (0xc0000000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[3U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 7U)))) 
                                << 0x1eU))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
        = ((0xffff0000U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U]) 
           | (0xffffU & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[4U] 
                         & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                              >> 7U)))) 
                            >> 2U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
        = ((0xffffU & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U]) 
           | (0xffff0000U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[4U] 
                             & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                                  >> 8U)))) 
                                << 0x10U))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[5U] 
        = (3U & (vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i[5U] 
                 & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo) 
                                      >> 8U)))) >> 0x10U)));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
              | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                        >> 0x10U)) | (1U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x10U)) | ((0x10U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x100U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
              | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                           >> 0x10U)) | (0x40U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 1U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x11U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x11U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 1U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x11U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 1U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x11U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x12U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 2U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x12U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 2U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x12U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x13U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x13U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 3U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 3U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x13U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x14U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x14U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 4U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 4U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x14U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x15U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 5U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 5U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 5U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x15U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 5U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x16U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 6U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 6U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x16U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x17U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 7U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 7U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x17U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x18U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 8U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 8U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                              >> 0x18U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 0x19U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                       >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 9U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x19U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 9U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                              << 7U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                                >> 0xaU)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                               >> 0x1aU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xaU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 6U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xbU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xbU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 5U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xcU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xcU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 4U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1dU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xdU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                            << 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xdU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 3U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0x1eU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                           >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xeU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                            << 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xeU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 2U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                                         << 1U)) | 
                                  (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                         >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                        << 1U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                             >> 0xfU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                                            << 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0xfU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                                                << 1U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                  >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U] 
                     >> 0x10U)) | ((2U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[1U]) 
                                   | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[0U] 
                                            >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U]) 
              | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U] 
                           >> 0x10U)) | (8U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[2U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U] 
                         >> 0x10U)) | ((0x80U & vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[4U]) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked[3U] 
                                                   >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 2U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x11U)) | 
                                (1U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 4U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x13U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 8U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                              >> 0x17U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 3U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x16U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 5U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x14U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 9U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                              >> 0x18U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 4U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x13U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x17U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 6U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x15U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xaU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 7U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 5U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x14U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x18U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 7U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x16U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xbU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 6U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 6U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x15U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x19U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 8U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x17U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xcU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 5U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 7U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x16U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 5U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                                >> 9U)) 
                                      | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                               >> 0x18U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xdU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 4U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 8U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x17U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 6U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 5U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xaU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x19U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xeU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 3U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 9U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 0x18U)) | 
                                (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                       >> 7U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 4U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xbU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x1aU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0xfU)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                << 2U)) 
                                      | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                  >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xaU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x19U)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 8U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 3U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xcU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x1bU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x10U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 << 1U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xbU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1aU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 9U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 2U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xdU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                            >> 0x1cU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x11U)) | ((0x80U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U]) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xcU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1bU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xaU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        << 1U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0xeU)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            << 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x12U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 1U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xdU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1cU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xbU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x20U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U]) 
              | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                           >> 0xfU)) | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                              << 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x13U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 2U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x11U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xeU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1dU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xcU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 1U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x10U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            << 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x14U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 3U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x12U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0xfU)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                         >> 0x1eU)) 
                                  | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                           >> 0xdU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 2U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x11U)) 
                                   | (8U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U]))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x15U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 4U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x13U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x10U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                          << 1U)) | 
                                   (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                          >> 0xeU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 3U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x12U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 1U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x16U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 5U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x14U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x11U)) | ((2U & vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U]) 
                                   | (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                            >> 0xfU)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 4U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x13U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 2U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                         >> 0x17U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                                 >> 6U)) 
                                       | (0x40U & (
                                                   vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                   >> 0x15U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x12U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                          >> 1U)) | 
                                   (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                          >> 0x10U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 5U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x14U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 3U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[5U] 
                         << 8U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                              >> 7U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 0x16U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((0x1f8U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | ((4U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                     >> 0x13U)) | ((2U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[1U] 
                                          >> 2U)) | 
                                   (1U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[0U] 
                                          >> 0x11U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((0x1c7U & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x20U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                        >> 6U)) | ((0x10U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                             >> 0x15U)) 
                                   | (8U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[2U] 
                                            >> 4U)))));
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather 
        = ((0x3fU & (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather)) 
           | ((0x100U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[5U] 
                         << 7U)) | ((0x80U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[4U] 
                                              >> 8U)) 
                                    | (0x40U & (vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked[3U] 
                                                >> 0x17U)))));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1fff8U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather))) 
               << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather))) 
                          << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather)))));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1ffc7U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather)))) 
              << 3U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1fe3fU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather)))) 
              << 6U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x1f1ffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather)))) 
              << 9U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x18fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather)))) 
              << 0xcU));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o 
        = ((0x7fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather))) 
                << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather))) 
              << 0xfU));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3fff8U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather))) 
               << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather))) 
                          << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather)))));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3ffc7U & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather)))) 
              << 3U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3fe3fU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather)))) 
              << 6U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x3f1ffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather)))) 
              << 9U));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x38fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather)))) 
              << 0xcU));
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o 
        = ((0x7fffU & vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o) 
           | ((((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather))) 
                << 2U) | (((IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather))) 
                           << 1U) | (0U != (IData)(vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather)))) 
              << 0xfU));
    vlSelf->__PVT__tlb__DOT__r_entry = (((QData)((IData)(vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o)) 
                                         << 0x12U) 
                                        | (QData)((IData)(vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o)));
    vlSelf->__Vcellinp__entry_reg__data_i = (((QData)((IData)(
                                                              (vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r 
                                                               & (0U 
                                                                  != (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo))))) 
                                              << 0x23U) 
                                             | (0x7ffffffffULL 
                                                & (((QData)((IData)(
                                                                    (((IData)(vlSelf->__PVT__tlb__DOT__r_entry) 
                                                                      << 3U) 
                                                                     | (IData)(
                                                                               (vlSelf->__PVT__tlb__DOT__r_entry 
                                                                                >> 0x20U))))) 
                                                    << 4U) 
                                                   | ((QData)((IData)(vlSelf->__PVT__tlb__DOT__r_entry)) 
                                                      >> 0x1cU))));
    vlSelf->__Vcellout__entry_reg__data_o = ((IData)(vlSelf->__PVT__tlb_bypass_reg__DOT__data_r)
                                              ? vlSelf->__PVT__entry_reg__DOT__dff__DOT__data_r
                                              : vlSelf->__Vcellinp__entry_reg__data_i);
}
