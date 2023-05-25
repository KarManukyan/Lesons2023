`timescale 1 ns /1 ps
module counter_tb;
	parameter SIZE = 8;
	reg clk, reset, up, enable;
	reg [SIZE-1:0] load;
	wire [SIZE-1:0] count;
	
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
		repeat(50) #3 clk= ~clk;
	end

	always @(*) begin
		#5;
	       	load = 4'b0101;
		$display("reset = %b,enable = %d,load = %d, up = %b,count = %d", reset,enable,load,up,count);
		#10 enable = 1'b0;
		#15 load = 8'b00011111;
		$display("reset = %b,enable = %d,load = %d, up = %b,count = %d", reset,enable,load,up,count);
		#20 enable = 1'b1;
		#25 load = 4'b1111;
		$display("reset = %b,enable = %d,load = %d, up = %b,count = %d", reset,enable,load,up,count);
		#30 up = 1'b0;
		$display("reset = %b,enable = %d,load = %d, up = %b,count = %d", reset,enable,load,up,count);
		#35 reset = 1'b1;
		#50 $display("reset = %b,enable = %d,load = %d, up = %b,count = %d", reset,enable,load,up,count);
	end
	
endmodule
