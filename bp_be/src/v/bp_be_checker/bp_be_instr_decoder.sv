/**
 *
 * Name:
 *   bp_be_instr_decode.v
 *
 * Description:
 *   BlackParrot instruction decoder for translating RISC-V instructions into pipeline control
 *     signals. Currently supports most of rv64i with the exception of fences and csrs.
 *
 * Notes:
 *   We may want to break this up into a decoder for each standard extension.
 *   Each pipe may need different signals. Use a union in decode_s to save bits?
 *
 * Modifications:
 *   1. doubled inputs: instr_i
 *   2. doubled outputs: all outputs
 */

`include "bp_common_defines.svh"
`include "bp_be_defines.svh"

module bp_be_instr_decoder
 import bp_common_pkg::*;
 import bp_be_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)

   // Generated parameters
   , localparam instr_width_lp = rv64_instr_width_gp
   , localparam decode_width_lp = $bits(bp_be_decode_s)
   , localparam decode_info_width_lp = `bp_be_decode_info_width
   )
  (input [instr_width_lp-1:0]           instr1_i, instr2_i
   , input [decode_info_width_lp-1:0]   decode_info_i

   , output logic [decode_width_lp-1:0] decode1_o, decode2_o
   , output logic                       illegal_instr1_o, illegal_instr2_o
   , output logic                       ecall_m1_o, ecall_m2_o
   , output logic                       ecall_s1_o, ecall_s2_o
   , output logic                       ecall_u1_o, ecall_u2_o
   , output logic                       ebreak1_o, ebreak2_o
   , output logic                       dbreak1_o, dbreak2_o
   , output logic                       dret1_o, dret2_o
   , output logic                       mret1_o, mret2_o
   , output logic                       sret1_o, sret2_o
   , output logic                       wfi1_o, wfi2_o
   , output logic                       sfence_vma1_o, sfence_vma2_o

   , output logic [dword_width_gp-1:0]  imm1_o, imm2_o
   );

  `declare_bp_be_internal_if_structs(vaddr_width_p, paddr_width_p, asid_width_p, branch_metadata_fwd_width_p);
  rv64_instr_fmatype_s instr1, instr2; // doubled
  bp_be_decode_s decode1_cast_o, decode2_cast_o; // doubled
  bp_be_decode_info_s decode_info_cast_i;

  //doubled
  assign instr1              = instr1_i;
  assign instr2              = instr2_i; 

  assign decode_info_cast_i = decode_info_i;
  
  //doubled
  assign decode1_o           = decode1_cast_o;
  assign decode2_o           = decode2_cast_o;

  // Decode logic
  always_comb
    begin
      decode1_cast_o = '0;

      illegal_instr1_o = '0;
      ecall_m1_o       = '0;
      ecall_s1_o       = '0;
      ecall_u1_o       = '0;
      ebreak1_o        = '0;
      dbreak1_o        = '0;
      dret1_o          = '0;
      mret1_o          = '0;
      sret1_o          = '0;
      wfi1_o           = '0;
      sfence_vma1_o    = '0;

      decode2_cast_o = '0;

      illegal_instr2_o = '0;
      ecall_m2_o       = '0;
      ecall_s2_o       = '0;
      ecall_u2_o       = '0;
      ebreak2_o        = '0;
      dbreak2_o        = '0;
      dret2_o          = '0;
      mret2_o          = '0;
      sret2_o          = '0;
      wfi2_o           = '0;
      sfence_vma2_o    = '0;

      unique casez (instr1.opcode)
        `RV64_OP_OP, `RV64_OP_32_OP:
          begin
            if (instr1 inside {`RV64_MUL, `RV64_MULW})
              decode1_cast_o.pipe_mul_v = 1'b1;
            else if (instr1 inside {`RV64_DIV, `RV64_DIVU, `RV64_DIVW, `RV64_DIVUW
                                   ,`RV64_REM, `RV64_REMU, `RV64_REMW, `RV64_REMUW
                                   })
              begin
                decode1_cast_o.pipe_long_v = 1'b1;
                decode1_cast_o.late_iwb_v  = (instr1.rd_addr != '0);
              end
            else
              decode1_cast_o.pipe_int_v = 1'b1;

            // The writeback for long latency ops comes out of band
            decode1_cast_o.irf_w_v    = ~decode1_cast_o.late_iwb_v & (instr1.rd_addr != '0);
            decode1_cast_o.opw_v      = (instr1.opcode == `RV64_OP_32_OP);
            unique casez (instr1)
              `RV64_ADD, `RV64_ADDW : decode1_cast_o.fu_op = e_int_op_add;
              `RV64_SUB, `RV64_SUBW : decode1_cast_o.fu_op = e_int_op_sub;
              `RV64_SLL, `RV64_SLLW : decode1_cast_o.fu_op = e_int_op_sll;
              `RV64_SRL, `RV64_SRLW : decode1_cast_o.fu_op = e_int_op_srl;
              `RV64_SRA, `RV64_SRAW : decode1_cast_o.fu_op = e_int_op_sra;
              `RV64_SLT             : decode1_cast_o.fu_op = e_int_op_slt;
              `RV64_SLTU            : decode1_cast_o.fu_op = e_int_op_sltu;
              `RV64_XOR             : decode1_cast_o.fu_op = e_int_op_xor;
              `RV64_OR              : decode1_cast_o.fu_op = e_int_op_or;
              `RV64_AND             : decode1_cast_o.fu_op = e_int_op_and;

              `RV64_MUL, `RV64_MULW   : decode1_cast_o.fu_op = e_fma_op_imul;
              `RV64_DIV, `RV64_DIVW   : decode1_cast_o.fu_op = e_mul_op_div;
              `RV64_DIVU, `RV64_DIVUW : decode1_cast_o.fu_op = e_mul_op_divu;
              `RV64_REM, `RV64_REMW   : decode1_cast_o.fu_op = e_mul_op_rem;
              `RV64_REMU, `RV64_REMUW : decode1_cast_o.fu_op = e_mul_op_remu;
              default : illegal_instr1_o = 1'b1;
            endcase

            decode1_cast_o.src1_sel   = e_src1_is_rs1;
            decode1_cast_o.src2_sel   = e_src2_is_rs2;
          end
        `RV64_OP_IMM_OP, `RV64_OP_IMM_32_OP:
          begin
            decode1_cast_o.pipe_int_v = 1'b1;
            decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
            decode1_cast_o.opw_v      = (instr1.opcode == `RV64_OP_IMM_32_OP);
            unique casez (instr1)
              `RV64_ADDI, `RV64_ADDIW : decode1_cast_o.fu_op = e_int_op_add;
              `RV64_SLLI, `RV64_SLLIW : decode1_cast_o.fu_op = e_int_op_sll;
              `RV64_SRLI, `RV64_SRLIW : decode1_cast_o.fu_op = e_int_op_srl;
              `RV64_SRAI, `RV64_SRAIW : decode1_cast_o.fu_op = e_int_op_sra;
              `RV64_SLTI              : decode1_cast_o.fu_op = e_int_op_slt;
              `RV64_SLTIU             : decode1_cast_o.fu_op = e_int_op_sltu;
              `RV64_XORI              : decode1_cast_o.fu_op = e_int_op_xor;
              `RV64_ORI               : decode1_cast_o.fu_op = e_int_op_or;
              `RV64_ANDI              : decode1_cast_o.fu_op = e_int_op_and;
              default : illegal_instr1_o = 1'b1;
            endcase

            decode1_cast_o.src1_sel   = e_src1_is_rs1;
            decode1_cast_o.src2_sel   = e_src2_is_imm;
          end
        `RV64_LUI_OP:
          begin
            decode1_cast_o.pipe_int_v = 1'b1;
            decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
            decode1_cast_o.fu_op      = e_int_op_pass_src2;
            decode1_cast_o.src2_sel   = e_src2_is_imm;
          end
        `RV64_AUIPC_OP:
          begin
            decode1_cast_o.pipe_int_v = 1'b1;
            decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
            decode1_cast_o.fu_op      = e_int_op_add;
            decode1_cast_o.src1_sel   = e_src1_is_pc;
            decode1_cast_o.src2_sel   = e_src2_is_imm;
          end
        `RV64_JAL_OP:
          begin
            decode1_cast_o.pipe_ctl_v = 1'b1;
            decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
            decode1_cast_o.fu_op      = e_ctrl_op_jal;
            decode1_cast_o.baddr_sel  = e_baddr_is_pc;
          end
        `RV64_JALR_OP:
          begin
            decode1_cast_o.pipe_ctl_v = 1'b1;
            decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
            unique casez (instr1)
              `RV64_JALR: decode1_cast_o.fu_op = e_ctrl_op_jalr;
              default : illegal_instr1_o = 1'b1;
            endcase
            decode1_cast_o.baddr_sel  = e_baddr_is_rs1;
          end
        `RV64_BRANCH_OP:
          begin
            decode1_cast_o.pipe_ctl_v = 1'b1;
            unique casez (instr1)
              `RV64_BEQ  : decode1_cast_o.fu_op = e_ctrl_op_beq;
              `RV64_BNE  : decode1_cast_o.fu_op = e_ctrl_op_bne;
              `RV64_BLT  : decode1_cast_o.fu_op = e_ctrl_op_blt;
              `RV64_BGE  : decode1_cast_o.fu_op = e_ctrl_op_bge;
              `RV64_BLTU : decode1_cast_o.fu_op = e_ctrl_op_bltu;
              `RV64_BGEU : decode1_cast_o.fu_op = e_ctrl_op_bgeu;
              default : illegal_instr1_o = 1'b1;
            endcase
            decode1_cast_o.baddr_sel  = e_baddr_is_pc;
          end
        `RV64_LOAD_OP:
          begin
            decode1_cast_o.pipe_mem_early_v = instr1 inside {`RV64_LD, `RV64_LW, `RV64_LWU};
            decode1_cast_o.pipe_mem_final_v = ~decode1_cast_o.pipe_mem_early_v;
            decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
            decode1_cast_o.dcache_r_v = 1'b1;
            decode1_cast_o.mem_v      = 1'b1;
            unique casez (instr1)
              `RV64_LB : decode1_cast_o.fu_op = e_dcache_op_lb;
              `RV64_LH : decode1_cast_o.fu_op = e_dcache_op_lh;
              `RV64_LW : decode1_cast_o.fu_op = e_dcache_op_lw;
              `RV64_LBU: decode1_cast_o.fu_op = e_dcache_op_lbu;
              `RV64_LHU: decode1_cast_o.fu_op = e_dcache_op_lhu;
              `RV64_LWU: decode1_cast_o.fu_op = e_dcache_op_lwu;
              `RV64_LD : decode1_cast_o.fu_op = e_dcache_op_ld;
              default : illegal_instr1_o = 1'b1;
            endcase
          end
        `RV64_FLOAD_OP:
          begin
            decode1_cast_o.pipe_mem_final_v = 1'b1;
            decode1_cast_o.frf_w_v    = 1'b1;
            decode1_cast_o.dcache_r_v = 1'b1;
            decode1_cast_o.mem_v      = 1'b1;
            decode1_cast_o.ops_v      = instr1 inside {`RV64_FL_W};

            illegal_instr1_o = ~decode_info_cast_i.fpu_en;

            unique casez (instr1)
              `RV64_FL_W: decode1_cast_o.fu_op = e_dcache_op_flw;
              `RV64_FL_D: decode1_cast_o.fu_op = e_dcache_op_fld;
              default: illegal_instr1_o = 1'b1;
            endcase
          end
        `RV64_STORE_OP:
          begin
            decode1_cast_o.pipe_mem_early_v = 1'b1;
            decode1_cast_o.dcache_w_v = 1'b1;
            decode1_cast_o.mem_v      = 1'b1;
            unique casez (instr1)
              `RV64_SB : decode1_cast_o.fu_op = e_dcache_op_sb;
              `RV64_SH : decode1_cast_o.fu_op = e_dcache_op_sh;
              `RV64_SW : decode1_cast_o.fu_op = e_dcache_op_sw;
              `RV64_SD : decode1_cast_o.fu_op = e_dcache_op_sd;
              default : illegal_instr1_o = 1'b1;
            endcase
          end
        `RV64_FSTORE_OP:
          begin
            decode1_cast_o.pipe_mem_early_v = 1'b1;
            decode1_cast_o.dcache_w_v = 1'b1;
            decode1_cast_o.mem_v      = 1'b1;
            decode1_cast_o.ops_v      = instr1 inside {`RV64_FS_W};
            decode1_cast_o.fflags_w_v = 1'b1;

            illegal_instr1_o = ~decode_info_cast_i.fpu_en;

            unique casez (instr1)
              `RV64_FS_W : decode1_cast_o.fu_op = e_dcache_op_fsw;
              `RV64_FS_D : decode1_cast_o.fu_op = e_dcache_op_fsd;
              default: illegal_instr1_o = 1'b1;
            endcase
          end
        `RV64_MISC_MEM_OP:
          begin
            unique casez (instr1)
              `RV64_FENCE   : begin end
              `RV64_FENCE_I :
                begin
                  decode1_cast_o.pipe_mem_early_v = 1'b1;
                  decode1_cast_o.fu_op            = e_dcache_op_fencei;
                end
              default : illegal_instr1_o = 1'b1;
            endcase
          end
        `RV64_SYSTEM_OP:
          begin
            decode1_cast_o.pipe_sys_v = 1'b1;
            unique casez (instr1)
              `RV64_ECALL:
                begin
                  ecall_m1_o = (decode_info_cast_i.priv_mode == `PRIV_MODE_M);
                  ecall_s1_o = (decode_info_cast_i.priv_mode == `PRIV_MODE_S);
                  ecall_u1_o = (decode_info_cast_i.priv_mode == `PRIV_MODE_U);
                end
              `RV64_EBREAK:
                begin
                  dbreak1_o = decode_info_cast_i.debug_mode
                             | (decode_info_cast_i.ebreakm & (decode_info_cast_i.priv_mode == `PRIV_MODE_M))
                             | (decode_info_cast_i.ebreaks & (decode_info_cast_i.priv_mode == `PRIV_MODE_S))
                             | (decode_info_cast_i.ebreaku & (decode_info_cast_i.priv_mode == `PRIV_MODE_U));
                  ebreak1_o = ~dbreak1_o;
                end
              `RV64_DRET:
                begin
                  illegal_instr1_o = ~decode_info_cast_i.debug_mode;
                  dret1_o = ~illegal_instr1_o;
                end
              `RV64_MRET:
                begin
                  illegal_instr1_o = ~decode_info_cast_i.debug_mode & (decode_info_cast_i.priv_mode < `PRIV_MODE_M);
                  mret1_o = ~illegal_instr1_o;
                end
              `RV64_SRET:
                begin
                  illegal_instr1_o = (~decode_info_cast_i.debug_mode & (decode_info_cast_i.priv_mode < `PRIV_MODE_S))
                    | (decode_info_cast_i.tsr & (decode_info_cast_i.priv_mode == `PRIV_MODE_S));
                  sret1_o = ~illegal_instr1_o;
                end
              `RV64_WFI:
                begin
                  // WFI operates as NOP in debug mode
                  illegal_instr1_o = decode_info_cast_i.tw;
                  wfi1_o = ~illegal_instr1_o & ~decode_info_cast_i.debug_mode;
                end
              `RV64_SFENCE_VMA:
                begin
                  illegal_instr1_o = (decode_info_cast_i.tvm & (decode_info_cast_i.priv_mode == `PRIV_MODE_S))
                    | (~decode_info_cast_i.debug_mode & (decode_info_cast_i.priv_mode < `PRIV_MODE_S));
                  sfence_vma1_o = ~illegal_instr1_o;
                end
              default:
                begin
                  decode1_cast_o.csr_w_v = instr1 inside {`RV64_CSRRW, `RV64_CSRRWI} || (instr1.rs1_addr != '0);
                  decode1_cast_o.csr_r_v = ~(instr1 inside {`RV64_CSRRW, `RV64_CSRRWI}) || (instr1.rd_addr != '0);
                  decode1_cast_o.irf_w_v = (instr1.rd_addr != '0);
                  unique casez (instr1)
                    `RV64_CSRRW : decode1_cast_o.fu_op = decode1_cast_o.csr_w_v ? e_csrrw  : e_csrr;
                    `RV64_CSRRWI: decode1_cast_o.fu_op = decode1_cast_o.csr_w_v ? e_csrrwi : e_csrr;
                    `RV64_CSRRS : decode1_cast_o.fu_op = decode1_cast_o.csr_w_v ? e_csrrs  : e_csrr;
                    `RV64_CSRRSI: decode1_cast_o.fu_op = decode1_cast_o.csr_w_v ? e_csrrsi : e_csrr;
                    `RV64_CSRRC : decode1_cast_o.fu_op = decode1_cast_o.csr_w_v ? e_csrrc  : e_csrr;
                    `RV64_CSRRCI: decode1_cast_o.fu_op = decode1_cast_o.csr_w_v ? e_csrrci : e_csrr;
                    default : illegal_instr1_o = 1'b1;
                  endcase
                end
            endcase
          end
        `RV64_FP_OP:
          begin
            illegal_instr1_o = ~decode_info_cast_i.fpu_en;
            unique casez (instr1)
              `RV64_FCVT_SD, `RV64_FCVT_DS:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FCVT_DS};
                  decode1_cast_o.fu_op        = e_aux_op_f2f;
                end
              `RV64_FCVT_WS, `RV64_FCVT_LS:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.opw_v        = instr1 inside {`RV64_FCVT_WS};
                  decode1_cast_o.ops_v        = 1'b1;
                  decode1_cast_o.fu_op        = e_aux_op_f2i;
                end
              `RV64_FCVT_WUS, `RV64_FCVT_LUS:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.opw_v        = instr1 inside {`RV64_FCVT_WUS};
                  decode1_cast_o.ops_v        = 1'b1;
                  decode1_cast_o.fu_op        = e_aux_op_f2iu;
                end
              `RV64_FCVT_SW, `RV64_FCVT_SL:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.opw_v        = instr1 inside {`RV64_FCVT_SW};
                  decode1_cast_o.ops_v        = 1'b1;
                  decode1_cast_o.fu_op        = e_aux_op_i2f;
                end
              `RV64_FCVT_SWU, `RV64_FCVT_SLU:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.opw_v        = instr1 inside {`RV64_FCVT_SWU};
                  decode1_cast_o.ops_v        = 1'b1;
                  decode1_cast_o.fu_op        = e_aux_op_iu2f;
                end
              `RV64_FCVT_WD, `RV64_FCVT_LD:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.opw_v        = instr1 inside {`RV64_FCVT_WD};
                  decode1_cast_o.fu_op        = e_aux_op_f2i;
                end
              `RV64_FCVT_WUD, `RV64_FCVT_LUD:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.opw_v        = instr1 inside {`RV64_FCVT_WUD};
                  decode1_cast_o.fu_op        = e_aux_op_f2iu;
                end
              `RV64_FCVT_DW, `RV64_FCVT_DL:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.opw_v        = instr1 inside {`RV64_FCVT_DW};
                  decode1_cast_o.fu_op        = e_aux_op_i2f;
                end
              `RV64_FCVT_DWU, `RV64_FCVT_DLU:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.opw_v        = instr1 inside {`RV64_FCVT_DWU};
                  decode1_cast_o.fu_op        = e_aux_op_iu2f;
                end
              `RV64_FMV_XW, `RV64_FMV_XD:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.opw_v        = instr1 inside {`RV64_FMV_XW};
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FMV_XW};
                  decode1_cast_o.fu_op        = e_aux_op_fmvi;
                end
              `RV64_FMV_WX, `RV64_FMV_DX:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.opw_v        = instr1 inside {`RV64_FMV_WX};
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FMV_WX};
                  decode1_cast_o.fu_op        = e_aux_op_imvf;
                end
              `RV64_FSGNJ_S, `RV64_FSGNJ_D:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FSGNJ_S};
                  decode1_cast_o.fu_op        = e_aux_op_fsgnj;
                end
              `RV64_FSGNJN_S, `RV64_FSGNJN_D:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FSGNJN_S};
                  decode1_cast_o.fu_op        = e_aux_op_fsgnjn;
                end
              `RV64_FSGNJX_S, `RV64_FSGNJX_D:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FSGNJX_S};
                  decode1_cast_o.fu_op        = e_aux_op_fsgnjx;
                end
              `RV64_FMIN_S, `RV64_FMIN_D:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FMIN_S};
                  decode1_cast_o.fu_op        = e_aux_op_fmin;
                end
              `RV64_FMAX_S, `RV64_FMAX_D:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FMAX_S};
                  decode1_cast_o.fu_op        = e_aux_op_fmax;
                end
              `RV64_FEQ_S, `RV64_FEQ_D:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FEQ_S};
                  decode1_cast_o.fu_op        = e_aux_op_feq;
                end
              `RV64_FLT_S, `RV64_FLT_D:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FLT_S};
                  decode1_cast_o.fu_op        = e_aux_op_flt;
                end
              `RV64_FLE_S, `RV64_FLE_D:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FLE_S};
                  decode1_cast_o.fu_op        = e_aux_op_fle;
                end
              `RV64_FCLASS_S, `RV64_FCLASS_D:
                begin
                  decode1_cast_o.pipe_aux_v   = 1'b1;
                  decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FCLASS_S};
                  decode1_cast_o.fu_op        = e_aux_op_fclass;
                end
              `RV64_FADD_S, `RV64_FADD_D:
                begin
                  decode1_cast_o.pipe_fma_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FADD_S};
                  decode1_cast_o.fu_op        = e_fma_op_fadd;
                end
              `RV64_FSUB_S, `RV64_FSUB_D:
                begin
                  decode1_cast_o.pipe_fma_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FSUB_S};
                  decode1_cast_o.fu_op        = e_fma_op_fsub;
                end
              `RV64_FMUL_S, `RV64_FMUL_D:
                begin
                  decode1_cast_o.pipe_fma_v   = 1'b1;
                  decode1_cast_o.frf_w_v      = 1'b1;
                  decode1_cast_o.fflags_w_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FMUL_S};
                  decode1_cast_o.fu_op        = e_fma_op_fmul;
                end
              `RV64_FDIV_S, `RV64_FDIV_D:
                begin
                  decode1_cast_o.pipe_long_v  = 1'b1;
                  decode1_cast_o.late_fwb_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FDIV_S};
                  decode1_cast_o.fu_op        = e_fma_op_fdiv;
                end
              `RV64_FSQRT_S, `RV64_FSQRT_D:
                begin
                  decode1_cast_o.pipe_long_v  = 1'b1;
                  decode1_cast_o.late_fwb_v   = 1'b1;
                  decode1_cast_o.ops_v        = instr1 inside {`RV64_FSQRT_S};
                  decode1_cast_o.fu_op        = e_fma_op_fsqrt;
                end
              default: illegal_instr1_o = 1'b1;
            endcase
          end


        `RV64_FMADD_OP, `RV64_FMSUB_OP, `RV64_FNMSUB_OP, `RV64_FNMADD_OP:
          begin
            decode1_cast_o.pipe_fma_v = 1'b1;
            decode1_cast_o.frf_w_v    = 1'b1;
            decode1_cast_o.fflags_w_v = 1'b1;
            decode1_cast_o.ops_v      = (instr1.fmt == e_fmt_single);

            casez (instr1.opcode)
              `RV64_FMADD_OP : decode1_cast_o.fu_op = e_fma_op_fmadd;
              `RV64_FMSUB_OP : decode1_cast_o.fu_op = e_fma_op_fmsub;
              `RV64_FNMSUB_OP: decode1_cast_o.fu_op = e_fma_op_fnmsub;
              `RV64_FNMADD_OP: decode1_cast_o.fu_op = e_fma_op_fnmadd;
              default: decode1_cast_o.fu_op = e_fma_op_fmadd;
            endcase

            illegal_instr1_o = ~decode_info_cast_i.fpu_en;
          end

        `RV64_AMO_OP:
          begin
            decode1_cast_o.pipe_mem_early_v = 1'b1;
            decode1_cast_o.irf_w_v    = (instr1.rd_addr != '0);
            decode1_cast_o.dcache_r_v = ~(instr1 inside {`RV64_SCD, `RV64_SCW});
            decode1_cast_o.dcache_w_v = ~(instr1 inside {`RV64_LRD, `RV64_LRW});
            decode1_cast_o.mem_v      = 1'b1;
            // Note: could do a more efficent decoding here by having atomic be a flag
            //   And having the op simply taken from funct3
            unique casez (instr1)
              `RV64_LRD      : decode1_cast_o.fu_op = e_dcache_op_lrd;
              `RV64_LRW      : decode1_cast_o.fu_op = e_dcache_op_lrw;
              `RV64_SCD      : decode1_cast_o.fu_op = e_dcache_op_scd;
              `RV64_SCW      : decode1_cast_o.fu_op = e_dcache_op_scw;
              `RV64_AMOSWAPD : decode1_cast_o.fu_op = e_dcache_op_amoswapd;
              `RV64_AMOSWAPW : decode1_cast_o.fu_op = e_dcache_op_amoswapw;
              `RV64_AMOADDD  : decode1_cast_o.fu_op = e_dcache_op_amoaddd;
              `RV64_AMOADDW  : decode1_cast_o.fu_op = e_dcache_op_amoaddw;
              `RV64_AMOXORD  : decode1_cast_o.fu_op = e_dcache_op_amoxord;
              `RV64_AMOXORW  : decode1_cast_o.fu_op = e_dcache_op_amoxorw;
              `RV64_AMOANDD  : decode1_cast_o.fu_op = e_dcache_op_amoandd;
              `RV64_AMOANDW  : decode1_cast_o.fu_op = e_dcache_op_amoandw;
              `RV64_AMOORD   : decode1_cast_o.fu_op = e_dcache_op_amoord;
              `RV64_AMOORW   : decode1_cast_o.fu_op = e_dcache_op_amoorw;
              `RV64_AMOMIND  : decode1_cast_o.fu_op = e_dcache_op_amomind;
              `RV64_AMOMINW  : decode1_cast_o.fu_op = e_dcache_op_amominw;
              `RV64_AMOMAXD  : decode1_cast_o.fu_op = e_dcache_op_amomaxd;
              `RV64_AMOMAXW  : decode1_cast_o.fu_op = e_dcache_op_amomaxw;
              `RV64_AMOMINUD : decode1_cast_o.fu_op = e_dcache_op_amominud;
              `RV64_AMOMINUW : decode1_cast_o.fu_op = e_dcache_op_amominuw;
              `RV64_AMOMAXUD : decode1_cast_o.fu_op = e_dcache_op_amomaxud;
              `RV64_AMOMAXUW : decode1_cast_o.fu_op = e_dcache_op_amomaxuw;
              default : illegal_instr1_o = 1'b1;
            endcase

            // Detect AMO support level
            unique casez (instr1)
              `RV64_LRD, `RV64_LRW, `RV64_SCD, `RV64_SCW:
                illegal_instr1_o =
                  ~|{dcache_amo_support_p[e_lr_sc], l2_amo_support_p[e_lr_sc]};
              `RV64_AMOSWAPD, `RV64_AMOSWAPW:
                illegal_instr1_o =
                  ~|{dcache_amo_support_p[e_amo_swap], l2_amo_support_p[e_amo_swap]};
              `RV64_AMOANDD, `RV64_AMOANDW
              ,`RV64_AMOORD, `RV64_AMOORW
              ,`RV64_AMOXORD, `RV64_AMOXORW:
                illegal_instr1_o =
                  ~|{dcache_amo_support_p[e_amo_fetch_logic], l2_amo_support_p[e_amo_fetch_logic]};
              `RV64_AMOADDD, `RV64_AMOADDW
              ,`RV64_AMOMIND, `RV64_AMOMINW, `RV64_AMOMAXD, `RV64_AMOMAXW
              ,`RV64_AMOMINUD, `RV64_AMOMINUW, `RV64_AMOMAXUD, `RV64_AMOMAXUW:
                illegal_instr1_o =
                  ~|{dcache_amo_support_p[e_amo_fetch_arithmetic], l2_amo_support_p[e_amo_fetch_arithmetic]};
              default: begin end
            endcase
          end
        default : illegal_instr1_o = 1'b1;
      endcase

      // Immediate extraction
      unique casez (instr1.opcode)
        `RV64_LUI_OP, `RV64_AUIPC_OP:
          imm1_o = `rv64_signext_u_imm(instr1);
        `RV64_JAL_OP:
          imm1_o = `rv64_signext_j_imm(instr1);
        `RV64_BRANCH_OP:
          imm1_o = `rv64_signext_b_imm(instr1);
        `RV64_STORE_OP, `RV64_FSTORE_OP:
          imm1_o = `rv64_signext_s_imm(instr1);
        `RV64_JALR_OP, `RV64_LOAD_OP, `RV64_OP_IMM_OP, `RV64_OP_IMM_32_OP, `RV64_FLOAD_OP:
          imm1_o = `rv64_signext_i_imm(instr1);
        `RV64_SYSTEM_OP:
          imm1_o = `rv64_signext_c_imm(instr1);
        //`RV64_AMO_OP:
        default: imm1_o = '0;
      endcase

      unique casez (instr2.opcode)
        `RV64_OP_OP, `RV64_OP_32_OP:
          begin
            if (instr2 inside {`RV64_MUL, `RV64_MULW})
              decode2_cast_o.pipe_mul_v = 1'b1;
            else if (instr2 inside {`RV64_DIV, `RV64_DIVU, `RV64_DIVW, `RV64_DIVUW
                                   ,`RV64_REM, `RV64_REMU, `RV64_REMW, `RV64_REMUW
                                   })
              begin
                decode2_cast_o.pipe_long_v = 1'b1;
                decode2_cast_o.late_iwb_v  = (instr2.rd_addr != '0);
              end
            else
              decode2_cast_o.pipe_int_v = 1'b1;

            // The writeback for long latency ops comes out of band
            decode2_cast_o.irf_w_v    = ~decode2_cast_o.late_iwb_v & (instr2.rd_addr != '0);
            decode2_cast_o.opw_v      = (instr2.opcode == `RV64_OP_32_OP);
            unique casez (instr2)
              `RV64_ADD, `RV64_ADDW : decode2_cast_o.fu_op = e_int_op_add;
              `RV64_SUB, `RV64_SUBW : decode2_cast_o.fu_op = e_int_op_sub;
              `RV64_SLL, `RV64_SLLW : decode2_cast_o.fu_op = e_int_op_sll;
              `RV64_SRL, `RV64_SRLW : decode2_cast_o.fu_op = e_int_op_srl;
              `RV64_SRA, `RV64_SRAW : decode2_cast_o.fu_op = e_int_op_sra;
              `RV64_SLT             : decode2_cast_o.fu_op = e_int_op_slt;
              `RV64_SLTU            : decode2_cast_o.fu_op = e_int_op_sltu;
              `RV64_XOR             : decode2_cast_o.fu_op = e_int_op_xor;
              `RV64_OR              : decode2_cast_o.fu_op = e_int_op_or;
              `RV64_AND             : decode2_cast_o.fu_op = e_int_op_and;

              `RV64_MUL, `RV64_MULW   : decode2_cast_o.fu_op = e_fma_op_imul;
              `RV64_DIV, `RV64_DIVW   : decode2_cast_o.fu_op = e_mul_op_div;
              `RV64_DIVU, `RV64_DIVUW : decode2_cast_o.fu_op = e_mul_op_divu;
              `RV64_REM, `RV64_REMW   : decode2_cast_o.fu_op = e_mul_op_rem;
              `RV64_REMU, `RV64_REMUW : decode2_cast_o.fu_op = e_mul_op_remu;
              default : illegal_instr2_o = 1'b1;
            endcase

            decode2_cast_o.src1_sel   = e_src1_is_rs1;
            decode2_cast_o.src2_sel   = e_src2_is_rs2;
          end
        `RV64_OP_IMM_OP, `RV64_OP_IMM_32_OP:
          begin
            decode2_cast_o.pipe_int_v = 1'b1;
            decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
            decode2_cast_o.opw_v      = (instr2.opcode == `RV64_OP_IMM_32_OP);
            unique casez (instr2)
              `RV64_ADDI, `RV64_ADDIW : decode2_cast_o.fu_op = e_int_op_add;
              `RV64_SLLI, `RV64_SLLIW : decode2_cast_o.fu_op = e_int_op_sll;
              `RV64_SRLI, `RV64_SRLIW : decode2_cast_o.fu_op = e_int_op_srl;
              `RV64_SRAI, `RV64_SRAIW : decode2_cast_o.fu_op = e_int_op_sra;
              `RV64_SLTI              : decode2_cast_o.fu_op = e_int_op_slt;
              `RV64_SLTIU             : decode2_cast_o.fu_op = e_int_op_sltu;
              `RV64_XORI              : decode2_cast_o.fu_op = e_int_op_xor;
              `RV64_ORI               : decode2_cast_o.fu_op = e_int_op_or;
              `RV64_ANDI              : decode2_cast_o.fu_op = e_int_op_and;
              default : illegal_instr2_o = 1'b1;
            endcase

            decode2_cast_o.src1_sel   = e_src1_is_rs1;
            decode2_cast_o.src2_sel   = e_src2_is_imm;
          end
        `RV64_LUI_OP:
          begin
            decode2_cast_o.pipe_int_v = 1'b1;
            decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
            decode2_cast_o.fu_op      = e_int_op_pass_src2;
            decode2_cast_o.src2_sel   = e_src2_is_imm;
          end
        `RV64_AUIPC_OP:
          begin
            decode2_cast_o.pipe_int_v = 1'b1;
            decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
            decode2_cast_o.fu_op      = e_int_op_add;
            decode2_cast_o.src1_sel   = e_src1_is_pc;
            decode2_cast_o.src2_sel   = e_src2_is_imm;
          end
        `RV64_JAL_OP:
          begin
            decode2_cast_o.pipe_ctl_v = 1'b1;
            decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
            decode2_cast_o.fu_op      = e_ctrl_op_jal;
            decode2_cast_o.baddr_sel  = e_baddr_is_pc;
          end
        `RV64_JALR_OP:
          begin
            decode2_cast_o.pipe_ctl_v = 1'b1;
            decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
            unique casez (instr2)
              `RV64_JALR: decode2_cast_o.fu_op = e_ctrl_op_jalr;
              default : illegal_instr2_o = 1'b1;
            endcase
            decode2_cast_o.baddr_sel  = e_baddr_is_rs1;
          end
        `RV64_BRANCH_OP:
          begin
            decode2_cast_o.pipe_ctl_v = 1'b1;
            unique casez (instr2)
              `RV64_BEQ  : decode2_cast_o.fu_op = e_ctrl_op_beq;
              `RV64_BNE  : decode2_cast_o.fu_op = e_ctrl_op_bne;
              `RV64_BLT  : decode2_cast_o.fu_op = e_ctrl_op_blt;
              `RV64_BGE  : decode2_cast_o.fu_op = e_ctrl_op_bge;
              `RV64_BLTU : decode2_cast_o.fu_op = e_ctrl_op_bltu;
              `RV64_BGEU : decode2_cast_o.fu_op = e_ctrl_op_bgeu;
              default : illegal_instr2_o = 1'b1;
            endcase
            decode2_cast_o.baddr_sel  = e_baddr_is_pc;
          end
        `RV64_LOAD_OP:
          begin
            decode2_cast_o.pipe_mem_early_v = instr2 inside {`RV64_LD, `RV64_LW, `RV64_LWU};
            decode2_cast_o.pipe_mem_final_v = ~decode2_cast_o.pipe_mem_early_v;
            decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
            decode2_cast_o.dcache_r_v = 1'b1;
            decode2_cast_o.mem_v      = 1'b1;
            unique casez (instr2)
              `RV64_LB : decode2_cast_o.fu_op = e_dcache_op_lb;
              `RV64_LH : decode2_cast_o.fu_op = e_dcache_op_lh;
              `RV64_LW : decode2_cast_o.fu_op = e_dcache_op_lw;
              `RV64_LBU: decode2_cast_o.fu_op = e_dcache_op_lbu;
              `RV64_LHU: decode2_cast_o.fu_op = e_dcache_op_lhu;
              `RV64_LWU: decode2_cast_o.fu_op = e_dcache_op_lwu;
              `RV64_LD : decode2_cast_o.fu_op = e_dcache_op_ld;
              default : illegal_instr2_o = 1'b1;
            endcase
          end
        `RV64_FLOAD_OP:
          begin
            decode2_cast_o.pipe_mem_final_v = 1'b1;
            decode2_cast_o.frf_w_v    = 1'b1;
            decode2_cast_o.dcache_r_v = 1'b1;
            decode2_cast_o.mem_v      = 1'b1;
            decode2_cast_o.ops_v      = instr2 inside {`RV64_FL_W};

            illegal_instr2_o = ~decode_info_cast_i.fpu_en;

            unique casez (instr2)
              `RV64_FL_W: decode2_cast_o.fu_op = e_dcache_op_flw;
              `RV64_FL_D: decode2_cast_o.fu_op = e_dcache_op_fld;
              default: illegal_instr2_o = 1'b1;
            endcase
          end
        `RV64_STORE_OP:
          begin
            decode2_cast_o.pipe_mem_early_v = 1'b1;
            decode2_cast_o.dcache_w_v = 1'b1;
            decode2_cast_o.mem_v      = 1'b1;
            unique casez (instr2)
              `RV64_SB : decode2_cast_o.fu_op = e_dcache_op_sb;
              `RV64_SH : decode2_cast_o.fu_op = e_dcache_op_sh;
              `RV64_SW : decode2_cast_o.fu_op = e_dcache_op_sw;
              `RV64_SD : decode2_cast_o.fu_op = e_dcache_op_sd;
              default : illegal_instr2_o = 1'b1;
            endcase
          end
        `RV64_FSTORE_OP:
          begin
            decode2_cast_o.pipe_mem_early_v = 1'b1;
            decode2_cast_o.dcache_w_v = 1'b1;
            decode2_cast_o.mem_v      = 1'b1;
            decode2_cast_o.ops_v      = instr2 inside {`RV64_FS_W};
            decode2_cast_o.fflags_w_v = 1'b1;

            illegal_instr2_o = ~decode_info_cast_i.fpu_en;

            unique casez (instr2)
              `RV64_FS_W : decode2_cast_o.fu_op = e_dcache_op_fsw;
              `RV64_FS_D : decode2_cast_o.fu_op = e_dcache_op_fsd;
              default: illegal_instr2_o = 1'b1;
            endcase
          end
        `RV64_MISC_MEM_OP:
          begin
            unique casez (instr2)
              `RV64_FENCE   : begin end
              `RV64_FENCE_I :
                begin
                  decode2_cast_o.pipe_mem_early_v = 1'b1;
                  decode2_cast_o.fu_op            = e_dcache_op_fencei;
                end
              default : illegal_instr2_o = 1'b1;
            endcase
          end
        `RV64_SYSTEM_OP:
          begin
            decode2_cast_o.pipe_sys_v = 1'b1;
            unique casez (instr2)
              `RV64_ECALL:
                begin
                  ecall_m2_o = (decode_info_cast_i.priv_mode == `PRIV_MODE_M);
                  ecall_s2_o = (decode_info_cast_i.priv_mode == `PRIV_MODE_S);
                  ecall_u2_o = (decode_info_cast_i.priv_mode == `PRIV_MODE_U);
                end
              `RV64_EBREAK:
                begin
                  dbreak2_o = decode_info_cast_i.debug_mode
                             | (decode_info_cast_i.ebreakm & (decode_info_cast_i.priv_mode == `PRIV_MODE_M))
                             | (decode_info_cast_i.ebreaks & (decode_info_cast_i.priv_mode == `PRIV_MODE_S))
                             | (decode_info_cast_i.ebreaku & (decode_info_cast_i.priv_mode == `PRIV_MODE_U));
                  ebreak2_o = ~dbreak2_o;
                end
              `RV64_DRET:
                begin
                  illegal_instr2_o = ~decode_info_cast_i.debug_mode;
                  dret2_o = ~illegal_instr2_o;
                end
              `RV64_MRET:
                begin
                  illegal_instr2_o = ~decode_info_cast_i.debug_mode & (decode_info_cast_i.priv_mode < `PRIV_MODE_M);
                  mret2_o = ~illegal_instr2_o;
                end
              `RV64_SRET:
                begin
                  illegal_instr2_o = (~decode_info_cast_i.debug_mode & (decode_info_cast_i.priv_mode < `PRIV_MODE_S))
                    | (decode_info_cast_i.tsr & (decode_info_cast_i.priv_mode == `PRIV_MODE_S));
                  sret2_o = ~illegal_instr2_o;
                end
              `RV64_WFI:
                begin
                  // WFI operates as NOP in debug mode
                  illegal_instr2_o = decode_info_cast_i.tw;
                  wfi2_o = ~illegal_instr2_o & ~decode_info_cast_i.debug_mode;
                end
              `RV64_SFENCE_VMA:
                begin
                  illegal_instr2_o = (decode_info_cast_i.tvm & (decode_info_cast_i.priv_mode == `PRIV_MODE_S))
                    | (~decode_info_cast_i.debug_mode & (decode_info_cast_i.priv_mode < `PRIV_MODE_S));
                  sfence_vma2_o = ~illegal_instr2_o;
                end
              default:
                begin
                  decode2_cast_o.csr_w_v = instr2 inside {`RV64_CSRRW, `RV64_CSRRWI} || (instr2.rs1_addr != '0);
                  decode2_cast_o.csr_r_v = ~(instr2 inside {`RV64_CSRRW, `RV64_CSRRWI}) || (instr2.rd_addr != '0);
                  decode2_cast_o.irf_w_v = (instr2.rd_addr != '0);
                  unique casez (instr2)
                    `RV64_CSRRW : decode2_cast_o.fu_op = decode2_cast_o.csr_w_v ? e_csrrw  : e_csrr;
                    `RV64_CSRRWI: decode2_cast_o.fu_op = decode2_cast_o.csr_w_v ? e_csrrwi : e_csrr;
                    `RV64_CSRRS : decode2_cast_o.fu_op = decode2_cast_o.csr_w_v ? e_csrrs  : e_csrr;
                    `RV64_CSRRSI: decode2_cast_o.fu_op = decode2_cast_o.csr_w_v ? e_csrrsi : e_csrr;
                    `RV64_CSRRC : decode2_cast_o.fu_op = decode2_cast_o.csr_w_v ? e_csrrc  : e_csrr;
                    `RV64_CSRRCI: decode2_cast_o.fu_op = decode2_cast_o.csr_w_v ? e_csrrci : e_csrr;
                    default : illegal_instr2_o = 1'b1;
                  endcase
                end
            endcase
          end
        `RV64_FP_OP:
          begin
            illegal_instr2_o = ~decode_info_cast_i.fpu_en;
            unique casez (instr2)
              `RV64_FCVT_SD, `RV64_FCVT_DS:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FCVT_DS};
                  decode2_cast_o.fu_op        = e_aux_op_f2f;
                end
              `RV64_FCVT_WS, `RV64_FCVT_LS:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.opw_v        = instr2 inside {`RV64_FCVT_WS};
                  decode2_cast_o.ops_v        = 1'b1;
                  decode2_cast_o.fu_op        = e_aux_op_f2i;
                end
              `RV64_FCVT_WUS, `RV64_FCVT_LUS:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.opw_v        = instr2 inside {`RV64_FCVT_WUS};
                  decode2_cast_o.ops_v        = 1'b1;
                  decode2_cast_o.fu_op        = e_aux_op_f2iu;
                end
              `RV64_FCVT_SW, `RV64_FCVT_SL:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.opw_v        = instr2 inside {`RV64_FCVT_SW};
                  decode2_cast_o.ops_v        = 1'b1;
                  decode2_cast_o.fu_op        = e_aux_op_i2f;
                end
              `RV64_FCVT_SWU, `RV64_FCVT_SLU:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.opw_v        = instr2 inside {`RV64_FCVT_SWU};
                  decode2_cast_o.ops_v        = 1'b1;
                  decode2_cast_o.fu_op        = e_aux_op_iu2f;
                end
              `RV64_FCVT_WD, `RV64_FCVT_LD:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.opw_v        = instr2 inside {`RV64_FCVT_WD};
                  decode2_cast_o.fu_op        = e_aux_op_f2i;
                end
              `RV64_FCVT_WUD, `RV64_FCVT_LUD:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.opw_v        = instr2 inside {`RV64_FCVT_WUD};
                  decode2_cast_o.fu_op        = e_aux_op_f2iu;
                end
              `RV64_FCVT_DW, `RV64_FCVT_DL:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.opw_v        = instr2 inside {`RV64_FCVT_DW};
                  decode2_cast_o.fu_op        = e_aux_op_i2f;
                end
              `RV64_FCVT_DWU, `RV64_FCVT_DLU:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.opw_v        = instr2 inside {`RV64_FCVT_DWU};
                  decode2_cast_o.fu_op        = e_aux_op_iu2f;
                end
              `RV64_FMV_XW, `RV64_FMV_XD:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.opw_v        = instr2 inside {`RV64_FMV_XW};
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FMV_XW};
                  decode2_cast_o.fu_op        = e_aux_op_fmvi;
                end
              `RV64_FMV_WX, `RV64_FMV_DX:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.opw_v        = instr2 inside {`RV64_FMV_WX};
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FMV_WX};
                  decode2_cast_o.fu_op        = e_aux_op_imvf;
                end
              `RV64_FSGNJ_S, `RV64_FSGNJ_D:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FSGNJ_S};
                  decode2_cast_o.fu_op        = e_aux_op_fsgnj;
                end
              `RV64_FSGNJN_S, `RV64_FSGNJN_D:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FSGNJN_S};
                  decode2_cast_o.fu_op        = e_aux_op_fsgnjn;
                end
              `RV64_FSGNJX_S, `RV64_FSGNJX_D:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FSGNJX_S};
                  decode2_cast_o.fu_op        = e_aux_op_fsgnjx;
                end
              `RV64_FMIN_S, `RV64_FMIN_D:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FMIN_S};
                  decode2_cast_o.fu_op        = e_aux_op_fmin;
                end
              `RV64_FMAX_S, `RV64_FMAX_D:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FMAX_S};
                  decode2_cast_o.fu_op        = e_aux_op_fmax;
                end
              `RV64_FEQ_S, `RV64_FEQ_D:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FEQ_S};
                  decode2_cast_o.fu_op        = e_aux_op_feq;
                end
              `RV64_FLT_S, `RV64_FLT_D:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FLT_S};
                  decode2_cast_o.fu_op        = e_aux_op_flt;
                end
              `RV64_FLE_S, `RV64_FLE_D:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FLE_S};
                  decode2_cast_o.fu_op        = e_aux_op_fle;
                end
              `RV64_FCLASS_S, `RV64_FCLASS_D:
                begin
                  decode2_cast_o.pipe_aux_v   = 1'b1;
                  decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FCLASS_S};
                  decode2_cast_o.fu_op        = e_aux_op_fclass;
                end
              `RV64_FADD_S, `RV64_FADD_D:
                begin
                  decode2_cast_o.pipe_fma_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FADD_S};
                  decode2_cast_o.fu_op        = e_fma_op_fadd;
                end
              `RV64_FSUB_S, `RV64_FSUB_D:
                begin
                  decode2_cast_o.pipe_fma_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FSUB_S};
                  decode2_cast_o.fu_op        = e_fma_op_fsub;
                end
              `RV64_FMUL_S, `RV64_FMUL_D:
                begin
                  decode2_cast_o.pipe_fma_v   = 1'b1;
                  decode2_cast_o.frf_w_v      = 1'b1;
                  decode2_cast_o.fflags_w_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FMUL_S};
                  decode2_cast_o.fu_op        = e_fma_op_fmul;
                end
              `RV64_FDIV_S, `RV64_FDIV_D:
                begin
                  decode2_cast_o.pipe_long_v  = 1'b1;
                  decode2_cast_o.late_fwb_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FDIV_S};
                  decode2_cast_o.fu_op        = e_fma_op_fdiv;
                end
              `RV64_FSQRT_S, `RV64_FSQRT_D:
                begin
                  decode2_cast_o.pipe_long_v  = 1'b1;
                  decode2_cast_o.late_fwb_v   = 1'b1;
                  decode2_cast_o.ops_v        = instr2 inside {`RV64_FSQRT_S};
                  decode2_cast_o.fu_op        = e_fma_op_fsqrt;
                end
              default: illegal_instr2_o = 1'b1;
            endcase
          end


        `RV64_FMADD_OP, `RV64_FMSUB_OP, `RV64_FNMSUB_OP, `RV64_FNMADD_OP:
          begin
            decode2_cast_o.pipe_fma_v = 1'b1;
            decode2_cast_o.frf_w_v    = 1'b1;
            decode2_cast_o.fflags_w_v = 1'b1;
            decode2_cast_o.ops_v      = (instr2.fmt == e_fmt_single);

            casez (instr2.opcode)
              `RV64_FMADD_OP : decode2_cast_o.fu_op = e_fma_op_fmadd;
              `RV64_FMSUB_OP : decode2_cast_o.fu_op = e_fma_op_fmsub;
              `RV64_FNMSUB_OP: decode2_cast_o.fu_op = e_fma_op_fnmsub;
              `RV64_FNMADD_OP: decode2_cast_o.fu_op = e_fma_op_fnmadd;
              default: decode2_cast_o.fu_op = e_fma_op_fmadd;
            endcase

            illegal_instr2_o = ~decode_info_cast_i.fpu_en;
          end

        `RV64_AMO_OP:
          begin
            decode2_cast_o.pipe_mem_early_v = 1'b1;
            decode2_cast_o.irf_w_v    = (instr2.rd_addr != '0);
            decode2_cast_o.dcache_r_v = ~(instr2 inside {`RV64_SCD, `RV64_SCW});
            decode2_cast_o.dcache_w_v = ~(instr2 inside {`RV64_LRD, `RV64_LRW});
            decode2_cast_o.mem_v      = 1'b1;
            // Note: could do a more efficent decoding here by having atomic be a flag
            //   And having the op simply taken from funct3
            unique casez (instr2)
              `RV64_LRD      : decode2_cast_o.fu_op = e_dcache_op_lrd;
              `RV64_LRW      : decode2_cast_o.fu_op = e_dcache_op_lrw;
              `RV64_SCD      : decode2_cast_o.fu_op = e_dcache_op_scd;
              `RV64_SCW      : decode2_cast_o.fu_op = e_dcache_op_scw;
              `RV64_AMOSWAPD : decode2_cast_o.fu_op = e_dcache_op_amoswapd;
              `RV64_AMOSWAPW : decode2_cast_o.fu_op = e_dcache_op_amoswapw;
              `RV64_AMOADDD  : decode2_cast_o.fu_op = e_dcache_op_amoaddd;
              `RV64_AMOADDW  : decode2_cast_o.fu_op = e_dcache_op_amoaddw;
              `RV64_AMOXORD  : decode2_cast_o.fu_op = e_dcache_op_amoxord;
              `RV64_AMOXORW  : decode2_cast_o.fu_op = e_dcache_op_amoxorw;
              `RV64_AMOANDD  : decode2_cast_o.fu_op = e_dcache_op_amoandd;
              `RV64_AMOANDW  : decode2_cast_o.fu_op = e_dcache_op_amoandw;
              `RV64_AMOORD   : decode2_cast_o.fu_op = e_dcache_op_amoord;
              `RV64_AMOORW   : decode2_cast_o.fu_op = e_dcache_op_amoorw;
              `RV64_AMOMIND  : decode2_cast_o.fu_op = e_dcache_op_amomind;
              `RV64_AMOMINW  : decode2_cast_o.fu_op = e_dcache_op_amominw;
              `RV64_AMOMAXD  : decode2_cast_o.fu_op = e_dcache_op_amomaxd;
              `RV64_AMOMAXW  : decode2_cast_o.fu_op = e_dcache_op_amomaxw;
              `RV64_AMOMINUD : decode2_cast_o.fu_op = e_dcache_op_amominud;
              `RV64_AMOMINUW : decode2_cast_o.fu_op = e_dcache_op_amominuw;
              `RV64_AMOMAXUD : decode2_cast_o.fu_op = e_dcache_op_amomaxud;
              `RV64_AMOMAXUW : decode2_cast_o.fu_op = e_dcache_op_amomaxuw;
              default : illegal_instr2_o = 1'b1;
            endcase

            // Detect AMO support level
            unique casez (instr2)
              `RV64_LRD, `RV64_LRW, `RV64_SCD, `RV64_SCW:
                illegal_instr2_o =
                  ~|{dcache_amo_support_p[e_lr_sc], l2_amo_support_p[e_lr_sc]};
              `RV64_AMOSWAPD, `RV64_AMOSWAPW:
                illegal_instr2_o =
                  ~|{dcache_amo_support_p[e_amo_swap], l2_amo_support_p[e_amo_swap]};
              `RV64_AMOANDD, `RV64_AMOANDW
              ,`RV64_AMOORD, `RV64_AMOORW
              ,`RV64_AMOXORD, `RV64_AMOXORW:
                illegal_instr2_o =
                  ~|{dcache_amo_support_p[e_amo_fetch_logic], l2_amo_support_p[e_amo_fetch_logic]};
              `RV64_AMOADDD, `RV64_AMOADDW
              ,`RV64_AMOMIND, `RV64_AMOMINW, `RV64_AMOMAXD, `RV64_AMOMAXW
              ,`RV64_AMOMINUD, `RV64_AMOMINUW, `RV64_AMOMAXUD, `RV64_AMOMAXUW:
                illegal_instr2_o =
                  ~|{dcache_amo_support_p[e_amo_fetch_arithmetic], l2_amo_support_p[e_amo_fetch_arithmetic]};
              default: begin end
            endcase
          end
        default : illegal_instr2_o = 1'b1;
      endcase

      // Immediate extraction
      unique casez (instr2.opcode)
        `RV64_LUI_OP, `RV64_AUIPC_OP:
          imm2_o = `rv64_signext_u_imm(instr2);
        `RV64_JAL_OP:
          imm2_o = `rv64_signext_j_imm(instr2);
        `RV64_BRANCH_OP:
          imm2_o = `rv64_signext_b_imm(instr2);
        `RV64_STORE_OP, `RV64_FSTORE_OP:
          imm2_o = `rv64_signext_s_imm(instr2);
        `RV64_JALR_OP, `RV64_LOAD_OP, `RV64_OP_IMM_OP, `RV64_OP_IMM_32_OP, `RV64_FLOAD_OP:
          imm2_o = `rv64_signext_i_imm(instr2);
        `RV64_SYSTEM_OP:
          imm2_o = `rv64_signext_c_imm(instr2);
        //`RV64_AMO_OP:
        default: imm2_o = '0;
      endcase    
    end

endmodule

