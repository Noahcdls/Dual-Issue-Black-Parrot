// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench_bsg_cache__pi35.h"

VL_ATTR_COLD void Vtestbench_bsg_cache__pi35___ctor_var_reset(Vtestbench_bsg_cache__pi35* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_cache__pi35___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = 0;
    vlSelf->reset_i = 0;
    VL_ZERO_RESET_W(111, vlSelf->cache_pkt_i);
    vlSelf->v_i = 0;
    vlSelf->ready_o = 0;
    vlSelf->data_o = 0;
    vlSelf->v_o = 0;
    vlSelf->yumi_i = 0;
    vlSelf->dma_pkt_o = 0;
    vlSelf->dma_pkt_v_o = 0;
    vlSelf->dma_pkt_yumi_i = 0;
    vlSelf->dma_data_i = 0;
    vlSelf->dma_data_v_i = 0;
    vlSelf->dma_data_ready_o = 0;
    vlSelf->dma_data_o = 0;
    vlSelf->dma_data_v_o = 0;
    vlSelf->dma_data_yumi_i = 0;
    vlSelf->__PVT__v_we_o = 0;
    vlSelf->__PVT__decode = 0;
    vlSelf->__PVT__v_tl_r = 0;
    vlSelf->__PVT__decode_tl_r = 0;
    vlSelf->__PVT__mask_tl_r = 0;
    vlSelf->__PVT__addr_tl_r = 0;
    vlSelf->__PVT__data_tl_r = 0;
    vlSelf->__PVT__sbuf_hazard = 0;
    vlSelf->__PVT__tag_mem_v_li = 0;
    vlSelf->__PVT__tag_mem_w_li = 0;
    vlSelf->__PVT__tag_mem_addr_li = 0;
    VL_ZERO_RESET_W(176, vlSelf->__PVT__tag_mem_data_li);
    VL_ZERO_RESET_W(176, vlSelf->__PVT__tag_mem_w_mask_li);
    VL_ZERO_RESET_W(176, vlSelf->__Vcellout__tag_mem__data_o);
    vlSelf->__PVT__valid_tl = 0;
    VL_ZERO_RESET_W(160, vlSelf->__PVT__tag_tl);
    vlSelf->__PVT__lock_tl = 0;
    vlSelf->__PVT__data_mem_v_li = 0;
    vlSelf->__PVT__data_mem_w_li = 0;
    vlSelf->__PVT__data_mem_addr_li = 0;
    VL_ZERO_RESET_W(512, vlSelf->__PVT__data_mem_data_li);
    vlSelf->__PVT__data_mem_w_mask_li = 0;
    VL_ZERO_RESET_W(512, vlSelf->__Vcellout__data_mem__data_o);
    vlSelf->__PVT__v_we = 0;
    vlSelf->__PVT__v_v_r = 0;
    vlSelf->__PVT__decode_v_r = 0;
    vlSelf->__PVT__mask_v_r = 0;
    vlSelf->__PVT__addr_v_r = 0;
    vlSelf->__PVT__data_v_r = 0;
    vlSelf->__PVT__valid_v_r = 0;
    vlSelf->__PVT__lock_v_r = 0;
    VL_ZERO_RESET_W(160, vlSelf->__PVT__tag_v_r);
    VL_ZERO_RESET_W(512, vlSelf->__PVT__ld_data_v_r);
    vlSelf->__PVT__tag_hit_v = 0;
    vlSelf->__PVT__tag_hit_way_id = 0;
    vlSelf->__PVT__miss_v = 0;
    vlSelf->__PVT__stat_mem_v_li = 0;
    vlSelf->__PVT__stat_mem_w_li = 0;
    vlSelf->__PVT__stat_mem_addr_li = 0;
    vlSelf->__PVT__stat_mem_data_li = 0;
    vlSelf->__PVT__stat_mem_w_mask_li = 0;
    vlSelf->__Vcellout__stat_mem__data_o = 0;
    vlSelf->__PVT__dma_cmd_lo = 0;
    vlSelf->__PVT__dma_addr_lo = 0;
    vlSelf->__PVT__dma_way_lo = 0;
    vlSelf->__PVT__dma_done_li = 0;
    vlSelf->__PVT__recover_lo = 0;
    vlSelf->__PVT__miss_done_lo = 0;
    vlSelf->__PVT__miss_stat_mem_v_lo = 0;
    vlSelf->__PVT__miss_stat_mem_w_lo = 0;
    vlSelf->__PVT__miss_tag_mem_v_lo = 0;
    vlSelf->__PVT__miss_tag_mem_w_lo = 0;
    vlSelf->__PVT__sbuf_empty_li = 0;
    vlSelf->__Vcellinp__miss__ack_i = 0;
    vlSelf->__PVT__snoop_word_lo = 0;
    vlSelf->__PVT__dma_data_mem_v_lo = 0;
    vlSelf->__PVT__dma_data_mem_w_lo = 0;
    vlSelf->__PVT__dma_evict_lo = 0;
    vlSelf->__PVT__sbuf_v_li = 0;
    VL_ZERO_RESET_W(108, vlSelf->__PVT__sbuf_entry_li);
    vlSelf->__PVT__sbuf_v_lo = 0;
    vlSelf->__PVT__sbuf_yumi_li = 0;
    vlSelf->__PVT__bypass_v_li = 0;
    vlSelf->__PVT__bypass_data_lo = 0;
    vlSelf->__PVT__bypass_mask_lo = 0;
    vlSelf->__PVT__sbuf_full_lo = 0;
    VL_ZERO_RESET_W(108, vlSelf->__Vcellout__sbuf__sbuf_entry_o);
    vlSelf->__PVT__sbuf_data_mem_w_mask = 0;
    VL_ZERO_RESET_W(512, vlSelf->__PVT__sbuf_data_mem_data);
    VL_ZERO_RESET_W(256, vlSelf->__PVT__sbuf_data_in_mux_li);
    vlSelf->__PVT__sbuf_mask_in_mux_li = 0;
    vlSelf->__PVT__snoop_or_ld_data = 0;
    VL_ZERO_RESET_W(256, vlSelf->__PVT__ld_data_final_li);
    vlSelf->__PVT__atomic_reg_data = 0;
    vlSelf->__PVT__atomic_mem_data = 0;
    vlSelf->__PVT__atomic_alu_result = 0;
    vlSelf->__PVT__atomic_result = 0;
    vlSelf->__PVT__ld_data_way_picked = 0;
    vlSelf->__PVT__bypass_data_masked = 0;
    vlSelf->__PVT__expanded_mask_v = 0;
    vlSelf->__PVT__tl_ready = 0;
    vlSelf->__PVT__plru_decode_data_lo = 0;
    vlSelf->__PVT__plru_decode_mask_lo = 0;
    vlSelf->__Vcellout__sbuf_in_sel__BRA__1__KET____DOT__exp__o = 0;
    vlSelf->__PVT__ld_data_sel__BRA__0__KET____DOT__byte_sel = 0;
    vlSelf->__PVT__ld_data_sel__BRA__1__KET____DOT__byte_sel = 0;
    vlSelf->__PVT__ld_data_sel__BRA__2__KET____DOT__byte_sel = 0;
    vlSelf->__PVT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vlvbound_h155a2524__0 = 0;
    vlSelf->__Vlvbound_h9121d6d9__0 = 0;
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        VL_ZERO_RESET_W(176, vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    VL_ZERO_RESET_W(176, vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_out);
    VL_ZERO_RESET_W(176, vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__data_n);
    vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(176, vlSelf->__PVT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r);
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__w_i = 0;
    vlSelf->data_mem__DOT__synth__DOT____Vcellinp__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__v_i = 0;
    vlSelf->__PVT__tag_hit_pe__DOT__enc_lo = 0;
    vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__scan_lo = 0;
    vlSelf->__PVT__tag_hit_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__v = 0;
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_hit_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__data_n = 0;
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(176, vlSelf->__PVT__miss__DOT__tag_mem_data_out);
    VL_ZERO_RESET_W(176, vlSelf->__PVT__miss__DOT__tag_mem_w_mask_out);
    vlSelf->__PVT__miss__DOT__stat_mem_data_out = 0;
    vlSelf->__PVT__miss__DOT__stat_mem_w_mask_out = 0;
    vlSelf->__PVT__miss__DOT__miss_state_r = 0;
    vlSelf->__PVT__miss__DOT__miss_state_n = 0;
    vlSelf->__PVT__miss__DOT__chosen_way_r = 0;
    vlSelf->__PVT__miss__DOT__chosen_way_n = 0;
    vlSelf->__PVT__miss__DOT__flush_way_r = 0;
    vlSelf->__PVT__miss__DOT__flush_way_n = 0;
    vlSelf->__PVT__miss__DOT__select_snoop_data_r = 0;
    vlSelf->__PVT__miss__DOT__select_snoop_data_n = 0;
    vlSelf->__PVT__miss__DOT__goto_flush_op = 0;
    vlSelf->__PVT__miss__DOT__chosen_way_lru_data = 0;
    vlSelf->__PVT__miss__DOT__chosen_way_lru_mask = 0;
    vlSelf->__PVT__miss__DOT__lru_way_id = 0;
    vlSelf->__PVT__miss__DOT__modify_mask_lo = 0;
    vlSelf->__PVT__miss__DOT__modify_data_lo = 0;
    vlSelf->__PVT__miss__DOT__modified_lru_bits = 0;
    vlSelf->__PVT__miss__DOT__flush_way_decode = 0;
    vlSelf->__PVT__miss__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__miss__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__miss__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->miss__DOT____Vlvbound_hd30d7a31__0 = 0;
    vlSelf->miss__DOT____Vlvbound_hd26467e9__0 = 0;
    vlSelf->miss__DOT____Vlvbound_hf01905f9__0 = 0;
    vlSelf->miss__DOT____Vlvbound_h70049ab2__0 = 0;
    vlSelf->miss__DOT____Vlvbound_ha99840ce__0 = 0;
    vlSelf->miss__DOT____Vlvbound_h08450b7e__0 = 0;
    vlSelf->miss__DOT____Vlvbound_h867f3837__0 = 0;
    vlSelf->miss__DOT____Vlvbound_h4915df73__0 = 0;
    vlSelf->miss__DOT____Vlvbound_h4d962d9f__0 = 0;
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__enc_lo = 0;
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__scan_lo = 0;
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__v = 0;
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__miss__DOT__invalid_way_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__0__KET____DOT__and_reduce = 0;
    vlSelf->__PVT__miss__DOT__backup_lru__DOT__lru__DOT__genblk1__BRA__1__KET____DOT__and_reduce = 0;
    vlSelf->__PVT__dma__DOT__dma_state_n = 0;
    vlSelf->__PVT__dma__DOT__dma_state_r = 0;
    vlSelf->__PVT__dma__DOT__counter_clear = 0;
    vlSelf->__PVT__dma__DOT__counter_up = 0;
    vlSelf->__PVT__dma__DOT__counter_r = 0;
    vlSelf->__PVT__dma__DOT__dma_pkt = 0;
    vlSelf->__PVT__dma__DOT__in_fifo_data_lo = 0;
    vlSelf->__PVT__dma__DOT__in_fifo_yumi_li = 0;
    vlSelf->__PVT__dma__DOT__out_fifo_v_li = 0;
    vlSelf->dma__DOT____Vcellout__expand0__o = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__enque = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__enq_r = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__deq_r = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__empty = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__full = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__equal_ptrs = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_n = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_n = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__dma__DOT__in_fifo__DOT__unhardened__DOT__un__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__head_r = 0;
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__dma__DOT__out_fifo__DOT__full_r = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__dma__DOT__out_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__sbuf__DOT__num_els_r = 0;
    vlSelf->__PVT__sbuf__DOT__el0_valid = 0;
    vlSelf->__PVT__sbuf__DOT__el1_valid = 0;
    vlSelf->__PVT__sbuf__DOT__mux1_sel = 0;
    vlSelf->__PVT__sbuf__DOT__mux0_sel = 0;
    vlSelf->__PVT__sbuf__DOT__el0_enable = 0;
    vlSelf->__PVT__sbuf__DOT__el1_enable = 0;
    vlSelf->__PVT__sbuf__DOT__tag_hit0 = 0;
    vlSelf->__PVT__sbuf__DOT__tag_hit2 = 0;
    vlSelf->__PVT__sbuf__DOT__el0or1_data = 0;
    vlSelf->__PVT__sbuf__DOT__bypass_data_n = 0;
    vlSelf->sbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i = 0;
    VL_ZERO_RESET_W(108, vlSelf->__PVT__sbuf__DOT__sbq__DOT__el0_r);
    VL_ZERO_RESET_W(108, vlSelf->__PVT__sbuf__DOT__sbq__DOT__el1_r);
}
