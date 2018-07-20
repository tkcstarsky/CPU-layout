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
	 input [5:0] op,       
    output reg ExtSel,
	 output [9:0] Ctrsignal
);
reg ALUSrc,RegDst,RegWrite,MemWrite,MemtoReg,RegWritem,MemRead,MemWriteRegDst,Branch,jump;
reg [1:0] ALUop;
wire [1:0] WB;
wire [3:0] MEM,EX;


parameter [5:0] addi = 6'b001000,   
                R_type = 6'b000000,   
                sw = 6'b101011,  
                lw = 6'b100011,
					 bqtz = 6'b000111,
                j = 6'b000010,   
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
		  jump = 0;
		  Branch = 0;
		  ALUop = 2'b11;
		  
	case(op)
		R_type:
		begin
		RegDst = 1;
      RegWrite = 1;
		ALUop = 2'b10;
		end
		
		lw:
		begin
		ALUSrc = 1;
      ExtSel = 1;
		MemRead = 1;
      RegWrite = 1;
      MemtoReg = 1;
		ALUop = 2'b00;
		end
		
		sw:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      MemWrite = 1;
		ALUop = 2'b00;
		end
		
		addi:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      RegWrite = 1;
		ALUop = 2'b00;
		end
		
		bqtz:
		begin
      ExtSel = 1;
		ALUop = 2'b01;
		Branch = 1;
		end
		
		j:
		begin
		jump = 1;
		end
		
	endcase
end
assign WB[1:1] = RegWrite;
assign WB[0:0] = MemtoReg;
assign MEM[3:3] = jump;
assign MEM[2:2] = Branch;
assign MEM[1:1] = MemRead;
assign MEM[0:0] = MemWrite;
assign EX[3:3] = RegDst;
assign EX[2:1] = ALUop;
assign EX[0:0] = ALUSrc;
assign Ctrsignal[9:6] = EX;
assign Ctrsignal[5:2] = MEM;
assign Ctrsignal[1:0] = WB;
endmodule


