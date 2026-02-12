CC = gcc
CFLAGS = -I include -Wall
SRC = $(wildcard SRC/*.c)
TARGET = STRONG_PASSWORD

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

run:
	./$(TARGET)