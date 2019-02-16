CC=gcc
CFLAGS=-I.

build: main.o func.o
	$(CC) -o main main.o func.o

clean:
	rm *.o main

run:
	./main

all: build run