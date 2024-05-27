/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off WIDTHCONCAT */

module top(A,B,en,carry,zero,overflow,less,B_no,ret);
  input [3:0] A;
  input [3:0] B;
  input [2:0] en;
  output reg carry;
  output reg zero;
  output reg overflow;
  output reg [3:0] ret;
  output reg less;
  inout reg [3:0] B_no;
	  always@(A or B or en) begin
	  case(en)
		  3'b000:begin                        //A+B
			  ret = A + B;
			  overflow = (A[3] == B[3])&(ret[3] != A[3]);
			  {carry,ret} = A + B;
			  zero = ~(| ret);
		  end
		  3'b001:begin                        //A-B
                          B_no = ~B;
                          {carry,ret} = A + B_no + 1;
                          overflow = (A[3] == B_no[3]) &&(ret[3] != A[3]);
                          zero = ~(| ret);
                  end
                  3'b010:ret = ~A;
                  3'b011:ret = A & B;
                  3'b100:ret = A | B;
                  3'b101:ret = (A & ~B) | (~A & B);      //A^B
		  3'b110:begin                          //if A<B less = 1;else less = 0
                          B_no = ~B;
                          {carry,ret} = A + B_no + 1;
                          overflow = (A[3] == B_no[3]) &&(ret[3] != A[3]);
                          less = (ret[3] & ~overflow) || (~ret[3] & overflow);
                  end
                  3'b111:begin    			//if A==B,zero == 1;else zero == 0
			  if(A == B) zero = 1;
			  else zero = 0;
                  end
	  endcase
  end
endmodule
