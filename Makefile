CC = gcc
CFLAGS = -Wall

all: compile run

compile: main.c utils.c utils.h
	$(CC) $(CFLAGS) -o program main.c utils.c ./classes/change_dir/change_dir.c

run: compile
	./program
clean:
	rm -f *.o main

