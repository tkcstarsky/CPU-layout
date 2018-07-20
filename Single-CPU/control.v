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
	 input [5:0] op,         // op操作符
    input zero,             // ALU的zero输出
    input [5:0] funct,
	 output reg PCSrc,           // PC多路选择器
    output reg ALUSrcB,         // ALU多路选择器
    output reg MemtoReg,        // 多路选择器
    output reg RegWrite,          // (RF)写使能信号，为1时，在时钟上升沿写入
    output reg MemWrite,       // (DM)数据存储器读写控制信号，为1写，为0读
    output reg ExtSel,          // (EXT)控制补位，如果为1，进行符号扩展，如果为0，全补0
    output reg RegDst,          // 多路选择器
    output reg [3:0] ALUControl,
	 output reg jump,
	 output reg MemWea
);
	initial 
     begin
        PCSrc = 0;
		  RegDst = 1;
		  ALUSrcB = 0;
		  ALUControl = 4'b1111;
        ExtSel = 0;
        RegWrite = 0;
        MemWrite = 0;
        MemtoReg = 0;
		  MemWea = 1;
		  jump = 0;
    end
	
always@(op or zero)
begin
	case(op)
		6'b000000://R-type
		begin
		PCSrc = 0;
		RegDst = 1;
		ALUSrcB = 0;
      ExtSel = 0;
      RegWrite = 1;
      MemWrite = 0;
      MemtoReg = 0;
		jump = 0;
		case(funct)
		6'b100000: ALUControl = 4'b0010;//add
		6'b100010: ALUControl = 4'b0110;//sub
		6'b100100: ALUControl = 4'b0000;
		6'b100101: ALUControl = 4'b0001;
		6'b101010: ALUControl = 4'b0111;
		endcase
		end
		
		6'b100011://lw
		begin
		PCSrc = 0;
		RegDst = 0;
		ALUSrcB = 1;
      ExtSel = 1;
      RegWrite = 1;
      MemWrite = 0;
      MemtoReg = 1;
		ALUControl = 4'b0010;
		jump = 0;
		end
		
		6'b101011://sw
		begin
		PCSrc = 0;
		RegDst = 0;
		ALUSrcB = 1;
      ExtSel = 1;
      RegWrite = 0;
      MemWrite = 1;
      MemtoReg = 0;
		ALUControl = 4'b0010;
		jump = 0;
		end
		
		6'b001000://addi
		begin
		PCSrc = 0;
		RegDst = 0;
		ALUSrcB = 1;
      ExtSel = 1;
      RegWrite = 1;
      MemWrite = 0;
      MemtoReg = 0;
		ALUControl = 4'b0010;
		jump = 0;
		end
		
		6'b000111://bgtz beq
		begin
		if (zero) 
		begin
      PCSrc = 0;
      end 
		else begin
      PCSrc = 1;
		end
		RegDst = 0;
		ALUSrcB = 0;
      ExtSel = 1;
      RegWrite = 0;
      MemWrite = 0;
      MemtoReg = 0;
		ALUControl = 4'b0110;
		jump = 0;
		end
		
		6'b000010://j
		begin
		jump = 1;
		PCSrc = 0;
		RegDst = 0;
		ALUSrcB = 1;
      ExtSel = 1;
      RegWrite = 0;
      MemWrite = 0;
      MemtoReg = 0;
		ALUControl = 4'b1111;
		end
		
	endcase
end

endmodule


