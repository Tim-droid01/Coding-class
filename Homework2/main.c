#include <stdio.h>
#include <stdlib.h>
#include "float_array.h"

int main() {
	printf("\nFarray f1: \n");
	farray f1;
	mallocate(&f1, 10);
	int i;
	for(i=0; i<10; i++) {
		set_value(&f1, i, i);
	}
	print_farray(&f1);

	printf("\nFarray f2: \n");
	farray f2;
	callocate(&f2, 5);
	print_farray(&f2);

	printf("\nFarray f2, with modified number: \n");

	set_value(&f2, 3, access_value(&f1, 6));
	set_value(&f2, 1, access_value(&f1, 3));
	print_farray(&f2);

	free_farray(&f1);
	free_farray(&f2);
	return 0;
}
