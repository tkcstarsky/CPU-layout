`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:17:44 04/18/2018
// Design Name:   top
// Module Name:   C:/Users/tkc/Desktop/FSM/testtop2.v
// Project Name:  FSM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testtop2;

	// Inputs
	reg clk;
	reg rst_n;

	// Outputs
	wire [31:0] out1;
	wire [31:0] out2;
	wire [31:0] a1;
	wire [31:0] b1;
	wire [4:0] op;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.out1(out1), 
		.out2(out2), 
		.a1(a1), 
		.b1(b1), 
		.op(op)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;

		// Wait 100 ns for global reset to finish
		#100;
      rst_n= 1'b1;
		// Add stimulus here

	end
   always
	begin
		#10 clk=~clk; 
		
	end 
endmodule

