#include <nvboard.h>
#include "Vkey_led.h"

void nvboard_bind_all_pins(Vkey_led* top) {
	nvboard_bind_pin( &top->SW, 4, SW1, SW2, SW3, SW4);
	nvboard_bind_pin( &top->ledr0, 1, LD0);
	nvboard_bind_pin( &top->ledr1, 1, LD0);
	nvboard_bind_pin( &top->ledr2, 1, LD0);
	nvboard_bind_pin( &top->ledr3, 1, LD0);
}
