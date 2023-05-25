module counter (reset,clk,up_down,enable,load,count);
	
	parameter size = 8;
	input reset;
       	input clk;
       	input up_down;
       	input enable;
	input [size-1:0] load;
	output reg [size -1:0] count;

	always@ (posedge clk) begin
		if(reset)
			count <= 1'b0;
		if (enable) begin
			if (load)
				count <= load;
			else if (up_down)
				count <= count +1;
			else
				count <= count -1;
		end
	end
endmodule
