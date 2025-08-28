CC = gcc
CFLAGS = -Iinclude -Wall
SRC = src/main.c src/createfile.c src/writefile.c src/appendfile.c src/copyfile.c src/readfile.c
OBJ_DIR = build
OBJ = $(SRC:src/%.c=$(OBJ_DIR)/%.o)
TARGET = bin/filemanager

all: $(TARGET)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

bin:
	mkdir -p bin

$(OBJ_DIR)/%.o: src/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJ) | bin
	$(CC) $(OBJ) -o $(TARGET)

clean:
	rm -rf $(OBJ_DIR)/*.o $(TARGET)

