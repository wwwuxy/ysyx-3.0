/* verilator lint_off LATCH */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTHEXPAND */

module encode83(a,x,en,y);
  input  [7:0] x;
  input  en;
  output reg [2:0]y;  //led_out
  output reg a;     //指示输出
  integer i;
  always @(x or en) begin
    if (en) begin
    begin
      y = 0;
      a = 0;
      end
      for( i = 0; i <= 7; i = i+1)begin    //寻找优先权最高位
	      if(x[i] == 1) begin
		      y = i[2:0];
		      a = 1;
	      end
          end
      end
     else begin
	  y = 0;
	  a = 0;
 	end
end
endmodule

module bcd7seg(b,h);
    input [3:0] b;
    output reg [6:0] h;
    always @ (b) begin
	    case(b)
		    4'd0:h =7'b0000001;
		    4'd1:h =7'b1001111;
		    4'd2:h =7'b0010010;
		    4'd3:h =7'b0000110;
		    4'd4:h =7'b1001100;
		    4'd5:h =7'b0100100;
		    4'd6:h =7'b0100000;
		    4'd7:h =7'b0001111;
		    4'd8:h =7'b0000000;
		    4'd9:h =7'b0000100;
		    default:h =7'b0000001;
	    endcase
    end
endmodule

module top(x,en,led_out,a,light);
    input [7:0]x;
    input en;
    output reg [2:0] led_out;
    output reg  [6:0] light;
    output reg  a;
   
    wire [2:0] w;
    assign led_out = w;
    

    encode83 encrd(
	    .x(x),
	    .en(en),
	    .y(w),
	    .a(a)
    );

    bcd7seg seg0(
	    .b({1'b0,w}),
	    .h(light)
    );

endmodule
