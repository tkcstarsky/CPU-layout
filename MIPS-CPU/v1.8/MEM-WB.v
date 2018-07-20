`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:08:17 05/17/2018 
// Design Name: 
// Module Name:    MEM-WB 
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
module MEM_WB(
	 input clk,
	 input reset,
	 input connect_zero,
	 output connect_zero_WB,
	 input [31:0] nextpc,
	 output [31:0] nextpc_WB,
	 input [2:0] WB_in,
	 input [31:0] ALUresult_in,
	 output [31:0] ALUresult_out,
	 input [31:0] Data_out,
	 output [31:0] Data_out_WB,
	 input [4:0] Insaddr_in,
	 output [4:0] Insaddr_out,
	 output RegWrite,
	 output [1:0] MemtoReg
	 );
wire [2:0] WB_out;
assign RegWrite = WB_out[2];
assign MemtoReg = WB_out[1:0];
Reg #(0)connectreg(clk,reset,connect_zero,connect_zero_WB);
Reg pcreg(clk,reset,nextpc,nextpc_WB);
Reg #(2)WBreg(clk,reset,WB_in,WB_out);
Reg RAMreg(clk,reset,Data_out,Data_out_WB);
Reg ALUreg(clk,reset,ALUresult_in,ALUresult_out);
Reg #(4)Insaddrreg(clk,reset,Insaddr_in,Insaddr_out);
endmodule
