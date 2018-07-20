`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:06:23 05/02/2018
// Design Name:   MulticycleCPU
// Module Name:   C:/Users/tkc/Desktop/MulticycleCPU/MulticycleCPU/Test.v
// Project Name:  MulticycleCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MulticycleCPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	MulticycleCPU uut (
		.clk(clk), 
		.reset(reset), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#90;
      reset = 1; 
		// Add stimulus here

	end
   always
	begin
	#10 clk=~clk;
	end   
endmodule

