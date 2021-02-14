all: main.o
	gcc main.o -o test

main.o: main.c float_array.h
	gcc -c main.c

clean: 
	rm *.o
	rm test
