module top(
    input ret,
    input clk,
    output reg [7:0] a,
    output reg [6:0] h,
    inout [3:0] b1,
    inout [3:0] b2,
    output reg [6:0] j
);
reg [7:0] ina;
reg in;
always @(posedge clk) begin
    if(ret == 1'b1) ina = a;
    else begin
    if(ina == 8'b00000000) ina = 8'b00000001;    //special
    in = ina[4] ^ ina[3] ^ ina[2] ^ ina[0];	//shift
    ina = {in,ina[7:1]};                       //ina[0] out,in -> ina[7]

    {b2,b1} = ina;  

    case(ina[3:0])
           	    4'b0000:h =7'b0000001;
		    4'b0001:h =7'b1001111;
		    4'b0010:h =7'b0010010;
		    4'b0011:h =7'b0000110;
		    4'b0100:h =7'b1001100;
		    4'b0101:h =7'b0100100;
		    4'b0110:h =7'b0100000;
		    4'b0111:h =7'b0001111;
		    4'b1000:h =7'b0000000;
		    4'b1001:h =7'b0000100;
            	    4'b1010:h =7'b0001000;
            	    4'b1011:h =7'b1100000;
            	    4'b1100:h =7'b0110001;
            	    4'b1101:h =7'b1000010;
            	    4'b1110:h =7'b0110000;
            	    4'b1111:h =7'b0111000;
		    default:h =7'b1001111;
endcase
    case(ina[7:4])
                    4'b0000:j =7'b0000001;
		    4'b0001:j =7'b1001111;
		    4'b0010:j =7'b0010010;
		    4'b0011:j =7'b0000110;
		    4'b0100:j =7'b1001100;
		    4'b0101:j =7'b0100100;
		    4'b0110:j =7'b0100000;
		    4'b0111:j =7'b0001111;
		    4'b1000:j =7'b0000000;
		    4'b1001:j =7'b0000100;
                    4'b1010:j =7'b0001000;
                    4'b1011:j =7'b1100000;
                    4'b1100:j =7'b0110001;
                    4'b1101:j =7'b1000010;
                    4'b1110:j =7'b0110000;
                    4'b1111:j =7'b0111000;
		    default:j =7'b0000000;
	    endcase
end
end
endmodule
