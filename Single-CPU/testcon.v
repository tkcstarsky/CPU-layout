`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:32:17 04/25/2018
// Design Name:   control
// Module Name:   C:/Users/tkc/Desktop/Single-CPU/testcon.v
// Project Name:  Single-CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testcon;

	// Inputs
	reg [5:0] op;
	reg zero;
	reg [5:0] funct;

	// Outputs
	wire PCSrc;
	wire PCWre;
	wire ALUSrcB;
	wire MemtoReg;
	wire RegWrite;
	wire MemWrite;
	wire ExtSel;
	wire RegDst;
	wire [3:0] ALUControl;
	wire jump;
	wire MemWea;

	// Instantiate the Unit Under Test (UUT)
	control uut (
		.op(op), 
		.zero(zero), 
		.funct(funct), 
		.PCSrc(PCSrc), 
		.PCWre(PCWre), 
		.ALUSrcB(ALUSrcB), 
		.MemtoReg(MemtoReg), 
		.RegWrite(RegWrite), 
		.MemWrite(MemWrite), 
		.ExtSel(ExtSel), 
		.RegDst(RegDst), 
		.ALUControl(ALUControl), 
		.jump(jump), 
		.MemWea(MemWea)
	);

	initial begin
		// Initialize Inputs
		op = 0;
		zero = 0;
		funct = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

