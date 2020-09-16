# -*- Makefile -*- 

comp: main.o
	gcc -g main.c src/bigInt.c -o main.o

clean:
	rm *.o
