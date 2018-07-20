`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:52:17 04/29/2018 
// Design Name: 
// Module Name:    ALUControl 
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
module ALUcontrol(
	input [1:0] ALUop,
	input [5:0] funct,
	output reg [3:0] ALUControl
    );
always@(*)
begin
	case(ALUop)
		2'b10:
		begin
		case(funct)
		6'b100000: ALUControl = 4'b0010;//add
		6'b100010: ALUControl = 4'b0110;//sub
		6'b100100: ALUControl = 4'b0000;
		6'b100101: ALUControl = 4'b0001;
		6'b101010: ALUControl = 4'b0111;
		default: ALUControl = 4'b1111;
		endcase
		end
		
		2'b00: ALUControl = 4'b0010;
		2'b01: ALUControl = 4'b0110;
		default: ALUControl = 4'b1111;
	endcase
end
endmodule
