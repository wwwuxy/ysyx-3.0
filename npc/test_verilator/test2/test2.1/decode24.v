/* verilator lint_off WIDTHEXPAND */

module decode24(x,en,y);
  input  [1:0] x;
  input  en;
  output reg [3:0]y;
  integer i;

  always @(x or en)
    if (en) begin
      for( i = 0; i <= 3; i = i+1)
          if(x == i)
                y[i] = 1;
          else
                y[i] = 0;
    end
    else
      y = 4'b0000;

endmodule
