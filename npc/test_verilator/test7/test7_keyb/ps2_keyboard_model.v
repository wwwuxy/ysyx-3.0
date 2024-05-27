`timescale 1ns / 1ps   //时间单位/时间精度
module ps2_keyboard_model(   //输出键盘的接口信号
    output reg ps2_clk,
    output reg ps2_data
    );
parameter [31:0] kbd_clk_period = 60; //设置时钟周期为60ns
initial ps2_clk = 1'b1;   //初始化，和always同时进行

task kbd_sendcode;     //任务名，控制键盘发送键盘码 通码 断码
    input [7:0] code; // key to be sent   只需要8位
    integer i;

    reg[10:0] send_buffer;  //发送缓冲器，一帧有11位
    begin
        send_buffer[0]   = 1'b0;  // start bit
        send_buffer[8:1] = code;  // code
        send_buffer[9]   = ~(^code); // odd parity bit
        send_buffer[10]  = 1'b1;  // stop bit
        i = 0;
        while( i < 11) begin
            // set kbd_data
            ps2_data = send_buffer[i];  //按位发送数据
            #(kbd_clk_period/2) ps2_clk = 1'b0;   // #表示延迟30个ns
            #(kbd_clk_period/2) ps2_clk = 1'b1;   //一个周期60ns，有30个01交替组成
            i = i + 1;
        end
    end
endtask

endmodule
