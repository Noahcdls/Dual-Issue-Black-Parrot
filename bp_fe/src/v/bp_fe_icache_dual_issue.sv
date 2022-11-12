/**
 *
 * Name:
 *   bp_fe_icache.sv
 *
 * Description:
 *   L1 Instruction Cache. Features:
 *   - Virtually-indexed, physically-tagged
 *   - 2-8 way set-associative
 *   - 128-512 bit block size (minimum 64-bit data mem bank size)
 *   - Separate speculative and non-speculative fetch commands
 *
 *   An address is broken down as follows:
 *     physical address = [physical tag | virtual index | block offset]
 *
 *   There are 3 large SRAMs (must be hardened for good QoR):
 *   - Tag Mem: Physical tags and coherence state
 *   - Data Mem: Cache data blocks. 1 bank per way, with data
 *       interleaved between the banks as bank_id = word_offset + way_id
 *   - Stat Mem: Contains the LRU and information for the cache line
 *
 * Notes:
 *    Supports multi-cycle fill/eviction with the UCE in unicore configuration
 *    Uses fill_index in data_mem_pkt to generate a write_mask for the data banks
 *      bank_width = block_width / assoc >= dword_width
 *      fill_width = N*bank_width <= block_width
 */

`include "bp_common_defines.svh"
`include "bp_fe_defines.svh"

