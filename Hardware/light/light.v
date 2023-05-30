module light (clk, rst, state, led_1, led_2, led_3, led_4);

input clk;
input rst;
output reg led_1;
output reg led_2;
output reg led_3;
output reg led_4;

reg [3:0] state;

always @(*) begin
	if (rst) begin
		led_1 <= 1'b0;
		led_2 <= 1'b0;
		led_3 <= 1'b0;
		led_4 <= 1'b0;
		state <= 3'b000;
	end
end
always @(posedge clk) begin
	if (rst) begin
                led_1 <= 1'b0;
                led_2 <= 1'b0;
                led_3 <= 1'b0;
                led_4 <= 1'b0;
                state <= 3'b000;
        end 
	else begin
		case(state)
		3'b000:begin
                        led_1 <= 1'b1;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b0;
			state <= 3'b001;
		end
		3'b001: begin
                        led_1 <= 1'b1;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b0;
			state <= 3'b010;
		end
		3'b010: begin
			led_1 <= 1'b1;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b0;
                        state <= 3'b100;
		end
		3'b100: begin
                        led_1 <= 1'b1;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b0;
			state <= 3'b000;
		end
	endcase
end	
end
