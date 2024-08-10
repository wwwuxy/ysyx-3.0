# project source
TOPNAME = ysyxSoCFull
SOCPATH = /home/wuxy/ysyx-workbench/ysyxSoC/perip

VSRCS += $(shell find $(abspath ./vsrc) -name "*.v")
VSRCS += $(shell find $(SOCPATH) -name "*.v")
VSRCS += /home/wuxy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v
CSRCS += $(shell find $(abspath ./csrc) -name "*.cpp")


# verilator flags
VERILATOR_FLAGS += --cc --trace --exe --build --top-module $(TOPNAME)
VERILATOR_FLAGS += --threads-dpi all
VERILATOR_FLAGS += -I$(SOCPATH)/uart16550/rtl
VERILATOR_FLAGS += -I$(SOCPATH)/spi/rtl
VERILATOR_FLAGS += --timescale "1ns/1ns" --no-timing
VERILATOR_FLAGS += -j 16
#VERILATOR_FLAGS += -Wall


# run info
OBJ_DIR := ./obj_dir
BIN := $(OBJ_DIR)/V$(TOPNAME)
IMG += $(SOCPATH)/uart16550/char-test.bin
DIFF ?= $(NEMU_HOME)/build/riscv32-nemu-interpreter-so
RUN_ARGS := --img=$(IMG) --diff=${DIFF}


# sim
all:sim	wave
	@echo "Write this Makefile by your self."

run:${CSRCS} ${VSRCS}
	@verilator ${VERILATOR_FLAGS} ${CSRCS} ${VSRCS}

sim:run
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	${BIN} ${RUN_ARGS}

wave:
	gtkwave *.vcd

clean:
	rm -rf obj_dir *.vcd

.PHONY: all sim wave clean run

include ../Makefile
