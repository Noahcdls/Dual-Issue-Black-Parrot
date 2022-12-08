// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_ASYNC_FIFO__W40_LA_H_
#define VERILATED_VTESTBENCH_BSG_ASYNC_FIFO__W40_LA_H_  // guard

#include "verilated.h"

class Vtestbench__Syms;

class Vtestbench_bsg_async_fifo__W40_La final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(w_clk_i,0,0);
    VL_IN8(r_clk_i,0,0);
    VL_IN8(w_reset_i,0,0);
    VL_IN8(w_enq_i,0,0);
    VL_OUT8(__PVT__w_full_o,0,0);
    VL_IN8(r_reset_i,0,0);
    VL_IN8(r_deq_i,0,0);
    VL_OUT8(r_valid_o,0,0);
    CData/*7:0*/ __PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
    CData/*7:0*/ __PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    CData/*7:0*/ __PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r;
    CData/*2:0*/ __PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    CData/*2:0*/ __PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    CData/*2:0*/ __PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r;
    CData/*7:0*/ __PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
    CData/*7:0*/ __PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    CData/*7:0*/ __PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r;
    CData/*2:0*/ __PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    CData/*2:0*/ __PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    CData/*2:0*/ __PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r;
    SData/*10:0*/ __PVT__bapg_wr__DOT__w_ptr_r;
    SData/*10:0*/ __PVT__bapg_wr__DOT__w_ptr_n;
    SData/*10:0*/ __PVT__bapg_wr__DOT__w_ptr_p1_r;
    SData/*10:0*/ __PVT__bapg_wr__DOT__w_ptr_p1_n;
    SData/*10:0*/ __PVT__bapg_wr__DOT__w_ptr_gray_n;
    SData/*10:0*/ __PVT__bapg_wr__DOT__w_ptr_gray_r;
    SData/*10:0*/ __PVT__bapg_wr__DOT__w_ptr_gray_r_rsync;
    SData/*10:0*/ __PVT__bapg_rd__DOT__w_ptr_r;
    SData/*10:0*/ __PVT__bapg_rd__DOT__w_ptr_n;
    SData/*10:0*/ __PVT__bapg_rd__DOT__w_ptr_p1_r;
    SData/*10:0*/ __PVT__bapg_rd__DOT__w_ptr_p1_n;
    SData/*10:0*/ __PVT__bapg_rd__DOT__w_ptr_gray_n;
    SData/*10:0*/ __PVT__bapg_rd__DOT__w_ptr_gray_r;
    SData/*10:0*/ __PVT__bapg_rd__DOT__w_ptr_gray_r_rsync;
    VL_IN64(w_data_i,63,0);
    VL_OUT64(r_data_o,63,0);
    VlUnpacked<QData/*63:0*/, 1024> __PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bsg_async_fifo__W40_La(Vtestbench__Syms* symsp, const char* name);
    ~Vtestbench_bsg_async_fifo__W40_La();
    VL_UNCOPYABLE(Vtestbench_bsg_async_fifo__W40_La);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
