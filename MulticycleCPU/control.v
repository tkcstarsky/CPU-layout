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
	 input reset,
	 input [5:0] op,         // op操作符
	 output reg [1:0] PCSrc,           // PC多路选择器
    output reg ALUSrcA,
	 output reg [1:0] ALUSrcB,         // ALU多路选择器
    output reg MemtoReg,        // 多路选择器
	 output reg IRWrite,
    output reg RegWrite,          // (RF)写使能信号，为1时，在时钟上升沿写入
    output reg MemWrite,       // (DM)数据存储器读写控制信号，为1写，为0读
    output reg ExtSel,          // (EXT)控制补位，如果为1，进行符号扩展，如果为0，全补0
    output reg RegDst,          // 多路选择器
	 output reg Branch,
	 output reg PCWrite,
	 output reg [1:0] ALUop
);
reg [2:0] current_state,next_state;
parameter [5:0] addi = 6'b001000,   
                R_type = 6'b000000,   
                sw = 6'b101011,  
                lw = 6'b100011,
					 bqtz = 6'b000111,
                j = 6'b000010,   
                halt = 6'b111111; 

parameter [2:0] IDLE = 3'b111,
					 IF = 3'b000,   
                ID = 3'b001,  
                EX = 3'b010,  
                MEM = 3'b011,  
                WB = 3'b100;

always @(posedge clk or negedge reset) 
begin
	if (~reset) 
	begin
		current_state <= IDLE;
   end 
	else begin
      current_state <= next_state;
   end
end

always@(*)
	begin
		case(current_state)
			IDLE: next_state <= IF;
			IF: next_state <= ID;
			ID: next_state <= EX;
		   EX: 
			begin
			if (op == bqtz||op == j)
			next_state <= IF;
			else
			next_state <= MEM;
			end
			MEM: 
			begin
			if(op == lw)
			next_state<=WB;
			else
			next_state <= IF;
			end
			WB: next_state <= IF;
			default:;
		endcase
	end

always@(posedge clk or negedge reset)
begin
		  Branch <= 0;
		  PCWrite <= 0;
		  IRWrite <= 0;
		  RegDst <= 0;
		  ALUSrcA <= 0;
		  ALUSrcB <= 2'b01;
        ExtSel <= 0;
        RegWrite <= 0;
        MemWrite <= 0;
        MemtoReg <= 0;
		  ALUop <= 2'b00;
		  PCSrc <= 2'b00;
	if (~reset) ;
	else
	begin
	case (next_state)

		IF:
		begin
		PCWrite <= 1;
		end
		
		ID:
		begin
		ALUSrcB <= 2'b11;
		IRWrite <= 1;
		ExtSel <= 1;
		end
		
		EX:
		begin
		case(op)
			lw:
			begin
			ALUSrcA <= 1;
			ALUSrcB <= 2'b10;
			ExtSel <= 1;
			end
			
			sw:
			begin
			ALUSrcA <= 1;
			ALUSrcB <= 2'b10;
			ExtSel <= 1;
			end
			
			R_type:
			begin
			ALUSrcA <= 1;
			ALUSrcB <= 2'b00;
			ALUop <= 2'b10;
			end
			
			bqtz:
			begin
			ALUSrcA <= 1;
			ALUSrcB <= 2'b00;
			ALUop <= 2'b01;
		   PCSrc <= 2'b01;
			Branch <= 1;
			ExtSel <= 1;
			end
			
			addi:
			begin
			ALUSrcA <= 1;
			ALUSrcB <= 2'b10;
			ExtSel <= 1;
			end
			
			j:
			begin
			PCSrc <= 2'b10;
			PCWrite <= 1;
			end
			default:;
			endcase
		end
		
		MEM:
		begin
			case(op)
			/*lw:
			begin
			lorD <= 1;
			end*/
			sw:
			begin
			MemWrite <= 1;
			end
			R_type:
			begin
			RegDst <= 1;
			RegWrite <= 1;
			end
			addi:
			begin
			RegWrite <= 1;
			end
			default:;
			endcase
		end
		 
		WB:
		begin
			MemtoReg <= 1;
			RegWrite <= 1;
		end
		default:;
	endcase
	end
end


endmodule


