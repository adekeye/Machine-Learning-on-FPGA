`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: UMBC
// Engineer: Adekeye Adegoke
// 
// Create Date:    11:23:28 05/05/2018 
// Design Name: 
// Module Name:    Convolution 
// Project Name: CNN
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
module convolution(
  	input clk,
	input signed [8:0] input1, input2,
	input [8:0] HT,
	input [8:0] WT,
	input clear, reset, enable,
	output reg [20:0] out,
	output reg done
    );
	 
	reg signed [26:0] idata;
	reg [9:0] ct;
	
	always@(posedge clk) begin
		if(reset || clear)
			ct <= 0;
		else if(enable) begin
			if(ct < (HT*WT)) begin
				ct <= ct + 1;
			end
			else begin
				
				ct <= 1;
			end
		end
	end
	
	always@(posedge clk) begin
		if(reset || clear) begin
			idata <= 0;
			done <= 0;
		end
		else if(enable) begin
			if(ct < (HT*WT)) begin
				idata <= idata + input1*input2;
				done <= 0;
			end
			else begin
				if(idata > 1048575)
				out <= 1048575;
				else if (idata < -1048576) 
				out <= -1048576;
				else
					out <= idata; 
				idata <= input1*input2;
				done <= 1; 
			end
		end
	end


endmodule
