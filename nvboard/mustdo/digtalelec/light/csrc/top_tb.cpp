#include "Vtop.h"         // 你的顶层模块名称
#include "verilated.h"    // Verilator头文件
#include "verilated_vcd_c.h" // 用于生成波形文件的头文件
#include "nvboard.h" // nv私房菜

static TOP_NAME dut;
void my_waveinit(Vtop *top,VerilatedVcdC* tfp){	
	 top->trace(tfp,5);
	 tfp->open("wave.vcd");
	 tfp->dump(0);
}
void my_refresh(Vtop *top,VerilatedVcdC* tfp,int time){
	 top->eval(); 
     tfp->dump(time); 
}
void my_exit(Vtop *top,VerilatedVcdC* tfp){
	 tfp->close();
	 delete top;
}
void single_cycle() {
  dut.clk = 0; dut.eval();
  dut.clk = 1; dut.eval();
}

void reset(int n) {
  dut.rst = 1;
  while (n -- > 0) single_cycle();
  dut.rst = 0;
}
void nvboard_bind_all_pins(TOP_NAME* top);
int main(int argc, char** argv) {
	 int i,j,time=0;
	 Verilated::commandArgs(argc,argv);
	 Verilated::traceEverOn(1);
	 Vtop *top=new Vtop;
	 VerilatedVcdC* tfp=new VerilatedVcdC();
	 nvboard_bind_all_pins(&dut);
	 nvboard_init();
	 my_waveinit(top,tfp);
	 reset(10);
while(1) {
	 nvboard_update();
	 dut.eval();
	 single_cycle();
	 }
	 my_exit(top,tfp);
	 return 0;
}

