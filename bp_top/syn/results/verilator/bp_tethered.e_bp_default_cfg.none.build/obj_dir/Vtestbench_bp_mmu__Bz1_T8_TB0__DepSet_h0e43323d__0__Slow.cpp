// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bp_mmu__Bz1_T8_TB0.h"

VL_ATTR_COLD void Vtestbench_bp_mmu__Bz1_T8_TB0___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__1(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___settle__TOP__testbench__DOT__wrapper__DOT__unicore__DOT__dut__DOT__c__BRA__0__KET____DOT__dut__DOT__unicore_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__1\n"); );
    // Body
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
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo 
        = ((IData)(vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo) 
           & (- (IData)((0U != (IData)(vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo)))));
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
}

VL_ATTR_COLD void Vtestbench_bp_mmu__Bz1_T8_TB0___ctor_var_reset(Vtestbench_bp_mmu__Bz1_T8_TB0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vtestbench_bp_mmu__Bz1_T8_TB0___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = 0;
    vlSelf->reset_i = 0;
    vlSelf->flush_i = 0;
    vlSelf->priv_mode_i = 0;
    vlSelf->trans_en_i = 0;
    vlSelf->sum_i = 0;
    vlSelf->mxr_i = 0;
    vlSelf->uncached_mode_i = 0;
    vlSelf->nonspec_mode_i = 0;
    vlSelf->hio_mask_i = 0;
    vlSelf->w_v_i = 0;
    vlSelf->w_vtag_i = 0;
    vlSelf->w_entry_i = 0;
    vlSelf->r_v_i = 0;
    vlSelf->r_instr_i = 0;
    vlSelf->r_load_i = 0;
    vlSelf->r_store_i = 0;
    vlSelf->r_eaddr_i = 0;
    vlSelf->r_size_i = 0;
    vlSelf->r_v_o = 0;
    vlSelf->r_ptag_o = 0;
    vlSelf->r_instr_miss_o = 0;
    vlSelf->r_load_miss_o = 0;
    vlSelf->r_store_miss_o = 0;
    vlSelf->r_uncached_o = 0;
    vlSelf->r_nonidem_o = 0;
    vlSelf->r_dram_o = 0;
    vlSelf->r_instr_access_fault_o = 0;
    vlSelf->r_load_access_fault_o = 0;
    vlSelf->r_store_access_fault_o = 0;
    vlSelf->r_instr_misaligned_o = 0;
    vlSelf->r_load_misaligned_o = 0;
    vlSelf->r_store_misaligned_o = 0;
    vlSelf->r_instr_page_fault_o = 0;
    vlSelf->r_load_page_fault_o = 0;
    vlSelf->r_store_page_fault_o = 0;
    vlSelf->__PVT__tlb_bypass = 0;
    vlSelf->w_vtag_li = 0;
    vlSelf->__Vcellinp__tlb__v_i = 0;
    vlSelf->__Vcellout__entry_reg__data_o = 0;
    vlSelf->__Vcellinp__entry_reg__data_i = 0;
    vlSelf->__PVT__tlb_entry_lo = 0;
    vlSelf->__PVT__tlb_v_lo = 0;
    vlSelf->__PVT__eaddr_fault_v = 0;
    vlSelf->__PVT__hio_fault_v = 0;
    vlSelf->__PVT__instr_access_fault_v = 0;
    vlSelf->__PVT__load_access_fault_v = 0;
    vlSelf->__PVT__store_access_fault_v = 0;
    vlSelf->__PVT__any_access_fault_v = 0;
    vlSelf->__PVT__data_priv_page_fault = 0;
    vlSelf->__PVT__instr_page_fault_v = 0;
    vlSelf->__PVT__load_page_fault_v = 0;
    vlSelf->__PVT__store_page_fault_v = 0;
    vlSelf->__PVT__any_page_fault_v = 0;
    vlSelf->__PVT__r_misaligned_r = 0;
    vlSelf->__PVT__r_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__etag_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb_bypass_reg__DOT__data_r = 0;
    vlSelf->tlb__DOT__r_v_li = 0;
    vlSelf->tlb__DOT__w_v_li = 0;
    vlSelf->__PVT__tlb__DOT__tag_r_match_4k_lo = 0;
    vlSelf->__PVT__tlb__DOT__tag_empty_4k_lo = 0;
    vlSelf->__PVT__tlb__DOT__tag_4k_w_v_li = 0;
    VL_ZERO_RESET_W(136, vlSelf->__PVT__tlb__DOT__data_4k_high_r);
    VL_ZERO_RESET_W(144, vlSelf->__PVT__tlb__DOT__data_4k_low_r);
    vlSelf->__PVT__tlb__DOT__mem_4k_w_v_li = 0;
    vlSelf->__PVT__tlb__DOT__data_1g_high_r = 0;
    vlSelf->__PVT__tlb__DOT__r_entry = 0;
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_low__data_o = 0;
    VL_ZERO_RESET_W(162, vlSelf->tlb__DOT____Vcellinp__one_hot_sel_low__data_i);
    vlSelf->tlb__DOT____Vcellout__one_hot_sel_high__data_o = 0;
    VL_ZERO_RESET_W(153, vlSelf->tlb__DOT____Vcellinp__one_hot_sel_high__data_i);
    vlSelf->__PVT__tlb__DOT__r_v_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(216, vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__tag_r);
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__v_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_way_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_1g__DOT__tag_r = 0;
    vlSelf->__PVT__tlb__DOT__tag_array_1g__DOT__v_r = 0;
    VL_ZERO_RESET_W(162, vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked);
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather = 0;
    VL_ZERO_RESET_W(153, vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked);
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather = 0;
    vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__entry_reg__DOT__dff__DOT__data_r = 0;
}
