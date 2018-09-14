`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:24:23 05/05/2018 
// Design Name: 
// Module Name:    maxpool 
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
module maxpool_1(
   	input signed [20:0] in,
	input clk,reset,en,
	input [3:0] element,
	output reg done,
	output reg [20:0] out,
	output [20:0] maximum_val
    );
	 
	reg signed [20:0] d_max_val;
	reg signed [20:0] b_max_val;
	reg [7:0] ct;
	
	wire [7:0] size;
	wire [4:0] addr;
	wire [20:0] t_out;
	assign addr = ct;
	assign size = element*element;
	assign t_out = d_max_val;
	assign maximum_val = b_max_val;
	
	always@(posedge clk) begin
		if(reset) begin
			d_max_val <= 21'b100000000000000000000;
			b_max_val <= 0;
			ct <= 0;
			done <= 0;
		end
		
		done <= 0;
		if(en) begin
			if(ct < size) begin
				ct <= ct + 1;
				if(in > d_max_val) begin
					d_max_val <= in;
				end
			end
			else begin
				done <= 1;
				ct <= 1;
				out <= d_max_val;
				d_max_val <= in;
			end
			if(in > b_max_val) begin
				b_max_val <= in;
			end
		end
	end
			

		
endmodule
