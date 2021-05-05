###########################################
# Compilation commands ####################
###########################################

# Compiler options
CC := gcc 
CFLAGS := -Wall -Werror
OUTPUT_FLAG := -o
OBJ_COMPILATION_FLAGS := -c $(OUTPUT_FLAG)
LINKER_FLAGS := $(OUTPUT_FLAG)

# Add option prefix to the include and lib directories and defines
GCC_INC_DIRS := $(addprefix -I, $(INCLUDE_DIRS))
GCC_LIB_DIRS := $(addprefix -L, $(LIB_BIN_DIRS))
GCC_DEFS := $(addprefix -D, $(DEFINES))

#build commands
#compile objects
COBJ := $(CC) $(CFLAGS) $(GCC_INC_DIRS) $(GCC_DEFS) $(OBJ_COMPILATION_FLAGS)
#link and generate an executable
CEXE := $(CC) $(CFLAGS) $(GCC_LIB_DIRS) $(LINKER_FLAGS)
# compile a library directory
MAKE_LIB := make -C

###########################################
# Project directories and files ###########
###########################################

# compilation and build directories
BIN_DIR := ./bin
BUILD_DIR := ./build

# Header files
CLROUT_H := clrout.h

# Source files
CLROUT_C := clrout.c

# Object files
CLROUT_O := $(BUILD_DIR)/$(CLROUT_C:.c=.o)
CLROUT_O_HEADERS := $(CLROUT_H)

# Library
CLROUT_LIB := $(BIN_DIR)/libclrout.a
CLROUT_LIB_OBJS := $(CLROUT_O)

###########################################
# Compilation rules and recipes ##########
###########################################

# executables
all: $(BUILD_DIR) $(BIN_DIR) $(CLROUT_LIB)

$(BUILD_DIR):
	mkdir -p $@ 

$(BIN_DIR):
	mkdir -p $@

$(CLROUT_LIB): $(CLROUT_LIB_OBJS)
	ar r $@ $^
	ranlib $@

$(CLROUT_O): $(CLROUT_C) $(CLROUT_O_HEADERS)
	$(COBJ) $@ $<

clean:
	rm -r $(BUILD_DIR)

