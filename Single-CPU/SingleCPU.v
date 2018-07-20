`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:21:57 04/25/2018 
// Design Name: 
// Module Name:    SingleCPU 
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
module SingleCPU(
	input clk,
	output [5:0] op,
	output [4:0] rs,
	output [4:0] rt,
	output [4:0] rd,
	output [15:0] immediate,
	output [31:0] RD1,
	output [31:0] RD2,
	output [31:0] WD,
	output [31:0] Mem_out,
	output [31:0] currentAddress,
	output [31:0] ALU_out,
	output [7:0] memaddr,
	output [4:0] write_addr,
	output signal
	);
	
	wire [3:0] ALUControl; 
   wire [5:0] funct;
	wire [25:0] target;
	wire [31:0] B, newAddress;
   wire [31:0] currentAddress_4, extendImmediate, currentAddress_immediate,Address,JumpAddress;   
     
	//assign signal = ALUSrcB;
	
   wire zero, PCSrc,ALUSrcB,RegWrite,MemtoReg,MemWrite, ExtSel,RegDst,jump,MemWea;

	assign currentAddress_4 = currentAddress + 4;
   assign currentAddress_immediate = currentAddress_4 + (extendImmediate << 2);
	assign JumpAddress[27:0] = (target << 2);
	assign JumpAddress[31:28] = currentAddress_4[31:28];
	
	PC pc(clk, newAddress, currentAddress);
   Control cont(op,zero,funct,PCSrc,ALUSrcB,MemtoReg,RegWrite,MemWrite,ExtSel,RegDst,ALUControl,jump,MemWea);
	InstructionMemory Ins_Mem(currentAddress,op,rs,rt,rd,shamt,funct,immediate,target);
	REG_FILE registerfile(clk,rs,rt,RD1,RD2,write_addr,WD,RegWrite);
	Mux5 Muxregw(RegDst,rd,rt,write_addr);
	Mux32 MuxsrcB(ALUSrcB,extendImmediate,RD2,B);
	ALU alu(RD1,B,ALUControl,ALU_out,zero);
	SignReduce signre(ALU_out,memaddr);
	//RAM Data_Mem(clk,MemWrite,MemWea,memaddr,RD2,clk,memaddr,Mem_out);
	//Datamomory Data_Mem(memaddr,RD2,memaddr,MemWrite,clk,Mem_out,a);
	DataMemory datamemory(clk,MemWrite,memaddr,RD2,Mem_out);
	Mux32 Muxmemtoreg(MemtoReg,Mem_out,ALU_out,WD);
	SignExtend signex(ExtSel,immediate,extendImmediate);
	Mux32 MuxcurAddr(PCSrc,currentAddress_immediate,currentAddress_4,Address);
	Mux32 MuxnewAddr(jump,JumpAddress,Address,newAddress);
	
endmodule
