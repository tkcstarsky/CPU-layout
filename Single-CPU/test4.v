`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:28:11 04/26/2018
// Design Name:   SingleCPU
// Module Name:   C:/Users/tkc/Desktop/Single-CPU/test4.v
// Project Name:  Single-CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SingleCPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test4;

	// Inputs
	reg clk;

	// Outputs
	wire [5:0] op;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [15:0] immediate;
	wire [31:0] RD1;
	wire [31:0] RD2;
	wire [31:0] WD;
	wire [31:0] Mem_out;
	wire [31:0] currentAddress;
	wire [31:0] ALU_out;
	wire [7:0] memaddr;
	wire [4:0] write_addr;
	wire signal;

	// Instantiate the Unit Under Test (UUT)
	SingleCPU uut (
		.clk(clk), 
		.op(op), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.immediate(immediate), 
		.RD1(RD1), 
		.RD2(RD2), 
		.WD(WD), 
		.Mem_out(Mem_out), 
		.currentAddress(currentAddress), 
		.ALU_out(ALU_out), 
		.memaddr(memaddr), 
		.write_addr(write_addr), 
		.signal(signal)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always
	begin
	#10 clk=~clk;
	end    
endmodule

