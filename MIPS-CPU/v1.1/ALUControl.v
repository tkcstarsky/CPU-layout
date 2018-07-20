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
	input [2:0] ALUop,
	input [5:0] funct,
	output reg [3:0] ALUControl
    );
always@(*)
begin
	case(ALUop)
		3'b010:
		begin
		case(funct)
		6'b100000: ALUControl = 4'b0010;//add
		6'b100001: ALUControl = 4'b0010;//addu
		6'b100010: ALUControl = 4'b0110;//sub
		6'b100011: ALUControl = 4'b0110;//subu
		6'b100100: ALUControl = 4'b0000;//and
		6'b100101: ALUControl = 4'b0001;//or
		6'b100111: ALUControl = 4'b1100;//nor
		6'b100011: ALUControl = 4'b0111;//xor
		6'b001000: ALUControl = 4'b0010;//jr
		
		default: ALUControl = 4'b1111;
		endcase
		end
		
		3'b000: ALUControl = 4'b0010;//add
		3'b001: ALUControl = 4'b0110;//sub
		3'b011: ALUControl = 4'b0000;//and
		3'b100: ALUControl = 4'b0001;//or
		default:;
	endcase
end
endmodule
