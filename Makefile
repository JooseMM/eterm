CC = gcc
CFLAGS = -Wall

all: compile run

compile: main.c utils.c utils.h
	$(CC) $(CFLAGS) -o program main.c utils.c ./classes/pwd_class/pwd_class.c

run: compile
	./program
clean:
	rm -f *.o main

