module light_7 (clk, rst, number, led_1, led_2, led_3, led_4,led_5, led_6, led_7);

input clk;
input rst;
input [3:0] number;
output reg led_1;
output reg led_2;
output reg led_3;
output reg led_4;
output reg led_5;
output reg led_6;
output reg led_7;

reg [3:0] state;
reg [24:0] count;

always @(posedge clk) begin
	if (count == 25'd2500000) begin
		count <= 0;
		state <= state + 1;
	end
	else
		count <= count + 1;

end

always @(*) begin
	if (rst) begin
                led_1 <= 1'b0;
                led_2 <= 1'b0;
                led_3 <= 1'b0;
                led_4 <= 1'b0;
                led_5 <= 1'b0;
                led_6 <= 1'b0;
                led_7 <= 1'b0;
        end 
	else begin
		case(number)
		4'b0001: begin
                        led_1 <= 1'b1;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b1;
		        led_5 <= 1'b1;
		        led_6 <= 1'b1;
		        led_7 <= 1'b1;
		end
		4'b0010: begin
                        led_1 <= 1'b0;
		        led_2 <= 1'b0;
		        led_3 <= 1'b1;
		        led_4 <= 1'b0;
		        led_5 <= 1'b0;
		        led_6 <= 1'b1;
		        led_7 <= 1'b0;
		end
		4'b0011: begin
			led_1 <= 1'b0;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b0;
		        led_5 <= 1'b1;
		        led_6 <= 1'b1;
		        led_7 <= 1'b0;
		end
		4'b0100: begin
                        led_1 <= 1'b1;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b1;
		        led_5 <= 1'b0;
		        led_6 <= 1'b1;
		        led_7 <= 1'b1;
		end
		4'b0101: begin
                        led_1 <= 1'b0;
                        led_2 <= 1'b1;
                        led_3 <= 1'b0;
                        led_4 <= 1'b1;
                        led_5 <= 1'b0;
                        led_6 <= 1'b0;
                        led_7 <= 1'b0;
                end
		4'b0110: begin
                        led_1 <= 1'b0;
                        led_2 <= 1'b1;
                        led_3 <= 1'b0;
                        led_4 <= 1'b0;
                        led_5 <= 1'b0;
                        led_6 <= 1'b0;
                        led_7 <= 1'b0;
                end
		4'b0111: begin
                        led_1 <= 1'b0;
                        led_2 <= 1'b0;
                        led_3 <= 1'b0;
                        led_4 <= 1'b1;
                        led_5 <= 1'b1;
                        led_6 <= 1'b1;
                        led_7 <= 1'b1;
                end
		4'b1000: begin
                        led_1 <= 1'b0;
                        led_2 <= 1'b0;
                        led_3 <= 1'b0;
                        led_4 <= 1'b0;
                        led_5 <= 1'b0;
                        led_6 <= 1'b0;
                        led_7 <= 1'b0;
                end
		4'b1001: begin
                        led_1 <= 1'b0;
                        led_2 <= 1'b0;
                        led_3 <= 1'b0;
                        led_4 <= 1'b0;
                        led_5 <= 1'b1;
                        led_6 <= 1'b0;
                        led_7 <= 1'b0;
                end
			
		default:
			state <= 4'b0000;
		
	endcase
end	
end
endmodule
