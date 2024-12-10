#include <nvboard.h>
#include <Vkey_led.h>  // Verilog模块对应的头文件

static Vkey_led dut;

void nvboard_bind_all_pins(Vkey_led* top);

static void single_cycle() {
    dut.eval();  // 仿真当前状态
}

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    while(1) {
        nvboard_update();  // 更新仿真状态
       single_cycle();    // 执行一个仿真周期
    }
}

