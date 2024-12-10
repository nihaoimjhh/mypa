#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->ps2_clk, 1, PS2_CLK);
	nvboard_bind_pin( &top->ps2_data, 1, PS2_DAT);
	nvboard_bind_pin( &top->rst, 1, SW0);
	nvboard_bind_pin( &top->key_code_low, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
	nvboard_bind_pin( &top->key_code_high, 7, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G);
	nvboard_bind_pin( &top->zero1, 7, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G);
	nvboard_bind_pin( &top->zero2, 7, SEG5A, SEG5B, SEG5C, SEG5D, SEG5E, SEG5F, SEG5G);
	nvboard_bind_pin( &top->ascii_low, 7, SEG3A, SEG3B, SEG3C, SEG3D, SEG3E, SEG3F, SEG3G);
	nvboard_bind_pin( &top->ascii_high, 7, SEG4A, SEG4B, SEG4C, SEG4D, SEG4E, SEG4F, SEG4G);
	nvboard_bind_pin( &top->count_low, 7, SEG6A, SEG6B, SEG6C, SEG6D, SEG6E, SEG6F, SEG6G);
	nvboard_bind_pin( &top->count_high, 7, SEG7A, SEG7B, SEG7C, SEG7D, SEG7E, SEG7F, SEG7G);
}
