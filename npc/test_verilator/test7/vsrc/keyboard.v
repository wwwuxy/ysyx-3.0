module keyboard(clk,clrn,ps2_clk,ps2_data,seg0,seg1,seg2,seg3,seg4,seg5,flag,flag1,ready);
	input clk,clrn,ps2_clk,ps2_data;
	output [6:0] seg0;
	output [6:0] seg1;
	output [6:0] seg2;
	output [6:0] seg3;
	output [6:0] seg4;
	output [6:0] seg5;
	output reg flag;     //有按键按下时
	output reg flag1;
	output ready;
	
	reg nextdata_n;
	wire overflow;
	reg [7:0] data,p_data;
	wire [7:0] addr;
	reg [7:0] count;
	reg [7:0] count_clk;
	reg b_clk;

	initial begin      //initial
		flag = 0;
		flag1 =0;
		nextdata_n = 0;
		count = 8'b00000000;
		count_clk = 8'b00000000;
		b_clk = 0;
	end

	always @ (posedge clk) begin       //creat b_clk 防止读取数据和接受数据时出现时序错误 
		if(count_clk == 50) begin
			count_clk <= 0;
			b_clk <= ~b_clk;
		end
		else begin
			count_clk <= count_clk + 1;
		end

	end


ps2_keyboard pk(
	.clk(clk),
	.clrn(clrn),
	.ps2_clk(ps2_clk),
	.ps2_data(ps2_data),
	.data(data),
	.ready(ready),
	.nextdata_n(nextdata_n),
	.overflow(overflow)
);

light l1(.data(p_data[3:0]),.h(seg0),.flag(flag));  //低两位打印扫描码
light l2(.data(p_data[7:4]),.h(seg1),.flag(flag));

ram ram1(.data(p_data),.addr(addr));   //转换成地址,准备打印ASCII，若用data会出问题

light l3(.data(addr[3:0]),.h(seg2),.flag(flag));  //中间两位打印ASCII
light l4(.data(addr[7:4]),.h(seg3),.flag(flag));

light l5(.data(count[3:0]),.h(seg4),.flag(1));  //高两位打印count
light l6(.data(count[7:4]),.h(seg5),.flag(1));


	always @ (posedge b_clk) begin
	if(ready) begin
		if(data != 8'hF0 && flag1) begin   //在按键时
			p_data <= data;
			flag <= 1;
			flag1 <= 1;
		end
		else if(data == 8'hF0) begin  //遇到断码时
			p_data <= data;
			count <= count + 1;  //说明一个按键结束
			flag <= 0;
			flag1 <= 0;
		end
		else if(!flag1)begin  //吃掉断码后的扫描码
			p_data <= data;
			flag <= 0;
			flag1 <= 1;
		end
		nextdata_n <= 0;       //读取完毕，置0一个周期
	end
	else begin
	       nextdata_n <= 1;	
	end
	end
endmodule
