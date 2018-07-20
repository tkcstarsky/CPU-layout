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
	input [7:0] read_addr_out,
	output [31:0] read_out
	);
	
	wire [1:0] PCbackSrc,storetype,MemtoReg,ALUScrA,ALUScrB;
	wire [2:0] WB,WB_EXM,WB_MWB,ALUop,loadtype,AluzeroCtr;
	wire [3:0] ALUControl;
   wire [4:0] regw_addr,rs,rt,rd,regw_addr_EXM,regw_addr_MWB,regw_addr_WB,shamt;
	wire [7:0] EX,data_address;
	wire [11:0] MEM,MEM_EXM;
	wire [22:0] Ctrsignal,consignal;
	wire [25:0] tar_out;
	wire [31:0] A,B,B_in,newAddress,newAddress_4,RD1,RD2,WD,Mem_out,currentAddress,ALU_out,memaddr,Ins_out,ScrA,ScrB,ScrB_s,ALUOut,Data_in,Data_out,ALUresult,ALUback,final_data_out,Data_out_WB,final_data_in;
   wire [31:0] extendImmediate,extendImmediate_EXM,Address,JumpAddress,JumpAddress_M,nextAddress,nextAddress_IDEX,nextAddress_EXM,nextaddress_imm,nextaddress_imm_M,NEXTADDR,NEXTADDR_WB,Instrution;   
	
   wire Zero,Zero_out,RegWrite_ori,PCWrite,IRWrite,Branch,PCSrc,ALUSrc,RegWrite,MemWrite,ExtSel,RegDst,p_reset,p_reset2,CtrStr,ALUSrc_shamt,connect,connect_zero,connect_zero_WB;

	assign nextAddress=(currentAddress << 2) + 4;
	
	assign PCSrc=(Zero_out&Branch)|jump;
	
	assign nextaddress_imm=nextAddress_EXM+(extendImmediate_EXM << 2);
	assign newAddress=newAddress_4 >> 2;
	
	assign JumpAddress[27:0] = tar_out << 2;
	assign JumpAddress[31:28] = nextAddress_EXM[31:28];
	
	assign p_reset=(PCSrc==1)? 0 : 1 ;
	assign p_reset2= 1;
	
	assign EX = consignal[22:15];
	assign MEM = consignal[14:3];
	assign WB = consignal[2:0];
	
	assign data_address=ALUresult[7:0] >> 2;
	assign connect_zero=connect&Zero_out;
	
	PC pc(clk,reset,PCWrite,newAddress,currentAddress);
	Mux Muxnextaddress(PCSrc,NEXTADDR,nextAddress,newAddress_4);
	Memory InsMemory(currentAddress[6:0],Ins_out);
	
	IF_ID IFIDreg(clk,p_reset,IRWrite,nextAddress,nextAddress_IDEX,Ins_out,Instrution);
   Control CPUctr(clk,Instrution,ExtSel,Ctrsignal);
	Mux #(22)BubbleMux(CtrStr,Ctrsignal,23'b0,consignal);
	REG_FILE registerfile(clk,Instrution[25:21],Instrution[20:16],RD1,RD2,regw_addr,WD,RegWrite);
	SignExtend signex(ExtSel,Instrution[15:0],extendImmediate);
	
	ID_EX IDEXreg(clk,p_reset,WB,WB_EXM,MEM,MEM_EXM,EX,nextAddress_IDEX,nextAddress_EXM,RD1,A,RD2,B,extendImmediate,extendImmediate_EXM,Instrution[25:21],rs,Instrution[20:16],rt,Instrution[15:11],rd,Instrution[10:6],shamt,Instrution[25:0],tar_out,AluzeroCtr,RegDst,ALUop,ALUSrc);
	ALUcontrol ALUctr(ALUop,extendImmediate_EXM[5:0],ALUControl,ALUSrc_shamt);
	ALU alu(ScrA,ScrB,ALUControl,AluzeroCtr,ALU_out,Zero);
	Mux Muxshamt(ALUSrc_shamt,shamt,ScrB_s,ScrB);
	Mux MuxALUsrc(ALUSrc,extendImmediate_EXM,B_in,ScrB_s);
	Mux #(4)Muxregw(RegDst,rd,rt,regw_addr_EXM);
	Mux3to1 MuxALUsrcA(ALUScrA,A,ALUresult,WD,ScrA);
	Mux3to1 MuxALUsrcB(ALUScrB,B,ALUresult,WD,B_in);
	
	EX_MEM EXMreg(clk,p_reset2,WB_EXM,WB_MWB,MEM_EXM,nextaddress_imm,nextaddress_imm_M,Zero,Zero_out,ALU_out,ALUresult,B_in,Data_in,regw_addr_EXM,regw_addr_MWB,JumpAddress,JumpAddress_M,jump,Branch,MemRead,MemWrite,PCbackSrc,loadtype,storetype,connect);
	//RAMemory Datamemory(ALUresult[7:0],Data_in,clk,MemWrite,MemRead,Data_out);
	Mux3to1 Muxaddress(PCbackSrc,nextaddress_imm_M,JumpAddress_M,ALUresult,NEXTADDR);
	//Mux Muxaddress(jump,JumpAddress_M,nextaddress_imm_M,NEXTADDR);
	RAMemory Datamemory(data_address,final_data_in,read_addr_out,clk,MemWrite,MemRead,clk,Data_out,read_out,qspo,qdpo);
	Mux #(4)Muxregaddr(connect_zero,5'd31,regw_addr_MWB,regw_addr_WB);
	LoadCtr loadctr(Data_out,loadtype,data_address[1:0],final_data_out);
	StoreCtr storectr(Data_in,Data_out,storetype,data_address[1:0],final_data_in);
	
	MEM_WB MWBreg(clk,p_reset2,connect_zero,connect_zero_WB,NEXTADDR,NEXTADDR_WB,WB_MWB,ALUresult,ALUback,final_data_out,Data_out_WB,regw_addr_WB,regw_addr,RegWrite_ori,MemtoReg);
	//Mux Muxmemtoreg(MemtoReg,Data_out,ALUback,WD);
	Mux3to1 Muxmemtoreg(MemtoReg,ALUback,Data_out_WB,NEXTADDR_WB,WD);
	Mux #(0)Muxconnect(connect_zero_WB,1'b1,RegWrite_ori,RegWrite);
	
	Hazardunit hunit(reset,rt,Instrution[25:21],Instrution[20:16],MEM_EXM[1:1],PCWrite,IRWrite,CtrStr);
	Forwardunit forwardunt(rs,rt,regw_addr_MWB,regw_addr,WB_MWB[2],RegWrite,ALUScrA,ALUScrB);
endmodule

