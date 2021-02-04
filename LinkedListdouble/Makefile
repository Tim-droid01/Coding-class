all: ell.o main.o pll.o
	gcc ell.o main.o pll.o -o run_list_run 

ell.o: ell.c edit_linked_list.h
	gcc -c ell.c 

main.o: main.c double_linked_list.h edit_linked_list.h print_linked_list.h
	gcc -c main.c 

pll.o: pll.c print_linked_list.h
	gcc -c pll.c

clean: 
	rm *.o
	rm run_list_run
