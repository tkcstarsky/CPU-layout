`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:39:14 04/25/2018 
// Design Name: 
// Module Name:    Mux5 
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
module Mux5(
    input control,
    input [4:0] in1,
    input [4:0] in0,
    output [4:0] out
    );

    assign out = control ? in1 : in0;

endmodule
