# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtestbench.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtestbench \
	Vtestbench__Dpi_Export__0 \
	Vtestbench___024root__DepSet_hfc24d085__0 \
	Vtestbench___024root__DepSet_hfc24d085__1 \
	Vtestbench___024root__DepSet_hfc24d085__2 \
	Vtestbench___024root__DepSet_hfc24d085__3 \
	Vtestbench___024root__DepSet_hfc24d085__4 \
	Vtestbench___024root__DepSet_hfc24d085__5 \
	Vtestbench___024root__DepSet_hfc24d085__6 \
	Vtestbench___024root__DepSet_hfc24d085__7 \
	Vtestbench___024root__DepSet_hed41eec4__0 \
	Vtestbench___024root__DepSet_hed41eec4__1 \
	Vtestbench___024root__DepSet_hed41eec4__2 \
	Vtestbench_bp_uce__pi24__DepSet_haaf3fc71__0 \
	Vtestbench_bp_uce__pi24__DepSet_h1e6cc2b0__0 \
	Vtestbench_bsg_cache__pi35__DepSet_hce770700__0 \
	Vtestbench_bsg_cache__pi35__DepSet_h1b7d9880__0 \
	Vtestbench_bsg_async_fifo__W40_La__DepSet_hbd82db87__0 \
	Vtestbench_bsg_async_fifo__W44_La__DepSet_h2f8bc900__0 \
	Vtestbench_bp_mmu__Bz1_T8_TB0__DepSet_hdb258ffc__0 \
	Vtestbench_bp_mmu__Bz1_T8_TB0__DepSet_hdb258ffc__1 \
	Vtestbench_bp_mmu__Bz1_T8_TB0__DepSet_h0e43323d__0 \
	Vtestbench_bp_be_reg_to_fp__Bz1__DepSet_h46203f3a__0 \
	Vtestbench_bp_be_reg_to_fp__Bz1__DepSet_h46203f3a__1 \
	Vtestbench_bp_be_reg_to_fp__Bz1__DepSet_h46203f3a__2 \
	Vtestbench_bp_be_fp_to_reg__Bz1__DepSet_h79a33c52__0 \
	Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67__DepSet_h9216556f__0 \
	Vtestbench_bsg_mux_one_hot__W84_E3__DepSet_hd3d26053__0 \
	Vtestbench_bsg_mux_one_hot__W84_E5__DepSet_hc9f0f8a6__0 \
	Vtestbench_bsg_mux_one_hot__W40_E8__DepSet_he815853d__0 \
	Vtestbench_bsg_mux_one_hot__W44_E6__DepSet_hab977257__0 \
	Vtestbench_bsg_mux_one_hot__W44_E6__DepSet_hab977257__1 \
	Vtestbench_bsg_mem_1rw_sync__pi87__DepSet_hd58da381__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtestbench__ConstPool_0 \
	Vtestbench___024root__Slow \
	Vtestbench___024root__DepSet_hfc24d085__0__Slow \
	Vtestbench___024root__DepSet_hfc24d085__1__Slow \
	Vtestbench___024root__DepSet_hfc24d085__2__Slow \
	Vtestbench___024root__DepSet_hfc24d085__3__Slow \
	Vtestbench___024root__DepSet_hfc24d085__4__Slow \
	Vtestbench___024root__DepSet_hfc24d085__5__Slow \
	Vtestbench___024root__DepSet_hed41eec4__0__Slow \
	Vtestbench___024root__DepSet_hed41eec4__1__Slow \
	Vtestbench___024unit__Slow \
	Vtestbench___024unit__DepSet_hf87c9ffd__0__Slow \
	Vtestbench_bp_uce__pi24__Slow \
	Vtestbench_bp_uce__pi24__DepSet_haaf3fc71__0__Slow \
	Vtestbench_bp_uce__pi24__DepSet_h1e6cc2b0__0__Slow \
	Vtestbench_bsg_cache__pi35__Slow \
	Vtestbench_bsg_cache__pi35__DepSet_hce770700__0__Slow \
	Vtestbench_bsg_cache__pi35__DepSet_hce770700__1__Slow \
	Vtestbench_bsg_cache__pi35__DepSet_h1b7d9880__0__Slow \
	Vtestbench_bsg_cache__pi35__DepSet_hfaf1b941__0__Slow \
	Vtestbench_bsg_async_fifo__W40_La__Slow \
	Vtestbench_bsg_async_fifo__W40_La__DepSet_hbd82db87__0__Slow \
	Vtestbench_bsg_async_fifo__W40_La__DepSet_h2b9be5c6__0__Slow \
	Vtestbench_bsg_async_fifo__W44_La__Slow \
	Vtestbench_bsg_async_fifo__W44_La__DepSet_h2f8bc900__0__Slow \
	Vtestbench_bsg_async_fifo__W44_La__DepSet_h99a4f741__0__Slow \
	Vtestbench_bp_mmu__Bz1_T8_TB0__Slow \
	Vtestbench_bp_mmu__Bz1_T8_TB0__DepSet_hdb258ffc__0__Slow \
	Vtestbench_bp_mmu__Bz1_T8_TB0__DepSet_h0e43323d__0__Slow \
	Vtestbench_bp_be_reg_to_fp__Bz1__Slow \
	Vtestbench_bp_be_reg_to_fp__Bz1__DepSet_h733e817b__0__Slow \
	Vtestbench_bp_be_fp_to_reg__Bz1__Slow \
	Vtestbench_bp_be_fp_to_reg__Bz1__DepSet_h79a33c52__0__Slow \
	Vtestbench_bp_be_fp_to_reg__Bz1__DepSet_h79a33c52__1__Slow \
	Vtestbench_bp_be_fp_to_reg__Bz1__DepSet_h6fbd8293__0__Slow \
	Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67__Slow \
	Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67__DepSet_h9216556f__0__Slow \
	Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi67__DepSet_h47106bae__0__Slow \
	Vtestbench_bsg_mux_one_hot__W84_E3__Slow \
	Vtestbench_bsg_mux_one_hot__W84_E3__DepSet_h054c5e92__0__Slow \
	Vtestbench_bsg_mux_one_hot__W84_E5__Slow \
	Vtestbench_bsg_mux_one_hot__W84_E5__DepSet_hff6dc6e7__0__Slow \
	Vtestbench_bsg_mux_one_hot__W40_E8__Slow \
	Vtestbench_bsg_mux_one_hot__W40_E8__DepSet_he1133b7c__0__Slow \
	Vtestbench_bsg_mux_one_hot__W44_E6__Slow \
	Vtestbench_bsg_mux_one_hot__W44_E6__DepSet_h1d914c96__0__Slow \
	Vtestbench_bsg_mem_1rw_sync__pi87__Slow \
	Vtestbench_bsg_mem_1rw_sync__pi87__DepSet_h03ab1dc0__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtestbench__Dpi \
	Vtestbench__Trace__0 \
	Vtestbench__Trace__1 \
	Vtestbench__Trace__2 \
	Vtestbench__Trace__3 \
	Vtestbench__Trace__4 \
	Vtestbench__Trace__5 \
	Vtestbench__Trace__6 \
	Vtestbench__Trace__7 \
	Vtestbench__Trace__8 \
	Vtestbench__Trace__9 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtestbench__Syms \
	Vtestbench__Trace__0__Slow \
	Vtestbench__Trace__1__Slow \
	Vtestbench__Trace__2__Slow \
	Vtestbench__Trace__3__Slow \
	Vtestbench__Trace__4__Slow \
	Vtestbench__Trace__5__Slow \
	Vtestbench__Trace__6__Slow \
	Vtestbench__Trace__7__Slow \
	Vtestbench__Trace__8__Slow \
	Vtestbench__Trace__9__Slow \
	Vtestbench__Trace__10__Slow \
	Vtestbench__Trace__11__Slow \
	Vtestbench__Trace__12__Slow \
	Vtestbench__Trace__13__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
