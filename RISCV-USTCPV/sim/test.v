`timescale 1ns / 1ps


module riscvtest;

    reg CLK = 1;

    reg [3:0] RES = -1;

    // init the clk and 
    initial while(1) #(500e3/75e3) CLK = !CLK; 

    initial #(12e3) $finish;

    always@(posedge CLK) RES <= RES ? RES-1 : 0;

    wire [31:0] dummyin = 0;
    wire [3:0] dummyout;

    ustctop riscvtop(CLK,|RES,dummyin, dummyin, dummyin[0], dummyin[0], dummyout);

endmodule
