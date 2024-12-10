module key_led(
    input [3:0]SW,
    output ledr0,
    output ledr1,
    output ledr2,
    output ledr3
	
);

	assign {ledr0,ledr1,ledr2,ledr3}= SW;   // 将开关状态直接映射到LED状态

endmodule

