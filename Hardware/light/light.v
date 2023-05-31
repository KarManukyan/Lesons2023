module light (clk, rst, led_1, led_2, led_3, led_4);

input clk;
input rst;
output reg led_1;
output reg led_2;
output reg led_3;
output reg led_4;

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


always @(posedge clk) begin
	if (rst) begin
                led_1 <= 1'b0;
                led_2 <= 1'b0;
                led_3 <= 1'b0;
                led_4 <= 1'b0;
        end 
	else begin
		case(state)
		3'b000:begin
                        led_1 <= 1'b1;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b0;

		end
		3'b001: begin
                        led_1 <= 1'b0;
		        led_2 <= 1'b1;
		        led_3 <= 1'b0;
		        led_4 <= 1'b0;
		end
		3'b010: begin
			led_1 <= 1'b0;
		        led_2 <= 1'b0;
		        led_3 <= 1'b1;
		        led_4 <= 1'b0;
               
		end
		3'b100: begin
                        led_1 <= 1'b0;
		        led_2 <= 1'b0;
		        led_3 <= 1'b0;
		        led_4 <= 1'b1;
			
		end
        default:
                state <= 1'b0;
	endcase
end	
end
endmodule
