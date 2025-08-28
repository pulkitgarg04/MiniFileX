CC = gcc
CFLAGS = -Iinclude -Wall
SRC = src/main.c src/createfile.c src/writefile.c src/appendfile.c src/copyfile.c src/readfile.c
OBJ = $(SRC:.c=.o)
TARGET = filemanager

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

clean:
	rm -f src/*.o $(TARGET)

