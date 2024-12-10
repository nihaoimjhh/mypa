#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->SW1, 4, SW15, SW14, SW13, SW12);
	nvboard_bind_pin( &top->SW2, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->LD, 7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->BTN, 3, BTNL, BTNC, BTNR);
}
