all: cube_fn.o custom_abs_val.o custom_handler.o main.o sq.o
	gcc cube_fn.o custom_abs_val.o custom_handler.o main.o sq.o -o test_pointer

cube_fn.o: cube_fn.c cube.h
	gcc -c cube_fn.c

custom_abs_val.o: custom_abs_val.c absolute_val.h
	gcc -c custom_abs_val.c

custom_handler.o: custom_handler.c handles.h
	gcc -c custom_handler.c

main.o: main.c square.h cube.h absolute_val.h handles.h
	gcc -c main.c

sq.o: sq.c square.h
	gcc -c sq.c

clean: 
	rm *.o
	rm test_pointer
