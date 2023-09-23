CC = gcc
CFLAGS = -Wall -Wextra -std=c11

.PHONY: all clean

all: linux_helper

linux_helper: main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f linux_helper