module bp_fe_icache
 import bp_common_pkg::*;
 import bp_fe_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)

   // Default to icache parameters, but can override if needed
   , parameter coherent_p    = icache_coherent_p
   , parameter sets_p        = icache_sets_p
   , parameter assoc_p       = icache_assoc_p
   , parameter block_width_p = icache_block_width_p
   , parameter fill_width_p  = icache_fill_width_p

   `declare_bp_cache_engine_if_widths(paddr_width_p, ctag_width_p, sets_p, assoc_p, dword_width_gp, block_width_p, fill_width_p, icache)
   , localparam cfg_bus_width_lp    = `bp_cfg_bus_width(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p)
   , localparam icache_pkt_width_lp = `bp_fe_icache_pkt_width(vaddr_width_p)
   )
  (input                                              clk_i
   , input                                            reset_i

   // Unused except for tracers
   , input [cfg_bus_width_lp-1:0]                     cfg_bus_i

   // Cycle 0: "Decode"
   // New I$ packet comes in for a fetch, fence or fill request.
   , input [icache_pkt_width_lp-1:0]                  icache_pkt1_i
   ,                                                  icache_pkt2_i
   //valid bit? and data ready maybe
   , input                                            v_i1
   ,                                                  v_i2
   , output                                           ready_o1
   ,                                                  ready_o2

   // Cycle 1: "Tag Lookup"
   // TLB and PMA information comes in this cycle
   , input [ptag_width_p-1:0]                         ptag_i1
   ,                                                  ptag_i2
   , input                                            ptag_v_i1
  //  ,                                                  ptag_v_i2
   , input                                            ptag_uncached_i1
  //  ,                                                  ptag_uncached_i2
   , input                                            ptag_nonidem_i1
  //  ,                                                  ptag_nonidem_i2
   , input                                            ptag_dram_i1
  //  ,                                                  ptag_dram_i2
   //dont know if I need to add another poison. Adding one anyways
   , input                                            poison_tl_i1, poison_tl_i2

   // Cycle 2: "Tag Verify"
   // Data (or miss result) comes out of the cache
   , output logic [instr_width_gp-1:0]                data_o1
   ,                                                  data_o2
   , output logic                                     data_v_o1
   ,                                                  data_v_o2
   , output logic                                     miss_v_o1
   ,                                                  miss_v_o2

   // Cache Engine Interface
   // This is considered the "slow path", handling uncached requests
   //   and fill DMAs. It also handles coherence transactions for
   //   configurations which support that behavior
   , output logic [icache_req_width_lp-1:0]           cache_req1_o, cache_req2_o
   , output logic                                     cache_req1_v_o, cache_req2_v_o
   , input                                            cache_req1_yumi_i,cache_req2_yumi_i
   , input                                            cache_req1_busy_i,cache_req2_busy_i
   , output logic [icache_req_metadata_width_lp-1:0]  cache_req1_metadata_o, cache_req2_metadata_o
   , output logic                                     cache_req1_metadata_v_o, cache_req2_metadata_v_o
   , input                                            cache_req1_critical_tag_i, cache_req2_critical_tag_i
   , input                                            cache_req1_critical_data_i, cache_req2_critical_data_i
   , input                                            cache_req1_complete_i, cache_req2_complete_i
   , input                                            cache_req1_credits_full_i, cache_req2_credits_full_i
   , input                                            cache_req1_credits_empty_i, cache_req2_credits_empty_i

   , input                                            data_mem_pkt1_v_i, data_mem_pkt2_v_i
   , input [icache_data_mem_pkt_width_lp-1:0]         data_mem_pkt1_i, data_mem_pkt2_i
   , output logic                                     data_mem_pkt1_yumi_o, data_mem_pkt2_yumi_o
   , output logic [block_width_p-1:0]                 data_mem1_o, data_mem2_o

   , input                                            tag_mem_pkt1_v_i, tag_mem_pkt2_v_i
   , input [icache_tag_mem_pkt_width_lp-1:0]          tag_mem_pkt1_i, tag_mem_pkt2_i
   , output logic                                     tag_mem_pkt1_yumi_o, tag_mem_pkt2_yumi_o
   , output logic [icache_tag_info_width_lp-1:0]      tag_mem1_o, tag_mem2_o

   , input                                            stat_mem_pkt1_v_i, stat_mem_pkt2_v_i
   , input [icache_stat_mem_pkt_width_lp-1:0]         stat_mem_pkt1_i, stat_mem_pkt2_i
   , output logic                                     stat_mem_pkt1_yumi_o, stat_mem_pkt2_yumi_o
   , output logic [icache_stat_info_width_lp-1:0]     stat_mem1_o, stat_mem2_o
   );



//UPDATE: LOOK UP UCE AND ADJUST
  //declaring parameters for the system here
  `declare_bp_cache_engine_if(paddr_width_p, ctag_width_p, sets_p, assoc_p, dword_width_gp, block_width_p, fill_width_p, icache);
  `declare_bp_cfg_bus_s(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p);
  `bp_cast_i(bp_cfg_bus_s, cfg_bus);

  // Various localparameters
  localparam lg_assoc_lp            =`BSG_SAFE_CLOG2(assoc_p);
  localparam bank_width_lp          = block_width_p / assoc_p;
  localparam num_words_per_bank_lp  = bank_width_lp / word_width_gp;
  localparam data_mem_mask_width_lp = (bank_width_lp >> 3);
  localparam byte_offset_width_lp   = `BSG_SAFE_CLOG2(bank_width_lp >> 3);
  localparam bindex_width_lp        = `BSG_SAFE_CLOG2(assoc_p);
  localparam sindex_width_lp        = `BSG_SAFE_CLOG2(sets_p);
  localparam block_offset_width_lp  = (assoc_p > 1)
    ? (bindex_width_lp+byte_offset_width_lp)
    : byte_offset_width_lp;
  localparam block_size_in_fill_lp  = block_width_p / fill_width_p;
  localparam fill_size_in_bank_lp   = fill_width_p / bank_width_lp;

  // State machine declaration
  // may need to duplicate this
  enum logic [1:0] {e_ready, e_miss} state_n, state_r;
  wire is_ready   = (state_r == e_ready);
  wire is_miss    = (state_r == e_miss);

  // Feedback signals between stages
  // double feedback here
  logic tl_we1, tv_we1;
  logic tl_we2, tv_we2;
  logic v_tl_r1, v_tv_r1;
  logic v_tl_r2, v_tv_r2;
  // Uncached storage
  //double this
  logic [dword_width_gp-1:0] uncached_data_r1, uncached_data_r2;
  logic uncached_pending_r;

  /////////////////////////////////////////////////////////////////////////////
  // Decode stage
  /////////////////////////////////////////////////////////////////////////////

  //NOTE TO DOUBLE THE DECODE

  //declares icache pkt size?
  `declare_bp_fe_icache_pkt_s(vaddr_width_p);
  `bp_cast_i(bp_fe_icache_pkt_s, icache_pkt1);
  `bp_cast_i(bp_fe_icache_pkt_s, icache_pkt2);

//pkt_cast variable is assigned to icache_pkt_i. This needs to be updated so it can ready correctly
  wire is_fetch1  = (icache_pkt1_cast_i.op inside {e_icache_fetch, e_icache_fill});
  wire is_fencei1 = (icache_pkt1_cast_i.op inside {e_icache_fencei});
  wire is_fill1   = (icache_pkt1_cast_i.op inside {e_icache_fill});
  wire is_fetch2  = (icache_pkt2_cast_i.op inside {e_icache_fetch, e_icache_fill});
  wire is_fencei2 = (icache_pkt2_cast_i.op inside {e_icache_fencei});
  wire is_fill2  = (icache_pkt2_cast_i.op inside {e_icache_fill});


//virtual address values
  wire [vaddr_width_p-1:0]   vaddr1      = icache_pkt1_cast_i.vaddr;
  wire [vtag_width_p-1:0]    vaddr_vtag1  = vaddr1[block_offset_width_lp+sindex_width_lp+:vtag_width_p];
  wire [sindex_width_lp-1:0] vaddr_index1 = vaddr1[block_offset_width_lp+:sindex_width_lp];
  wire [bindex_width_lp-1:0] vaddr_bank1  = vaddr1[byte_offset_width_lp+:bindex_width_lp];

  wire [vaddr_width_p-1:0]   vaddr2       = icache_pkt2_cast_i.vaddr;
  wire [vtag_width_p-1:0]    vaddr_vtag2  = vaddr2[block_offset_width_lp+sindex_width_lp+:vtag_width_p];
  wire [sindex_width_lp-1:0] vaddr_index2 = vaddr2[block_offset_width_lp+:sindex_width_lp];
  wire [bindex_width_lp-1:0] vaddr_bank2  = vaddr2[byte_offset_width_lp+:bindex_width_lp];

  ///////////////////////////
  // Tag Mem Storage
  ///////////////////////////
  `bp_cast_i(bp_icache_tag_mem_pkt_s, tag_mem_pkt1);
  logic                              tag_mem_v_li1;
  logic                              tag_mem_w_li1;
  logic [sindex_width_lp-1:0]        tag_mem_addr_li1;
  bp_icache_tag_info_s [assoc_p-1:0] tag_mem_w_mask_li1;
  bp_icache_tag_info_s [assoc_p-1:0] tag_mem_data_li1;
  bp_icache_tag_info_s [assoc_p-1:0] tag_mem_data_lo1;

  `bp_cast_i(bp_icache_tag_mem_pkt_s, tag_mem_pkt2);
  logic                              tag_mem_v_li;
  logic                              tag_mem_w_li2;
  logic [sindex_width_lp-1:0]        tag_mem_addr_li2;
  bp_icache_tag_info_s [assoc_p-1:0] tag_mem_w_mask_li2;
  bp_icache_tag_info_s [assoc_p-1:0] tag_mem_data_li2;
  bp_icache_tag_info_s [assoc_p-1:0] tag_mem_data_lo2;

//update tag memory
  bsg_mem_2rw_sync_mask_write_bit
   #(.width_p(assoc_p*($bits(bp_icache_tag_info_s))), .els_p(sets_p), .read_write_same_addr_p(0))
   tag_mem
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.a_data_i(tag_mem_data_li1)
     ,.a_addr_i(tag_mem_addr_li1)
     ,.a_v_i(tag_mem_v_li1)
     ,.a_w_mask_i(tag_mem_w_mask_li1)
     ,.a_w_i(tag_mem_w_li1)
     ,.a_data_o(tag_mem_data_lo1)

     ,.b_data_i(tag_mem_data_li2)
     ,.b_addr_i(tag_mem_addr_li2)
     ,.b_v_i(tag_mem_v_li2)
     ,.b_w_mask_i(tag_mem_w_mask_li2)
     ,.b_w_i(tag_mem_w_li2)
     ,.b_data_o(tag_mem_data_lo2)
     );

  ///////////////////////////
  // Data Mem Storage
  ///////////////////////////
  `bp_cast_i(bp_icache_data_mem_pkt_s, data_mem_pkt1);
  localparam data_mem_addr_width_lp = (assoc_p > 1) ? (sindex_width_lp+bindex_width_lp) : sindex_width_lp;
  logic [assoc_p-1:0]                             data_mem_v_li1;
  logic [assoc_p-1:0]                             data_mem_w_li1;
  logic [assoc_p-1:0][data_mem_addr_width_lp-1:0] data_mem_addr_li1;
  logic [assoc_p-1:0][bank_width_lp-1:0]          data_mem_data_li1;
  logic [assoc_p-1:0][bank_width_lp-1:0]          data_mem_data_lo1;

  `bp_cast_i(bp_icache_data_mem_pkt_s, data_mem_pkt2);
  localparam data_mem_addr_width_lp = (assoc_p > 1) ? (sindex_width_lp+bindex_width_lp) : sindex_width_lp;
  logic [assoc_p-1:0]                             data_mem_v_li2;
  logic [assoc_p-1:0]                             data_mem_w_li2;
  logic [assoc_p-1:0][data_mem_addr_width_lp-1:0] data_mem_addr_li2;
  logic [assoc_p-1:0][bank_width_lp-1:0]          data_mem_data_li2;
  logic [assoc_p-1:0][bank_width_lp-1:0]          data_mem_data_lo2;


//change to dual issue
  for (genvar bank = 0; bank < assoc_p; bank++)
    begin: data_mems
      bsg_mem_2rw_sync #(.width_p(bank_width_lp), .els_p(sets_p*assoc_p))
       data_mem
        (.clk_i(clk_i)
         ,.reset_i(reset_i)
         ,.a_data_i(data_mem_data_li1[bank])
         ,.a_addr_i(data_mem_addr_li1[bank])
         ,.a_v_i(data_mem_v_li1[bank])
         ,.a_w_i(data_mem_w_li1[bank])
         ,.a_data_o(data_mem_data_lo1[bank])

         ,.b_data_i(data_mem_data_li2[bank])
         ,.b_addr_i(data_mem_addr_li2[bank])
         ,.b_v_i(data_mem_v_li2[bank])
         ,.b_w_i(data_mem_w_li2[bank])
         ,.b_data_o(data_mem_data_lo2[bank])
         );
    end

  /////////////////////////////////////////////////////////////////////////////
  // TL stage
  /////////////////////////////////////////////////////////////////////////////

  //Look up address and whether the operation is to fill, fetch, or fence
  logic [vaddr_width_p-1:0] vaddr_tl_r1;
  logic [vaddr_width_p-1:0] vaddr_tl_r2;
  logic fill_op_tl_r1, fetch_op_tl_r1, fencei_op_tl_r1;
  logic fill_op_tl_r2, fetch_op_tl_r2, fencei_op_tl_r2;

  // Valid when we accept new data, clear when we advance to tv
  //D flip flop to pass write enable by giving ready and valid
  assign tl_we1 = ready_o1 & v_i1;
  bsg_dff_reset_set_clear
   #(.width_p(1))
   v_tl_reg1
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.set_i(tl_we1 & ~cache_req1_yumi_i)
     // We always advance in the non-stalling I$
     ,.clear_i(1'b1)
     ,.data_o(v_tl_r1)
     );

  bsg_dff_reset_set_clear
   #(.width_p(1))
   v_tl_reg2
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.set_i(tl_we2 & ~cache_req2_yumi_i)
     // We always advance in the non-stalling I$
     ,.clear_i(1'b1)
     ,.data_o(v_tl_r2)
     );   


  // Save stage information. Pass on virtual address in D flip flop and status of flip flop
  bsg_dff_reset_en
   #(.width_p(vaddr_width_p+3))
   tl_stage_reg1
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.en_i(tl_we1)
     ,.data_i({vaddr1, is_fill1, is_fetch1, is_fencei1})
     ,.data_o({vaddr_tl_r1, fill_op_tl_r1, fetch_op_tl_r1, fencei_op_tl_r1})
     );

  bsg_dff_reset_en
   #(.width_p(vaddr_width_p+3))
   tl_stage_reg2
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.en_i(tl_we2)
     ,.data_i({vaddr2, is_fill2, is_fetch2, is_fencei2})
     ,.data_o({vaddr_tl_r2, fill_op_tl_r2, fetch_op_tl_r2, fencei_op_tl_r2})
     );     

  //physical address and virtual addressing
  wire [paddr_width_p-1:0]         paddr_tl1 = {ptag_i1, vaddr_tl_r1[0+:page_offset_width_gp]};
  wire [vtag_width_p-1:0]     vaddr_vtag_tl1 = vaddr_tl_r1[block_offset_width_lp+sindex_width_lp+:vtag_width_p];
  wire [sindex_width_lp-1:0] vaddr_index_tl1 = vaddr_tl_r1[block_offset_width_lp+:sindex_width_lp];
  wire [bindex_width_lp-1:0]  vaddr_bank_tl1 = vaddr_tl_r1[byte_offset_width_lp+:bindex_width_lp];

  wire [paddr_width_p-1:0]         paddr_tl2 = {ptag_i2, vaddr_tl_r2[0+:page_offset_width_gp]};
  wire [vtag_width_p-1:0]     vaddr_vtag_tl2 = vaddr_tl_r2[block_offset_width_lp+sindex_width_lp+:vtag_width_p];
  wire [sindex_width_lp-1:0] vaddr_index_tl2 = vaddr_tl_r2[block_offset_width_lp+:sindex_width_lp];
  wire [bindex_width_lp-1:0]  vaddr_bank_tl2 = vaddr_tl_r2[byte_offset_width_lp+:bindex_width_lp];

  // Determine which way your data is going and if its a hit
  logic [assoc_p-1:0] way_v_tl1, hit_v_tl1, way_v_tl2, hit_v_tl2;
  for (genvar i = 0; i < assoc_p; i++) begin: tag_comp_tl
    assign way_v_tl1[i] = (tag_mem_data_lo1[i].state != e_COH_I);
    assign hit_v_tl1[i] = (tag_mem_data_lo1[i].tag == ptag_i1) && way_v_tl1[i];
    assign way_v_tl2[i] = (tag_mem_data_lo2[i].state != e_COH_I);
    assign hit_v_tl2[i] = (tag_mem_data_lo2[i].tag == ptag_i2) && way_v_tl2[i];
  end

  //shows results if your data is cached, can be fetched, and to be filled or dram
  wire cached_hit_tl1     = |hit_v_tl1;
  wire fetch_uncached_tl1 = (fetch_op_tl_r1 &  ptag_uncached_i1);
  wire fetch_cached_tl1   = (fetch_op_tl_r1 & ~ptag_uncached_i1);
  wire fill_tl1           = (fill_op_tl_r1 | ~ptag_nonidem_i1);
  wire dram_tl1           = (fill_op_tl_r1 | fetch_op_tl_r1) & ptag_dram_i1;

  wire cached_hit_tl     = |hit_v_tl2;
  wire fetch_uncached_tl = (fetch_op_tl_r2 &  ptag_uncached_i2);
  wire fetch_cached_tl   = (fetch_op_tl_r2 & ~ptag_uncached_i2);
  wire fill_tl           = (fill_op_tl_r2 | ~ptag_nonidem_i2);
  wire dram_tl           = (fill_op_tl_r2 | fetch_op_tl_r2) & ptag_dram_i2;

  //one hot encode the virtual address bank
  logic [assoc_p-1:0] bank_sel_one_hot_tl1, bank_sel_one_hot_tl2;
  bsg_decode
   #(.num_out_p(assoc_p))
   offset_decode1
    (.i(vaddr_bank_tl1)
     ,.o(bank_sel_one_hot_tl1)
     );
  bsg_decode
   #(.num_out_p(assoc_p))
   offset_decode2
    (.i(vaddr_bank_tl2)
     ,.o(bank_sel_one_hot_tl2)
     );

  /////////////////////////////////////////////////////////////////////////////
  // TV stage
  /////////////////////////////////////////////////////////////////////////////

  //passing on physical address, way, hot one select, cached hit, and other status as well as load data in the verify
  logic [paddr_width_p-1:0]              paddr_tv_r1;
  logic [assoc_p-1:0]                    bank_sel_one_hot_tv_r1;
  logic [assoc_p-1:0]                    way_v_tv_r1, hit_v_tv_r1;
  logic                                  cached_hit_tv_r1;
  logic                                  fill_tv_r1, dram_tv_r1, fencei_op_tv_r1, uncached_op_tv_r1, cached_op_tv_r1;
  logic [assoc_p-1:0][bank_width_lp-1:0] ld_data_tv_r1;


  logic [paddr_width_p-1:0]              paddr_tv_r2;
  logic [assoc_p-1:0]                    bank_sel_one_hot_tv_r2;
  logic [assoc_p-1:0]                    way_v_tv_r, hit_v_tv_r2;
  logic                                  cached_hit_tv_r2;
  logic                                  fill_tv_r2, dram_tv_r2, fencei_op_tv_r2, uncached_op_tv_r2, cached_op_tv_r2;
  logic [assoc_p-1:0][bank_width_lp-1:0] ld_data_tv_r2;

  // fence.i does not check tags

  //valid write enable if the lookup was good and we have fence or valid tag
  //pass this on to the next stage via a flip flop
  assign tv_we1 = v_tl_r1 & (ptag_v_i1 | fencei_op_tl_r1);
  bsg_dff_reset_set_clear
   #(.width_p(1))
   v_tv_reg1
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.set_i(tv_we1 & ~poison_tl_i1 & ~cache_req1_yumi_i)
     // We always advance in the non-stalling I$
     ,.clear_i(1'b1)
     ,.data_o(v_tv_r1)
     );

  assign tv_we2 = v_tl_r2 & (ptag_v_i2 | fencei_op_tl_r2);
  bsg_dff_reset_set_clear
   #(.width_p(1))
   v_tv_reg2
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.set_i(tv_we2 & ~poison_tl_i2 & ~cache_req2_yumi_i)
     // We always advance in the non-stalling I$
     ,.clear_i(1'b1)
     ,.data_o(v_tv_r2)
     );     


//load data?
  logic [block_width_p-1:0] ld_data_tv_n1;
  assign ld_data_tv_n1 = data_mem_data_lo1;

  logic [block_width_p-1:0] ld_data_tv_n2;
  assign ld_data_tv_n2 = data_mem_data_lo2;

  bsg_dff_en
   #(.width_p(block_width_p))
   ld_data_tv_reg1
    (.clk_i(clk_i)
     ,.en_i(tv_we1)
     ,.data_i(ld_data_tv_n1)
     ,.data_o(ld_data_tv_r1)
     );
  bsg_dff_en
   #(.width_p(block_width_p))
   ld_data_tv_reg2
    (.clk_i(clk_i)
     ,.en_i(tv_we2)
     ,.data_i(ld_data_tv_n2)
     ,.data_o(ld_data_tv_r2)
     );

// dff holding data between stages
  bsg_dff_en
   #(.width_p(paddr_width_p+3*assoc_p+6))
   tv_stage_reg1
    (.clk_i(clk_i)
     ,.en_i(tv_we1)
     ,.data_i({paddr_tl1
               ,bank_sel_one_hot_tl1, way_v_tl1, hit_v_tl1, cached_hit_tl1
               ,fill_tl1, dram_tl1, fencei_op_tl_r1, fetch_uncached_tl1, fetch_cached_tl1
               })
     ,.data_o({paddr_tv_r1
               ,bank_sel_one_hot_tv_r1, way_v_tv_r1, hit_v_tv_r1, cached_hit_tv_r1
               ,fill_tv_r1, dram_tv_r1, fencei_op_tv_r1, uncached_op_tv_r1, cached_op_tv_r1
               })
     );


  bsg_dff_en
   #(.width_p(paddr_width_p+3*assoc_p+6))
   tv_stage_reg2
    (.clk_i(clk_i)
     ,.en_i(tv_we)
     ,.data_i({paddr_tl2
               ,bank_sel_one_hot_tl2, way_v_tl2, hit_v_tl2, cached_hit_tl2
               ,fill_tl2, dram_tl2, fencei_op_tl_r2, fetch_uncached_tl2, fetch_cached_tl2
               })
     ,.data_o({paddr_tv_r2
               ,bank_sel_one_hot_tv_r2, way_v_tv_r2, hit_v_tv_r2, cached_hit_tv_r2
               ,fill_tv_r2, dram_tv_r2, fencei_op_tv_r2, uncached_op_tv_r2, cached_op_tv_r2
               })
     );

//invalid ways and encoding
  logic [lg_assoc_lp-1:0] invalid_way_tv1, invalid_way_tv2;
  logic invalid_exist_tv1, invalid_exist_tv2;
  bsg_priority_encode
   #(.width_p(assoc_p), .lo_to_hi_p(1))
   pe_invalid1
    (.i(~way_v_tv_r1)
     ,.v_o(invalid_exist_tv1)
     ,.addr_o(invalid_way_tv1)
     );
  bsg_priority_encode
   #(.width_p(assoc_p), .lo_to_hi_p(1))
   pe_invalid2
    (.i(~way_v_tv_r2)
     ,.v_o(invalid_exist_tv2)
     ,.addr_o(invalid_way_tv2)
     );

  // If there is invalid way, then it takes priority over LRU way.
  logic [lg_assoc_lp-1:0] lru_encode1, lru_encode2;
  wire [lg_assoc_lp-1:0] lru_way_li1 = invalid_exist_tv1 ? invalid_way_tv1 : lru_encode1;
  wire [lg_assoc_lp-1:0] lru_way_li2 = invalid_exist_tv2 ? invalid_way_tv2 : lru_encode2;

//index that we hit by and its encoding on cache
  logic [lg_assoc_lp-1:0] hit_index_tv1, hit_index_tv2;
  bsg_encode_one_hot
   #(.width_p(assoc_p), .lo_to_hi_p(1))
   hit_index_encoder1
    (.i(hit_v_tv_r1)
     ,.addr_o(hit_index_tv1)
     ,.v_o()
     );

  bsg_encode_one_hot
   #(.width_p(assoc_p), .lo_to_hi_p(1))
   hit_index_encoder2
    (.i(hit_v_tv_r2)
     ,.addr_o(hit_index_tv2)
     ,.v_o()
     );

  // One-hot data muxing for load data way select
  logic [assoc_p-1:0] ld_data_way_select1, ld_data_way_select2;
  bsg_adder_one_hot
   #(.width_p(assoc_p))
   select_adder1
    (.a_i(hit_v_tv_r1)
     ,.b_i(bank_sel_one_hot_tv_1r)
     ,.o(ld_data_way_select1)
     );

  bsg_adder_one_hot
   #(.width_p(assoc_p))
   select_adder2
    (.a_i(hit_v_tv_r2)
     ,.b_i(bank_sel_one_hot_tv_r2)
     ,.o(ld_data_way_select2)
     );

//select for data way using mux
  logic [bank_width_lp-1:0] ld_data_way_picked1, ld_data_way_picked2;
  bsg_mux_one_hot
   #(.width_p(bank_width_lp), .els_p(assoc_p))
   data_set_select_mux1
    (.data_i(ld_data_tv_r1)
     ,.sel_one_hot_i(ld_data_way_select1)
     ,.data_o(ld_data_way_picked1)
     );

  bsg_mux_one_hot
   #(.width_p(bank_width_lp), .els_p(assoc_p))
   data_set_select_mux2
    (.data_i(ld_data_tv_r2)
     ,.sel_one_hot_i(ld_data_way_select2)
     ,.data_o(ld_data_way_picked2)
     );

  logic [instr_width_gp-1:0] final_data1, final_data2;
  bsg_mux
   #(.width_p(instr_width_gp), .els_p(num_words_per_bank_lp))
   dword_select_mux1
    (.data_i(ld_data_way_picked1)
     ,.sel_i(paddr_tv_r1[2+:`BSG_SAFE_CLOG2(num_words_per_bank_lp)])
     ,.data_o(final_data1)
     );
  bsg_mux
   #(.width_p(instr_width_gp), .els_p(num_words_per_bank_lp))
   dword_select_mux2
    (.data_i(ld_data_way_picked2)
     ,.sel_i(paddr_tv_r2[2+:`BSG_SAFE_CLOG2(num_words_per_bank_lp)])
     ,.data_o(final_data2)
     );

// data out and whether it is valid and cached
  assign data_o1 = uncached_op_tv_r1 ? uncached_data_r1 : final_data1;
  assign data_v_o1 = v_tv_r1 & ((uncached_op_tv_r1 & uncached_pending_r1)
                              | (cached_op_tv_r1 & cached_hit_tv_r1)
                              );
  assign miss_v_o1 = v_tv_r1 & ~fill_tv_r1 & ~data_v_o1;

  assign data_o2 = uncached_op_tv_r2 ? uncached_data_r2 : final_data2;
  assign data_v_o1 = v_tv_r2 & ((uncached_op_tv_r2 & uncached_pending_r2)
                              | (cached_op_tv_r2 & cached_hit_tv_r2)
                              );
  assign miss_v_o1 = v_tv_r2 & ~fill_tv_r2 & ~data_v_o2;


  ///////////////////////////
  // Stat Mem Storage
  ///////////////////////////
  `bp_cast_i(bp_icache_stat_mem_pkt_s, stat_mem_pkt1);
  `bp_cast_i(bp_icache_stat_mem_pkt_s, stat_mem_pkt2);

  logic                       stat_mem_v_li1;
  logic                       stat_mem_w_li1;
  logic [sindex_width_lp-1:0] stat_mem_addr_li1;
  bp_icache_stat_info_s       stat_mem_data_li1;
  bp_icache_stat_info_s       stat_mem_mask_li1;
  bp_icache_stat_info_s       stat_mem_data_lo1;

  logic                       stat_mem_v_li2;
  logic                       stat_mem_w_li2;
  logic [sindex_width_lp-1:0] stat_mem_addr_li2;
  bp_icache_stat_info_s       stat_mem_data_li2;
  bp_icache_stat_info_s       stat_mem_mask_li2;
  bp_icache_stat_info_s       stat_mem_data_lo2;



// add wiring to support correct inputs: NOW DONE
  bsg_mem_2rw_sync_mask_write_bit
   #(.width_p(assoc_p-1), .els_p(sets_p), .latch_last_read_p(1))
   stat_mem
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.a_data_i(stat_mem_data_li1.lru)
     ,.a_addr_i(stat_mem_addr_li1)
     ,.a_v_i(stat_mem_v_li1)
     ,.a_w_mask_i(stat_mem_mask_li1.lru)
     ,.a_w_i(stat_mem_w_li1)
     ,.a_data_o(stat_mem_data_lo1.lru)

     ,.b_data_i(stat_mem_data_li2.lru)
     ,.b_addr_i(stat_mem_addr_li2)
     ,.b_v_i(stat_mem_v_li2)
     ,.b_w_mask_i(stat_mem_mask_li2.lru)
     ,.b_w_i(stat_mem_w_li2)
     ,.b_data_o(stat_mem_data_lo2.lru)
     );
  assign stat_mem_data_lo1.dirty = '0;
  assign stat_mem_data_lo2.dirty = '0;

//LRU encoder
  bsg_lru_pseudo_tree_encode
   #(.ways_p(assoc_p))
   lru_encoder1
    (.lru_i(stat_mem_data_lo1.lru)
     ,.way_id_o(lru_encode1)
     );

  bsg_lru_pseudo_tree_encode
   #(.ways_p(assoc_p))
   lru_encoder2
    (.lru_i(stat_mem_data_lo2.lru)
     ,.way_id_o(lru_encode2)
     );

  /////////////////////////////////////////////////////////////////////////////
  // Slow Path
  /////////////////////////////////////////////////////////////////////////////
  `bp_cast_o(bp_icache_req_s, cache_req1);
  `bp_cast_o(bp_icache_req_metadata_s, cache_req1_metadata);
  `bp_cast_o(bp_icache_req_s, cache_req2);
  `bp_cast_o(bp_icache_req_metadata_s, cache_req2_metadata);

//The slow path to getting our data from main mem
  localparam bp_cache_req_size_e block_req_size = bp_cache_req_size_e'(`BSG_SAFE_CLOG2(block_width_p/8));
  localparam bp_cache_req_size_e uncached_req_size = e_size_4B;

  wire cached_req1   = v_tv_r1 & cached_op_tv_r1 & fill_tv_r1 & ~cached_hit_tv_r1;
  wire uncached_req1 = v_tv_r1 & uncached_op_tv_r1 & fill_tv_r1 & ~uncached_pending_r1;
  wire fencei_req1   = v_tv_r1 & fencei_op_tv_r1 & !coherent_p1;

  wire cached_req2   = v_tv_r2 & cached_op_tv_r2 & fill_tv_r2 & ~cached_hit_tv_r2;
  wire uncached_req2 = v_tv_r2 & uncached_op_tv_r2 & fill_tv_r2 & ~uncached_pending_r2;
  wire fencei_req2   = v_tv_r2 & fencei_op_tv_r2 & !coherent_p2;

  assign cache_req1_v_o = |{uncached_req1, cached_req1, fencei_req1};
  assign cache_req2_v_o = |{uncached_req2, cached_req2, fencei_req2};

//cache request casting for the address, size, msg type, sub opp, data, and hit
  assign cache_req1_cast_o =
   '{addr     : paddr_tv_r1
     ,size    : cached_req1 ? block_req_size : uncached_req_size
     ,msg_type: cached_req1 ? e_miss_load : uncached_req1 ? e_uc_load : e_cache_clear
     ,subop   : e_req_amoswap
     ,data    : '0
     ,hit     : cached_hit_tv_r1
     };


  assign cache_req2_cast_o =
   '{addr     : paddr_tv_r2
     ,size    : cached_req2 ? block_req_size : uncached_req_size
     ,msg_type: cached_req2 ? e_miss_load : uncached_req2 ? e_uc_load : e_cache_clear
     ,subop   : e_req_amoswap
     ,data    : '0
     ,hit     : cached_hit_tv_r2
     };

  // The cache pipeline is designed to always send metadata a cycle after the request
  bsg_dff_reset
   #(.width_p(1))
   cache_req_v_reg1
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.data_i(cache_req1_yumi_i)
     ,.data_o(cache_req1_metadata_v_o)
     );

  bsg_dff_reset
   #(.width_p(1))
   cache_req_v_reg2
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.data_i(cache_req2_yumi_i)
     ,.data_o(cache_req2_metadata_v_o)
     );

