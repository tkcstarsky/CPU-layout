`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:47:03 04/18/2018
// Design Name:   RAM
// Module Name:   C:/Users/tkc/Desktop/FSM/testram.v
// Project Name:  FSM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testram;

	// Inputs
	reg clka;
	reg ena;
	reg [0:0] wea;
	reg [7:0] addra;
	reg [31:0] dina;
	reg clkb;
	reg [7:0] addrb;

	// Outputs
	wire [31:0] doutb;

	// Instantiate the Unit Under Test (UUT)
	RAM uut (
		.clka(clka), 
		.ena(ena), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.clkb(clkb), 
		.addrb(addrb), 
		.doutb(doutb)
	);

	initial begin
		// Initialize Inputs
		clka = 0;
		ena = 0;
		wea = 0;
		addra = 0;
		dina = 0;
		clkb = 0;
		addrb = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

