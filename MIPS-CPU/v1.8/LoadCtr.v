`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:39:30 06/07/2018 
// Design Name: 
// Module Name:    LoadCtr 
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
module LoadCtr(
    input [31:0] original_data,
    input [2:0] loadtype,
    input [1:0] addr_low,
    output reg [31:0] final_data
);

    parameter LOAD_LB = 3'd0;
    parameter LOAD_LBU = 3'd1;
    parameter LOAD_LH = 3'd2;
    parameter LOAD_LHU = 3'd3;
    parameter LOAD_LW = 3'd4;

    always @(*)
    begin
        case(loadtype)
            LOAD_LB:
            begin
                if (addr_low == 2'b00)
                    final_data = $signed(original_data[7:0]);
                else if (addr_low == 2'b01)
                    final_data = $signed(original_data[15:8]);
                else if (addr_low == 2'b10)
                    final_data = $signed(original_data[23:16]);
                else
                    final_data = $signed(original_data[31:24]);
            end    
            LOAD_LBU:
            begin
                if (addr_low == 2'b00)
                    final_data = original_data[7:0];
                else if (addr_low == 2'b01)
                    final_data = original_data[15:8];
                else if (addr_low == 2'b10)
                    final_data = original_data[23:16];
                else
                    final_data = original_data[31:24];
            end
            LOAD_LH:
            begin
                if (addr_low == 2'b00)
                    final_data = $signed(original_data[15:0]);
                else    // addr_low == 2'b10 
                    final_data = $signed(original_data[31:16]);
            end
            LOAD_LHU:
            begin
                if (addr_low == 2'b00)
                    final_data = original_data[15:0];
                else
                    final_data = original_data[31:15];
            end
            LOAD_LW:
                final_data = original_data;
            default: final_data = 32'b0;
        endcase
    end
endmodule