//metadata is a hit from backend
  logic metadata_hit_r1, metadata_hit_r2;
  logic [lg_assoc_lp-1:0] metadata_hit_index_r1, metadata_hit_index_r2;
  bsg_dff
   #(.width_p(1+lg_assoc_lp))
   cached_hit_reg1
    (.clk_i(clk_i)
     ,.data_i({cached_hit_tv_r1, hit_index_tv1})
     ,.data_o({metadata_hit_r1, metadata_hit_index_r1})
     );
  bsg_dff
   #(.width_p(1+lg_assoc_lp))
   cached_hit_reg2
    (.clk_i(clk_i)
     ,.data_i({cached_hit_tv_r2, hit_index_tv2})
     ,.data_o({metadata_hit_r2, metadata_hit_index_r2})
     );

  wire [assoc_p-1:0] hit_or_repl_way1 = metadata_hit_r1 ? metadata_hit_index_r1 : lru_way_li1;
  wire [assoc_p-1:0] hit_or_repl_way2 = metadata_hit_r2 ? metadata_hit_index_r2 : lru_way_li2;

//assign wiring
  assign cache_req1_metadata_cast_o.hit_or_repl_way = hit_or_repl_way1;
  assign cache_req1_metadata_cast_o.dirty = '0;

  assign cache_req2_metadata_cast_o.hit_or_repl_way = hit_or_repl_way2;
  assign cache_req2_metadata_cast_o.dirty = '0;

  /////////////////////////////////////////////////////////////////////////////
  // State machine
  //   e_ready  : Cache is ready to accept requests
  //   e_miss   : Cache is waiting for a cache request to be serviced
  /////////////////////////////////////////////////////////////////////////////
  always_comb
    case (state_r)
      e_ready  : state_n = cache_req_yumi_i ? e_miss : e_ready;
      e_miss   : state_n = cache_req_complete_i ? e_ready : e_miss;
      default: state_n = e_ready;
    endcase

  //synopsys sync_set_reset "reset_i"
  always_ff @(posedge clk_i)
    if (reset_i)
      state_r <= e_ready;
    else
      state_r <= state_n;

  assign ready_o1 = is_ready & ~cache_req1_busy_i;
  assign ready_o2 = is_ready & ~cache_req2_busy_i;
  /////////////////////////////////////////////////////////////////////////////
  // SRAM Control
  /////////////////////////////////////////////////////////////////////////////

  ///////////////////////////
  // Tag Mem Control
  ///////////////////////////
  //grab last read mem
  logic tag_mem_last_read_r1, tag_mem_last_read_r2;
  bsg_dff_reset_set_clear
   #(.width_p(1), .clear_over_set_p(1))
   tag_mem_last_read_reg1
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.set_i(tl_we1)
     ,.clear_i(tag_mem_w_li1)
     ,.data_o(tag_mem_last_read_r1)
     );

  bsg_dff_reset_set_clear
   #(.width_p(1), .clear_over_set_p(1))
   tag_mem_last_read_reg2
    (.clk_i(clk_i)
     ,.reset_i(reset_i)
     ,.set_i(tl_we2)
     ,.clear_i(tag_mem_w_li2)
     ,.data_o(tag_mem_last_read_r2)
     );


  // Tag mem is bypassed if the index is the same on consecutive reads
  wire tag_mem_bypass1 = (vaddr_index1 == vaddr_index_tl1) & tag_mem_last_read_r1;
  wire tag_mem_fast_read1 = (tl_we1 & ~tag_mem_bypass1);
  assign tag_mem_v_li1 = tag_mem_fast_read1 | tag_mem_pkt1_yumi_o;
  assign tag_mem_w_li1 = tag_mem_pkt1_yumi_o & (tag_mem_pkt1_cast_i.opcode != e_cache_tag_mem_read);
  assign tag_mem_addr_li1 = tag_mem_fast_read1
    ? vaddr_index1
    : tag_mem_pkt1_cast_i.index;
  assign tag_mem_pkt1_yumi_o = tag_mem_pkt1_v_i & ~tag_mem_fast_read1;

  wire tag_mem_bypass2 = (vaddr_index2 == vaddr_index_tl2) & tag_mem_last_read_r2;
  wire tag_mem_fast_read2 = (tl_we2 & ~tag_mem_bypass2);
  assign tag_mem_v_li2 = tag_mem_fast_read2 | tag_mem_pkt2_yumi_o;
  assign tag_mem_w_li2 = tag_mem_pkt2_yumi_o & (tag_mem_pkt2_cast_i.opcode != e_cache_tag_mem_read);
  assign tag_mem_addr_li2 = tag_mem_fast_read2
    ? vaddr_index2
    : tag_mem_pkt2_cast_i.index;
  assign tag_mem_pkt2_yumi_o = tag_mem_pkt2_v_i & ~tag_mem_fast_read2;

