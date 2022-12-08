// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_mmu__Bz1_T8_TB0.h"

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__1(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___sequent__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__1\n"); );
    // Body
    vlSelf->__PVT__r_v_reg__DOT__data_r = ((IData)(vlSymsp->TOP.reset_i)
                                            ? 0U : 
                                           ((0x100U 
                                             & ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__trans_info_cast_o) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((IData)(
                                                           (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__trans_info_cast_o 
                                                            >> 1U)) 
                                                   << 7U)) 
                                               | ((0x60U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__trans_info_cast_o 
                                                               >> 0x1fU)) 
                                                      << 5U)) 
                                                  | ((0x10U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__trans_info_cast_o 
                                                                  >> 2U)) 
                                                         << 4U)) 
                                                     | (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dtlb_r_v) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__is_load) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__is_store))))))));
    vlSelf->r_load_misaligned_o = (IData)(((0xaU == 
                                            (0xaU & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) 
                                           & (IData)(vlSelf->__PVT__r_misaligned_r)));
    vlSelf->r_store_misaligned_o = ((((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                      >> 3U) & (IData)(vlSelf->__PVT__r_misaligned_r)) 
                                    & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r));
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
    vlSelf->__PVT__load_page_fault_v = ((IData)((0x12U 
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
                                           | (IData)(vlSelf->__PVT__eaddr_fault_v)));
    vlSelf->__PVT__store_page_fault_v = ((((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                           >> 4U) & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r)) 
                                         & (((IData)(vlSelf->__PVT__data_priv_page_fault) 
                                             | ((IData)(vlSelf->__PVT__tlb_v_lo) 
                                                & (~ (IData)(
                                                             (0x12ULL 
                                                              == 
                                                              (0x12ULL 
                                                               & vlSelf->__PVT__tlb_entry_lo)))))) 
                                            | (IData)(vlSelf->__PVT__eaddr_fault_v)));
    vlSelf->r_load_page_fault_o = (((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                    >> 3U) & (IData)(vlSelf->__PVT__load_page_fault_v));
    vlSelf->r_store_page_fault_o = (((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                     >> 3U) & (IData)(vlSelf->__PVT__store_page_fault_v));
    vlSelf->__PVT__any_page_fault_v = (((IData)((0x14U 
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
                                                            >> 2U)))))) 
                                       | ((IData)(vlSelf->__PVT__load_page_fault_v) 
                                          | (IData)(vlSelf->__PVT__store_page_fault_v)));
}

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__1(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__1\n"); );
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
                                                    >> 0xcU))))));
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
    vlSelf->__PVT__load_access_fault_v = (((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                           >> 1U) & (IData)(vlSelf->__PVT__hio_fault_v));
    vlSelf->__PVT__store_access_fault_v = ((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                           & (IData)(vlSelf->__PVT__hio_fault_v));
    vlSelf->r_load_access_fault_o = (((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                      >> 3U) & (IData)(vlSelf->__PVT__load_access_fault_v));
    vlSelf->r_store_access_fault_o = (((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                       >> 3U) & (IData)(vlSelf->__PVT__store_access_fault_v));
    vlSelf->__PVT__any_access_fault_v = ((((IData)(vlSelf->__PVT__r_v_reg__DOT__data_r) 
                                           >> 2U) & (IData)(vlSelf->__PVT__hio_fault_v)) 
                                         | ((IData)(vlSelf->__PVT__load_access_fault_v) 
                                            | (IData)(vlSelf->__PVT__store_access_fault_v)));
    vlSelf->r_load_miss_o = (IData)(((((0xaU == (0xaU 
                                                 & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) 
                                       & (~ (IData)(vlSelf->__PVT__tlb_v_lo))) 
                                      & (~ (IData)(vlSelf->__PVT__any_access_fault_v))) 
                                     & (~ (IData)(vlSelf->__PVT__any_page_fault_v))));
    vlSelf->r_store_miss_o = (IData)(((((9U == (9U 
                                                & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) 
                                        & (~ (IData)(vlSelf->__PVT__tlb_v_lo))) 
                                       & (~ (IData)(vlSelf->__PVT__any_access_fault_v))) 
                                      & (~ (IData)(vlSelf->__PVT__any_page_fault_v))));
}

VL_INLINE_OPT void Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__2(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___combo__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__2\n"); );
    // Body
    vlSelf->w_vtag_li = (0x7ffffffU & ((1U & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U])
                                        ? ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[3U] 
                                            << 0x1eU) 
                                           | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[3U] 
                                              >> 2U))
                                        : (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                   >> 0xcU))));
    vlSelf->__PVT__tlb_bypass = ((IData)(((0x18U == 
                                           (0x18U & (IData)(vlSelf->__PVT__r_v_reg__DOT__data_r))) 
                                          & ((~ vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U]) 
                                             & ((0x7ffffffU 
                                                 & (IData)(
                                                           (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                            >> 0xcU))) 
                                                == 
                                                (0x7ffffffU 
                                                 & (IData)(vlSelf->__PVT__etag_reg__DOT__data_r)))))) 
                                 & (IData)((vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__trans_info_cast_o 
                                            >> 2U)));
    vlSelf->__Vcellinp__tlb__v_i = (1U & ((((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dtlb_r_v) 
                                            | vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U]) 
                                           & (IData)(
                                                     (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__trans_info_cast_o 
                                                      >> 2U))) 
                                          & (~ (IData)(vlSelf->__PVT__tlb_bypass))));
    vlSelf->tlb__DOT__r_v_li = ((IData)(vlSelf->__Vcellinp__tlb__v_i) 
                                & (~ vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U]));
    vlSelf->tlb__DOT__w_v_li = ((IData)(vlSelf->__Vcellinp__tlb__v_i) 
                                & vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U]);
    vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li = (0xffU 
                                              & ((- (IData)((IData)(vlSelf->tlb__DOT__w_v_li))) 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo))));
    vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li = (0xffU 
                                              & (((- (IData)((IData)(vlSelf->tlb__DOT__w_v_li))) 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo))) 
                                                 | (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__commit_pkt_cast_o[0U] 
                                                                  >> 0xaU))))));
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
