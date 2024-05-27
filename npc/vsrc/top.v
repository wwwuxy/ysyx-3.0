/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off BLKSEQ */


module  ysyx_23060192_ADD(
  input [31:0] data1,
  input [31:0] data2,
  output [31:0] res
);
  assign res = data1 + data2;
endmodule


module ysyx_23060192_IFU( //Instruction Fetch Unit，输出[31:0]的[31:0]ins
  input clk,
  input [31:0]pc,
  output [31:0]ins
);
  // assign ipc = pc;
  // wire [31:0] ipc;
  reg [31:0]inst;
// initial ipc = pc;

  import "DPI-C" function int pmem_read(input int pc);  // 接入DPI，调佣c++中函数-读内存
  // endfunction
// initial begin
  always @(pc) begin
  // $display("Initial instruction = %h", inst);
  $display("Calling pmem_read with pc = %h", pc);
  inst = pmem_read(pc);
  $display("Returned instruction = %h", inst);
  end

  assign ins = inst;
endmodule

module ysyx_23060192_IDU_I( //Instruction Decode Unit For I
  input [31:0]ins,
  output [4:0]rs1,
  output [4:0]rs2,
  output [31:0]imm,
  output [4:0]rd,
  output [31:0]inst //将ins传递给EXU模块
);
  assign inst = ins;
//指令分解，imm根据指令类型拼接
assign  rd = ins[11:7];
// assign   func3 = ins[14:12];
assign  rs1 = ins[19:15];
assign  rs2 = ins[24:20];
assign  imm = {{20{ins[31]}},ins[31:20]};
// assign func7 = ins[31:25];


endmodule

module ysyx_23060192_EXU(   //只实现了addi指令解码
  input clk,
  input wen,    //寄存器写使能
  // input [31:0]ins,
  input [4:0]rs1,
  // input [4:0]rs2,
  input [31:0]imm,
  input [4:0]rd
);

  wire [31:0] wdata,rdata;

  ysyx_23060192_RegisterFile #(5,32) regs ( //通用寄存器32个，地址线5位
    clk,
    wdata,
    rd,
    rs1,
    wen,
    rdata
);

   ysyx_23060192_ADD addi( //进行addi运算
    .data1(rdata),
    .data2(imm),
    .res(wdata)
   );

endmodule

module ysyx_23060192_PC(  //封装pc，内部实现自增
  input clk,
  input reset,
  output [31:0]pc
);


wire [31:0] snpc,ipc;   //用来连接addpc 和 Reg

 ysyx_23060192_Reg #(32,32'h80000000) resetpc (  //触发器，reset是1重置pc，否则更新pc
  clk,
  reset,
  snpc, //自增后的pc
  ipc
);
  assign pc = ipc;

 ysyx_23060192_ADD addpc(  //输出的dnpc通过触发器，当enpc是1时更新pc
  .data1(ipc), 
  .data2(32'd4),  //自增4
  .res(snpc)
);

endmodule

module  top (  //处理器的输入只有周期和重置信号，数据都在内存和寄存器里
  input clk,
  input reset,  //重置处理器
  input wen
);

  wire [31:0] imm, inst,pc,inst_ex;
  wire [4:0] rs1,rs2,rd;


  // wire [7:0] M [65535:0]; //内存，按字节存储



// initial begin
//   pc = 32'h80000000; 
// end

  ysyx_23060192_PC  PC(
    .clk(clk),
    .reset(reset),
    .pc(pc)
  );


  ysyx_23060192_IFU ifu(    //取指
    .clk(clk),
    .pc(pc),
    .ins(inst)
  );

  ysyx_23060192_IDU_I idu_i(    //译码
    .ins(inst),
    .rs1(rs1),
    .rs2(rs2),
    .imm(imm),
    .rd(rd),
    .inst(inst_ex)
  );

  ysyx_23060192_EXU exu(    //执行
    .clk(clk),
    .wen(wen),
    // .ins(inst_ex),
    .rs1(rs1),
    // .rs2(rs2),
    .imm(imm),
    .rd(rd)
  );

endmodule
