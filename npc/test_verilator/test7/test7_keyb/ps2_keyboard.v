module ps2_keyboard(clk,clrn,ps2_clk,ps2_data,data,ready,nextdata_n,overflow);
    input clk,clrn,ps2_clk,ps2_data;     //clrn是复位信号
    input nextdata_n;        //读取完毕后会置0一个周期，未0时可以进行读取
    output [7:0] data;       //数据域 
    output reg ready;        //当fifo有数据时，置1
    output reg overflow;     // fifo overflow 当fifo队满时，置1
    // internal signal, for test
    reg [9:0] buffer;        // ps2_data bits
    reg [7:0] fifo[7:0];     // data fifo 输入队列
    reg [2:0] w_ptr,r_ptr;   // fifo write and read pointers
    reg [3:0] count;  // count ps2_data bits   //从0开始记录数据的比特数
    // detect falling edge of ps2_clk，检测时钟信号历史
    reg [2:0] ps2_clk_sync;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};   //左移一位，右边补此时的clk，记录clk的历史
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1]; //当时钟下沿时，数据有效，故[2]为1,[1]为0,从1到0是下降沿，sampling置1

    always @(posedge clk) begin
        if (clrn == 0) begin // reset
            count <= 0; w_ptr <= 0; r_ptr <= 0; overflow <= 0; ready<= 0;
        end
        else begin
            if ( ready ) begin // read to output next data
                if(nextdata_n == 1'b0) //read next data
                begin
		    r_ptr <= r_ptr + 3'b1;     //阻塞赋值，在begin语句块运行结束后，才指针后移，3‘b1 = 3’b001,即前面的0可以省略
                    if(w_ptr==(r_ptr+1'b1)) //empty 全部读出
                        ready <= 1'b0;
                end
            end
            if (sampling) begin      //时钟下沿时开始读取数据
              if (count == 4'd10) begin  //一帧是11位，从0开始
                if ((buffer[0] == 0) &&  // start bit  
                    (ps2_data)       &&  // stop bit 当输入位是1时，表示此时为停止位（逻辑1），故buffer不需要存储此位    
                    (^buffer[9:1])) begin      // odd  parity  进行奇校验
                    fifo[w_ptr] <= buffer[8:1];  // kbd scan code  将数据位传入队列
                    w_ptr <= w_ptr+3'b1;   //指针后移，注意这是非阻塞赋值
                    ready <= 1'b1;     //置1表示fifo有数据
                    overflow <= overflow | (r_ptr == (w_ptr + 3'b1));  //写不下了，溢出
                end
                count <= 0;     // for next 置0准备下一帧
              end else begin     //当count不为10时
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end        //最外层else
    end           //always
    assign data = fifo[r_ptr]; //always set output data 输出位

endmodule
