`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:43:18 06/07/2018 
// Design Name: 
// Module Name:    StoreCtr 
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
module StoreCtr(
    input [31:0] original_data,
    input [31:0] ram_read,  
    input [1:0] storetype,
    input [1:0] addr_low,
    output reg [31:0] final_data
);
    
    parameter STORE_SB = 2'd0;
    parameter STORE_SH = 2'd1;
    parameter STORE_SW = 2'd2;
    
    always @(*)
    begin
        case(storetype)
            STORE_SB:
            begin
                if (addr_low == 2'b00)
                    final_data = {ram_read[31:8], original_data[7:0]};
                else if (addr_low == 2'b01)
                    final_data = {ram_read[31:16], original_data[7:0], ram_read[7:0]};
                else if (addr_low == 2'b10)
                    final_data = {ram_read[31:24], original_data[7:0], ram_read[15:0]};
                else    // low_two_bits = 2'b11
                    final_data = {original_data[7:0], ram_read[23:0]};
            end
            STORE_SH:
            begin
                if (addr_low == 2'b00)
                    final_data = {ram_read[31:16], original_data[15:0]};
                else final_data = {original_data[15:0], ram_read[15:0]};
            end
            STORE_SW:
                final_data = original_data;
            default:
                final_data = original_data;
        endcase
    end
endmodule
