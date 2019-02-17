CC=gcc
CFLAGS=-I.

build: main.o func.o
	$(CC) -o main main.o func.o

debugBuild: main.o func.o
	$(CC) -g main.c func.c

out: 
	gdb a.out

debug: debugBuild out

clean:
	rm *.o main

run:
	./main

all: build run