// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_UCE__PI24_H_
#define VERILATED_VTESTBENCH_BP_UCE__PI24_H_  // guard

#include "verilated.h"

class Vtestbench__Syms;

class Vtestbench_bp_uce__pi24 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(reset_i,0,0);
        VL_IN8(lce_id_i,3,0);
        VL_IN8(cache_req_v_i,0,0);
        VL_OUT8(cache_req_yumi_o,0,0);
        VL_OUT8(cache_req_busy_o,0,0);
        VL_IN8(cache_req_metadata_i,3,0);
        VL_IN8(cache_req_metadata_v_i,0,0);
        VL_OUT8(cache_req_critical_tag_o,0,0);
        VL_OUT8(cache_req_critical_data_o,0,0);
        VL_OUT8(cache_req_complete_o,0,0);
        VL_OUT8(cache_req_credits_full_o,0,0);
        VL_OUT8(cache_req_credits_empty_o,0,0);
        VL_OUT8(tag_mem_pkt_v_o,0,0);
        VL_IN8(tag_mem_pkt_yumi_i,0,0);
        VL_OUT8(data_mem_pkt_v_o,0,0);
        VL_IN8(data_mem_pkt_yumi_i,0,0);
        VL_OUT8(stat_mem_pkt_v_o,0,0);
        VL_IN8(stat_mem_pkt_yumi_i,0,0);
        VL_OUT8(mem_cmd_v_o,0,0);
        VL_IN8(mem_cmd_ready_and_i,0,0);
        VL_OUT8(mem_cmd_last_o,0,0);
        VL_IN8(mem_resp_v_i,0,0);
        VL_OUT8(mem_resp_ready_and_o,0,0);
        VL_IN8(mem_resp_last_i,0,0);
        CData/*3:0*/ __PVT__state_n;
        CData/*3:0*/ __PVT__state_r;
        CData/*0:0*/ __PVT__cache_req_done;
        CData/*3:0*/ __Vcellout__metadata_reg__data_o;
        CData/*0:0*/ __PVT__fsm_cmd_v_lo;
        CData/*0:0*/ __PVT__fsm_cmd_ready_and_li;
        CData/*0:0*/ __PVT__fsm_cmd_new;
        CData/*0:0*/ __PVT__fsm_cmd_done;
        CData/*0:0*/ __PVT__fsm_resp_v_li;
        CData/*0:0*/ __PVT__fsm_resp_yumi_lo;
        CData/*0:0*/ __PVT__fsm_resp_new;
        CData/*0:0*/ __PVT__fsm_resp_done;
        CData/*0:0*/ __PVT__uc_store_v_li;
        CData/*0:0*/ __PVT__load_resp_v_li;
        CData/*0:0*/ __PVT__miss_v_r;
        CData/*0:0*/ __PVT__wt_store_v_r;
        CData/*0:0*/ __PVT__uc_load_v_r;
        CData/*0:0*/ __PVT__uc_store_v_r;
        CData/*0:0*/ __PVT__uc_amo_v_r;
        CData/*5:0*/ __PVT__index_cnt;
        CData/*0:0*/ __PVT__index_up;
        CData/*2:0*/ __PVT__way_cnt;
        CData/*0:0*/ __PVT__way_up;
        CData/*3:0*/ __PVT__credit_count_lo;
        CData/*0:0*/ __PVT__critical_recv;
        CData/*3:0*/ __PVT__cache_wr_subop;
        CData/*3:0*/ __PVT__mem_wr_subop;
        CData/*0:0*/ __PVT__load_resp_yumi_lo;
        CData/*0:0*/ __PVT__cache_req_v_reg__DOT__data_r;
        CData/*3:0*/ __PVT__metadata_reg__DOT__dff__DOT__data_r;
        CData/*0:0*/ __PVT__dirty_data_reg__DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__dirty_tag_reg__DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__uce_pump_out__DOT__state_n;
        CData/*0:0*/ __PVT__uce_pump_out__DOT__state_r;
        CData/*2:0*/ __PVT__uce_pump_out__DOT__stream_size;
        CData/*0:0*/ __PVT__uce_pump_out__DOT__fsm_stream;
        CData/*0:0*/ __PVT__uce_pump_out__DOT__msg_stream;
        CData/*2:0*/ __PVT__uce_pump_out__DOT__wrap_cnt;
    };
    struct {
        CData/*0:0*/ __PVT__uce_pump_out__DOT__cnt_up;
        CData/*2:0*/ __PVT__uce_pump_out__DOT__size_li;
        CData/*0:0*/ __PVT__uce_pump_out__DOT__is_last_cnt;
        CData/*2:0*/ __PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r;
        CData/*2:0*/ __PVT__uce_pump_out__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fsm_last_o;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__state_n;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__state_r;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__msg_ready_and_lo;
        CData/*2:0*/ __PVT__uce_pump_in__DOT__stream_size;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fsm_stream;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__msg_stream;
        CData/*2:0*/ __PVT__uce_pump_in__DOT__wrap_cnt;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__cnt_up;
        CData/*2:0*/ __PVT__uce_pump_in__DOT__size_li;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__is_last_cnt;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__state_n;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__state_r;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__msg_header_v_li;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__msg_data_v_li;
        CData/*0:0*/ uce_pump_in__DOT__fifo__DOT____Vcellinp__buffered__DOT__data_fifo__yumi_i;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__tail_r;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__empty_r;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__full_r;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__head_r;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__tail_r;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__empty_r;
        CData/*0:0*/ __PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__full_r;
        CData/*2:0*/ __PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_r;
        CData/*2:0*/ __PVT__uce_pump_in__DOT__wraparound_cnt__DOT__nz__DOT__cnt_sel_li;
        CData/*0:0*/ __PVT__critical_pending_reg__DOT__data_r;
        CData/*0:0*/ __Vdly__critical_pending_reg__DOT__data_r;
        VL_OUT16(stat_mem_pkt_o,10,0);
        VL_IN16(stat_mem_i,14,0);
        SData/*10:0*/ __PVT__stat_mem_pkt_cast_o;
        SData/*14:0*/ __Vcellout__dirty_stat_reg__data_o;
        SData/*14:0*/ __PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r;
        VL_INW(cache_req_i,115,0,4);
        VL_IN(tag_mem_i,22,0);
        VL_OUTW(data_mem_pkt_o,82,0,3);
        VL_INW(data_mem_i,511,0,16);
        VL_OUTW(mem_cmd_header_o,66,0,3);
        VL_INW(mem_resp_header_i,66,0,3);
        VlWide<4>/*115:0*/ __PVT__cache_req_reg__DOT__data_r;
        VlWide<16>/*511:0*/ __PVT__dirty_data_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r;
        IData/*22:0*/ __PVT__dirty_tag_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r;
        VlWide<3>/*66:0*/ uce_pump_in__DOT____Vcellout__fifo__msg_base_header_o;
        VlWide<3>/*64:0*/ uce_pump_in__DOT__fifo__DOT____Vcellout__buffered__DOT__data_fifo__data_o;
        VL_OUT64(tag_mem_pkt_o,34,0);
        VL_OUT64(mem_cmd_data_o,63,0);
        VL_IN64(mem_resp_data_i,63,0);
        QData/*34:0*/ __PVT__tag_mem_pkt_cast_o;
        VlWide<3>/*82:0*/ __PVT__data_mem_pkt_cast_o;
        VlWide<3>/*66:0*/ __PVT__fsm_cmd_header_lo;
        QData/*63:0*/ __PVT__fsm_cmd_data_lo;
        QData/*39:0*/ __PVT__fsm_resp_addr_li;
        QData/*63:0*/ __PVT__writeback_data;
        VlWide<3>/*66:0*/ __PVT__uce_pump_out__DOT__msg_header_cast_o;
        QData/*39:0*/ __PVT__uce_pump_out__DOT__wrap_addr;
        VlWide<3>/*66:0*/ __PVT__uce_pump_in__DOT__fsm_base_header_cast_o;
        QData/*39:0*/ __PVT__uce_pump_in__DOT__wrap_addr;
        VlUnpacked<VlWide<3>/*66:0*/, 2> __PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__header_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<VlWide<3>/*64:0*/, 2> __PVT__uce_pump_in__DOT__fifo__DOT__buffered__DOT__data_fifo__DOT__unhardened__DOT__tf__DOT__twof__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem;
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
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__uce_pump_out__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__uce_pump_out__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000001U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__uce_pump_out__DOT__io_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__uce_pump_in__DOT__coh_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000002U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__uce_pump_in__DOT__mem_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000001U, 0x00000001U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 3> __PVT__uce_pump_in__DOT__io_noc_cord_markers_pos_p = {{
        0x00000000U, 0x00000003U, 0x00000003U
    }};

    // CONSTRUCTORS
    Vtestbench_bp_uce__pi24(Vtestbench__Syms* symsp, const char* name);
    ~Vtestbench_bp_uce__pi24();
    VL_UNCOPYABLE(Vtestbench_bp_uce__pi24);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
