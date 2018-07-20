`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:51 04/11/2018 
// Design Name: 
// Module Name:    alu 
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
module ALU(
 input signed [31:0] alu_a,
 input signed [31:0] alu_b,
 input [3:0] alu_op,
 input [1:0] AluzeroCtr,
 output reg [31:0] alu_out,
 output reg zero
);
parameter A_ADD = 4'b0010;
parameter A_SUB = 4'b0110;
parameter A_FSUB = 4'b1110;
parameter A_AND = 4'b0000;
parameter A_OR = 4'b0001;
parameter A_XOR = 4'b0111;
parameter A_NOR = 4'b1100;

always @(*)
begin
    case (alu_op)
	  A_ADD : alu_out = alu_a + alu_b;
     A_SUB : alu_out = alu_a - alu_b;
	  A_FSUB : alu_out = alu_b - alu_a;
     A_AND : alu_out = alu_a & alu_b;
     A_OR : alu_out = alu_a | alu_b;
     A_XOR : alu_out = alu_a ^ alu_b;
     A_NOR: alu_out = ~(alu_a | alu_b);
     default: alu_out = 32'h0;
    endcase
end

always@(*)
begin
	case(AluzeroCtr)
	2'b00://equal to label
	begin
	if(alu_out == 0) zero = 1;
	else zero = 0;
	end
	
	2'b01://inequal to label
	begin
	if(alu_out != 0) zero = 1;
	else zero = 0;
	end
	
	2'b10://greater to label
	begin
	if(alu_out > 0) zero = 1;
	else zero = 0;
	end
	
	2'b11://greater or equal to label
	begin
	if(alu_out >= 0) zero = 1;
	else zero = 0;
	end
	endcase
end

endmodule
