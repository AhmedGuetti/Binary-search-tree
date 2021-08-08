#/***           Makefile                ***/


main: main.o bst.o
	gcc main.o bst.o  -o main


main.o: main.c bst.c bst.h
	gcc -c  main.c bst.c


clear:
	rm *.o 