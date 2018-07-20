`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:19:14 04/25/2018 
// Design Name: 
// Module Name:    SignReduce 
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
module SignReduce(                
    input [31:0] alu_out,        
    output [7:0] memaddr   
    );

    assign memaddr = alu_out[7:0];
    
endmodule
