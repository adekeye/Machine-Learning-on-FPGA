
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:UMBC 
// Engineer: Adekeye Adegoke
// 
// Create Date:    16:49:02 05/15/2017 
// Design Name: 
// Module Name:    Filter 
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
module Filter(
  	input clk,
	input reset,
	input enable,
	input [3:0] addr,
	output reg [8:0] out
    );

reg signed [8:0] laplasian [0:8];
initial begin
	laplasian[0] = 0;
	laplasian[1] = -1;
	laplasian[2] = 0;
	laplasian[3] = -1;
	laplasian[4] = 4;
	laplasian[5] = -1;
	laplasian[6] = 0;
	laplasian[7] = -1;
	laplasian[8] = 0;
end
	
always@(posedge clk) begin
		if(reset) begin
			out <= 0;
		end
		if(enable) begin
			out <= laplasian[addr];
		end
	end

endmodule

