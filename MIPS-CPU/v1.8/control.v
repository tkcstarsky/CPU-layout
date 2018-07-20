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
	 output [22:0] Ctrsignal
);
reg ALUSrc,RegDst,RegWrite,MemWrite,RegWritem,MemRead,MemWriteRegDst,Branch,jump,connect;
reg [1:0] PCbackSrc,storetype,MemtoReg;
reg [2:0] loadtype,AluzeroCtr;
reg [2:0] ALUop;
wire [2:0] WB;
wire [11:0] MEM;
wire [4:0] rs,rt;
wire [7:0] EX;
wire [5:0] op,funct;

assign op = instruction[31:26];
assign funct = instruction[5:0];
assign rt = instruction[20:16];
assign WB[2] = RegWrite;
assign WB[1:0] = MemtoReg;
assign MEM[11] = connect;
assign MEM[10:9] = storetype;
assign MEM[8:6] = loadtype;
assign MEM[5:4] = PCbackSrc;
assign MEM[3] = jump;
assign MEM[2] = Branch;
assign MEM[1] = MemRead;
assign MEM[0] = MemWrite;
assign EX[7:5] = AluzeroCtr;
assign EX[4:4] = RegDst;
assign EX[3:1] = ALUop;
assign EX[0:0] = ALUSrc;
assign Ctrsignal[22:15] = EX;
assign Ctrsignal[14:3] = MEM;
assign Ctrsignal[2:0] = WB;

parameter [5:0] 
	R_type = 6'd0,
	j = 6'd2,
	addi = 6'd8,
	addiu =6'd9,
	andi = 6'd12,
	ori = 6'd13,
	xori = 6'd14,
	lui = 6'd15,
	slti = 6'd10,
	sltui = 6'd11,
	
	lb = 6'd32,
	lh = 6'd33,
	lwl = 6'd34,
	lw = 6'd35,
	lbu = 6'd36,
	lhu = 6'd37,
	lwr = 6'd38,
	
   sb = 6'd40,
	sh = 6'd41,
	swl = 6'd42,
	sw = 6'd43,  
   swr = 6'd46,
	
	
	bltz = 6'd1,
	beq = 6'd4,
	bne = 6'd5,
	blez = 6'd6,
	bgtz = 6'd7,

   halt = 6'b111111; 



always@(*)
begin
		  RegDst = 0;
		  ALUSrc = 0;
        ExtSel = 0;
        RegWrite = 0;
		  MemRead = 0;
        MemWrite = 0;
        MemtoReg = 2'b00;
		  AluzeroCtr = 3'b000;
		  jump = 0;
		  Branch = 0;
		  ALUop = 3'b111;
		  PCbackSrc = 2'b00;
		  loadtype = 3'b100;
		  storetype = 2'b10;
		  connect = 0;
		  
	case(op)
		R_type:
		begin
		RegDst = 1;
      RegWrite = 1;
		case(funct)
		6'd8:begin
		Branch = 1;
		AluzeroCtr = 3'b000;
		end
		default:ALUop = 3'b010;
		endcase
		end
		
		lb:
		begin
		ALUSrc = 1;
      ExtSel = 1;
		MemRead = 1;
      RegWrite = 1;
      MemtoReg = 2'b01;
		ALUop = 3'b000;
		loadtype = 3'b000;
		end
		
		lbu:
		begin
		ALUSrc = 1;
      ExtSel = 1;
		MemRead = 1;
      RegWrite = 1;
      MemtoReg = 2'b01;
		ALUop = 3'b000;
		loadtype = 3'b001;
		end
		
		lh:
		begin
		ALUSrc = 1;
      ExtSel = 1;
		MemRead = 1;
      RegWrite = 1;
      MemtoReg = 2'b01;
		ALUop = 3'b000;
		loadtype = 3'b010;
		end
		
		lhu:
		begin
		ALUSrc = 1;
      ExtSel = 1;
		MemRead = 1;
      RegWrite = 1;
      MemtoReg = 2'b01;
		ALUop = 3'b000;
		loadtype = 3'b011;
		end
		
		lw:
		begin
		ALUSrc = 1;
      ExtSel = 1;
		MemRead = 1;
      RegWrite = 1;
      MemtoReg = 2'b01;
		ALUop = 3'b000;
		end
		
		sw:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      MemWrite = 1;
		ALUop = 3'b000;
		end
		
		sb:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      MemWrite = 1;
		ALUop = 3'b000;
		storetype = 2'b00;
		end
		
		sh:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      MemWrite = 1;
		ALUop = 3'b000;
		storetype = 2'b01;
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
		
		ori:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      RegWrite = 1;
		ALUop = 3'b100;
		end
		
		xori:
		begin
		ALUSrc = 1;
      ExtSel = 1;
      RegWrite = 1;
		ALUop = 3'b101;
		end
		
		lui:
		begin
		ALUSrc = 1;
      RegWrite = 1;
		ALUop = 3'b110;
		end
		
		slti:
		begin
		ALUSrc = 1;
		ExtSel = 1;
      RegWrite = 1;
		ALUop = 3'b111;
		end
		
		sltui:
		begin
		ALUSrc = 1;
      RegWrite = 1;
		ALUop = 3'b111;
		end
		
		bltz:
		begin
		ExtSel = 1;
		ALUop = 3'b001;
		Branch = 1;
		case(rt)
		5'b00000:AluzeroCtr = 3'b100;//bltz
		5'b00001:AluzeroCtr = 3'b110;//bgez
		5'b10000:AluzeroCtr = 3'b111;//bltzal
		5'b10001:AluzeroCtr = 3'b110;//bgezal
		default:;
		endcase
      
		
		end
		
		bgtz:
		begin
      ExtSel = 1;
		ALUop = 3'b001;
		Branch = 1;
		AluzeroCtr = 3'b010;
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
		AluzeroCtr = 3'b001;
		end
		
		blez:
		begin
		ExtSel = 1;
		ALUop = 3'b001;
		Branch = 1;
		AluzeroCtr = 3'b101;
		end
		
		j:
		begin
		jump = 1;
		PCbackSrc = 2'b01;
		end
		
	endcase
end

endmodule


