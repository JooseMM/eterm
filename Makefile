CC = gcc
CFLAGS = -Wall

all: compile run

compile: main.c 
	$(CC) $(CFLAGS) -o program main.c 

run: compile
	./program
clean:
	rm -f *.o main

