module SEGstate(input reg [7:0]count,output reg [6:0]hex_high,output reg [6:0]hex_low,input state);

	
always @(*) begin
	if(state)begin
    case (count[7:4])
        4'b0000: hex_high = 7'b0000001; // '0'
        4'b0001: hex_high = 7'b1001111; // '1'
        4'b0010: hex_high = 7'b0010010; // '2'
        4'b0011: hex_high = 7'b0000110; // '3'
        4'b0100: hex_high = 7'b1001100; // '4'
        4'b0101: hex_high = 7'b0100100; // '5'
        4'b0110: hex_high = 7'b0100000; // '6'
        4'b0111: hex_high = 7'b0001111; // '7'
        4'b1000: hex_high = 7'b0000000; // '8'
        4'b1001: hex_high = 7'b0000100; // '9'
        4'b1010: hex_high = 7'b0001000; // 'A'
        4'b1011: hex_high = 7'b1100000; // 'b'
        4'b1100: hex_high = 7'b0110001; // 'C'
        4'b1101: hex_high = 7'b1000010; // 'd'
		4'b1110: hex_high = 7'b0110000;// 'E'
        4'b1111: hex_high = 7'b0111000; // 'F'
    endcase

    case (count[3:0])
        4'b0000: hex_low = 7'b0000001; // '0'
        4'b0001: hex_low = 7'b1001111; // '1'
        4'b0010: hex_low = 7'b0010010; // '2'
        4'b0011: hex_low = 7'b0000110; // '3'
        4'b0100: hex_low = 7'b1001100; // '4'
        4'b0101: hex_low = 7'b0100100; // '5'
        4'b0110: hex_low = 7'b0100000; // '6'
        4'b0111: hex_low = 7'b0001111; // '7'
        4'b1000: hex_low = 7'b0000000; // '8'
        4'b1001: hex_low = 7'b0000100; // '9'
        4'b1010: hex_low = 7'b0001000; // 'A'
        4'b1011: hex_low = 7'b1100000; // 'b'
        4'b1100: hex_low = 7'b0110001; // 'C'
        4'b1101: hex_low = 7'b1000010; // 'd'
        4'b1110: hex_low = 7'b0110000; // 'E'
        4'b1111: hex_low = 7'b0111000; // 'F'
    endcase
	end
      else begin
	hex_high=7'b1111111;
	hex_low=7'b1111111;

	  end
		
end
endmodule