//one hot decode your tag mem way
  logic [assoc_p-1:0] tag_mem_way_one_hot1;
  bsg_decode
   #(.num_out_p(assoc_p))
   tag_mem_way_decode1
    (.i(tag_mem_pkt1_cast_i.way_id)
     ,.o(tag_mem_way_one_hot1)
     );

  logic [assoc_p-1:0] tag_mem_way_one_hot2;
  bsg_decode
   #(.num_out_p(assoc_p))
   tag_mem_way_decode2
    (.i(tag_mem_pkt2_cast_i.way_id)
     ,.o(tag_mem_way_one_hot2)
     );

//logic to set tag, its state, and clear
  always_comb
    for (integer i = 0; i < assoc_p; i++)
      case (tag_mem_pkt1_cast_i.opcode)
        e_cache_tag_mem_set_tag:
          begin
            tag_mem_data_li1[i]   = '{state: tag_mem_pkt1_cast_i.state, tag: tag_mem_pkt1_cast_i.tag};
            tag_mem_w_mask_li1[i] = '{state: {$bits(bp_coh_states_e){tag_mem_way_one_hot1[i]}}
                                     ,tag : {ctag_width_p{tag_mem_way_one_hot1[i]}}
                                     };
          end
        e_cache_tag_mem_set_state:
          begin
            tag_mem_data_li1[i]   = '{state: tag_mem_pkt1_cast_i.state, tag: '0};
            tag_mem_w_mask_li1[i] = '{state: {$bits(bp_coh_states_e){tag_mem_way_one_hot1[i]}}, tag: '0};
          end
        default: // e_cache_tag_mem_set_clear
          begin
            tag_mem_data_li1[i]   = '{state: bp_coh_states_e'('0), tag: '0};
            tag_mem_w_mask_li1[i] = '{state: bp_coh_states_e'('1), tag: '1};
          end
      endcase
      case (tag_mem_pkt2_cast_i.opcode)
        e_cache_tag_mem_set_tag:
          begin
            tag_mem_data_li2[i]   = '{state: tag_mem_pkt2_cast_i.state, tag: tag_mem_pkt2_cast_i.tag};
            tag_mem_w_mask_li2[i] = '{state: {$bits(bp_coh_states_e){tag_mem_way_one_hot2[i]}}
                                     ,tag : {ctag_width_p{tag_mem_way_one_hot2[i]}}
                                     };
          end
        e_cache_tag_mem_set_state:
          begin
            tag_mem_data_li2[i]   = '{state: tag_mem_pkt2_cast_i.state, tag: '0};
            tag_mem_w_mask_li2[i] = '{state: {$bits(bp_coh_states_e){tag_mem_way_one_hot2[i]}}, tag: '0};
          end
        default: // e_cache_tag_mem_set_clear
          begin
            tag_mem_data_li2[i]   = '{state: bp_coh_states_e'('0), tag: '0};
            tag_mem_w_mask_li2[i] = '{state: bp_coh_states_e'('1), tag: '1};
          end
      endcase

  logic [lg_assoc_lp-1:0] tag_mem_pkt_way_r1;
  bsg_dff
   #(.width_p(lg_assoc_lp))
   tag_mem_pkt_way_reg1
    (.clk_i(clk_i)
     ,.data_i(tag_mem_pkt1_cast_i.way_id)
     ,.data_o(tag_mem_pkt_way_r1)
     );

  logic [lg_assoc_lp-1:0] tag_mem_pkt_way_r2;
  bsg_dff
   #(.width_p(lg_assoc_lp))
   tag_mem_pkt_way_reg2
    (.clk_i(clk_i)
     ,.data_i(tag_mem_pkt2_cast_i.way_id)
     ,.data_o(tag_mem_pkt_way_r2)
     );

  assign tag_mem1_o = tag_mem_data_lo1[tag_mem_pkt_way_r];
  assign tag_mem2_o = tag_mem_data_lo2[tag_mem_pkt_way_r];
  ///////////////////////////
  // Data Mem Control
  ///////////////////////////
  logic [assoc_p-1:0] vaddr_bank_dec1;
  bsg_decode
   #(.num_out_p(assoc_p))
   bypass_bank_decode1
    (.i(vaddr_bank1)
     ,.o(vaddr_bank_dec1)
     );

  logic [assoc_p-1:0] vaddr_bank_dec2;
  bsg_decode
   #(.num_out_p(assoc_p))
   bypass_bank_decode2
    (.i(vaddr_bank2)
     ,.o(vaddr_bank_dec2)
     );



  // During a data mem bypass, only the necessary bank of data memory is read
  logic [assoc_p-1:0] data_mem_bypass_select1, data_mem_bypass_select2;
  bsg_adder_one_hot
   #(.width_p(assoc_p))
   data_mem_bank_select_adder1
    (.a_i(hit_v_tl1)
     ,.b_i(vaddr_bank_dec1)
     ,.o(data_mem_bypass_select1)
     );

  bsg_adder_one_hot
   #(.width_p(assoc_p))
   data_mem_bank_select_adder2
    (.a_i(hit_v_tl2)
     ,.b_i(vaddr_bank_dec2)
     ,.o(data_mem_bypass_select2)
     );

  wire [`BSG_SAFE_CLOG2(fill_width_p)-1:0] write_data_rot_li1 = data_mem_pkt1_cast_i.way_id*bank_width_lp;
  wire [`BSG_SAFE_CLOG2(fill_width_p)-1:0] write_data_rot_li2 = data_mem_pkt2_cast_i.way_id*bank_width_lp;
  // Expand the bank write mask to bank width
  logic [fill_width_p-1:0] data_mem_pkt_fill_data_li1, data_mem_pkt_fill_data_li2;
  bsg_rotate_left
   #(.width_p(fill_width_p))
   write_data_rotate1
    (.data_i(data_mem_pkt1_cast_i.data)
     ,.rot_i(write_data_rot_li1)
     ,.o(data_mem_pkt_fill_data_li1)
     );

  bsg_rotate_left
   #(.width_p(fill_width_p))
   write_data_rotate2
    (.data_i(data_mem_pkt2_cast_i.data)
     ,.rot_i(write_data_rot_li2)
     ,.o(data_mem_pkt_fill_data_li2)
     );


  wire [assoc_p-1:0][bank_width_lp-1:0] data_mem_pkt_data_li1 = {block_size_in_fill_lp{data_mem_pkt_fill_data_li1}};
  wire [assoc_p-1:0][bank_width_lp-1:0] data_mem_pkt_data_li2 = {block_size_in_fill_lp{data_mem_pkt_fill_data_li2}};

  logic [block_size_in_fill_lp-1:0][fill_size_in_bank_lp-1:0] data_mem_pkt1_fill_mask_expanded, data_mem_pkt2_fill_mask_expanded;
  // use fill_index to generate bank write mask
  for (genvar i = 0; i < block_size_in_fill_lp; i++)
    begin : fill_mask
      assign data_mem_pkt1_fill_mask_expanded[i] = {fill_size_in_bank_lp{data_mem_pkt1_cast_i.fill_index[i]}};
      assign data_mem_pkt2_fill_mask_expanded[i] = {fill_size_in_bank_lp{data_mem_pkt2_cast_i.fill_index[i]}};
    end

  logic [assoc_p-1:0] data_mem_write_bank_mask1, data_mem_write_bank_mask2;
  wire [`BSG_SAFE_CLOG2(assoc_p)-1:0] write_mask_rot_li1 = data_mem_pkt1_cast_i.way_id;
  bsg_rotate_left
   #(.width_p(assoc_p))
   write_mask_rotate1
    (.data_i(data_mem_pkt1_fill_mask_expanded)
     ,.rot_i(write_mask_rot_li1)
     ,.o(data_mem_write_bank_mask1)
     );

  wire [`BSG_SAFE_CLOG2(assoc_p)-1:0] write_mask_rot_li2 = data_mem_pkt2_cast_i.way_id;
  bsg_rotate_left
   #(.width_p(assoc_p))
   write_mask_rotate2
    (.data_i(data_mem_pkt2_fill_mask_expanded)
     ,.rot_i(write_mask_rot_li2)
     ,.o(data_mem_write_bank_mask2)
     );

  wire data_mem_bypass1 = (vaddr_vtag1 == vaddr_vtag_tl1) & (vaddr_index1 == vaddr_index_tl1) & v_tl_r1;
  wire data_mem_bypass2 = (vaddr_vtag2 == vaddr_vtag_tl2) & (vaddr_index2 == vaddr_index_tl2) & v_tl_r2;


  logic [assoc_p-1:0] data_mem_fast_read1, data_mem_fast_write1, data_mem_slow_read1, data_mem_slow_write1;
  logic [assoc_p-1:0] data_mem_fast_read2, data_mem_fast_write2, data_mem_slow_read2, data_mem_slow_write2;
  for (genvar i = 0; i < assoc_p; i++)
    begin : data_mem_lines1
      assign data_mem_slow_read1[i] = data_mem_pkt1_yumi_o & (data_mem_pkt1_cast_i.opcode == e_cache_data_mem_read);
      assign data_mem_slow_write1[i] = data_mem_pkt1_yumi_o & (data_mem_pkt1_cast_i.opcode == e_cache_data_mem_write) & data_mem_write_bank_mask1[i];

      assign data_mem_fast_read1[i] = tl_we1 & is_fetch1 & (~data_mem_bypass1 | data_mem_bypass_select1[i]);

      assign data_mem_v_li1[i] = data_mem_fast_read1[i] | data_mem_slow_read1[i] | data_mem_slow_write1[i];
      assign data_mem_w_li1[i] = data_mem_slow_write1[i];
      wire [bindex_width_lp-1:0] data_mem_pkt_offset1 = (bindex_width_lp'(i) - data_mem_pkt1_cast_i.way_id);
      assign data_mem_addr_li1[i] = data_mem_fast_read1[i]
        ? {vaddr_index1, {(assoc_p > 1){vaddr_bank1}}}
        : {data_mem_pkt1_cast_i.index, {(assoc_p > 1){data_mem_pkt_offset1}}};
      assign data_mem_data_li1[i] = data_mem_pkt_data_li1[i];
    end

  for (genvar i = 0; i < assoc_p; i++)
    begin : data_mem_lines2
      assign data_mem_slow_read2[i] = data_mem_pkt2_yumi_o & (data_mem_pkt2_cast_i.opcode == e_cache_data_mem_read);
      assign data_mem_slow_write2[i] = data_mem_pkt2_yumi_o & (data_mem_pkt2_cast_i.opcode == e_cache_data_mem_write) & data_mem_write_bank_mask2[i];

      assign data_mem_fast_read2[i] = tl_we2 & is_fetch2 & (~data_mem_bypass2 | data_mem_bypass_select2[i]);

      assign data_mem_v_li2[i] = data_mem_fast_read2[i] | data_mem_slow_read2[i] | data_mem_slow_write2[i];
      assign data_mem_w_li2[i] = data_mem_slow_write[i];
      wire [bindex_width_lp-1:0] data_mem_pkt_offset2 = (bindex_width_lp'(i) - data_mem_pkt2_cast_i.way_id);
      assign data_mem_addr_li2[i] = data_mem_fast_read2[i]
        ? {vaddr_index2, {(assoc_p > 1){vaddr_bank2}}}
        : {data_mem_pkt2_cast_i.index, {(assoc_p > 1){data_mem_pkt_offset2}}};
      assign data_mem_data_li2[i] = data_mem_pkt_data_li2[i];
    end

  assign data_mem_pkt1_yumi_o = (data_mem_pkt1_cast_i.opcode == e_cache_data_mem_uncached)
    ? data_mem_pkt1_v_i
    : data_mem_pkt1_v_i & ~|data_mem_fast_read1;
  assign data_mem_pkt2_yumi_o = (data_mem_pkt2_cast_i.opcode == e_cache_data_mem_uncached)
    ? data_mem_pkt2_v_i
    : data_mem_pkt2_v_i & ~|data_mem_fast_read2;

  logic [lg_assoc_lp-1:0] data_mem_pkt_way_r1;
  bsg_dff
   #(.width_p(lg_assoc_lp))
   data_mem_pkt_way_reg1
    (.clk_i(clk_i)
     ,.data_i(data_mem_pkt1_cast_i.way_id)
     ,.data_o(data_mem_pkt_way_r1)
     );

  logic [lg_assoc_lp-1:0] data_mem_pkt_way_r2;
  bsg_dff
   #(.width_p(lg_assoc_lp))
   data_mem_pkt_way_reg2
    (.clk_i(clk_i)
     ,.data_i(data_mem_pkt2_cast_i.way_id)
     ,.data_o(data_mem_pkt_way_r2)
     );

  wire [`BSG_SAFE_CLOG2(block_width_p)-1:0] read_data_rot_li = data_mem_pkt_way_r*bank_width_lp;
  bsg_rotate_right
   #(.width_p(block_width_p))
   read_data_rotate2
    (.data_i(data_mem_data_lo2)
     ,.rot_i(read_data_rot_li2)
     ,.o(data_mem2_o)
     );

  wire [`BSG_SAFE_CLOG2(block_width_p)-1:0] read_data_rot_li1 = data_mem_pkt_way_r1*bank_width_lp;
  bsg_rotate_right
   #(.width_p(block_width_p))
   read_data_rotate1
    (.data_i(data_mem_data_lo1)
     ,.rot_i(read_data_rot_li)
     ,.o(data_mem1_o)
     );

  ///////////////////////////
  // Stat Mem Control
  ///////////////////////////
  wire stat_mem_fast_read1 = (v_tv_r1 & ~data_v_o1 & cached_op_tv_r1);
  wire stat_mem_fast_write1 = (v_tv_r1 & data_v_o1 & cached_op_tv_r1);
  wire stat_mem_slow_write1 = stat_mem_pkt1_v_i & (stat_mem_pkt1_cast_i.opcode != e_cache_stat_mem_read);
  assign stat_mem_pkt1_yumi_o = stat_mem_pkt1_v_i & ~stat_mem_fast_write1 & ~stat_mem_fast_read1;
  assign stat_mem_v_li1 = stat_mem_fast_read1 | stat_mem_fast_write1 | stat_mem_pkt1_yumi_o;
  assign stat_mem_w_li1 = stat_mem_fast_write1 | (stat_mem_pkt1_yumi_o & stat_mem_slow_write1);
  assign stat_mem_addr_li1 = (stat_mem_fast_write1 | stat_mem_fast_read1)
    ? paddr_tv_r1[block_offset_width_lp+:sindex_width_lp]
    : stat_mem_pkt1_cast_i.index;


  wire stat_mem_fast_read2 = (v_tv_r2 & ~data_v_o2 & cached_op_tv_r2);
  wire stat_mem_fast_write2 = (v_tv_r2 & data_v_o2 & cached_op_tv_r2);
  wire stat_mem_slow_write2 = stat_mem_pkt2_v_i & (stat_mem_pkt2_cast_i.opcode != e_cache_stat_mem_read);
  assign stat_mem_pkt2_yumi_o = stat_mem_pkt2_v_i & ~stat_mem_fast_write2 & ~stat_mem_fast_read2;
  assign stat_mem_v_li2 = stat_mem_fast_read2 | stat_mem_fast_write2 | stat_mem_pkt2_yumi_o;
  assign stat_mem_w_li2 = stat_mem_fast_write2 | (stat_mem_pkt2_yumi_o & stat_mem_slow_write2);
  assign stat_mem_addr_li2 = (stat_mem_fast_write2 | stat_mem_fast_read2)
    ? paddr_tv_r2[block_offset_width_lp+:sindex_width_lp]
    : stat_mem_pkt2_cast_i.index;

  logic [`BSG_SAFE_MINUS(assoc_p, 2):0] lru_decode_data_lo1, lru_decode_mask_lo1, lru_decode_data_lo2, lru_decode_mask_lo2; 
  bsg_lru_pseudo_tree_decode
   #(.ways_p(assoc_p))
   lru_decode1
    (.way_id_i(hit_index_tv1)
     ,.data_o(lru_decode_data_lo1)
     ,.mask_o(lru_decode_mask_lo1)
     );
  bsg_lru_pseudo_tree_decode
   #(.ways_p(assoc_p))
   lru_decode2
    (.way_id_i(hit_index_tv2)
     ,.data_o(lru_decode_data_lo2)
     ,.mask_o(lru_decode_mask_lo2)
     );

  assign stat_mem_data_li1.lru = stat_mem_fast_write1 ? lru_decode_data_lo1 : '0;
  assign stat_mem_mask_li1.lru = stat_mem_fast_write1 ? lru_decode_mask_lo1 : '1;

  assign stat_mem_data_li2.lru = stat_mem_fast_write2 ? lru_decode_data_lo2 : '0;
  assign stat_mem_mask_li2.lru = stat_mem_fast_write2 ? lru_decode_mask_lo2 : '1;

  assign stat_mem1_o = stat_mem_data_lo1;
  assign stat_mem2_o = stat_mem_data_lo2;
  ///////////////////////////
  // Uncached Load Storage
  ///////////////////////////
  wire uncached_pending_set1 = cache_req1_yumi_i & uncached_req1;
  wire uncached_pending_set2 = cache_req2_yumi_i & uncached_req2;
  // Invalidate uncached data if the cache when we successfully complete the request
  wire uncached_pending_clear1 = poison_tl_i1 | data_v_o1;
  wire uncached_pending_clear2 = poison_tl_i2 | data_v_o2;
  bsg_dff_reset_set_clear
   #(.width_p(1), .clear_over_set_p(1))
   uncached_pending_reg1
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.set_i(uncached_pending_set1)
     ,.clear_i(uncached_pending_clear1)
     ,.data_o(uncached_pending_r1)
     );

  bsg_dff_reset_set_clear
   #(.width_p(1), .clear_over_set_p(1))
   uncached_pending_reg2
    (.clk_i(clk_i)
     ,.reset_i(reset_i)

     ,.set_i(uncached_pending_set2)
     ,.clear_i(uncached_pending_clear2)
     ,.data_o(uncached_pending_r2)
     );

  wire uncached_data_set1 = data_mem_pkt1_yumi_o & (data_mem_pkt1_cast_i.opcode == e_cache_data_mem_uncached);
  bsg_dff_en
   #(.width_p(dword_width_gp))
   uncached_data_reg1
    (.clk_i(clk_i)
     ,.en_i(uncached_data_set1)

     ,.data_i(data_mem_pkt1_cast_i.data[0+:dword_width_gp])
     ,.data_o(uncached_data_r1)
     );

  wire uncached_data_set2 = data_mem_pkt2_yumi_o & (data_mem_pkt2_cast_i.opcode == e_cache_data_mem_uncached);
  bsg_dff_en
   #(.width_p(dword_width_gp))
   uncached_data_reg2
    (.clk_i(clk_i)
     ,.en_i(uncached_data_set2)

     ,.data_i(data_mem_pkt2_cast_i.data[0+:dword_width_gp])
     ,.data_o(uncached_data_r2)
     );

  //synopsys translate_off
  if (`BSG_SAFE_CLOG2(block_width_p*sets_p/8) != page_offset_width_gp) begin
    $error("Total cache size must be equal to 4kB * associativity");
  end
  //synopsys translate_on

endmodule
