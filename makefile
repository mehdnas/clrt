# Include directories and global defines
INCLUDE_DIRS := 
DEFINES := 

# Compiler options
CC := gcc 
CFLAGS := -Wall -Werror
OUTPUT_FLAG := -o
OBJ_COMPILATION_FLAGS := -c $(OUTPUT_FLAG)
LINKER_FLAGS := $(OUTPUT_FLAG)
GCC_INC_DIRS := $(addprefix -I, $(INCLUDE_DIRS))
GCC_DEFS := $(addprefix -D, $(DEFINES))

#build commands
#compile
COBJ := $(CC) $(CFLAGS) $(GCC_INC_DIRS) $(GCC_DEFS) $(OBJ_COMPILATION_FLAGS)
#link and generate an executable
CEXE := $(CC) $(CFLAGS) $(LINKER_FLAGS)

# Files and directories
BIN_DIR := ./bin
BUILD_DIR := ./build

LIB := $(BIN_DIR)/libclrout.a

OBJECTS := $(BUILD_DIR)/clrout.o

HEADER_FILES := clrout.h

$(LIB): $(OBJECTS) $(BIN_DIR)
	ar ru $@ $(OBJECTS) 
	ranlib $@

$(BIN_DIR):
	mkdir -p $@

$(OBJECTS): $(BUILD_DIR)/%.o: %.c $(HEADER_FILES) $(BUILD_DIR)
	$(COBJ) $@ $<

$(BUILD_DIR):
	mkdir -p $@	


