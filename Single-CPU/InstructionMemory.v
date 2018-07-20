`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:03:04 04/25/2018 
// Design Name: 
// Module Name:    InstructionMemory 
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
module InstructionMemory(           
    input [31:0] InsAddr,        
    output [5:0] op,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
	 output [4:0] shamt,
	 output [5:0] funct,
    output [15:0] immediate,
	 output [25:0] target
    );

    reg[7:0] mem [255:0];  

    initial 
     begin
        $readmemb("test.txt", mem);  
     end

    assign op = mem[InsAddr][7:2];
    assign rs[4:3] = mem[InsAddr][1:0];
    assign rs[2:0] = mem[InsAddr + 1][7:5];
    assign rt = mem[InsAddr + 1][4:0];
    assign rd = mem[InsAddr + 2][7:3];
	 assign shamt[4:2] =mem[InsAddr + 2][2:0];
	 assign shamt[1:0] =mem[InsAddr + 3][7:6];
	 assign funct =mem[InsAddr + 3][5:0];
    assign immediate[15:8] = mem[InsAddr + 2];
    assign immediate[7:0] = mem[InsAddr + 3];
	 assign target[25:24] = mem[InsAddr][1:0];
	 assign target[23:16] = mem[InsAddr + 1];
	 assign target[15:8] = mem[InsAddr + 2];
	 assign target[7:0] = mem[InsAddr + 3];
	 
endmodule
