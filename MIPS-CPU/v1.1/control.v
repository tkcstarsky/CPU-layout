`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:45:56 04/11/2018 
// Design Name: 
// Module Name:    control 
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
module Control(
	 input clk,
	 input [31:0] instruction,       
    output reg ExtSel,
	 output [12:0] Ctrsignal
);
reg ALUSrc,RegDst,RegWrite,MemWrite,MemtoReg,RegWritem,MemRead,MemWriteRegDst,Branch,jump;
reg [1:0] AluzeroCtr;
reg [2:0] ALUop;
wire [1:0] WB;
wire [3:0] MEM;
wire [4:0] rs,rt;
wire [6:0] EX;
wire [5:0] op,funct;
assign op = instruction[31:26];
assign funct = instruction[5:0];
assign WB[1:1] = RegWrite;
assign WB[0:0] = MemtoReg;
assign MEM[3:3] = jump;
assign MEM[2:2] = Branch;
assign MEM[1:1] = MemRead;
assign MEM[0:0] = MemWrite;
assign EX[6:5] = AluzeroCtr;
assign EX[4:4] = RegDst;
assign EX[3:1] = ALUop;
assign EX[0:0] = ALUSrc;
assign Ctrsignal[12:6] = EX;
assign Ctrsignal[5:2] = MEM;
assign Ctrsignal[1:0] = WB;

parameter [5:0] 
	R_type = 6'd0,
	j = 6'd2,
	addi = 6'd8,
	addiu =6'd9,
	andi = 6'd12,
	   
   sw = 6'd43,  
   lw = 6'd35,
	bgtz = 6'd7,
					 //bgez = 6'b000001,
	beq = 6'd4,
	bne = 6'd5,

                halt = 6'b111111; 



always@(*)
begin
		  RegDst = 0;
		  ALUSrc = 0;
        ExtSel = 0;
        RegWrite = 0;
		  MemRead = 0;
        MemWrite = 0;
        MemtoReg = 0;
		  AluzeroCtr = 2'b00;
		  jump = 0;
		  Branch = 0;
		  ALUop = 3'b111;
		  
	case(op)
		R_type:
		begin
		RegDst = 1;
      RegWrite = 1;
		ALUop = 3'b010;
		end
		
		lw:
		begin
		ALUSrc = 1;
      ExtSel = 1;
		MemRead = 1;
      RegWrite = 1;
      MemtoReg = 1;
		ALUop = 3'b000;
		end
		
		sw:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      MemWrite = 1;
		ALUop = 3'b000;
		end
		
		addi:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      RegWrite = 1;
		ALUop = 3'b000;
		end
		
		addiu:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      RegWrite = 1;
		ALUop = 3'b000;
		end
		
		andi:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      RegWrite = 1;
		ALUop = 3'b011;
		end
		
		bgtz:
		begin
      ExtSel = 1;
		ALUop = 3'b001;
		Branch = 1;
		AluzeroCtr = 2'b01;
		end
		
		beq:
		begin
      ExtSel = 1;
		ALUop = 3'b001;
		Branch = 1;
		end
		
		bne:
		begin
      ExtSel = 1;
		ALUop = 3'b001;
		Branch = 1;
		AluzeroCtr = 2'b01;
		end
		
		
		
		j:
		begin
		jump = 1;
		end
		
	endcase
end

endmodule


