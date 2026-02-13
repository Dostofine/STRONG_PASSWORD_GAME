CC = gcc
CFLAGS = -I include -Wall
SRC = $(wildcard SRC/*.c)
TARGET = STRONG_PASSWORD
OUTPUT_DIR=BUILD
all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUTPUT_DIR)/$(TARGET)
clean:
	rm -f $(OUTPUT_DIR)/$(TARGET)

run:
	./$(OUTPUT_DIR)/$(TARGET)