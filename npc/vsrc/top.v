/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off BLKSEQ */
/* verilator lint_off PINMISSING */
/* verilator lint_off LATCH */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off VARHIDDEN */
/* verilator lint_off PINCONNECTEMPTY */




`ifndef PRINTF_COND_
  `ifdef PRINTF_COND
    `define PRINTF_COND_ (`PRINTF_COND)
  `else  
    `define PRINTF_COND_ 1
  `endif 
`endif 

module IFU(	
  input         clock,	
                reset,	
  input  [31:0] io_pc,	
  input         io_out_ready,	
  output        io_out_valid,	
  output [31:0] io_out_bits_inst,	
                io_out_bits_pc,	
  input         io_ifu_axi_out_ready,	
  output        io_ifu_axi_out_valid,	
                io_ifu_axi_out_bits_arvalid,	
  output [31:0] io_ifu_axi_out_bits_araddr,	
  output        io_ifu_axi_in_ready,	
  input         io_ifu_axi_in_bits_arready,	
                io_ifu_axi_in_bits_rvalid,	
  input  [31:0] io_ifu_axi_in_bits_rdata,	
  input         io_ifu_axi_in_bits_rresp,	
  output        io_ifu_valid,	
                io_diff_test	
);

  reg         arvalid;	
  reg         valid;	
  reg  [31:0] IPC;	
  reg  [31:0] IR;	
  reg  [1:0]  state;	
  wire        _GEN = state == 2'h0;	
  wire        _GEN_0 = io_pc == IPC;	
  always @(posedge clock) begin	
    if (reset) begin	
      arvalid <= 1'h0;	
      valid <= 1'h0;	
      IPC <= 32'h0;	
      IR <= 32'h0;	
      state <= 2'h0;	
    end
    else begin	
      automatic logic            _GEN_1;	
      automatic logic            _GEN_2;	
      automatic logic            _GEN_3 =
        io_ifu_axi_in_bits_rvalid & io_ifu_axi_in_bits_rresp;	
      automatic logic            _GEN_4;	
      automatic logic [3:0][1:0] _GEN_5;	
      _GEN_1 = state == 2'h1;	
      _GEN_2 = arvalid & io_ifu_axi_in_bits_arready;	
      _GEN_4 = state == 2'h2 & _GEN_3;	
      if (_GEN) begin	
        arvalid <= ~_GEN_0 & io_ifu_axi_out_ready | arvalid;	
        valid <= ~_GEN_0 | valid;	
      end
      else begin	
        arvalid <= ~(_GEN_1 & _GEN_2) & arvalid;	
        valid <= (_GEN_1 | ~_GEN_4) & valid;	
      end
      if (_GEN | _GEN_1 | ~_GEN_4) begin	
      end
      else begin	
        IPC <= io_pc;	
        IR <= io_ifu_axi_in_bits_rdata;	
      end
      _GEN_5 =
        {{(&state) & io_out_ready ? 2'h0 : state},
         {_GEN_3 ? 2'h3 : state},
         {_GEN_2 ? 2'h2 : state},
         {_GEN_0 | ~io_ifu_axi_out_ready ? state : 2'h1}};	
      state <= _GEN_5[state];	
    end
  end 
  assign io_out_valid = &state;	
  assign io_out_bits_inst = IR;	
  assign io_out_bits_pc = IPC;	
  assign io_ifu_axi_out_valid = valid;	
  assign io_ifu_axi_out_bits_arvalid = arvalid;	
  assign io_ifu_axi_out_bits_araddr = io_pc;	
  assign io_ifu_axi_in_ready = valid;	
  assign io_ifu_valid = valid;	
  assign io_diff_test = _GEN & ~_GEN_0 & io_ifu_axi_out_ready;	
endmodule

module CONTORLLER(	
  input  [31:0] io_inst,	
                io_rs1,	
                io_rs2,	
  output        io_rf_wr_en,	
  output [2:0]  io_rf_wr_sel,	
  output        io_alu_a_sel,	
                io_alu_b_sel,	
                io_mem_wr_en,	
  output [12:0] io_alu_sel,	
  output        io_jump_en,	
                io_jump_jalr,	
  output [31:0] io_len,	
                io_imm,	
  output        io_load_unsign,	
                io_is_ecall,	
                io_is_csr,	
                io_is_mret,	
                io_is_load,	
                io_isS_type	
);

  wire isR_type = io_inst[6:0] == 7'h33;	
  wire isI_type = io_inst[6:0] == 7'h13;	
  wire isS_type = io_inst[6:0] == 7'h23;	
  wire isB_type = io_inst[6:0] == 7'h63;	
  wire is_load = io_inst[6:0] == 7'h3;	
  wire is_auipc = io_inst[6:0] == 7'h17;	
  wire is_lui = io_inst[6:0] == 7'h37;	
  wire is_jal = io_inst[6:0] == 7'h6F;	
  wire is_jalr = io_inst[6:0] == 7'h67;	
  wire _io_is_csr_T_6 = io_inst[14:12] == 3'h5;	
  wire _io_is_csr_T_1 = io_inst[14:12] == 3'h1;	
  wire _GEN = is_jalr | is_jal | is_auipc;	
  wire _GEN_0 = io_inst[14:12] == 3'h0;	
  wire _GEN_1 = isB_type & _GEN_0;	
  wire _GEN_2 = isB_type & _io_is_csr_T_1;	
  wire _GEN_3 = io_inst[14:12] == 3'h4;	
  wire _GEN_4 = isB_type & _GEN_3;	
  wire _GEN_5 = isB_type & _io_is_csr_T_6;	
  wire _io_is_csr_T_8 = io_inst[14:12] == 3'h6;	
  wire _GEN_6 = isB_type & _io_is_csr_T_8;	
  wire _GEN_7 = isB_type & (&(io_inst[14:12]));	
  wire _GEN_8 = is_load & _GEN_0;	
  wire _GEN_9 = is_load & _io_is_csr_T_1;	
  wire _io_is_csr_T_2 = io_inst[14:12] == 3'h2;	
  wire _GEN_10 = is_load & _io_is_csr_T_2;	
  wire _GEN_11 = is_load & _GEN_3;	
  wire _GEN_12 = is_load & _io_is_csr_T_6;	
  wire _GEN_13 = _GEN_12 | _GEN_11 | _GEN_10 | _GEN_9 | _GEN_8;	
  wire _GEN_14 = isS_type & _GEN_0;	
  wire _GEN_15 = isS_type & _io_is_csr_T_1;	
  wire _GEN_16 = isS_type & _io_is_csr_T_2;	
  wire _GEN_17 = isI_type & _GEN_0;	
  wire _io_is_csr_T_4 = io_inst[14:12] == 3'h3;	
  wire _GEN_18 = isI_type & _io_is_csr_T_4;	
  wire _GEN_19 = isI_type & _GEN_3;	
  wire _GEN_20 = isI_type & _io_is_csr_T_8;	
  wire _GEN_21 = isI_type & (&(io_inst[14:12]));	
  wire _GEN_22 = io_inst[31:25] == 7'h0;	
  wire _GEN_23 = isI_type & _io_is_csr_T_1 & _GEN_22;	
  wire _GEN_24 = isI_type & _io_is_csr_T_6;	
  wire _GEN_25 = _GEN_24 & _GEN_22;	
  wire _GEN_26 = io_inst[31:25] == 7'h20;	
  wire _GEN_27 = _GEN_24 & _GEN_26;	
  wire _GEN_28 = isR_type & _GEN_0;	
  wire _GEN_29 = _GEN_28 & _GEN_22;	
  wire _GEN_30 = _GEN_28 & _GEN_26;	
  wire _GEN_31 = isR_type & _io_is_csr_T_1 & _GEN_22;	
  wire _GEN_32 = isR_type & _io_is_csr_T_2 & _GEN_22;	
  wire _GEN_33 = isR_type & _io_is_csr_T_4 & _GEN_22;	
  wire _GEN_34 = isR_type & _GEN_3 & _GEN_22;	
  wire _GEN_35 = isR_type & _io_is_csr_T_6;	
  wire _GEN_36 = _GEN_35 & _GEN_22;	
  wire _GEN_37 = _GEN_35 & _GEN_26;	
  wire _GEN_38 = isR_type & _io_is_csr_T_8 & _GEN_22;	
  wire _GEN_39 = isR_type & (&(io_inst[14:12])) & _GEN_22;	
  assign io_rf_wr_en =
    _GEN_39 | _GEN_38 | _GEN_37 | _GEN_36 | _GEN_34 | _GEN_33 | _GEN_32 | _GEN_31
    | _GEN_30 | _GEN_29 | _GEN_27 | _GEN_25 | _GEN_23 | _GEN_21 | _GEN_20 | _GEN_19
    | _GEN_18 | _GEN_17 | _GEN_12 | _GEN_11 | _GEN_10 | _GEN_9 | _GEN_8 | _GEN | is_lui;	
  assign io_rf_wr_sel =
    _GEN_39 | _GEN_38 | _GEN_37 | _GEN_36 | _GEN_34 | _GEN_33 | _GEN_32 | _GEN_31
    | _GEN_30 | _GEN_29 | _GEN_27 | _GEN_25 | _GEN_23 | _GEN_21 | _GEN_20 | _GEN_19
    | _GEN_18 | _GEN_17
      ? 3'h1
      : _GEN_13 ? 3'h2 : is_jalr | is_jal ? 3'h4 : {2'h0, is_auipc | is_lui};	
  assign io_alu_a_sel =
    _GEN_39 | _GEN_38 | _GEN_37 | _GEN_36 | _GEN_34 | _GEN_33 | _GEN_32 | _GEN_31
    | _GEN_30 | _GEN_29 | _GEN_27 | _GEN_25 | _GEN_23 | _GEN_21 | _GEN_20 | _GEN_19
    | _GEN_18 | _GEN_17 | _GEN_16 | _GEN_15 | _GEN_14 | _GEN_13
    | ~(_GEN_7 | _GEN_6 | _GEN_5 | _GEN_4 | _GEN_2 | _GEN_1) & is_jalr;	
  assign io_alu_b_sel =
    _GEN_39 | _GEN_38 | _GEN_37 | _GEN_36 | _GEN_34 | _GEN_33 | _GEN_32 | _GEN_31
    | _GEN_30 | _GEN_29;	
  assign io_mem_wr_en = _GEN_16 | _GEN_15 | _GEN_14;	
  assign io_alu_sel =
    _GEN_39
      ? 13'h80
      : _GEN_38
          ? 13'h100
          : _GEN_37
              ? 13'h10
              : _GEN_36
                  ? 13'h8
                  : _GEN_34
                      ? 13'h200
                      : _GEN_33
                          ? 13'h400
                          : _GEN_32
                              ? 13'h800
                              : _GEN_31
                                  ? 13'h4
                                  : _GEN_30
                                      ? 13'h2
                                      : _GEN_29
                                          ? 13'h1
                                          : _GEN_27
                                              ? 13'h10
                                              : _GEN_25
                                                  ? 13'h8
                                                  : _GEN_23
                                                      ? 13'h4
                                                      : _GEN_21
                                                          ? 13'h80
                                                          : _GEN_20
                                                              ? 13'h100
                                                              : _GEN_19
                                                                  ? 13'h200
                                                                  : _GEN_18
                                                                      ? 13'h400
                                                                      : _GEN_17 | _GEN_16
                                                                        | _GEN_15
                                                                        | _GEN_14
                                                                        | _GEN_12
                                                                        | _GEN_11
                                                                        | _GEN_10 | _GEN_9
                                                                        | _GEN_8 | _GEN_7
                                                                        | _GEN_6 | _GEN_5
                                                                        | _GEN_4 | _GEN_2
                                                                        | _GEN_1 | _GEN
                                                                          ? 13'h1
                                                                          : {6'h0,
                                                                             is_lui,
                                                                             6'h0};	
  assign io_jump_en =
    _GEN_7
      ? io_rs1 >= io_rs2
      : _GEN_6
          ? io_rs1 < io_rs2
          : _GEN_5
              ? $signed(io_rs1) >= $signed(io_rs2)
              : _GEN_4
                  ? $signed(io_rs1) < $signed(io_rs2)
                  : _GEN_2 ? io_rs1 != io_rs2 : _GEN_1 ? io_rs1 == io_rs2 : is_jal;	
  assign io_jump_jalr = is_jalr;	
  assign io_len =
    _GEN_16
      ? 32'h4
      : _GEN_15
          ? 32'h2
          : _GEN_14
              ? 32'h1
              : _GEN_12
                  ? 32'h2
                  : _GEN_11
                      ? 32'h1
                      : _GEN_10 ? 32'h4 : _GEN_9 ? 32'h2 : _GEN_8 ? 32'h1 : 32'h4;	
  assign io_imm =
    isB_type
      ? {{20{io_inst[31]}}, io_inst[7], io_inst[30:25], io_inst[11:8], 1'h0}
      : isS_type
          ? {{20{io_inst[31]}}, io_inst[31:25], io_inst[11:7]}
          : is_load
              ? {{20{io_inst[31]}}, io_inst[31:20]}
              : is_jalr
                  ? {{20{io_inst[31]}}, io_inst[31:20]}
                  : is_jal
                      ? {{12{io_inst[31]}},
                         io_inst[19:12],
                         io_inst[20],
                         io_inst[30:21],
                         1'h0}
                      : is_lui
                          ? {io_inst[31:12], 12'h0}
                          : is_auipc
                              ? {io_inst[31:12], 12'h0}
                              : isI_type & (_io_is_csr_T_6 | _io_is_csr_T_1)
                                  ? {27'h0, io_inst[24:20]}
                                  : isI_type & io_inst[14:12] != 3'h5
                                    & io_inst[14:12] != 3'h1
                                      ? {{20{io_inst[31]}}, io_inst[31:20]}
                                      : 32'h0;	
  assign io_load_unsign = _GEN_12 | _GEN_11;	
  assign io_is_ecall = io_inst == 32'h73;	
  assign io_is_csr =
    io_inst[6:0] == 7'h73
    & (_io_is_csr_T_1 | _io_is_csr_T_2 | _io_is_csr_T_4 | _io_is_csr_T_6 | _io_is_csr_T_8
       | (&(io_inst[14:12])));	
  assign io_is_mret = io_inst == 32'h30200073;	
  assign io_is_load = is_load;	
  assign io_isS_type = isS_type;	
endmodule

module REGISTERFILE(	
  input         clock,	
                reset,	
  input  [31:0] io_inst,	
  input         io_wr_en,	
  input  [31:0] io_dm_out,	
                io_alu_out,	
  input  [2:0]  io_rf_wr_sel,	
  input         io_is_csr,	
                io_is_ecall,	
                io_is_mret,	
  input  [31:0] io_pc,	
  output [31:0] io_rd1,	
                io_rd2,	
                io_mtvec,	
                io_epc	
);

  reg  [31:0]       FileReg_1;	
  reg  [31:0]       FileReg_2;	
  reg  [31:0]       FileReg_3;	
  reg  [31:0]       FileReg_4;	
  reg  [31:0]       FileReg_5;	
  reg  [31:0]       FileReg_6;	
  reg  [31:0]       FileReg_7;	
  reg  [31:0]       FileReg_8;	
  reg  [31:0]       FileReg_9;	
  reg  [31:0]       FileReg_10;	
  reg  [31:0]       FileReg_11;	
  reg  [31:0]       FileReg_12;	
  reg  [31:0]       FileReg_13;	
  reg  [31:0]       FileReg_14;	
  reg  [31:0]       FileReg_15;	
  reg  [31:0]       FileReg_16;	
  reg  [31:0]       FileReg_17;	
  reg  [31:0]       FileReg_18;	
  reg  [31:0]       FileReg_19;	
  reg  [31:0]       FileReg_20;	
  reg  [31:0]       FileReg_21;	
  reg  [31:0]       FileReg_22;	
  reg  [31:0]       FileReg_23;	
  reg  [31:0]       FileReg_24;	
  reg  [31:0]       FileReg_25;	
  reg  [31:0]       FileReg_26;	
  reg  [31:0]       FileReg_27;	
  reg  [31:0]       FileReg_28;	
  reg  [31:0]       FileReg_29;	
  reg  [31:0]       FileReg_30;	
  reg  [31:0]       FileReg_31;	
  reg  [31:0]       CsrReg_0;	
  reg  [31:0]       CsrReg_1;	
  reg  [31:0]       CsrReg_2;	
  reg  [31:0]       CsrReg_3;	
  wire [31:0][31:0] _GEN =
    {{FileReg_31},
     {FileReg_30},
     {FileReg_29},
     {FileReg_28},
     {FileReg_27},
     {FileReg_26},
     {FileReg_25},
     {FileReg_24},
     {FileReg_23},
     {FileReg_22},
     {FileReg_21},
     {FileReg_20},
     {FileReg_19},
     {FileReg_18},
     {FileReg_17},
     {FileReg_16},
     {FileReg_15},
     {FileReg_14},
     {FileReg_13},
     {FileReg_12},
     {FileReg_11},
     {FileReg_10},
     {FileReg_9},
     {FileReg_8},
     {FileReg_7},
     {FileReg_6},
     {FileReg_5},
     {FileReg_4},
     {FileReg_3},
     {FileReg_2},
     {FileReg_1},
     {32'h0}};	
  wire [31:0]       _GEN_0 = _GEN[io_inst[19:15]];	
  wire              _GEN_1 = io_is_ecall | io_is_mret | io_is_csr;	
  always @(posedge clock) begin	
    if (reset) begin	
      FileReg_1 <= 32'h0;	
      FileReg_2 <= 32'h0;	
      FileReg_3 <= 32'h0;	
      FileReg_4 <= 32'h0;	
      FileReg_5 <= 32'h0;	
      FileReg_6 <= 32'h0;	
      FileReg_7 <= 32'h0;	
      FileReg_8 <= 32'h0;	
      FileReg_9 <= 32'h0;	
      FileReg_10 <= 32'h0;	
      FileReg_11 <= 32'h0;	
      FileReg_12 <= 32'h0;	
      FileReg_13 <= 32'h0;	
      FileReg_14 <= 32'h0;	
      FileReg_15 <= 32'h0;	
      FileReg_16 <= 32'h0;	
      FileReg_17 <= 32'h0;	
      FileReg_18 <= 32'h0;	
      FileReg_19 <= 32'h0;	
      FileReg_20 <= 32'h0;	
      FileReg_21 <= 32'h0;	
      FileReg_22 <= 32'h0;	
      FileReg_23 <= 32'h0;	
      FileReg_24 <= 32'h0;	
      FileReg_25 <= 32'h0;	
      FileReg_26 <= 32'h0;	
      FileReg_27 <= 32'h0;	
      FileReg_28 <= 32'h0;	
      FileReg_29 <= 32'h0;	
      FileReg_30 <= 32'h0;	
      FileReg_31 <= 32'h0;	
      CsrReg_0 <= 32'h0;	
      CsrReg_1 <= 32'h0;	
      CsrReg_2 <= 32'h0;	
      CsrReg_3 <= 32'h0;	
    end
    else begin	
      automatic logic [1:0]       csr_sel;	
      automatic logic             _GEN_2;	
      automatic logic [3:0][31:0] _GEN_3 =
        {{CsrReg_3}, {CsrReg_2}, {CsrReg_1}, {CsrReg_0}};	
      automatic logic             _GEN_4;	
      automatic logic [31:0]      _CsrReg_T;	
      automatic logic             _GEN_5;	
      automatic logic [31:0]      _CsrReg_T_2;	
      automatic logic             _GEN_6 = io_is_ecall | io_is_mret;	
      csr_sel =
        io_inst[31:20] == 12'h300
          ? 2'h0
          : io_inst[31:20] == 12'h305
              ? 2'h1
              : io_inst[31:20] == 12'h341 ? 2'h2 : {2{io_inst[31:20] == 12'h342}};	
      _GEN_2 = io_inst[14:12] == 3'h1;	
      _GEN_4 = io_inst[14:12] == 3'h2;	
      _CsrReg_T = _GEN_3[csr_sel] | _GEN_0;	
      _GEN_5 = io_inst[14:12] == 3'h3;	
      _CsrReg_T_2 = _GEN_3[csr_sel] & ~_GEN_0;	
      if (~_GEN_6) begin	
        automatic logic _GEN_7;	
        automatic logic _GEN_8;	
        automatic logic _GEN_9;	
        automatic logic _GEN_10;	
        automatic logic _GEN_11;	
        automatic logic _GEN_12;	
        automatic logic _GEN_13;	
        automatic logic _GEN_14;	
        automatic logic _GEN_15;	
        automatic logic _GEN_16;	
        automatic logic _GEN_17;	
        automatic logic _GEN_18;	
        automatic logic _GEN_19;	
        automatic logic _GEN_20;	
        automatic logic _GEN_21;	
        automatic logic _GEN_22;	
        automatic logic _GEN_23;	
        automatic logic _GEN_24;	
        automatic logic _GEN_25;	
        automatic logic _GEN_26;	
        automatic logic _GEN_27;	
        automatic logic _GEN_28;	
        automatic logic _GEN_29;	
        automatic logic _GEN_30;	
        automatic logic _GEN_31;	
        automatic logic _GEN_32;	
        automatic logic _GEN_33;	
        automatic logic _GEN_34;	
        automatic logic _GEN_35;	
        automatic logic _GEN_36;	
        _GEN_7 = io_inst[11:7] == 5'h1;	
        _GEN_8 = io_inst[11:7] == 5'h2;	
        _GEN_9 = io_inst[11:7] == 5'h3;	
        _GEN_10 = io_inst[11:7] == 5'h4;	
        _GEN_11 = io_inst[11:7] == 5'h5;	
        _GEN_12 = io_inst[11:7] == 5'h6;	
        _GEN_13 = io_inst[11:7] == 5'h7;	
        _GEN_14 = io_inst[11:7] == 5'h8;	
        _GEN_15 = io_inst[11:7] == 5'h9;	
        _GEN_16 = io_inst[11:7] == 5'hA;	
        _GEN_17 = io_inst[11:7] == 5'hB;	
        _GEN_18 = io_inst[11:7] == 5'hC;	
        _GEN_19 = io_inst[11:7] == 5'hD;	
        _GEN_20 = io_inst[11:7] == 5'hE;	
        _GEN_21 = io_inst[11:7] == 5'hF;	
        _GEN_22 = io_inst[11:7] == 5'h10;	
        _GEN_23 = io_inst[11:7] == 5'h11;	
        _GEN_24 = io_inst[11:7] == 5'h12;	
        _GEN_25 = io_inst[11:7] == 5'h13;	
        _GEN_26 = io_inst[11:7] == 5'h14;	
        _GEN_27 = io_inst[11:7] == 5'h15;	
        _GEN_28 = io_inst[11:7] == 5'h16;	
        _GEN_29 = io_inst[11:7] == 5'h17;	
        _GEN_30 = io_inst[11:7] == 5'h18;	
        _GEN_31 = io_inst[11:7] == 5'h19;	
        _GEN_32 = io_inst[11:7] == 5'h1A;	
        _GEN_33 = io_inst[11:7] == 5'h1B;	
        _GEN_34 = io_inst[11:7] == 5'h1C;	
        _GEN_35 = io_inst[11:7] == 5'h1D;	
        _GEN_36 = io_inst[11:7] == 5'h1E;	
        if (io_is_csr) begin	
          automatic logic _GEN_37;	
          _GEN_37 = _GEN_2 | _GEN_4 | _GEN_5;	
          if (_GEN_37 & _GEN_7)	
            FileReg_1 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_8)	
            FileReg_2 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_9)	
            FileReg_3 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_10)	
            FileReg_4 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_11)	
            FileReg_5 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_12)	
            FileReg_6 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_13)	
            FileReg_7 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_14)	
            FileReg_8 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_15)	
            FileReg_9 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_16)	
            FileReg_10 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_17)	
            FileReg_11 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_18)	
            FileReg_12 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_19)	
            FileReg_13 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_20)	
            FileReg_14 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_21)	
            FileReg_15 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_22)	
            FileReg_16 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_23)	
            FileReg_17 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_24)	
            FileReg_18 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_25)	
            FileReg_19 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_26)	
            FileReg_20 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_27)	
            FileReg_21 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_28)	
            FileReg_22 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_29)	
            FileReg_23 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_30)	
            FileReg_24 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_31)	
            FileReg_25 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_32)	
            FileReg_26 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_33)	
            FileReg_27 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_34)	
            FileReg_28 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_35)	
            FileReg_29 <= _GEN_3[csr_sel];	
          if (_GEN_37 & _GEN_36)	
            FileReg_30 <= _GEN_3[csr_sel];	
          if (_GEN_37 & (&(io_inst[11:7])))	
            FileReg_31 <= _GEN_3[csr_sel];	
        end
        else begin	
          automatic logic [31:0] wd;	
          automatic logic [31:0] _GEN_38;	
          wd =
            (io_rf_wr_sel[0] ? io_alu_out : 32'h0) | (io_rf_wr_sel[1] ? io_dm_out : 32'h0)
            | (io_rf_wr_sel[2] ? io_pc + 32'h4 : 32'h0);	
          _GEN_38 = _GEN[io_inst[11:7]];	
          if (_GEN_7) begin	
            if (io_wr_en)	
              FileReg_1 <= wd;	
            else	
              FileReg_1 <= _GEN_38;	
          end
          if (_GEN_8) begin	
            if (io_wr_en)	
              FileReg_2 <= wd;	
            else	
              FileReg_2 <= _GEN_38;	
          end
          if (_GEN_9) begin	
            if (io_wr_en)	
              FileReg_3 <= wd;	
            else	
              FileReg_3 <= _GEN_38;	
          end
          if (_GEN_10) begin	
            if (io_wr_en)	
              FileReg_4 <= wd;	
            else	
              FileReg_4 <= _GEN_38;	
          end
          if (_GEN_11) begin	
            if (io_wr_en)	
              FileReg_5 <= wd;	
            else	
              FileReg_5 <= _GEN_38;	
          end
          if (_GEN_12) begin	
            if (io_wr_en)	
              FileReg_6 <= wd;	
            else	
              FileReg_6 <= _GEN_38;	
          end
          if (_GEN_13) begin	
            if (io_wr_en)	
              FileReg_7 <= wd;	
            else	
              FileReg_7 <= _GEN_38;	
          end
          if (_GEN_14) begin	
            if (io_wr_en)	
              FileReg_8 <= wd;	
            else	
              FileReg_8 <= _GEN_38;	
          end
          if (_GEN_15) begin	
            if (io_wr_en)	
              FileReg_9 <= wd;	
            else	
              FileReg_9 <= _GEN_38;	
          end
          if (_GEN_16) begin	
            if (io_wr_en)	
              FileReg_10 <= wd;	
            else	
              FileReg_10 <= _GEN_38;	
          end
          if (_GEN_17) begin	
            if (io_wr_en)	
              FileReg_11 <= wd;	
            else	
              FileReg_11 <= _GEN_38;	
          end
          if (_GEN_18) begin	
            if (io_wr_en)	
              FileReg_12 <= wd;	
            else	
              FileReg_12 <= _GEN_38;	
          end
          if (_GEN_19) begin	
            if (io_wr_en)	
              FileReg_13 <= wd;	
            else	
              FileReg_13 <= _GEN_38;	
          end
          if (_GEN_20) begin	
            if (io_wr_en)	
              FileReg_14 <= wd;	
            else	
              FileReg_14 <= _GEN_38;	
          end
          if (_GEN_21) begin	
            if (io_wr_en)	
              FileReg_15 <= wd;	
            else	
              FileReg_15 <= _GEN_38;	
          end
          if (_GEN_22) begin	
            if (io_wr_en)	
              FileReg_16 <= wd;	
            else	
              FileReg_16 <= _GEN_38;	
          end
          if (_GEN_23) begin	
            if (io_wr_en)	
              FileReg_17 <= wd;	
            else	
              FileReg_17 <= _GEN_38;	
          end
          if (_GEN_24) begin	
            if (io_wr_en)	
              FileReg_18 <= wd;	
            else	
              FileReg_18 <= _GEN_38;	
          end
          if (_GEN_25) begin	
            if (io_wr_en)	
              FileReg_19 <= wd;	
            else	
              FileReg_19 <= _GEN_38;	
          end
          if (_GEN_26) begin	
            if (io_wr_en)	
              FileReg_20 <= wd;	
            else	
              FileReg_20 <= _GEN_38;	
          end
          if (_GEN_27) begin	
            if (io_wr_en)	
              FileReg_21 <= wd;	
            else	
              FileReg_21 <= _GEN_38;	
          end
          if (_GEN_28) begin	
            if (io_wr_en)	
              FileReg_22 <= wd;	
            else	
              FileReg_22 <= _GEN_38;	
          end
          if (_GEN_29) begin	
            if (io_wr_en)	
              FileReg_23 <= wd;	
            else	
              FileReg_23 <= _GEN_38;	
          end
          if (_GEN_30) begin	
            if (io_wr_en)	
              FileReg_24 <= wd;	
            else	
              FileReg_24 <= _GEN_38;	
          end
          if (_GEN_31) begin	
            if (io_wr_en)	
              FileReg_25 <= wd;	
            else	
              FileReg_25 <= _GEN_38;	
          end
          if (_GEN_32) begin	
            if (io_wr_en)	
              FileReg_26 <= wd;	
            else	
              FileReg_26 <= _GEN_38;	
          end
          if (_GEN_33) begin	
            if (io_wr_en)	
              FileReg_27 <= wd;	
            else	
              FileReg_27 <= _GEN_38;	
          end
          if (_GEN_34) begin	
            if (io_wr_en)	
              FileReg_28 <= wd;	
            else	
              FileReg_28 <= _GEN_38;	
          end
          if (_GEN_35) begin	
            if (io_wr_en)	
              FileReg_29 <= wd;	
            else	
              FileReg_29 <= _GEN_38;	
          end
          if (_GEN_36) begin	
            if (io_wr_en)	
              FileReg_30 <= wd;	
            else	
              FileReg_30 <= _GEN_38;	
          end
          if (&(io_inst[11:7])) begin	
            if (io_wr_en)	
              FileReg_31 <= wd;	
            else	
              FileReg_31 <= _GEN_38;	
          end
        end
      end
      if (io_is_ecall) begin	
        CsrReg_0 <= CsrReg_0 & 32'hFFFFFFFE;	
        CsrReg_2 <= io_pc;	
        CsrReg_3 <= 32'hB;	
      end
      else begin	
        if (io_is_mret)	
          CsrReg_0 <= {CsrReg_0[31:8], CsrReg_0[7:0] | 8'h80};	
        else if (io_is_csr) begin	
          automatic logic _GEN_39;	
          _GEN_39 = csr_sel == 2'h0;	
          if (_GEN_2)	
            CsrReg_0 <= _GEN_39 ? _GEN_0 : 32'h1800;	
          else if (_GEN_4) begin	
            if (_GEN_39)	
              CsrReg_0 <= _CsrReg_T;	
            else	
              CsrReg_0 <= 32'h1800;	
          end
          else if (_GEN_5 & _GEN_39)	
            CsrReg_0 <= _CsrReg_T_2;	
          else	
            CsrReg_0 <= 32'h1800;	
        end
        else	
          CsrReg_0 <= 32'h1800;	
        if (io_is_mret | ~io_is_csr) begin	
        end
        else begin	
          automatic logic _GEN_40;	
          _GEN_40 = csr_sel == 2'h2;	
          if (_GEN_2) begin	
            if (_GEN_40)	
              CsrReg_2 <= _GEN_0;	
            if (&csr_sel)	
              CsrReg_3 <= _GEN_0;	
          end
          else if (_GEN_4) begin	
            if (_GEN_40)	
              CsrReg_2 <= _CsrReg_T;	
            if (&csr_sel)	
              CsrReg_3 <= _CsrReg_T;	
          end
          else begin	
            if (_GEN_5 & _GEN_40)	
              CsrReg_2 <= _CsrReg_T_2;	
            if (_GEN_5 & (&csr_sel))	
              CsrReg_3 <= _CsrReg_T_2;	
          end
        end
      end
      if (_GEN_6 | ~io_is_csr) begin	
      end
      else begin	
        automatic logic _GEN_41;	
        _GEN_41 = csr_sel == 2'h1;	
        if (_GEN_2) begin	
          if (_GEN_41)	
            CsrReg_1 <= _GEN_0;	
        end
        else if (_GEN_4) begin	
          if (_GEN_41)	
            CsrReg_1 <= _CsrReg_T;	
        end
        else if (_GEN_5 & _GEN_41)	
          CsrReg_1 <= _CsrReg_T_2;	
      end
    end
  end 
  assign io_rd1 = _GEN_1 ? 32'h0 : _GEN_0;	
  assign io_rd2 = _GEN_1 ? 32'h0 : _GEN[io_inst[24:20]];	
  assign io_mtvec = io_is_ecall ? CsrReg_1 : 32'h0;	
  assign io_epc = io_is_ecall | ~io_is_mret ? 32'h0 : CsrReg_2;	
endmodule

module IDU(	
  input         clock,	
                reset,	
  output        io_in_ready,	
  input         io_in_valid,	
  input  [31:0] io_in_bits_inst,	
                io_in_bits_pc,	
  output        io_out_valid,	
  output [31:0] io_out_bits_rs1,	
                io_out_bits_rs2,	
                io_out_bits_imm,	
  output [12:0] io_out_bits_alu_sel,	
  output        io_out_bits_alu_a_sel,	
                io_out_bits_alu_b_sel,	
  output [31:0] io_out_bits_pc,	
  output        io_out_bits_jump_en,	
                io_out_bits_jump_jalr,	
                io_out_bits_is_ecall,	
                io_out_bits_is_mret,	
  output [31:0] io_out_bits_mtvec,	
                io_out_bits_epc,	
  output        io_out_bits_mem_wr_en,	
  output [31:0] io_out_bits_len,	
  output        io_out_bits_load_unsign,	
                io_out_bits_is_load,	
                io_out_bits_isS_type,	
  input  [31:0] io_alu_rsl,	
                io_dm_out,	
  input         io_wbu_valid	
);

  wire [31:0] _RegisterFile_io_rd1;	
  wire [31:0] _RegisterFile_io_rd2;	
  wire        _Contorller_io_rf_wr_en;	
  wire [2:0]  _Contorller_io_rf_wr_sel;	
  wire        _Contorller_io_is_ecall;	
  wire        _Contorller_io_is_csr;	
  wire        _Contorller_io_is_mret;	
  reg         state;	
  always @(posedge clock) begin	
    if (reset)	
      state <= 1'h0;	
    else	
      state <= ~state & (io_in_valid | state);	
  end 
  CONTORLLER Contorller (	
    .io_inst        (io_in_bits_inst),
    .io_rs1         (_RegisterFile_io_rd1),	
    .io_rs2         (_RegisterFile_io_rd2),	
    .io_rf_wr_en    (_Contorller_io_rf_wr_en),
    .io_rf_wr_sel   (_Contorller_io_rf_wr_sel),
    .io_alu_a_sel   (io_out_bits_alu_a_sel),
    .io_alu_b_sel   (io_out_bits_alu_b_sel),
    .io_mem_wr_en   (io_out_bits_mem_wr_en),
    .io_alu_sel     (io_out_bits_alu_sel),
    .io_jump_en     (io_out_bits_jump_en),
    .io_jump_jalr   (io_out_bits_jump_jalr),
    .io_len         (io_out_bits_len),
    .io_imm         (io_out_bits_imm),
    .io_load_unsign (io_out_bits_load_unsign),
    .io_is_ecall    (_Contorller_io_is_ecall),
    .io_is_csr      (_Contorller_io_is_csr),
    .io_is_mret     (_Contorller_io_is_mret),
    .io_is_load     (io_out_bits_is_load),
    .io_isS_type    (io_out_bits_isS_type)
  );
  REGISTERFILE RegisterFile (	
    .clock        (clock),
    .reset        (reset),
    .io_inst      (io_in_bits_inst),
    .io_wr_en     (_Contorller_io_rf_wr_en & io_wbu_valid),	
    .io_dm_out    (io_dm_out),
    .io_alu_out   (io_alu_rsl),
    .io_rf_wr_sel (_Contorller_io_rf_wr_sel),	
    .io_is_csr    (_Contorller_io_is_csr),	
    .io_is_ecall  (_Contorller_io_is_ecall),	
    .io_is_mret   (_Contorller_io_is_mret),	
    .io_pc        (io_in_bits_pc),
    .io_rd1       (_RegisterFile_io_rd1),
    .io_rd2       (_RegisterFile_io_rd2),
    .io_mtvec     (io_out_bits_mtvec),
    .io_epc       (io_out_bits_epc)
  );
  assign io_in_ready = ~state;	
  assign io_out_valid = state;	
  assign io_out_bits_rs1 = _RegisterFile_io_rd1;	
  assign io_out_bits_rs2 = _RegisterFile_io_rd2;	
  assign io_out_bits_pc = io_in_bits_pc;	
  assign io_out_bits_is_ecall = _Contorller_io_is_ecall;	
  assign io_out_bits_is_mret = _Contorller_io_is_mret;	
endmodule

module ALU(	
  input  [31:0] io_rs1,	
                io_rs2,	
                io_imm,	
  input         io_alu_a_sel,	
                io_alu_b_sel,	
  input  [12:0] io_alu_sel,	
  input  [31:0] io_pc,	
  output [31:0] io_rsl	
);

  wire [31:0] op1 = io_alu_a_sel ? io_rs1 : io_pc;	
  wire [31:0] op2 = io_alu_b_sel ? io_rs2 : io_imm;	
  wire [62:0] umovl = {31'h0, op1} << op2[4:0];	
  assign io_rsl =
    (io_alu_sel[0] ? op1 + op2 : 32'h0) | (io_alu_sel[1] ? op1 - op2 : 32'h0)
    | (io_alu_sel[2] ? umovl[31:0] : 32'h0) | (io_alu_sel[3] ? op1 >> op2[4:0] : 32'h0)
    | (io_alu_sel[4] ? $signed($signed(op1) >>> op2[4:0]) : 32'h0)
    | (io_alu_sel[5] ? ~op1 : 32'h0) | (io_alu_sel[6] ? op2 : 32'h0)
    | (io_alu_sel[7] ? op1 & op2 : 32'h0) | (io_alu_sel[8] ? op1 | op2 : 32'h0)
    | (io_alu_sel[9] ? op1 ^ op2 : 32'h0) | (io_alu_sel[10] ? {31'h0, op1 < op2} : 32'h0)
    | (io_alu_sel[11] ? {31'h0, $signed(op1) < $signed(op2)} : 32'h0)
    | (io_alu_sel[12] ? {31'h0, op1 == op2} : 32'h0);	
endmodule

module EXU(	
  input         clock,	
                reset,	
                io_in_valid,	
  input  [31:0] io_in_bits_rs1,	
                io_in_bits_rs2,	
                io_in_bits_imm,	
  input  [12:0] io_in_bits_alu_sel,	
  input         io_in_bits_alu_a_sel,	
                io_in_bits_alu_b_sel,	
  input  [31:0] io_in_bits_pc,	
  input         io_in_bits_jump_en,	
                io_in_bits_jump_jalr,	
                io_in_bits_is_ecall,	
                io_in_bits_is_mret,	
  input  [31:0] io_in_bits_mtvec,	
                io_in_bits_epc,	
  input         io_in_bits_mem_wr_en,	
  input  [31:0] io_in_bits_len,	
  input         io_in_bits_load_unsign,	
                io_in_bits_is_load,	
                io_in_bits_isS_type,	
  output        io_out_valid,	
  output [31:0] io_out_bits_alu_out,	
                io_out_bits_data,	
  output        io_out_bits_mem_wr_en,	
  output [31:0] io_out_bits_len,	
  output        io_out_bits_load_unsign,	
                io_out_bits_jump_jalr,	
                io_out_bits_jump_en,	
  output [31:0] io_out_bits_imm,	
  output        io_out_bits_is_ecall,	
                io_out_bits_is_mret,	
  output [31:0] io_out_bits_mtvec,	
                io_out_bits_epc,	
                io_out_bits_rd1,	
  output        io_out_bits_is_load,	
                io_out_bits_isS_type,	
  output [31:0] io_alu_rsl	
);

  wire [31:0] _Alu_io_rsl;	
  reg         state;	
  always @(posedge clock) begin	
    if (reset)	
      state <= 1'h0;	
    else	
      state <= ~state & (io_in_valid | state);	
  end 
  ALU Alu (	
    .io_rs1       (io_in_bits_rs1),
    .io_rs2       (io_in_bits_rs2),
    .io_imm       (io_in_bits_imm),
    .io_alu_a_sel (io_in_bits_alu_a_sel),
    .io_alu_b_sel (io_in_bits_alu_b_sel),
    .io_alu_sel   (io_in_bits_alu_sel),
    .io_pc        (io_in_bits_pc),
    .io_rsl       (_Alu_io_rsl)
  );
  assign io_out_valid = state;	
  assign io_out_bits_alu_out = _Alu_io_rsl;	
  assign io_out_bits_data = io_in_bits_rs2;	
  assign io_out_bits_mem_wr_en = io_in_bits_mem_wr_en;	
  assign io_out_bits_len = io_in_bits_len;	
  assign io_out_bits_load_unsign = io_in_bits_load_unsign;	
  assign io_out_bits_jump_jalr = io_in_bits_jump_jalr;	
  assign io_out_bits_jump_en = io_in_bits_jump_en;	
  assign io_out_bits_imm = io_in_bits_imm;	
  assign io_out_bits_is_ecall = io_in_bits_is_ecall;	
  assign io_out_bits_is_mret = io_in_bits_is_mret;	
  assign io_out_bits_mtvec = io_in_bits_mtvec;	
  assign io_out_bits_epc = io_in_bits_epc;	
  assign io_out_bits_rd1 = io_in_bits_rs1;	
  assign io_out_bits_is_load = io_in_bits_is_load;	
  assign io_out_bits_isS_type = io_in_bits_isS_type;	
  assign io_alu_rsl = _Alu_io_rsl;	
endmodule

module ISU(	
  input         clock,	
                reset,	
                io_in_valid,	
  input  [31:0] io_in_bits_alu_out,	
                io_in_bits_data,	
  input         io_in_bits_mem_wr_en,	
  input  [31:0] io_in_bits_len,	
  input         io_in_bits_load_unsign,	
                io_in_bits_jump_jalr,	
                io_in_bits_jump_en,	
  input  [31:0] io_in_bits_imm,	
  input         io_in_bits_is_ecall,	
                io_in_bits_is_mret,	
  input  [31:0] io_in_bits_mtvec,	
                io_in_bits_epc,	
                io_in_bits_rd1,	
  input         io_in_bits_is_load,	
                io_in_bits_isS_type,	
  output        io_out_valid,	
  output [31:0] io_out_bits_dm_out,	
                io_out_bits_alu_out,	
  output        io_out_bits_jump_jalr,	
                io_out_bits_jump_en,	
  output [31:0] io_out_bits_imm,	
  output        io_out_bits_is_ecall,	
                io_out_bits_is_mret,	
  output [31:0] io_out_bits_mtvec,	
                io_out_bits_epc,	
                io_out_bits_rd1,	
  output        io_out_bits_load_finish,	
                io_out_bits_store_finish,	
                io_out_bits_is_load,	
                io_out_bits_isS_type,	
  input         io_isu_axi_out_ready,	
  output        io_isu_axi_out_valid,	
                io_isu_axi_out_bits_arvalid,	
                io_isu_axi_out_bits_load_unsign,	
  output [31:0] io_isu_axi_out_bits_araddr,	
  output        io_isu_axi_out_bits_awvalid,	
  output [31:0] io_isu_axi_out_bits_awaddr,	
  output        io_isu_axi_out_bits_wvalid,	
  output [31:0] io_isu_axi_out_bits_wdata,	
                io_isu_axi_out_bits_wstrb,	
  output        io_isu_axi_in_ready,	
  input         io_isu_axi_in_bits_arready,	
  input  [31:0] io_isu_axi_in_bits_rdata,	
  input         io_isu_axi_in_bits_rresp,	
                io_isu_axi_in_bits_awready,	
                io_isu_axi_in_bits_wready,	
                io_isu_axi_in_bits_bresp,	
  output        io_isu_valid	
);

  reg       store_finish;	
  reg       load_finish;	
  reg       arvalid;	
  reg       awvalid;	
  reg       wvalid;	
  reg       valid;	
  reg [2:0] state;	
  always @(posedge clock) begin	
    if (reset) begin	
      store_finish <= 1'h0;	
      load_finish <= 1'h0;	
      arvalid <= 1'h0;	
      awvalid <= 1'h0;	
      wvalid <= 1'h0;	
      valid <= 1'h0;	
      state <= 3'h0;	
    end
    else begin	
      automatic logic            _GEN = state == 3'h0;	
      automatic logic            _GEN_0;	
      automatic logic            _GEN_1;	
      automatic logic            _GEN_2;	
      automatic logic            _GEN_3;	
      automatic logic            _GEN_4;	
      automatic logic            _GEN_5;	
      automatic logic            _GEN_6;	
      automatic logic            _GEN_7;	
      automatic logic            _GEN_8;	
      automatic logic            _GEN_9;	
      automatic logic            _GEN_10;	
      automatic logic [7:0][2:0] _GEN_11;	
      _GEN_0 = io_in_bits_is_load | io_in_bits_isS_type;	
      _GEN_1 = state == 3'h1;	
      _GEN_2 = state == 3'h2;	
      _GEN_3 = arvalid & io_isu_axi_in_bits_arready;	
      _GEN_4 = state == 3'h3;	
      _GEN_5 = awvalid & io_isu_axi_in_bits_awready;	
      _GEN_6 = state == 3'h4;	
      _GEN_7 = wvalid & io_isu_axi_in_bits_wready;	
      _GEN_8 = state == 3'h5;	
      _GEN_9 = _GEN_1 | _GEN_2 | _GEN_4 | _GEN_6;	
      _GEN_10 = _GEN | _GEN_9;	
      store_finish <=
        ~_GEN_10 & _GEN_8 & ~io_isu_axi_in_bits_rresp & io_isu_axi_in_bits_bresp
        | store_finish;	
      load_finish <= ~_GEN_10 & _GEN_8 & io_isu_axi_in_bits_rresp | load_finish;	
      if (_GEN)	
        valid <= io_in_valid & _GEN_0 | valid;	
      else begin	
        if (_GEN_1) begin	
          arvalid <= io_isu_axi_out_ready & io_in_bits_is_load | arvalid;	
          awvalid <=
            io_isu_axi_out_ready & ~io_in_bits_is_load & io_in_bits_mem_wr_en | awvalid;	
        end
        else begin	
          arvalid <= ~(_GEN_2 & _GEN_3) & arvalid;	
          awvalid <= (_GEN_2 | ~(_GEN_4 & _GEN_5)) & awvalid;	
        end
        valid <= (_GEN_9 | ~_GEN_8) & valid;	
      end
      if (~(_GEN | _GEN_1 | _GEN_2)) begin	
        if (_GEN_4)	
          wvalid <= _GEN_5 | wvalid;	
        else	
          wvalid <= ~(_GEN_6 & _GEN_7) & wvalid;	
      end
      _GEN_11 =
        {{state},
         {state},
         {3'h0},
         {_GEN_7 ? 3'h5 : state},
         {_GEN_5 ? 3'h4 : state},
         {_GEN_3 ? 3'h5 : state},
         {io_isu_axi_out_ready
            ? (io_in_bits_is_load ? 3'h2 : io_in_bits_mem_wr_en ? 3'h3 : state)
            : state},
         {io_in_valid ? {~_GEN_0, 2'h1} : state}};	
      state <= _GEN_11[state];	
    end
  end 
  assign io_out_valid = state == 3'h5;	
  assign io_out_bits_dm_out = io_isu_axi_in_bits_rdata;	
  assign io_out_bits_alu_out = io_in_bits_alu_out;	
  assign io_out_bits_jump_jalr = io_in_bits_jump_jalr;	
  assign io_out_bits_jump_en = io_in_bits_jump_en;	
  assign io_out_bits_imm = io_in_bits_imm;	
  assign io_out_bits_is_ecall = io_in_bits_is_ecall;	
  assign io_out_bits_is_mret = io_in_bits_is_mret;	
  assign io_out_bits_mtvec = io_in_bits_mtvec;	
  assign io_out_bits_epc = io_in_bits_epc;	
  assign io_out_bits_rd1 = io_in_bits_rd1;	
  assign io_out_bits_load_finish = load_finish;	
  assign io_out_bits_store_finish = store_finish;	
  assign io_out_bits_is_load = io_in_bits_is_load;	
  assign io_out_bits_isS_type = io_in_bits_isS_type;	
  assign io_isu_axi_out_valid = valid;	
  assign io_isu_axi_out_bits_arvalid = arvalid;	
  assign io_isu_axi_out_bits_load_unsign = io_in_bits_load_unsign;	
  assign io_isu_axi_out_bits_araddr = io_in_bits_alu_out;	
  assign io_isu_axi_out_bits_awvalid = awvalid;	
  assign io_isu_axi_out_bits_awaddr = io_in_bits_alu_out;	
  assign io_isu_axi_out_bits_wvalid = wvalid;	
  assign io_isu_axi_out_bits_wdata = io_in_bits_data;	
  assign io_isu_axi_out_bits_wstrb = io_in_bits_len;	
  assign io_isu_axi_in_ready = valid;	
  assign io_isu_valid = valid;	
endmodule

module WBU(	
  input         clock,	
                reset,	
                io_in_valid,	
  input  [31:0] io_in_bits_dm_out,	
                io_in_bits_alu_out,	
  input         io_in_bits_jump_jalr,	
                io_in_bits_jump_en,	
  input  [31:0] io_in_bits_imm,	
  input         io_in_bits_is_ecall,	
                io_in_bits_is_mret,	
  input  [31:0] io_in_bits_mtvec,	
                io_in_bits_epc,	
                io_in_bits_rd1,	
  input         io_in_bits_load_finish,	
                io_in_bits_store_finish,	
                io_in_bits_is_load,	
                io_in_bits_isS_type,	
  output        io_out_valid,	
                io_out_bits_jump_jalr,	
                io_out_bits_jump_en,	
  output [31:0] io_out_bits_imm,	
  output        io_out_bits_is_ecall,	
                io_out_bits_is_mret,	
  output [31:0] io_out_bits_mtvec,	
                io_out_bits_epc,	
                io_out_bits_rd1,	
                io_dm_out,	
                io_alu_out,	
  output        io_wbu_valid	
);

  reg  [1:0] state;	
  wire       io_wbu_valid_0 = state == 2'h2;	
  always @(posedge clock) begin	
    if (reset)	
      state <= 2'h0;	
    else begin	
      automatic logic [3:0][1:0] _GEN =
        {{state},
         {2'h0},
         {(io_in_bits_is_load
             ? io_in_bits_load_finish
             : ~io_in_bits_isS_type | io_in_bits_store_finish)
            ? 2'h2
            : state},
         {io_in_valid ? 2'h1 : state}};	
      state <= _GEN[state];	
    end
  end 
  assign io_out_valid = io_wbu_valid_0;	
  assign io_out_bits_jump_jalr = io_in_bits_jump_jalr;	
  assign io_out_bits_jump_en = io_in_bits_jump_en;	
  assign io_out_bits_imm = io_in_bits_imm;	
  assign io_out_bits_is_ecall = io_in_bits_is_ecall;	
  assign io_out_bits_is_mret = io_in_bits_is_mret;	
  assign io_out_bits_mtvec = io_in_bits_mtvec;	
  assign io_out_bits_epc = io_in_bits_epc;	
  assign io_out_bits_rd1 = io_in_bits_rd1;	
  assign io_dm_out = io_in_bits_dm_out;	
  assign io_alu_out = io_in_bits_alu_out;	
  assign io_wbu_valid = io_wbu_valid_0;	
endmodule

module PC(	
  input         clock,	
                reset,	
  output [31:0] io_next_pc,	
  input         io_in_valid,	
                io_in_bits_jump_jalr,	
                io_in_bits_jump_en,	
  input  [31:0] io_in_bits_imm,	
  input         io_in_bits_is_ecall,	
                io_in_bits_is_mret,	
  input  [31:0] io_in_bits_mtvec,	
                io_in_bits_epc,	
                io_in_bits_rd1	
);

  reg [31:0] pc;	
  always @(posedge clock) begin	
    if (reset)	
      pc <= 32'h80000000;	
    else if (io_in_valid) begin	
      if (io_in_bits_jump_en)	
        pc <= pc + io_in_bits_imm;	
      else if (io_in_bits_jump_jalr)	
        pc <= io_in_bits_rd1 + io_in_bits_imm;	
      else if (io_in_bits_is_ecall)	
        pc <= io_in_bits_mtvec;	
      else if (io_in_bits_is_mret)	
        pc <= io_in_bits_epc;	
      else	
        pc <= pc + 32'h4;	
    end
  end 
  assign io_next_pc = pc;	
endmodule


module UART(	
  input         clock,	
                reset,	
                io_in_bits_arvalid,	
  input  [31:0] io_in_bits_araddr,	
  input         io_in_bits_rready,	
                io_in_bits_awvalid,	
  input  [31:0] io_in_bits_awaddr,	
  input         io_in_bits_wvalid,	
  input  [31:0] io_in_bits_wdata,	
  input         io_in_bits_bready,	
  output        io_out_bits_arready,	
                io_out_bits_rvalid,	
  output [31:0] io_out_bits_rdata,	
  output        io_out_bits_rresp,	
                io_out_bits_awready,	
                io_out_bits_wready,	
                io_out_bits_bresp	
);

  reg  [31:0] deviceReg;	
  reg  [63:0] mtime;	
  reg         arready;	
  reg         rresp;	
  reg         rvalid;	
  reg         awready;	
  reg         wready;	
  reg         bresp;	
  reg         bvalid;	
  reg  [31:0] rdata;	
  wire        _GEN = wready & io_in_bits_wvalid;	
  wire        _GEN_0 = io_in_bits_awaddr == 32'hA00003F8;	
  wire        _GEN_1 = _GEN & _GEN_0;	
  `ifndef SYNTHESIS	
    always @(posedge clock) begin	
      if ((`PRINTF_COND_) & _GEN_1 & ~reset)	
        $fwrite(32'h80000002, "%c", deviceReg[7:0]);	
    end 
  `endif 
  always @(posedge clock) begin	
    if (reset) begin	
      deviceReg <= 32'h0;	
      mtime <= 64'h0;	
      arready <= 1'h1;	
      rresp <= 1'h0;	
      rvalid <= 1'h0;	
      awready <= 1'h0;	
      wready <= 1'h0;	
      bresp <= 1'h0;	
      bvalid <= 1'h0;	
      rdata <= 32'h0;	
    end
    else begin	
      automatic logic _GEN_2 = arready & io_in_bits_arvalid;	
      automatic logic _GEN_3 =
        ~(io_in_bits_araddr[31]) | io_in_bits_araddr > 32'h87FFFFFF;	
      automatic logic _GEN_4;	
      automatic logic _GEN_5;	
      automatic logic _GEN_6;	
      automatic logic _GEN_7 = rvalid & io_in_bits_rready;	
      automatic logic _GEN_8 = bvalid & io_in_bits_bready;	
      _GEN_4 = io_in_bits_araddr == 32'hA0000048;	
      _GEN_5 = io_in_bits_araddr == 32'hA000004C;	
      _GEN_6 = _GEN_4 | _GEN_5;	
      if (_GEN_1)	
        deviceReg <= io_in_bits_wdata;	
      mtime <= mtime + 64'h1;	
      arready <= _GEN_7 | ~(_GEN_2 & _GEN_3 & _GEN_6) & arready;	
      rresp <= ~_GEN_7 & (_GEN_2 ? _GEN_3 & (_GEN_6 | rresp) : rresp);	
      rvalid <= ~_GEN_7 & (_GEN_2 | rvalid);	
      awready <= io_in_bits_awvalid & ~awready | awready;	
      wready <= ~_GEN_8 & (io_in_bits_wvalid & ~wready | wready);	
      bresp <= ~(bresp & ~bvalid) & (_GEN ? _GEN_0 : bresp);	
      bvalid <= ~_GEN_8 & (_GEN | bvalid);	
      if (_GEN_2 & _GEN_3) begin	
        if (_GEN_4)	
          rdata <= mtime[31:0];	
        else if (_GEN_5)	
          rdata <= mtime[63:32];	
      end
    end
  end 
  assign io_out_bits_arready = arready;	
  assign io_out_bits_rvalid = rvalid;	
  assign io_out_bits_rdata = rdata;	
  assign io_out_bits_rresp = rresp;	
  assign io_out_bits_awready = awready;	
  assign io_out_bits_wready = wready;	
  assign io_out_bits_bresp = bresp;	
endmodule

module XBAR(	
  input         clock,	
                reset,	
  output        io_ifu_axi_in_ready,	
  input         io_ifu_axi_in_valid,	
                io_ifu_axi_in_bits_arvalid,	
  input  [31:0] io_ifu_axi_in_bits_araddr,	
  input         io_ifu_axi_out_ready,	
  output        io_ifu_axi_out_bits_arready,	
                io_ifu_axi_out_bits_rvalid,	
  output [31:0] io_ifu_axi_out_bits_rdata,	
  output        io_ifu_axi_out_bits_rresp,	
                io_isu_axi_in_ready,	
  input         io_isu_axi_in_valid,	
                io_isu_axi_in_bits_arvalid,	
                io_isu_axi_in_bits_load_unsign,	
  input  [31:0] io_isu_axi_in_bits_araddr,	
  input         io_isu_axi_in_bits_awvalid,	
  input  [31:0] io_isu_axi_in_bits_awaddr,	
  input         io_isu_axi_in_bits_wvalid,	
  input  [31:0] io_isu_axi_in_bits_wdata,	
                io_isu_axi_in_bits_wstrb,	
  input         io_isu_axi_out_ready,	
  output        io_isu_axi_out_bits_arready,	
  output [31:0] io_isu_axi_out_bits_rdata,	
  output        io_isu_axi_out_bits_rresp,	
                io_isu_axi_out_bits_awready,	
                io_isu_axi_out_bits_wready,	
                io_isu_axi_out_bits_bresp,	
  input         io_ifu_valid,	
                io_isu_valid	
);

  wire        _Uart_io_out_bits_arready;	
  wire        _Uart_io_out_bits_rvalid;	
  wire [31:0] _Uart_io_out_bits_rdata;	
  wire        _Uart_io_out_bits_rresp;	
  wire        _Uart_io_out_bits_awready;	
  wire        _Uart_io_out_bits_wready;	
  wire        _Uart_io_out_bits_bresp;	
  wire        _Sram_arready;	
  wire [31:0] _Sram_rdata;	
  wire        _Sram_rresp;	
  wire        _Sram_rvalid;	
  wire        _Sram_awready;	
  wire        _Sram_wready;	
  wire        _Sram_bresp;	
  reg  [2:0]  state;	
  wire        _io_isu_axi_out_valid_T = state == 3'h4;	
  wire        ifu_selected = state == 3'h1 | _io_isu_axi_out_valid_T & io_ifu_valid;	
  wire        isu_selected = state == 3'h2 | _io_isu_axi_out_valid_T & io_isu_valid;	
  reg         uart_selected;	
  wire        _Uart_io_in_bits_arvalid_T =
    ifu_selected ? io_ifu_axi_in_bits_arvalid : io_isu_axi_in_bits_arvalid;	
  wire        io_isu_axi_out_bits_arready_0 =
    uart_selected ? _Uart_io_out_bits_arready : _Sram_arready;	
  wire [31:0] _Uart_io_in_bits_araddr_T =
    ifu_selected ? io_ifu_axi_in_bits_araddr : io_isu_axi_in_bits_araddr;	
  wire        _GEN = uart_selected | ifu_selected;	
  wire [31:0] io_isu_axi_out_bits_rdata_0 =
    uart_selected ? _Uart_io_out_bits_rdata : _Sram_rdata;	
  wire        io_isu_axi_out_bits_rresp_0 =
    uart_selected ? _Uart_io_out_bits_rresp : _Sram_rresp;	
  wire        _GEN_0 = ~uart_selected | ifu_selected;	
  always @(posedge clock) begin	
    if (reset) begin	
      state <= 3'h0;	
      uart_selected <= 1'h0;	
    end
    else begin	
      if (state == 3'h0) begin	
        if (io_ifu_valid)	
          state <= 3'h1;	
        else if (io_isu_valid)	
          state <= 3'h2;	
      end
      else if (state == 3'h1) begin	
        if (io_ifu_axi_in_valid & io_ifu_axi_in_bits_arvalid)	
          state <= 3'h3;	
      end
      else if (state == 3'h2) begin	
        if (io_isu_axi_in_valid
            & (io_isu_axi_in_bits_arvalid | io_isu_axi_in_bits_awvalid))	
          state <= 3'h3;	
      end
      else if (state == 3'h3) begin	
        if (io_ifu_axi_out_ready | io_isu_axi_out_ready)	
          state <= 3'h4;	
      end
      else if (state == 3'h4 & (_Sram_rresp | _Sram_bresp))	
        state <= 3'h0;	
      uart_selected <=
        isu_selected
        & (~(io_isu_axi_in_bits_araddr[31]) | io_isu_axi_in_bits_araddr > 32'h87FFFFFF)
        | isu_selected
        & (~(io_isu_axi_in_bits_awaddr[31]) | io_isu_axi_in_bits_awaddr > 32'h87FFFFFF);	
    end
  end 
  SRAM Sram (	
    .clk         (clock),
    .arvalid     (~uart_selected & _Uart_io_in_bits_arvalid_T),	
    .araddr      (uart_selected ? 32'h0 : _Uart_io_in_bits_araddr_T),	
    .load_unsign (~_GEN & io_isu_axi_in_bits_load_unsign),	
    .arready     (_Sram_arready),
    .rdata       (_Sram_rdata),
    .rresp       (_Sram_rresp),
    .rvalid      (_Sram_rvalid),
    .rready      (~uart_selected),	
    .awvalid     (~_GEN & io_isu_axi_in_bits_awvalid),	
    .awaddr      (_GEN ? 32'h0 : io_isu_axi_in_bits_awaddr),	
    .awready     (_Sram_awready),
    .wvalid      (~_GEN & io_isu_axi_in_bits_wvalid),	
    .wdata       (_GEN ? 32'h0 : io_isu_axi_in_bits_wdata),	
    .len
      (uart_selected ? 32'h0 : ifu_selected ? 32'h4 : io_isu_axi_in_bits_wstrb),	
    .wready      (_Sram_wready),
    .bresp       (_Sram_bresp),
    .bvalid      (/* unused */),
    .bready      (~uart_selected)	
  );
  UART Uart (	
    .clock               (clock),
    .reset               (reset),
    .io_in_bits_arvalid  (uart_selected & _Uart_io_in_bits_arvalid_T),	
    .io_in_bits_araddr   (uart_selected ? _Uart_io_in_bits_araddr_T : 32'h0),	
    .io_in_bits_rready   (uart_selected),	
    .io_in_bits_awvalid  (uart_selected & ~ifu_selected & io_isu_axi_in_bits_awvalid),	
    .io_in_bits_awaddr   (_GEN_0 ? 32'h0 : io_isu_axi_in_bits_awaddr),	
    .io_in_bits_wvalid   (uart_selected & ~ifu_selected & io_isu_axi_in_bits_wvalid),	
    .io_in_bits_wdata    (_GEN_0 ? 32'h0 : io_isu_axi_in_bits_wdata),	
    .io_in_bits_bready   (uart_selected),	
    .io_out_bits_arready (_Uart_io_out_bits_arready),
    .io_out_bits_rvalid  (_Uart_io_out_bits_rvalid),
    .io_out_bits_rdata   (_Uart_io_out_bits_rdata),
    .io_out_bits_rresp   (_Uart_io_out_bits_rresp),
    .io_out_bits_awready (_Uart_io_out_bits_awready),
    .io_out_bits_wready  (_Uart_io_out_bits_wready),
    .io_out_bits_bresp   (_Uart_io_out_bits_bresp)
  );
  assign io_ifu_axi_in_ready = ifu_selected;	
  assign io_ifu_axi_out_bits_arready = io_isu_axi_out_bits_arready_0;	
  assign io_ifu_axi_out_bits_rvalid =
    uart_selected ? _Uart_io_out_bits_rvalid : _Sram_rvalid;	
  assign io_ifu_axi_out_bits_rdata = io_isu_axi_out_bits_rdata_0;	
  assign io_ifu_axi_out_bits_rresp = io_isu_axi_out_bits_rresp_0;	
  assign io_isu_axi_in_ready = isu_selected;	
  assign io_isu_axi_out_bits_arready = io_isu_axi_out_bits_arready_0;	
  assign io_isu_axi_out_bits_rdata = io_isu_axi_out_bits_rdata_0;	
  assign io_isu_axi_out_bits_rresp = io_isu_axi_out_bits_rresp_0;	
  assign io_isu_axi_out_bits_awready =
    uart_selected ? _Uart_io_out_bits_awready : _Sram_awready;	
  assign io_isu_axi_out_bits_wready =
    uart_selected ? _Uart_io_out_bits_wready : _Sram_wready;	
  assign io_isu_axi_out_bits_bresp =
    uart_selected ? _Uart_io_out_bits_bresp : _Sram_bresp;	
endmodule

module top(	
  input         clock,	
                reset,	
  output [31:0] io_pc,	
                io_alu_rsl,	
                io_inst,	
                io_imm,	
  output        io_diff_test,	
                io_wbu_valid	
);

  wire        _xbar_io_ifu_axi_in_ready;	
  wire        _xbar_io_ifu_axi_out_bits_arready;	
  wire        _xbar_io_ifu_axi_out_bits_rvalid;	
  wire [31:0] _xbar_io_ifu_axi_out_bits_rdata;	
  wire        _xbar_io_ifu_axi_out_bits_rresp;	
  wire        _xbar_io_isu_axi_in_ready;	
  wire        _xbar_io_isu_axi_out_bits_arready;	
  wire [31:0] _xbar_io_isu_axi_out_bits_rdata;	
  wire        _xbar_io_isu_axi_out_bits_rresp;	
  wire        _xbar_io_isu_axi_out_bits_awready;	
  wire        _xbar_io_isu_axi_out_bits_wready;	
  wire        _xbar_io_isu_axi_out_bits_bresp;	
  wire [31:0] _pc_io_next_pc;	
  wire        _wbu_io_out_valid;	
  wire        _wbu_io_out_bits_jump_jalr;	
  wire        _wbu_io_out_bits_jump_en;	
  wire [31:0] _wbu_io_out_bits_imm;	
  wire        _wbu_io_out_bits_is_ecall;	
  wire        _wbu_io_out_bits_is_mret;	
  wire [31:0] _wbu_io_out_bits_mtvec;	
  wire [31:0] _wbu_io_out_bits_epc;	
  wire [31:0] _wbu_io_out_bits_rd1;	
  wire [31:0] _wbu_io_dm_out;	
  wire [31:0] _wbu_io_alu_out;	
  wire        _wbu_io_wbu_valid;	
  wire        _isu_io_out_valid;	
  wire [31:0] _isu_io_out_bits_dm_out;	
  wire [31:0] _isu_io_out_bits_alu_out;	
  wire        _isu_io_out_bits_jump_jalr;	
  wire        _isu_io_out_bits_jump_en;	
  wire [31:0] _isu_io_out_bits_imm;	
  wire        _isu_io_out_bits_is_ecall;	
  wire        _isu_io_out_bits_is_mret;	
  wire [31:0] _isu_io_out_bits_mtvec;	
  wire [31:0] _isu_io_out_bits_epc;	
  wire [31:0] _isu_io_out_bits_rd1;	
  wire        _isu_io_out_bits_load_finish;	
  wire        _isu_io_out_bits_store_finish;	
  wire        _isu_io_out_bits_is_load;	
  wire        _isu_io_out_bits_isS_type;	
  wire        _isu_io_isu_axi_out_valid;	
  wire        _isu_io_isu_axi_out_bits_arvalid;	
  wire        _isu_io_isu_axi_out_bits_load_unsign;	
  wire [31:0] _isu_io_isu_axi_out_bits_araddr;	
  wire        _isu_io_isu_axi_out_bits_awvalid;	
  wire [31:0] _isu_io_isu_axi_out_bits_awaddr;	
  wire        _isu_io_isu_axi_out_bits_wvalid;	
  wire [31:0] _isu_io_isu_axi_out_bits_wdata;	
  wire [31:0] _isu_io_isu_axi_out_bits_wstrb;	
  wire        _isu_io_isu_axi_in_ready;	
  wire        _isu_io_isu_valid;	
  wire        _exu_io_out_valid;	
  wire [31:0] _exu_io_out_bits_alu_out;	
  wire [31:0] _exu_io_out_bits_data;	
  wire        _exu_io_out_bits_mem_wr_en;	
  wire [31:0] _exu_io_out_bits_len;	
  wire        _exu_io_out_bits_load_unsign;	
  wire        _exu_io_out_bits_jump_jalr;	
  wire        _exu_io_out_bits_jump_en;	
  wire [31:0] _exu_io_out_bits_imm;	
  wire        _exu_io_out_bits_is_ecall;	
  wire        _exu_io_out_bits_is_mret;	
  wire [31:0] _exu_io_out_bits_mtvec;	
  wire [31:0] _exu_io_out_bits_epc;	
  wire [31:0] _exu_io_out_bits_rd1;	
  wire        _exu_io_out_bits_is_load;	
  wire        _exu_io_out_bits_isS_type;	
  wire        _idu_io_in_ready;	
  wire        _idu_io_out_valid;	
  wire [31:0] _idu_io_out_bits_rs1;	
  wire [31:0] _idu_io_out_bits_rs2;	
  wire [31:0] _idu_io_out_bits_imm;	
  wire [12:0] _idu_io_out_bits_alu_sel;	
  wire        _idu_io_out_bits_alu_a_sel;	
  wire        _idu_io_out_bits_alu_b_sel;	
  wire [31:0] _idu_io_out_bits_pc;	
  wire        _idu_io_out_bits_jump_en;	
  wire        _idu_io_out_bits_jump_jalr;	
  wire        _idu_io_out_bits_is_ecall;	
  wire        _idu_io_out_bits_is_mret;	
  wire [31:0] _idu_io_out_bits_mtvec;	
  wire [31:0] _idu_io_out_bits_epc;	
  wire        _idu_io_out_bits_mem_wr_en;	
  wire [31:0] _idu_io_out_bits_len;	
  wire        _idu_io_out_bits_load_unsign;	
  wire        _idu_io_out_bits_is_load;	
  wire        _idu_io_out_bits_isS_type;	
  wire        _ifu_io_out_valid;	
  wire [31:0] _ifu_io_out_bits_inst;	
  wire [31:0] _ifu_io_out_bits_pc;	
  wire        _ifu_io_ifu_axi_out_valid;	
  wire        _ifu_io_ifu_axi_out_bits_arvalid;	
  wire [31:0] _ifu_io_ifu_axi_out_bits_araddr;	
  wire        _ifu_io_ifu_axi_in_ready;	
  wire        _ifu_io_ifu_valid;	
  IFU ifu (	
    .clock                       (clock),
    .reset                       (reset),
    .io_pc                       (_pc_io_next_pc),	
    .io_out_ready                (_idu_io_in_ready),	
    .io_out_valid                (_ifu_io_out_valid),
    .io_out_bits_inst            (_ifu_io_out_bits_inst),
    .io_out_bits_pc              (_ifu_io_out_bits_pc),
    .io_ifu_axi_out_ready        (_xbar_io_ifu_axi_in_ready),	
    .io_ifu_axi_out_valid        (_ifu_io_ifu_axi_out_valid),
    .io_ifu_axi_out_bits_arvalid (_ifu_io_ifu_axi_out_bits_arvalid),
    .io_ifu_axi_out_bits_araddr  (_ifu_io_ifu_axi_out_bits_araddr),
    .io_ifu_axi_in_ready         (_ifu_io_ifu_axi_in_ready),
    .io_ifu_axi_in_bits_arready  (_xbar_io_ifu_axi_out_bits_arready),	
    .io_ifu_axi_in_bits_rvalid   (_xbar_io_ifu_axi_out_bits_rvalid),	
    .io_ifu_axi_in_bits_rdata    (_xbar_io_ifu_axi_out_bits_rdata),	
    .io_ifu_axi_in_bits_rresp    (_xbar_io_ifu_axi_out_bits_rresp),	
    .io_ifu_valid                (_ifu_io_ifu_valid),
    .io_diff_test                (io_diff_test)
  );
  IDU idu (	
    .clock                   (clock),
    .reset                   (reset),
    .io_in_ready             (_idu_io_in_ready),
    .io_in_valid             (_ifu_io_out_valid),	
    .io_in_bits_inst         (_ifu_io_out_bits_inst),	
    .io_in_bits_pc           (_ifu_io_out_bits_pc),	
    .io_out_valid            (_idu_io_out_valid),
    .io_out_bits_rs1         (_idu_io_out_bits_rs1),
    .io_out_bits_rs2         (_idu_io_out_bits_rs2),
    .io_out_bits_imm         (_idu_io_out_bits_imm),
    .io_out_bits_alu_sel     (_idu_io_out_bits_alu_sel),
    .io_out_bits_alu_a_sel   (_idu_io_out_bits_alu_a_sel),
    .io_out_bits_alu_b_sel   (_idu_io_out_bits_alu_b_sel),
    .io_out_bits_pc          (_idu_io_out_bits_pc),
    .io_out_bits_jump_en     (_idu_io_out_bits_jump_en),
    .io_out_bits_jump_jalr   (_idu_io_out_bits_jump_jalr),
    .io_out_bits_is_ecall    (_idu_io_out_bits_is_ecall),
    .io_out_bits_is_mret     (_idu_io_out_bits_is_mret),
    .io_out_bits_mtvec       (_idu_io_out_bits_mtvec),
    .io_out_bits_epc         (_idu_io_out_bits_epc),
    .io_out_bits_mem_wr_en   (_idu_io_out_bits_mem_wr_en),
    .io_out_bits_len         (_idu_io_out_bits_len),
    .io_out_bits_load_unsign (_idu_io_out_bits_load_unsign),
    .io_out_bits_is_load     (_idu_io_out_bits_is_load),
    .io_out_bits_isS_type    (_idu_io_out_bits_isS_type),
    .io_alu_rsl              (_wbu_io_alu_out),	
    .io_dm_out               (_wbu_io_dm_out),	
    .io_wbu_valid            (_wbu_io_wbu_valid)	
  );
  EXU exu (	
    .clock                   (clock),
    .reset                   (reset),
    .io_in_valid             (_idu_io_out_valid),	
    .io_in_bits_rs1          (_idu_io_out_bits_rs1),	
    .io_in_bits_rs2          (_idu_io_out_bits_rs2),	
    .io_in_bits_imm          (_idu_io_out_bits_imm),	
    .io_in_bits_alu_sel      (_idu_io_out_bits_alu_sel),	
    .io_in_bits_alu_a_sel    (_idu_io_out_bits_alu_a_sel),	
    .io_in_bits_alu_b_sel    (_idu_io_out_bits_alu_b_sel),	
    .io_in_bits_pc           (_idu_io_out_bits_pc),	
    .io_in_bits_jump_en      (_idu_io_out_bits_jump_en),	
    .io_in_bits_jump_jalr    (_idu_io_out_bits_jump_jalr),	
    .io_in_bits_is_ecall     (_idu_io_out_bits_is_ecall),	
    .io_in_bits_is_mret      (_idu_io_out_bits_is_mret),	
    .io_in_bits_mtvec        (_idu_io_out_bits_mtvec),	
    .io_in_bits_epc          (_idu_io_out_bits_epc),	
    .io_in_bits_mem_wr_en    (_idu_io_out_bits_mem_wr_en),	
    .io_in_bits_len          (_idu_io_out_bits_len),	
    .io_in_bits_load_unsign  (_idu_io_out_bits_load_unsign),	
    .io_in_bits_is_load      (_idu_io_out_bits_is_load),	
    .io_in_bits_isS_type     (_idu_io_out_bits_isS_type),	
    .io_out_valid            (_exu_io_out_valid),
    .io_out_bits_alu_out     (_exu_io_out_bits_alu_out),
    .io_out_bits_data        (_exu_io_out_bits_data),
    .io_out_bits_mem_wr_en   (_exu_io_out_bits_mem_wr_en),
    .io_out_bits_len         (_exu_io_out_bits_len),
    .io_out_bits_load_unsign (_exu_io_out_bits_load_unsign),
    .io_out_bits_jump_jalr   (_exu_io_out_bits_jump_jalr),
    .io_out_bits_jump_en     (_exu_io_out_bits_jump_en),
    .io_out_bits_imm         (_exu_io_out_bits_imm),
    .io_out_bits_is_ecall    (_exu_io_out_bits_is_ecall),
    .io_out_bits_is_mret     (_exu_io_out_bits_is_mret),
    .io_out_bits_mtvec       (_exu_io_out_bits_mtvec),
    .io_out_bits_epc         (_exu_io_out_bits_epc),
    .io_out_bits_rd1         (_exu_io_out_bits_rd1),
    .io_out_bits_is_load     (_exu_io_out_bits_is_load),
    .io_out_bits_isS_type    (_exu_io_out_bits_isS_type),
    .io_alu_rsl              (io_alu_rsl)
  );
  ISU isu (	
    .clock                           (clock),
    .reset                           (reset),
    .io_in_valid                     (_exu_io_out_valid),	
    .io_in_bits_alu_out              (_exu_io_out_bits_alu_out),	
    .io_in_bits_data                 (_exu_io_out_bits_data),	
    .io_in_bits_mem_wr_en            (_exu_io_out_bits_mem_wr_en),	
    .io_in_bits_len                  (_exu_io_out_bits_len),	
    .io_in_bits_load_unsign          (_exu_io_out_bits_load_unsign),	
    .io_in_bits_jump_jalr            (_exu_io_out_bits_jump_jalr),	
    .io_in_bits_jump_en              (_exu_io_out_bits_jump_en),	
    .io_in_bits_imm                  (_exu_io_out_bits_imm),	
    .io_in_bits_is_ecall             (_exu_io_out_bits_is_ecall),	
    .io_in_bits_is_mret              (_exu_io_out_bits_is_mret),	
    .io_in_bits_mtvec                (_exu_io_out_bits_mtvec),	
    .io_in_bits_epc                  (_exu_io_out_bits_epc),	
    .io_in_bits_rd1                  (_exu_io_out_bits_rd1),	
    .io_in_bits_is_load              (_exu_io_out_bits_is_load),	
    .io_in_bits_isS_type             (_exu_io_out_bits_isS_type),	
    .io_out_valid                    (_isu_io_out_valid),
    .io_out_bits_dm_out              (_isu_io_out_bits_dm_out),
    .io_out_bits_alu_out             (_isu_io_out_bits_alu_out),
    .io_out_bits_jump_jalr           (_isu_io_out_bits_jump_jalr),
    .io_out_bits_jump_en             (_isu_io_out_bits_jump_en),
    .io_out_bits_imm                 (_isu_io_out_bits_imm),
    .io_out_bits_is_ecall            (_isu_io_out_bits_is_ecall),
    .io_out_bits_is_mret             (_isu_io_out_bits_is_mret),
    .io_out_bits_mtvec               (_isu_io_out_bits_mtvec),
    .io_out_bits_epc                 (_isu_io_out_bits_epc),
    .io_out_bits_rd1                 (_isu_io_out_bits_rd1),
    .io_out_bits_load_finish         (_isu_io_out_bits_load_finish),
    .io_out_bits_store_finish        (_isu_io_out_bits_store_finish),
    .io_out_bits_is_load             (_isu_io_out_bits_is_load),
    .io_out_bits_isS_type            (_isu_io_out_bits_isS_type),
    .io_isu_axi_out_ready            (_xbar_io_isu_axi_in_ready),	
    .io_isu_axi_out_valid            (_isu_io_isu_axi_out_valid),
    .io_isu_axi_out_bits_arvalid     (_isu_io_isu_axi_out_bits_arvalid),
    .io_isu_axi_out_bits_load_unsign (_isu_io_isu_axi_out_bits_load_unsign),
    .io_isu_axi_out_bits_araddr      (_isu_io_isu_axi_out_bits_araddr),
    .io_isu_axi_out_bits_awvalid     (_isu_io_isu_axi_out_bits_awvalid),
    .io_isu_axi_out_bits_awaddr      (_isu_io_isu_axi_out_bits_awaddr),
    .io_isu_axi_out_bits_wvalid      (_isu_io_isu_axi_out_bits_wvalid),
    .io_isu_axi_out_bits_wdata       (_isu_io_isu_axi_out_bits_wdata),
    .io_isu_axi_out_bits_wstrb       (_isu_io_isu_axi_out_bits_wstrb),
    .io_isu_axi_in_ready             (_isu_io_isu_axi_in_ready),
    .io_isu_axi_in_bits_arready      (_xbar_io_isu_axi_out_bits_arready),	
    .io_isu_axi_in_bits_rdata        (_xbar_io_isu_axi_out_bits_rdata),	
    .io_isu_axi_in_bits_rresp        (_xbar_io_isu_axi_out_bits_rresp),	
    .io_isu_axi_in_bits_awready      (_xbar_io_isu_axi_out_bits_awready),	
    .io_isu_axi_in_bits_wready       (_xbar_io_isu_axi_out_bits_wready),	
    .io_isu_axi_in_bits_bresp        (_xbar_io_isu_axi_out_bits_bresp),	
    .io_isu_valid                    (_isu_io_isu_valid)
  );
  WBU wbu (	
    .clock                   (clock),
    .reset                   (reset),
    .io_in_valid             (_isu_io_out_valid),	
    .io_in_bits_dm_out       (_isu_io_out_bits_dm_out),	
    .io_in_bits_alu_out      (_isu_io_out_bits_alu_out),	
    .io_in_bits_jump_jalr    (_isu_io_out_bits_jump_jalr),	
    .io_in_bits_jump_en      (_isu_io_out_bits_jump_en),	
    .io_in_bits_imm          (_isu_io_out_bits_imm),	
    .io_in_bits_is_ecall     (_isu_io_out_bits_is_ecall),	
    .io_in_bits_is_mret      (_isu_io_out_bits_is_mret),	
    .io_in_bits_mtvec        (_isu_io_out_bits_mtvec),	
    .io_in_bits_epc          (_isu_io_out_bits_epc),	
    .io_in_bits_rd1          (_isu_io_out_bits_rd1),	
    .io_in_bits_load_finish  (_isu_io_out_bits_load_finish),	
    .io_in_bits_store_finish (_isu_io_out_bits_store_finish),	
    .io_in_bits_is_load      (_isu_io_out_bits_is_load),	
    .io_in_bits_isS_type     (_isu_io_out_bits_isS_type),	
    .io_out_valid            (_wbu_io_out_valid),
    .io_out_bits_jump_jalr   (_wbu_io_out_bits_jump_jalr),
    .io_out_bits_jump_en     (_wbu_io_out_bits_jump_en),
    .io_out_bits_imm         (_wbu_io_out_bits_imm),
    .io_out_bits_is_ecall    (_wbu_io_out_bits_is_ecall),
    .io_out_bits_is_mret     (_wbu_io_out_bits_is_mret),
    .io_out_bits_mtvec       (_wbu_io_out_bits_mtvec),
    .io_out_bits_epc         (_wbu_io_out_bits_epc),
    .io_out_bits_rd1         (_wbu_io_out_bits_rd1),
    .io_dm_out               (_wbu_io_dm_out),
    .io_alu_out              (_wbu_io_alu_out),
    .io_wbu_valid            (_wbu_io_wbu_valid)
  );
  PC pc (	
    .clock                (clock),
    .reset                (reset),
    .io_next_pc           (_pc_io_next_pc),
    .io_in_valid          (_wbu_io_out_valid),	
    .io_in_bits_jump_jalr (_wbu_io_out_bits_jump_jalr),	
    .io_in_bits_jump_en   (_wbu_io_out_bits_jump_en),	
    .io_in_bits_imm       (_wbu_io_out_bits_imm),	
    .io_in_bits_is_ecall  (_wbu_io_out_bits_is_ecall),	
    .io_in_bits_is_mret   (_wbu_io_out_bits_is_mret),	
    .io_in_bits_mtvec     (_wbu_io_out_bits_mtvec),	
    .io_in_bits_epc       (_wbu_io_out_bits_epc),	
    .io_in_bits_rd1       (_wbu_io_out_bits_rd1)	
  );
  XBAR xbar (	
    .clock                          (clock),
    .reset                          (reset),
    .io_ifu_axi_in_ready            (_xbar_io_ifu_axi_in_ready),
    .io_ifu_axi_in_valid            (_ifu_io_ifu_axi_out_valid),	
    .io_ifu_axi_in_bits_arvalid     (_ifu_io_ifu_axi_out_bits_arvalid),	
    .io_ifu_axi_in_bits_araddr      (_ifu_io_ifu_axi_out_bits_araddr),	
    .io_ifu_axi_out_ready           (_ifu_io_ifu_axi_in_ready),	
    .io_ifu_axi_out_bits_arready    (_xbar_io_ifu_axi_out_bits_arready),
    .io_ifu_axi_out_bits_rvalid     (_xbar_io_ifu_axi_out_bits_rvalid),
    .io_ifu_axi_out_bits_rdata      (_xbar_io_ifu_axi_out_bits_rdata),
    .io_ifu_axi_out_bits_rresp      (_xbar_io_ifu_axi_out_bits_rresp),
    .io_isu_axi_in_ready            (_xbar_io_isu_axi_in_ready),
    .io_isu_axi_in_valid            (_isu_io_isu_axi_out_valid),	
    .io_isu_axi_in_bits_arvalid     (_isu_io_isu_axi_out_bits_arvalid),	
    .io_isu_axi_in_bits_load_unsign (_isu_io_isu_axi_out_bits_load_unsign),	
    .io_isu_axi_in_bits_araddr      (_isu_io_isu_axi_out_bits_araddr),	
    .io_isu_axi_in_bits_awvalid     (_isu_io_isu_axi_out_bits_awvalid),	
    .io_isu_axi_in_bits_awaddr      (_isu_io_isu_axi_out_bits_awaddr),	
    .io_isu_axi_in_bits_wvalid      (_isu_io_isu_axi_out_bits_wvalid),	
    .io_isu_axi_in_bits_wdata       (_isu_io_isu_axi_out_bits_wdata),	
    .io_isu_axi_in_bits_wstrb       (_isu_io_isu_axi_out_bits_wstrb),	
    .io_isu_axi_out_ready           (_isu_io_isu_axi_in_ready),	
    .io_isu_axi_out_bits_arready    (_xbar_io_isu_axi_out_bits_arready),
    .io_isu_axi_out_bits_rdata      (_xbar_io_isu_axi_out_bits_rdata),
    .io_isu_axi_out_bits_rresp      (_xbar_io_isu_axi_out_bits_rresp),
    .io_isu_axi_out_bits_awready    (_xbar_io_isu_axi_out_bits_awready),
    .io_isu_axi_out_bits_wready     (_xbar_io_isu_axi_out_bits_wready),
    .io_isu_axi_out_bits_bresp      (_xbar_io_isu_axi_out_bits_bresp),
    .io_ifu_valid                   (_ifu_io_ifu_valid),	
    .io_isu_valid                   (_isu_io_isu_valid)	
  );
  assign io_pc = _idu_io_out_bits_pc;	
  assign io_inst = _ifu_io_out_bits_inst;	
  assign io_imm = _idu_io_out_bits_imm;	
  assign io_wbu_valid = _wbu_io_wbu_valid;	
endmodule



module SRAM(
    input clk,
    input arvalid,
    input [31:0] araddr,
    input load_unsign,
    output arready,

    output reg [31:0] rdata,
    output reg rresp,
    output reg rvalid,
    input rready,

    input awvalid,
    input [31:0] awaddr,
    output reg awready,

    input wvalid,
    input [31:0] wdata,
    input [31:0] len,
    output reg wready,

    output reg bresp,
    output reg bvalid,
    input bready
);

    import "DPI-C" function int mem_read(input int addr, int len);
    import "DPI-C" function void mem_write(input int addr, int len, input int data);

    reg [31:0] data_delay;  
    assign rdata = data_delay;

    assign arready = 1;     

    always @(posedge clk) begin
        reg [31:0] temp_data;

        if (arvalid && arready) begin
            if (rready && !rvalid) begin    
                rresp <= 1;
                rvalid <= 1;
                if(load_unsign) begin
                    if(len == 1) begin
                        data_delay <= {24'b0, mem_read(araddr, 1)};
                    end
                    else if(len == 2) begin
                        data_delay <= {16'b0, mem_read(araddr, 2)};
                    end
                    else if(len == 4) begin
                        data_delay <= mem_read(araddr, 4);
                    end
                end
                else begin
                    temp_data = mem_read(araddr, len);
                    if(len == 1) begin
                        data_delay <= {{24{temp_data[7]}}, temp_data[7:0]};
                    end
                    else if(len == 2) begin
                        data_delay <= {{16{temp_data[15]}}, temp_data[15:0]};
                    end
                    else if(len == 4) begin
                        data_delay <= mem_read(araddr, 4);
                    end
                end
            end
        end
        
        if (awvalid && !awready) begin
            awready <= 1;
        end     
        
        if (awvalid && awready) begin
            awready <= 0;
        end

        if (wvalid && !wready) begin  
                wready <= 1;
                mem_write(awaddr, len, wdata);
                bvalid <= 1;
            end

        if(rvalid && rready) begin  
            rvalid <= 0;
            rresp <= 0;
        end

        if(bvalid && bready) begin  
            wready <= 0;
            bresp <= 1;
            bvalid <= 0;
        end

        if(bresp) begin
            bresp <= 0;
        end
    end


endmodule

