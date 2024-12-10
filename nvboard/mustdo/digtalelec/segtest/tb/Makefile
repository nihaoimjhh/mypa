# 定义变量
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --trace
VERILOG_FILE = ./top.v
CPP_TESTBENCH = ./top_tb.cpp
TOP_MODULE = $(basename $(notdir $(VERILOG_FILE)))
OBJ_DIR = obj_dir

# 目标：sim
sim: $(OBJ_DIR)/V$(TOP_MODULE)
	./$(OBJ_DIR)/V$(TOP_MODULE)

# 生成 obj_dir 和仿真可执行文件
$(OBJ_DIR)/V$(TOP_MODULE): $(VERILOG_FILE) $(CPP_TESTBENCH)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_FILE) $(CPP_TESTBENCH) --build

# 清理目标
clean:
	rm -rf $(OBJ_DIR) wave.vcd

.PHONY: clean

