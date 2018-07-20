`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:03:53 04/25/2018 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,                        
    input [31:0] newAddress,           
    output reg[31:0] currentAddress  
    );

    initial begin
        currentAddress = 0;  
    end

    always@(posedge clk)
    begin
        currentAddress <= newAddress;
    end

endmodule
