# -*- Makefile -*- 

comp: main.o
	gcc main.c -o main.o

clean:
	rm *.o
