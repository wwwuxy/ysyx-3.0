module ram(data,addr);
	input [7:0] data;
	output  reg [7:0] addr;
	reg [7:0] ram [255:0];
	initial begin
		$readmemh ("/home/wuxy/ysyx-workbench/npc/test_verilator/test7/scan-code.txt",ram,0,255);
	end

	always begin
		addr = ram[data];    //addr就是对应的ASCII码
	end
endmodule
