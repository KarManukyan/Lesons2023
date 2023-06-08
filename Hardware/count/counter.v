module counter (reset,clk,up_down,enable,pulse, count);
	
	parameter size = 4;
	input reset, clk, up_down, enable;
	output reg [size -1:0] count;
	output reg pulse;

	always@ (posedge clk) begin
		if(reset) begin
			count <= {size{1'b0}};
		end
		else if (enable) begin
			if (up_down)
				count <= count +1;
			else
				count <= count -1;
		end
	end

	always @(posedge clk) begin
		if ((count == 4'b1110) & up_down) begin
			pulse <= 1;
		end
		else if ((count == 4'b0001) & (~up_down))
			pulse <= 1;
		else
			pulse <= 0;	
	end
endmodule
