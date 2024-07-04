# project source
TOPNAME = top
VSRCS += $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS += $(shell find $(abspath ./csrc) -name "*.cpp")


# verilator flags
VERILATOR_FLAGS += -Wall --cc --trace --exe --build --top-module $(TOPNAME)
# VERILATOR_FLAGS += --threads-dpi all
VERILATOR_FLAGS += -j 16

# run info
OBJ_DIR := ./obj_dir
BIN := $(OBJ_DIR)/V$(TOPNAME)
IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
RUN_ARGS := --img=$(IMG)


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
