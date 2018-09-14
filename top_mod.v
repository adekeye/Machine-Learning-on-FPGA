`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Adekeye Adegoke
// Engineer:UMBC 
// 
// Create Date:    16:42:37 05/04/2018 
// Design Name: 
// Module Name:    top 
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
//////////////////////////////////////////////////////////////////////////////////module Top(
 module Top(
 input clk,reset,enable,start,
	input [12:0] addr,
	output [20:0] out,maxpool,
	output reg done
    );
	
	assign out = out_pl;
	
	reg [8:0] SI_Height, SI_Weight;
	wire [8:0] SI_Height_W, SI_Weight_W; 
	reg [8:0] LI_Height, LI_Weight;
	wire [8:0] LI_Height_W, LI_Weight_W;
	
	assign SI_Height_W = SI_Height;
	assign SI_Weight_W = SI_Weight;
	assign LI_Height_W = LI_Height;
	assign LI_Weight_W = LI_Weight;
	
	
	parameter [8:0] pat_height = 30, pat_width = 27, laplacian = 3, pat_img_height = 28, pat_img_width = 25,samp_img_height = 440, samp_img_width = 340,conv_img_height = 438,conv_img_width = 338,element = 5;
	
	
	
	
	
	parameter [3:0] idle = 0, setup = 1, 
					part1 = 2, part2 = 3, 
					delay1 = 4, delay2 = 5, 
					maxpl = 6, read = 15;
	
	reg [3:0] current_state, next_state;
	
	reg enable_convolution;
	wire enable_maxpool;
	reg enable_ctr_1;
	reg enable_ctr_2; 
	reg enable_ctr_sum;
	reg clear;
	wire conv_done_l1, conv_done_l2;
	reg [1:0] convolution_sel;
	assign enable_maxpool = (convolution_sel==3)? done_conv:0;
	
	wire signed [8:0] input1, input2;
	wire [20:0] out_convolution;
	wire done_conv;
	
	
	assign input1 = (convolution_sel==2'b00)? 0: 
					(convolution_sel==2'b01)? out_f: 
					(convolution_sel==2'b10)? out_i:out_ip[10:2];
	
	
	assign input2 = (convolution_sel==2'b00)? 0: 
					(convolution_sel==2'b11)? out_fp[10:2]: out_lap;
		
	
	wire signed [20:0] input_maxpool, maxpool, output_maxpool;
	assign input_maxpool = out_convolution;
	
	
	reg [9:0] ADDR_SM;
	
	wire [17:0] addr_lg_l1;
	wire [17:0] addr_lg_l2;
	reg [17:0] ADDR_OUT;


	wire enable_f, enable_i, enable_fp, enable_ip, enable_lap, enable_pl;
	
	reg wr_ip, wr_fp, wr_pl;

	wire [9:0] addr_f;
	
	wire [17:0] addr_i;
	
	wire [9:0] addr_fp;
	
	wire [17:0] addr_ip;
	
	wire [12:0] addr_pl;
	
	wire [3:0] addr_lap;

	wire [10:0] in_fp, in_ip;
	
	wire [10:0] out_fp, out_ip;
	
	wire signed [20:0] in_pl;
	assign in_fp = out_convolution[10:0];
	
	assign in_ip = out_convolution[10:0];
	assign in_pl = output_maxpool;

	wire signed [8:0] out_lap;
	wire signed [7:0] out_i, out_f;	
	wire signed [20:0] out_pl;
	

	assign enable_lap = (convolution_sel==3||convolution_sel==0)? 0:1;
	
	
	
	assign enable_f = (convolution_sel==1)? 1:0;
	
	assign enable_i = (convolution_sel==2)? 1:0;
	
	
	assign enable_fp = (convolution_sel==0)? 0:
						(convolution_sel==1)? done_conv:
						(convolution_sel==3)? 1:0;
	
	
	
	assign enable_ip = (convolution_sel==0)? 0:
						(convolution_sel==2)? done_conv:
						(convolution_sel==3)? 1:0;
	
	assign enable_pl = (done)? enable:done_maxpl;
	
	
	assign addr_f = (convolution_sel==1)? addr_lg_l1:0;
	
	assign addr_i = (convolution_sel==2)? addr_lg_l1:0;
	
	
	assign addr_lap = (convolution_sel==0||convolution_sel==3)? 0:ADDR_SM;
	
	assign addr_ip = (convolution_sel==0)? 0: 
						  (convolution_sel==3)? addr_lg_l2:ADDR_OUT; 
	
	assign addr_fp = (convolution_sel==0)? 0: 
						  (convolution_sel==1)? ADDR_OUT[9:0]:ADDR_SM;
	
	
	assign addr_pl = (done)? addr:ADDR_OUT[12:0];
	
Pattern pat (
  .clka(clk), // input clka
  .ena(enable_f), // input ena
  .wea(1'b0), // input [0 : 0] wea
  .addra(addr_f), // input [9 : 0] addra
  .dina(7'b0), // input [7 : 0] dina
  .douta(out_f) // output [7 : 0] douta
);	
	 
Image_doc Image (
  .clka(clk), // input clka
  .ena(enable_i), // input ena
  .wea(1'b0), // input [0 : 0] wea
  .addra(addr_i), // input [17 : 0] addra
  .dina(7'b0), // input [7 : 0] dina
  .douta(out_i) // output [7 : 0] douta
);

Filter laplasian(
    .clk(clk), 
    .reset(reset), 
    .enable(enable_lap), 
    .addr(addr_lap),  
    .out(out_lap)
    );
Pattern_conv Processed_P (
  .clka(clk), // input clka
  .ena(enable_fp), // input ena
  .wea(wr_fp), // input [0 : 0] wea
  .addra(addr_fp), // input [9 : 0] addra
  .dina(in_fp), // input [10 : 0] dina
  .douta(out_fp) // output [10 : 0] douta
);

Image_conv Processed_Img (
  .clka(clk), // input clka
  .ena(enable_ip), // input ena
  .wea(wr_ip), // input [0 : 0] wea
  .addra(addr_ip), // input [17 : 0] addra
  .dina(in_ip), // input [10 : 0] dina
  .douta(out_ip) // output [10 : 0] douta
);	

maxpool_IP Max_Pool (
  .clka(clk), // input clka
  .ena(enable_pl), // input ena
  .wea(wr_pl), // input [0 : 0] wea
  .addra(addr_pl), // input [12 : 0] addra
  .dina(in_pl), // input [20 : 0] dina
  .douta(out_pl) // output [20 : 0] douta
);

wire out_trig;
assign out_trig = (convolution_sel==2'b11)? done_maxpl:done_conv;
	always@(posedge clk) begin
		if(reset || clear) begin
			ADDR_OUT <= 0;
		end
		else if(out_trig) begin
			ADDR_OUT <= ADDR_OUT + 1;
		end	
	end
	
Addr_ctrl addr_M1 (
    .clk(clk), 
    .reset(reset||clear), 
    .enable(enable_ctr_1), 
    .SI_Height_W(SI_Height_W), 
    .LI_Height_W(LI_Height_W), 
    .SI_Weight_W(SI_Weight_W), 
    .LI_Weight_W(LI_Weight_W), 
    .count(ADDR_SM), 
    .address_lg(addr_lg_l1), 
    .conv_done(conv_done_l1)
    );
	
Addr_ctrl2 addr_M2 (
    .clk(clk), 
    .reset(reset||clear), 
    .enable(enable_ctr_2), 
    .SI_Height_W(SI_Height_W), 
    .LI_Height_W(LI_Height_W), 
    .SI_Weight_W(SI_Weight_W), 
    .LI_Weight_W(LI_Weight_W), 
	 .count1(ADDR_SM),
    .element(element), 
    .address_lg(addr_lg_l2), 
    .conv_done(conv_done_l2)
    );
	
always@(posedge clk) begin
	if(reset||clear) begin
			ADDR_SM <= 0;
		end
		else if(enable_ctr_1||enable_ctr_2) begin
			if(ADDR_SM < (SI_Height*SI_Weight-1)) begin
				ADDR_SM <= ADDR_SM + 1;
			end
			else begin
				ADDR_SM <= 0;
			end	
	end
end

convolution convolution (
	 .clk(clk),
    .input1(input1), 
    .input2(input2), 
    .HT(SI_Height), 
    .WT(SI_Weight), 
    .reset(reset), 
    .enable(enable_convolution), 
	 .clear(clear),
    .out(out_convolution), 
    .done(done_conv)
    );
	 
maxpool_1 maxpool_called (
    .in(input_maxpool), 
    .clk(clk), 
    .reset(reset), 
    .en(enable_maxpool), 
    .element(element), 
    .done(done_maxpl), 
    .out(output_maxpool),
	 .maximum_val(maxpool)
    );
	
	always @(posedge clk) begin 
		if (reset) begin
			SI_Height <= 0;
			SI_Weight <= 0;
			LI_Height <= 0;
			SI_Weight <= 0;
			enable_convolution <= 0;
			enable_ctr_1 <= 0;
			enable_ctr_2 <= 0;
			wr_ip <= 0;
			wr_fp <= 0;
			wr_pl <= 0;
			clear <= 0;
			convolution_sel <= 2'b00;
			done <= 0;
			current_state <= idle;
		
		end
		case(current_state)
			idle: begin
				if(start)
					
					current_state <= setup;
				else
					current_state <= idle;
			end
			setup: begin
				case(convolution_sel) 
					0: begin
						SI_Height <= laplacian;
						SI_Weight <= laplacian;
						LI_Height <= pat_height;
						LI_Weight <= pat_width;
						enable_ctr_1 <= 1;
						wr_fp <= 1;
						convolution_sel <= 2'b01;
					end
					1: begin
						SI_Height <= laplacian;
						SI_Weight <= laplacian;
						LI_Height <= samp_img_height;
						LI_Weight <= samp_img_width;
						enable_ctr_1 <= 1;
						wr_ip <= 1;
						convolution_sel <= 2'b10;
					end
					2: begin
						SI_Height <= pat_img_height;
						SI_Weight <= pat_img_width;
						LI_Height <= conv_img_height;
						LI_Weight <= conv_img_width;
						enable_ctr_2 <= 1;
						wr_pl <= 1;
						convolution_sel <= 2'b11;
					end
				endcase
				current_state <= part1;
			end
			part1: begin
				enable_convolution <= 1;
				if(conv_done_l1) begin
					enable_ctr_1 <= 0;
					current_state <= part2;
				end
				else if(convolution_sel != 3)
					current_state <= part1;
				else
					current_state <= maxpl;
			end
			part2: begin
				enable_convolution <= 0;
				current_state <= delay1;
			end
			maxpl: begin
				if(conv_done_l2) begin
					enable_ctr_2 <= 0;
					current_state <= delay1;
				end
				else
					current_state <= maxpl;
			end
			delay1: begin
				if(convolution_sel==3) begin
					if(done_maxpl) begin
						clear <= 1;
						wr_pl <= 0;
						current_state <= delay2;
					end
					else 
						current_state <= delay1;
				end
				else begin
					clear <= 1;
					wr_fp <= 0;
					wr_ip <= 0;
					current_state <= delay2;
				end
			end
			delay2: begin
				clear <= 0;
				if (convolution_sel != 3) 
					current_state <= setup;
				else begin
					current_state <= read;
					convolution_sel <= 2'b00;
				end
			end
			read : begin
				convolution_sel <= 2'b00;
				done <= 1;
			end
		endcase
	end
endmodule