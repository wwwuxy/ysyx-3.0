/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include"/home/wuxy/ysyx-workbench/nemu/src/utils/elf.h"

#define R(i) gpr(i)   //i是寄存器的序号
#define Mr vaddr_read
#define Mw vaddr_write
#define MaxSize 15  //定义ins_buffer的大小

typedef struct  {   //环形队列结构体
  uint32_t val[MaxSize];
  int front,rear;
}SqQuene;

static void enQuene(SqQuene *q, uint32_t val){  //入队，满了就会覆盖旧值
  q->rear = (q->rear + 1) % MaxSize;
  q->val[q->rear] = val;
}

SqQuene ring_buffer;  //指令环形缓冲区


enum {
  TYPE_I, TYPE_U, TYPE_S,TYPE_J,TYPE_B,TYPE_R,
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
//从指令中读取立即数
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)  //SEXT是符号位扩展,因为I是imm[11:0]，故不用平移
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)  //左移12位因为imm[31:12]
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0) //最高位永远是符号位，左移5位因为imm[11:5]
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 20) | BITS(i, 19, 12) << 12 | BITS(i, 20, 20) << 11 | BITS(i, 30, 21) << 1; } while(0)  //因为需要移位操作，故要从高位往低位赋值imm
#define immB() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | BITS(i, 7, 7) << 11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1; } while(0) 

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rs1 = BITS(i, 19, 15);  //BITS是位抽取，无论什么指令[19：15]都是rs1,下面同理
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7); 
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J:                   immJ(); break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_R: src1R(); src2R();       ; break;
  }
}

static int decode_exec(Decode *s) {
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val) 
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}
 //src1 src2是读取的寄存器的值，rd是寄存器编号，imm已符号位扩展

  INSTPAT_START();  
  /***INSTPAT(模式字符串, 指令名称, 指令类型, 指令执行操作)***/
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) = imm);
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm); //add ipper immediate to pc

  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(rd) = s->pc + 4; s->dnpc = s->pc + imm; IFDEF(CONFIG_FTRACE, if(rd == 1 ){display_call(s->pc,s->dnpc);}));  //立即数跳转
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(rd) = s->pc + 4;s->dnpc = (src1 + imm) & ~1; IFDEF(CONFIG_FTRACE, if(rd == 0 && src1 == R(1)){display_ret(s->pc,s->dnpc);
                                                                                                              }else if(rd == 1){display_call(s->pc,s->dnpc);}));  //寄存器跳转 “& ~1”用来将最低位清零
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if(src1 == src2) s->dnpc = s->pc + imm); //相等则跳转
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if(src1 != src2) s->dnpc = s->pc + imm); //不等则跳转
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, if((sword_t)src1 < (sword_t)src2) s->dnpc = s->pc + imm); //补码小则立即数跳转
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, if((sword_t)src1 >= (sword_t)src2) s->dnpc = s->pc + imm); //补码不小则立即数跳转
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, if(src1 < src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", begu   , B, if(src1 >= src2) s->dnpc = s->pc + imm);

  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm, 2),16));  //取两字节，符号扩展，第十六位，也就是imm[15]是最高位

  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = Mr(src1 + imm, 4)); //取四字节
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1)); //load byte unsigned
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm, 2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2)); //store byte   Mw(addr,len,data)
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2)); //读四字节

  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + imm);  
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(rd) = (src1 < imm));  //rs1是否小于imm
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(rd) = src1 ^ imm);
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(rd) = src1 & imm);
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(rd) = src1 << BITS(imm, 4, 0)); //左移补0
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(rd) = src1 >> BITS(imm, 4, 0)); //右移补0
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(rd) = (sword_t)src1 >> BITS(imm, 4, 0)); //右移，补符号位

  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(rd) = src1 - src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(rd) = src1 << src2); //左移补0
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = (sword_t)src1 < (sword_t)src2); //补码比较rs1 rs2
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(rd) = (src1 < src2));
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(rd) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(rd) = src1 >> src2); //右移补0
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(rd) = (sword_t)src1 >> (sword_t)src2); //右移，补符号位
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(rd) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(rd) = src1 & src2);

  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(rd) = src1 * src2);
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(rd) = (uint64_t)((int64_t)((int32_t)src1) * (int64_t)((int32_t)src2))>>32);//32位相乘，结果是64位，故需要进行提升类型
  // INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu , R, R(rd) = (uint64_t)((int64_t)((int32_t)src1) * (uint64_t)((uint32_t)src2))>>32);
  // INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, R(rd) = (uint64_t)((int64_t)((uint32_t)src1) * (uint64_t)((uint32_t)src2))>>32);
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(rd) = (sword_t)src1 / (sword_t)src2);
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(rd) = src1 / src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(rd) = (sword_t)src1 % (sword_t)src2); //补码取余
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(rd) = src1 % src2);

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); //environment break - R(10) is $a0 
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, printf("此时的尾指针是：%d\n指令是: %08x\n",ring_buffer.rear,ring_buffer.val[ring_buffer.rear]);
                                                                INV(s->pc));  //前面都失败则非法指令，则先输出环形队列，再INV用来打印出错
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0
  
  enQuene(&ring_buffer, s->isa.inst.val);  //通过进队，记录每条执行的指令
  // printf("inst = %08x\n",s->isa.inst.val);  //打印每条指令
  // printf("此时的尾指针是：%d\n指令是: %08x\n",ring_buffer.rear,ring_buffer.val[ring_buffer.rear]);  //打印缓冲区队列

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);  //取值，修改snpc，使返回的snpc为下一条指令pc
  return decode_exec(s);
}