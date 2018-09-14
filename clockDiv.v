`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:15:24 05/15/2017 
// Design Name: 
// Module Name:    clockDiv 
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
module clockDiv(input clk,
					 input [31:0]div,
					 output reg out);
	
	
	reg [31:0] count;	
	reg inc;
	reg max;
	
	initial begin 
		count = 32'b0;
	end
	// All Always blocks run in parallel don't get confused

	always begin 				// This block will execute continuously and will update 'inc'
		max=div>>1;	
		inc=(count>max); 
	end

	always@(posedge clk) begin		
		case(inc)
		1:begin 					
			count=0; 
			out=~out; 
			end
		0:begin 
			count=count+1; 
			end
		endcase
	end

endmodule
