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
module PipelineCPU(
	input clk,
	input reset,
	output [31:0] out//没有任何输出时报错故添加一个输出
	);
	
	wire [1:0] WB,WB_EXM,WB_MWB,ALUScrA,ALUScrB,AluzeroCtr;
	wire [2:0] ALUop;
	wire [3:0] ALUControl,MEM,MEM_EXM;
   wire [4:0] regw_addr,rs,rt,rd,regw_addr_EXM,regw_addr_MWB;
	wire [6:0] EX;
	wire [12:0] Ctrsignal,consignal;
	wire [25:0] tar_out;
	wire [31:0] A,B,B_in,newAddress,RD1,RD2,WD,Mem_out,currentAddress,ALU_out,memaddr,Ins_out,ScrA,ScrB,ALUOut,Data_in,Data_out,ALUresult,ALUback;
   wire [31:0] extendImmediate,extendImmediate_EXM,Address,JumpAddress,JumpAddress_M,nextAddress,nextAddress_IDEX,nextAddress_EXM,nextaddress_imm,nextaddress_imm_M,NEXTADDR,Instrution;   
	
   wire Zero,Zero_out,PCWrite,IRWrite,Branch,PCSrc,ALUSrc,RegWrite,MemtoReg,MemWrite,ExtSel,RegDst,p_reset,p_reset2,CtrStr;

	assign nextAddress=currentAddress + 1;
	
	assign out=Ins_out;
	
	assign PCSrc=(Zero_out&Branch)|jump;
	
	assign nextaddress_imm=nextAddress_EXM+extendImmediate_EXM;
	
	assign JumpAddress[27:0] = tar_out[25:0];
	assign JumpAddress[31:28] = nextAddress_EXM[31:28];
	
	assign p_reset=(PCSrc==1)? 0 : 1 ;
	assign p_reset2= 1;
	
	assign EX = consignal[12:6];
	assign MEM = consignal[5:2];
	assign WB = consignal[1:0];
	
	PC pc(clk,reset,PCWrite,newAddress,currentAddress);
	Mux Muxnextaddress(PCSrc,NEXTADDR,nextAddress,newAddress);
	Memory InsMemory(currentAddress[6:0],Ins_out);
	
	IF_ID IFIDreg(clk,p_reset,IRWrite,nextAddress,nextAddress_IDEX,Ins_out,Instrution);
   Control CPUctr(clk,Instrution,ExtSel,Ctrsignal);
	Mux #(12)BubbleMux(CtrStr,Ctrsignal,13'b0,consignal);
	REG_FILE registerfile(clk,Instrution[25:21],Instrution[20:16],RD1,RD2,regw_addr,WD,RegWrite);
	SignExtend signex(ExtSel,Instrution[15:0],extendImmediate);
	
	ID_EX IDEXreg(clk,p_reset,WB,WB_EXM,MEM,MEM_EXM,EX,nextAddress_IDEX,nextAddress_EXM,RD1,A,RD2,B,extendImmediate,extendImmediate_EXM,Instrution[25:21],rs,Instrution[20:16],rt,Instrution[15:11],rd,Instrution[25:0],tar_out,AluzeroCtr,RegDst,ALUop,ALUSrc);
	ALUcontrol ALUctr(ALUop,extendImmediate_EXM[5:0],ALUControl);
	ALU alu(ScrA,ScrB,ALUControl,AluzeroCtr,ALU_out,Zero);
	Mux MuxALUsrc(ALUSrc,extendImmediate_EXM,B_in,ScrB);
	Mux #(4)Muxregw(RegDst,rd,rt,regw_addr_EXM);
	Mux3to1 MuxALUsrcA(ALUScrA,A,ALUresult,WD,ScrA);
	Mux3to1 MuxALUsrcB(ALUScrB,B,ALUresult,WD,B_in);
	
	EX_MEM EXMreg(clk,p_reset2,WB_EXM,WB_MWB,MEM_EXM,nextaddress_imm,nextaddress_imm_M,Zero,Zero_out,ALU_out,ALUresult,B_in,Data_in,regw_addr_EXM,regw_addr_MWB,JumpAddress,JumpAddress_M,jump,Branch,MemRead,MemWrite);
	RAMemory Datamemory(ALUresult[7:0],Data_in,clk,MemWrite,MemRead,Data_out);
	Mux Muxaddress(jump,JumpAddress_M,nextaddress_imm_M,NEXTADDR);
	
	MEM_WB MWBreg(clk,p_reset2,WB_MWB,ALUresult,ALUback,regw_addr_MWB,regw_addr,RegWrite,MemtoReg);
	Mux Muxmemtoreg(MemtoReg,Data_out,ALUback,WD);
	
	Hazardunit hunit(reset,rt,Instrution[25:21],Instrution[20:16],MEM_EXM[1:1],PCWrite,IRWrite,CtrStr);
	Forwardunit forwardunt(rs,rt,regw_addr_MWB,regw_addr,WB_MWB[1:1],RegWrite,ALUScrA,ALUScrB);
endmodule

