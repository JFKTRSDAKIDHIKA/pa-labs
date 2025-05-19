# Basic Configuration
# Compiler and tools
VERILATOR := verilator
MAKE := make

# Directory structure
OBJ_DIR := obj_dir
VSRC_DIR := vsrc
CSRC_DIR := csrc
CHISEL_DIR := ./npc-chisel
BUILD_DIR := build

# Top module and output
TOP_MODULE_NAME := ysyxSoCFull
TOP_MODULE := $(VSRC_DIR)/$(TOP_MODULE_NAME).v
EXEC := $(OBJ_DIR)/V$(TOP_MODULE_NAME)

# NVBoard Config
# NVBoard constraint file
NXDC_FILES := constr/top.nxdc
# Auto-generated pin binding
SRC_AUTO_BIND := $(BUILD_DIR)/auto_bind.cpp

# Source Files
# C++ sources
CSRC := $(wildcard $(CSRC_DIR)/*.cpp)
# Add NVBoard binding
CSRC += $(SRC_AUTO_BIND)
# Headers
HEADERS := $(wildcard $(CSRC_DIR)/include/*.h) \
           $(wildcard $(CSRC_DIR)/*.h) \
           $(wildcard $(CSRC_DIR)/*.hpp) \
# Verilog sources
V_FILES := $(shell find $(VSRC_DIR) -name "*.v" ! -name "$(TOP_MODULE_NAME).v")
SV_FILES := $(shell find $(VSRC_DIR) -name "*.sv")
VSRC := $(TOP_MODULE) $(V_FILES) $(SV_FILES)

# CFLAGS
INC_PATH ?=
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOP_MODULE_NAME)\""

# Compile Options 
# Verilog include paths
VERILOG_INCLUDE_DIRS := -I$(VSRC_DIR)/perip/uart16550/rtl \
                        -I$(VSRC_DIR)/perip/spi/rtl

# Verilator flags
VERILATOR_FLAGS := -MMD -Wno-lint -Wno-style --timescale "1ns/1ns" --no-timing \
                   --autoflush --stats --trace --exe \
                   -O3 --x-assign fast --x-initial fast --noassert --cc --build -j 0

# Simulation mode
STEP_MODE := run

# Targets
.PHONY: all sim clean verilog help nvboard

# Default target
all: $(EXEC)

# Create build dir
$(shell mkdir -p $(BUILD_DIR))

# Generate pin binding
$(SRC_AUTO_BIND): $(NXDC_FILES)
	@echo "Generating pin binding..."
	@python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
	@echo "Pin binding generated: $@"

# Build Verilator model
$(EXEC): $(VSRC) $(CSRC) $(HEADERS) $(NVBOARD_ARCHIVE)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOP_MODULE_NAME) \
		$(VERILOG_INCLUDE_DIRS) $(VSRC) \
		--exe $(CSRC) \
		$(addprefix -CFLAGS , $(CXXFLAGS)) \
		-LDFLAGS "$(NVBOARD_ARCHIVE)" \
		-LDFLAGS "-lcapstone -lreadline -L/usr/local/lib" \
		-LDFLAGS "-lSDL2 -lSDL2_image -lSDL2_ttf -pthread -lpthread -latomic" \
		--Mdir $(OBJ_DIR) -o $(abspath $(EXEC))

# Generate Verilog from Chisel
verilog:
	@echo "Generating Verilog from Chisel..."
	@$(MAKE) -C $(CHISEL_DIR)
	@echo "Verilog generation complete"

# Run simulation
sim: $(EXEC)
	@echo "Starting simulation..."
	@mkdir -p sim_output
	$(call git_commit, "sim RTL")
	$(EXEC) $(IMG) $(STEP_MODE)

# NVBoard target
nvboard: $(EXEC)
	@echo "Running NVBoard simulation..."
	$(EXEC)

# Clean generated files
clean:
	@echo "Cleaning..."
	@rm -rf $(OBJ_DIR)
	@rm -rf ./sim_output
	@rm -rf $(BUILD_DIR)
	@$(MAKE) -C $(CHISEL_DIR) clean
	@echo "Clean complete"

# Help info
help:
	@echo "Available targets:"
	@echo "  all      - Build Verilator model (default)"
	@echo "  verilog  - Generate Verilog from Chisel"
	@echo "  sim      - Run simulation"
	@echo "  nvboard  - Run NVBoard simulation"
	@echo "  clean    - Clean generated files"
	@echo "  help     - Show this help"
	@echo ""
	@echo "Environment variables:"
	@echo "  IMG      - Simulation image file"
	@echo "  STEP_MODE- Simulation mode (default: run)"
	@echo "  NVBOARD_HOME - NVBoard install dir"

# Include NVBoard build script
include $(NVBOARD_HOME)/scripts/nvboard.mk

# Include parent Makefile
include ../Makefile