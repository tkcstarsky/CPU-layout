`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:07:12 04/26/2018 
// Design Name: 
// Module Name:    DataMemory 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DataMemory(
    input clk,
	 input DataMemRW,            // 数据存储器读写控制信号，为1写，为0读
    input [7:0] DAddr,         // 数据存储器地址输入端口
    input [31:0] DataIn,        // 数据存储器数据输入端口
    output [31:0] DataOut   // 数据存储器数据输出端口
    );

    reg [31:0] memory[0:255];

    // 初始赋值
    integer i;
    initial
     begin
        for (i = 0; i <= 255; i = i + 1)  memory[i] <= 0;
     end
	
	 assign DataOut = memory[DAddr];
	 
    always@(posedge clk)
     begin
	  if (DataMemRW)
         begin
            memory[DAddr] <= DataIn;
         end
     end

endmodule