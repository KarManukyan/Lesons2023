`timescale 1 ns /1 ps
module counter_tb;
	parameter SIZE = 8;
	reg clk, reset, up, enable;
	reg [SIZE-1:0] load;
	wire [SIZE-1:0] count;
	wire pulse;

	counter c1(.up_down(up),.*);

	initial begin
		$dumpfile("v.vcd");
		$dumpvars();
	end
	
	initial begin
		reset = 1'b0;
		enable = 1'b1;
		up = 1'b1;
	end


	initial begin 
		clk = 1'b0; 
	 	repeat (150) #3 clk= ~clk;

	end


	
	always @(*) begin
		#3 
		enable = 1'b0;
		#3 up = 1'b1;
		#3 load = 8'b00011111;
		$display("reset = %b,enable = %d,load = %d, up = %b,count = %d", reset,enable,load,up,count);
		#3 enable = 1'b1;

		#3 load = 8'b11111111;
		#3 reset = 1'b0;
		#3 load = 8'b00001001;
		$display("reset = %b,enable = %d,load = %d, up = %b,count = %d", reset,enable,load,up,count);
		#3 up = 1'b0;

		#3 load = 8'b00000000;

		#3 up = 1'b0;
		#3 load = 8'b00011111;
		$display("reset = %b,enable = %d,load = %d, up = %b,count = %d", reset,enable,load,up,count);
	end
	
endmodule
