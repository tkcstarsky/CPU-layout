`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:30:33 04/30/2018 
// Design Name: 
// Module Name:    MulticycleCPU 
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
module MulticycleCPU(
	input clk,
	input reset,
	output out//没有任何输出时报错故添加一个输出
	);
	
	wire [1:0] ALUop,ALUSrcB,PCSrc;
	wire [3:0] ALUControl;
   wire [4:0] regw_addr;
	wire [31:0] A,B,newAddress,RD1,RD2,WD,Mem_out,currentAddress,ALU_out,memaddr,Ins_out,ScrA,ScrB,ALUOut,Data_out;
   wire [31:0] extendImmediate,currentAddress_immediate,Address,JumpAddress;   
	
   wire Zero,PCen,Branch,PCWrite,IRWrite,ALUSrcA,RegWrite,MemtoReg,MemWrite,ExtSel,RegDst;

	assign out=Ins_out;
	assign PCen=(~Zero&Branch)|PCWrite;
   assign currentAddress_immediate = extendImmediate;
	assign JumpAddress[27:0] = Ins_out[25:0];
	assign JumpAddress[31:28] = currentAddress[31:28];
	
	PC pc(clk,reset,PCen,newAddress,currentAddress);
	Memory InsMemory(clk,currentAddress[7:0],Mem_out);
	InstrReg Ins_reg(IRWrite,Mem_out,Ins_out);
   Control control(clk,reset,Ins_out[31:26],PCSrc,ALUSrcA,ALUSrcB,MemtoReg,IRWrite,RegWrite,MemWrite,ExtSel,RegDst,Branch,PCWrite,ALUop);
	ALUcontrol ALU_con(ALUop,Ins_out[5:0],ALUControl);
	SignExtend signex(ExtSel,Ins_out[15:0],extendImmediate);
	REG_FILE registerfile(clk,Ins_out[25:21],Ins_out[20:16],RD1,RD2,regw_addr,WD,RegWrite);
	Reg_clk RegA(clk,RD1,A),
			  RegB(clk,RD2,B),
			  RegALU(clk,ALU_out,ALUOut);
	ALU alu(ScrA,ScrB,ALUControl,ALU_out,Zero);
	RAMemory DataMemory(clk,MemWrite,ALUOut[7:0],B,Data_out);
	
	Mux4to1 MuxsrcB(ALUSrcB,B,32'd1,extendImmediate,currentAddress_immediate,ScrB);
	Mux3to1 MuxPC(PCSrc,ALU_out,ALUOut,JumpAddress,newAddress);
	Mux MuxsrcA(ALUSrcA,A,currentAddress,ScrA),
		 Muxmemtoreg(MemtoReg,Data_out,ALUOut,WD);
	Mux #(4)Muxregw(RegDst,Ins_out[15:11],Ins_out[20:16],regw_addr);
	
endmodule

