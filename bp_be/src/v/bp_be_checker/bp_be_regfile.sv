/**
 *
 * Name:
 *   bp_be_regfile.v
 *
 * Description:
 *   Synchronous register file wrapper for integer and floating point RISC-V registers. Inlcudes
 *     logic to maintain the source register values during pipeline stalls.
 *
 * Notes:
 *   - Is it okay to continuously read on stalls? There's no switching, so energy may not
 *       be an issue.  An alternative would be to save the read data, but that's more flops / power
 *   - Should we read the regfile at all for x0? The memory will be a power of 2 size, so it comes
 *       down to if writing / reading x0 and then muxing is less power than checking x == 0 on input.
 *
 * Modifications:
 *   1. doubled inputs: rs_r_v_i, rs_addr_i width doubled
 *   2. doubled outputs: rs_data_o
 *   3. assumption: only 1 wb_pkt
 *   4. 2 writebacks now added. Void 3
 */

`include "bp_common_defines.svh"
`include "bp_be_defines.svh"

module bp_be_regfile
 import bp_common_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
    `declare_bp_proc_params(bp_params_p)

   , parameter `BSG_INV_PARAM(data_width_p)
   , parameter `BSG_INV_PARAM(read_ports_p)
   , parameter `BSG_INV_PARAM(zero_x0_p)
   )
  (input                                            clk_i
   , input                                          reset_i

   // rs read bus *2 for all
   , input [2*read_ports_p-1:0]                       rs_r_v_i
   , input [2*read_ports_p-1:0][reg_addr_width_gp-1:0] rs_addr_i
   , output [2*read_ports_p-1:0][data_width_p-1:0]    rs_data_o

   // rd write bus
   //two write ports
   , input [1:0]                                         rd_w_v_i
   , input [1:0][reg_addr_width_gp-1:0]                  rd_addr_i
   , input [1:0][data_width_p-1:0]                       rd_data_i
   );

  localparam rf_els_lp = 2**reg_addr_width_gp;
  logic [2*read_ports_p-1:0] rs_v_li;
  logic [2*read_ports_p-1:0][reg_addr_width_gp-1:0] rs_addr_li;
  logic [2*read_ports_p-1:0][data_width_p-1:0] rs_data_lo;
  if (read_ports_p == 2)
    begin : tworonew
      /*
      bsg_mem_2r1w_sync
       #(.width_p(data_width_p), .els_p(rf_els_lp))
       rf
        (.clk_i(clk_i)
         ,.reset_i(reset_i)
         ,.w_v_i(rd_w_v_i)
         ,.w_addr_i(rd_addr_i)
         ,.w_data_i(rd_data_i)
         ,.r0_v_i(rs_v_li[0])
         ,.r0_addr_i(rs_addr_li[0])
         ,.r0_data_o(rs_data_lo[0])
         ,.r1_v_i(rs_v_li[1])
         ,.r1_addr_i(rs_addr_li[1])
         ,.r1_data_o(rs_data_lo[1])
         );
      */

      bsg_mem_multiport
       #(.width_p(data_width_p), .els_p(rf_els_lp), .read_ports_p(2*read_ports_p), .write_ports_p(2))
       rf
       (.clk_i(clk_i)
         ,.reset_i(reset_i)

         ,.w_v_i(rd_w_v_i)
         ,.w_addr_i(rd_addr_i)
         ,.w_data_i(rd_data_i)

         ,.r_v_i(rs_v_li)
         ,.r_addr_i(rs_addr_li)
         ,.r_data_o(rs_data_lo)
       );

    end
  else if (read_ports_p == 3)
    begin : threeronew
      /*
      bsg_mem_3r1w_sync
       #(.width_p(data_width_p), .els_p(rf_els_lp))
       rf
        (.clk_i(clk_i)
         ,.reset_i(reset_i)
         ,.w_v_i(rd_w_v_i)
         ,.w_addr_i(rd_addr_i)
         ,.w_data_i(rd_data_i)
         ,.r0_v_i(rs_v_li[0])
         ,.r0_addr_i(rs_addr_li[0])
         ,.r0_data_o(rs_data_lo[0])
         ,.r1_v_i(rs_v_li[1])
         ,.r1_addr_i(rs_addr_li[1])
         ,.r1_data_o(rs_data_lo[1])
         ,.r2_v_i(rs_v_li[2])
         ,.r2_addr_i(rs_addr_li[2])
         ,.r2_data_o(rs_data_lo[2])
         );
      */

      bsg_mem_multiport
       #(.width_p(data_width_p), .els_p(rf_els_lp), .read_ports_p(2*read_ports_p), .write_ports_p(2))
       rf
       (.clk_i(clk_i)
         ,.reset_i(reset_i)

         ,.w_v_i(rd_w_v_i)
         ,.w_addr_i(rd_addr_i)
         ,.w_data_i(rd_data_i)

         ,.r_v_i(rs_v_li)
         ,.r_addr_i(rs_addr_li)
         ,.r_data_o(rs_data_lo)
       );
    end
  else
    begin : error
      $error("Error: unsupported number of read ports");
    end

  // Save the written data for forwarding
  logic [1:0][data_width_p-1:0] rd_data_r;
  bsg_dff
   #(.width_p(data_width_p))
   rd_reg
    (.clk_i(clk_i)
     ,.data_i(rd_data_i)
     ,.data_o(rd_data_r)
     );

  for (genvar i = 0; i < 2*read_ports_p; i++)
    begin : bypass
      logic zero_rs_r, fwd_rs_r1, fwd_rs_r2, rs_r_v_r;
      logic [data_width_p-1:0] fwd_data_lo1 ,fwd_data_lo2;
      wire zero_rs = rs_r_v_i[i] & (rs_addr_i[i] == '0) & (zero_x0_p == 1);
      wire fwd_rs1 = rd_w_v_i[0] & rs_r_v_i[i] & (rd_addr_i[0] == rs_addr_i[i]);
      wire fwd_rs2 = rd_w_v_i[1] & rs_r_v_i[i] & (rd_addr_i[1] == rs_addr_i[i]);
      
      bsg_dff
       #(.width_p(4))
       rs_r_v_reg
        (.clk_i(clk_i)

         ,.data_i({zero_rs, fwd_rs1, fwd_rs2, rs_r_v_i[i]})
         ,.data_o({zero_rs_r, fwd_rs_r1, fwd_rs_r2, rs_r_v_r})
         );
      //can get away with one fwd data by extending logic
      assign fwd_data_lo1 = zero_rs_r ? '0 : fwd_rs_r1 ? rd_data_r[0]
       : fwd_rs_r2 ? rd_data_r[1] : rs_data_lo[i];
      // assign fwd_data_lo2 = zero_rs_r ? '0 : fwd_rs_r2 ? rd_data_r[1] : rs_data_lo[i];

      logic [reg_addr_width_gp-1:0] rs_addr_r;
      bsg_dff_en
       #(.width_p(reg_addr_width_gp))
       rs_addr_reg
        (.clk_i(clk_i)
         ,.en_i(rs_r_v_i[i])

         ,.data_i(rs_addr_i[i])
         ,.data_o(rs_addr_r)
         );

      logic [data_width_p-1:0] rs_data_n1, rs_data_n2, rs_data_r1, rs_data_r2;
      wire replace_rs1 = rd_w_v_i[0] & (rs_addr_r == rd_addr_i[0]);
      wire replace_rs2 = rd_w_v_i[1] & (rs_addr_r == rd_addr_i[1]);
      assign rs_data_n1 = replace_rs1 ? rd_data_i[0] :
        replace_rs2 ? rd_data_i[1] : fwd_data_lo1;
      // assign rs_data_n2 = replace_rs2 ? rd_data_i[1] : fwd_data_lo2;
      bsg_dff_en
       #(.width_p(data_width_p))
       rs_data_reg1
        (.clk_i(clk_i)

         ,.en_i(rs_r_v_r | replace_rs1 | replace_rs2)
         ,.data_i(rs_data_n1)
         ,.data_o(rs_data_r1)
         );

      // bsg_dff_en
      //  #(.width_p(data_width_p))
      //  rs_data_reg2
      //   (.clk_i(clk_i)

      //    ,.en_i(rs_r_v_r | replace_rs2)
      //    ,.data_i(rs_data_n2)
      //    ,.data_o(rs_data_r2)
      //    );

      // Technically, this is unnecessary, since most hardened SRAMs still write correctly
      //   on read-write conflicts, and the read is handled by forwarding. But this avoids
      //   nasty warnings and possible power sink.
      assign rs_v_li[i] = rs_r_v_i[i] & ~(fwd_rs1 | fwd_rs2);
      assign rs_addr_li[i] = rs_addr_i[i];
      // Forward if we read/wrote, else pass out the register data
      assign rs_data_o[i] = (~rs_r_v_r) ? rs_data_r1 : 
                            fwd_data_lo1;
    end

endmodule

`BSG_ABSTRACT_MODULE(bp_be_regfile)