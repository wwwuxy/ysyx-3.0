module encode42(x,en,y);
  input  [3:0] x;
  input  en;
  output reg [1:0]y;
  integer i;
  always @(x or en) begin
    if (en) begin
      y = 0;
      for( i = 0; i <= 3; i = i+1) //高位x优先，因为低位会被高位覆盖
          if(x[i] == 1)  y = i[1:0]; //i[1:0]将i转换成两位表示，再赋值给y
    end
    else  y = 0;
  end
endmodule
