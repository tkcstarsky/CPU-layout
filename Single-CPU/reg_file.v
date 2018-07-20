`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:23:18 04/11/2018 
// Design Name: 
// Module Name:    reg_file 
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
module REG_FILE(
	input clk,
	input [4:0] read_addr1,
	input [4:0] read_addr2,
	output [31:0] RD1, 
	output [31:0] RD2,
	input [4:0] write_addr,
	input [31:0] WD,
	input wEna
);
	
	reg [31:0] register [31:0];
	integer i;

	initial 
   begin
		for(i = 0; i < 32; i = i + 1)  register[i] <= 0;
   end
	
	assign RD1 = register[read_addr1];
	assign RD2 = register[read_addr2];

	always @(posedge clk)
	begin
		if (wEna)
		begin
			register[write_addr] <= WD;
		end
	end
endmodule
