module counter (reset,clk,up_down,enable,load,pulse, count);
	
	parameter size = 8;
	input reset, clk, up_down, enable;
	input [size-1:0] load;
	output reg [size -1:0] count;
	output reg pulse;

	always@ (posedge clk) begin
		if(reset) begin
			count <= {size{1'b0}};
		end
		if (enable) begin
			if (load)
				count <= load;
			else if (up_down)
				count <= count +1;
			else
				count <= count -1;
		end
	end

	always @(posedge clk) begin
		if ((count == 8'b11111111) & up_down) begin
			pulse <= 1;
		end
		else if ((count == 8'b00000000) & (~up_down))
			pulse <= 1;
		else
			pulse <= 0;	
	end
endmodule
