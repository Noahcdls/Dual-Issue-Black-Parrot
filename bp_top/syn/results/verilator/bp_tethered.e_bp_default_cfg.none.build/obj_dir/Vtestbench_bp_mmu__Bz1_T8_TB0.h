// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_MMU__BZ1_T8_TB0_H_
#define VERILATED_VTESTBENCH_BP_MMU__BZ1_T8_TB0_H_  // guard

#include "verilated.h"

class Vtestbench__Syms;

class Vtestbench_bp_mmu__Bz1_T8_TB0 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(reset_i,0,0);
        VL_IN8(flush_i,0,0);
        VL_IN8(priv_mode_i,1,0);
        VL_IN8(trans_en_i,0,0);
        VL_IN8(sum_i,0,0);
        VL_IN8(mxr_i,0,0);
        VL_IN8(uncached_mode_i,0,0);
        VL_IN8(nonspec_mode_i,0,0);
        VL_IN8(hio_mask_i,6,0);
        VL_IN8(w_v_i,0,0);
        VL_IN8(r_v_i,0,0);
        VL_IN8(r_instr_i,0,0);
        VL_IN8(r_load_i,0,0);
        VL_IN8(r_store_i,0,0);
        VL_IN8(r_size_i,1,0);
        VL_OUT8(r_v_o,0,0);
        VL_OUT8(r_instr_miss_o,0,0);
        VL_OUT8(r_load_miss_o,0,0);
        VL_OUT8(r_store_miss_o,0,0);
        VL_OUT8(r_uncached_o,0,0);
        VL_OUT8(r_nonidem_o,0,0);
        VL_OUT8(r_dram_o,0,0);
        VL_OUT8(r_instr_access_fault_o,0,0);
        VL_OUT8(r_load_access_fault_o,0,0);
        VL_OUT8(r_store_access_fault_o,0,0);
        VL_OUT8(r_instr_misaligned_o,0,0);
        VL_OUT8(r_load_misaligned_o,0,0);
        VL_OUT8(r_store_misaligned_o,0,0);
        VL_OUT8(r_instr_page_fault_o,0,0);
        VL_OUT8(r_load_page_fault_o,0,0);
        VL_OUT8(r_store_page_fault_o,0,0);
        CData/*0:0*/ __PVT__tlb_bypass;
        CData/*0:0*/ __Vcellinp__tlb__v_i;
        CData/*0:0*/ __PVT__tlb_v_lo;
        CData/*0:0*/ __PVT__eaddr_fault_v;
        CData/*0:0*/ __PVT__hio_fault_v;
        CData/*0:0*/ __PVT__instr_access_fault_v;
        CData/*0:0*/ __PVT__load_access_fault_v;
        CData/*0:0*/ __PVT__store_access_fault_v;
        CData/*0:0*/ __PVT__any_access_fault_v;
        CData/*0:0*/ __PVT__data_priv_page_fault;
        CData/*0:0*/ __PVT__instr_page_fault_v;
        CData/*0:0*/ __PVT__load_page_fault_v;
        CData/*0:0*/ __PVT__store_page_fault_v;
        CData/*0:0*/ __PVT__any_page_fault_v;
        CData/*0:0*/ __PVT__r_misaligned_r;
        CData/*0:0*/ __PVT__tlb_bypass_reg__DOT__data_r;
        CData/*0:0*/ tlb__DOT__r_v_li;
        CData/*0:0*/ tlb__DOT__w_v_li;
        CData/*7:0*/ __PVT__tlb__DOT__tag_r_match_4k_lo;
        CData/*7:0*/ __PVT__tlb__DOT__tag_empty_4k_lo;
        CData/*7:0*/ __PVT__tlb__DOT__tag_4k_w_v_li;
        CData/*7:0*/ __PVT__tlb__DOT__mem_4k_w_v_li;
        CData/*7:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__v_r;
        CData/*0:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r;
        CData/*2:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_way_lo;
    };
    struct {
        CData/*2:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__way_lo;
        CData/*2:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_li;
        CData/*6:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_data_lo;
        CData/*6:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_mask_lo;
        CData/*6:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_update_lo;
        CData/*6:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_sel_lo;
        CData/*6:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_data_lo;
        CData/*6:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo;
        CData/*6:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_update_lo;
        CData/*6:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__alloc_sel_lo;
        CData/*6:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r;
        CData/*7:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo;
        CData/*7:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__scan_lo;
        IData/*31:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t;
        IData/*31:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr;
        IData/*31:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v;
        CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        IData/*31:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr;
        IData/*31:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v;
        CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__tlb__DOT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*0:0*/ __PVT__tlb__DOT__tag_array_1g__DOT__v_r;
        SData/*8:0*/ __PVT__r_v_reg__DOT__data_r;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__0__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__1__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__2__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__3__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__4__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__5__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__6__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__7__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__8__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__9__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__10__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__11__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__12__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__13__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__14__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__15__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__16__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__reduce__BRA__17__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__0__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__1__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__2__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__3__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__4__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__5__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__6__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__7__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__8__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__9__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__10__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__11__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__12__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__13__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__14__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__15__KET____DOT__gather;
        SData/*8:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__reduce__BRA__16__KET____DOT__gather;
        VL_IN(w_vtag_i,26,0);
        VL_OUT(r_ptag_o,27,0);
        IData/*26:0*/ w_vtag_li;
    };
    struct {
        VlWide<5>/*135:0*/ __PVT__tlb__DOT__data_4k_high_r;
        VlWide<5>/*143:0*/ __PVT__tlb__DOT__data_4k_low_r;
        IData/*16:0*/ __PVT__tlb__DOT__data_1g_high_r;
        IData/*17:0*/ tlb__DOT____Vcellout__one_hot_sel_low__data_o;
        VlWide<6>/*161:0*/ tlb__DOT____Vcellinp__one_hot_sel_low__data_i;
        IData/*16:0*/ tlb__DOT____Vcellout__one_hot_sel_high__data_o;
        VlWide<5>/*152:0*/ tlb__DOT____Vcellinp__one_hot_sel_high__data_i;
        IData/*27:0*/ __PVT__tlb__DOT__r_v_reg__DOT__data_r;
        VlWide<7>/*215:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__tag_r;
        IData/*26:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tlb__DOT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tlb__DOT__tag_array_1g__DOT__tag_r;
        VlWide<6>/*161:0*/ __PVT__tlb__DOT__one_hot_sel_low__DOT__data_masked;
        VlWide<5>/*152:0*/ __PVT__tlb__DOT__one_hot_sel_high__DOT__data_masked;
        VL_IN64(w_entry_i,34,0);
        VL_IN64(r_eaddr_i,63,0);
        QData/*35:0*/ __Vcellout__entry_reg__data_o;
        QData/*35:0*/ __Vcellinp__entry_reg__data_i;
        QData/*34:0*/ __PVT__tlb_entry_lo;
        QData/*51:0*/ __PVT__etag_reg__DOT__data_r;
        QData/*34:0*/ __PVT__tlb__DOT__r_entry;
        QData/*34:0*/ __PVT__tlb__DOT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r;
        QData/*34:0*/ __PVT__tlb__DOT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r;
        QData/*34:0*/ __PVT__tlb__DOT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r;
        QData/*34:0*/ __PVT__tlb__DOT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r;
        QData/*34:0*/ __PVT__tlb__DOT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r;
        QData/*34:0*/ __PVT__tlb__DOT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r;
        QData/*34:0*/ __PVT__tlb__DOT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r;
        QData/*34:0*/ __PVT__tlb__DOT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r;
        QData/*35:0*/ __PVT__entry_reg__DOT__dff__DOT__data_r;
    };

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000001U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__io_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__tlb__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__tlb__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000001U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__tlb__DOT__io_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__pma__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__pma__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000001U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__pma__DOT__io_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_mmu__Bz1_T8_TB0(Vtestbench__Syms* symsp, const char* name);
    ~Vtestbench_bp_mmu__Bz1_T8_TB0();
    VL_UNCOPYABLE(Vtestbench_bp_mmu__Bz1_T8_TB0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
