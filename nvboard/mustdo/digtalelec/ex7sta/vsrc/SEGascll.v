module SEGascii(input reg [7:0]count,output reg [6:0]hex_high,output reg [6:0]hex_low,input state);
reg [7:0]ascii;
	scancode_to_ascii my_turn(count,ascii);
always @(*) begin
	if(state)begin
    case (ascii[7:4])
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

    case (ascii[3:0])
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
module scancode_to_ascii (
    input [7:0] scancode,  // 输入扫描码
    output reg [7:0] ascii // 输出 ASCII 码
);

    always @(*) begin
        case (scancode)
            8'h1C: ascii = 8'h41; // 'A' 的扫描码对应 ASCII 码 0x41
            8'h32: ascii = 8'h42; // 'B'
            8'h21: ascii = 8'h43; // 'C'
            8'h23: ascii = 8'h44; // 'D'
            8'h24: ascii = 8'h45; // 'E'
            8'h2B: ascii = 8'h46; // 'F'
            8'h34: ascii = 8'h47; // 'G'
            8'h33: ascii = 8'h48; // 'H'
            8'h43: ascii = 8'h49; // 'I'
            8'h3B: ascii = 8'h4A; // 'J'
            8'h42: ascii = 8'h4B; // 'K'
            8'h4B: ascii = 8'h4C; // 'L'
            8'h3A: ascii = 8'h4D; // 'M'
            8'h31: ascii = 8'h4E; // 'N'
            8'h44: ascii = 8'h4F; // 'O'
            8'h4D: ascii = 8'h50; // 'P'
            8'h15: ascii = 8'h51; // 'Q'
            8'h2D: ascii = 8'h52; // 'R'
            8'h1B: ascii = 8'h53; // 'S'
            8'h2C: ascii = 8'h54; // 'T'
            8'h3C: ascii = 8'h55; // 'U'
            8'h2A: ascii = 8'h56; // 'V'
            8'h1D: ascii = 8'h57; // 'W'
            8'h22: ascii = 8'h58; // 'X'
            8'h35: ascii = 8'h59; // 'Y'
            8'h1A: ascii = 8'h5A; // 'Z'
            // 数字键
            8'h16: ascii = 8'h31; // '1'
            8'h1E: ascii = 8'h32; // '2'
            8'h26: ascii = 8'h33; // '3'
            8'h25: ascii = 8'h34; // '4'
            8'h2E: ascii = 8'h35; // '5'
            8'h36: ascii = 8'h36; // '6'
            8'h3D: ascii = 8'h37; // '7'
            8'h3E: ascii = 8'h38; // '8'
            8'h46: ascii = 8'h39; // '9'
            8'h45: ascii = 8'h30; // '0'
            default: ascii = 8'h00; // 未定义的扫描码
        endcase
    end

endmodule



