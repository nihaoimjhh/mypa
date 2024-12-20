#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->s, 2, SW1, SW0);
	nvboard_bind_pin( &top->a, 8, SW9, SW8, SW7, SW6, SW5, SW4, SW3, SW2);
	nvboard_bind_pin( &top->y, 2, LD1, LD0);
}
