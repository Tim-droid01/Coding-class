struct _float_array {
	float *data;
	int size;
};

typedef struct _float_array farray;

// Either one of these functions can be called to initialize farray
void mallocate(farray *array, int size){
	array->data = (float *) malloc(size * sizeof(float));
	array->size = size;
	return;
	}

void callocate(farray *array, int size){
	 array->data = (float *) calloc(size,sizeof(float));
	 array->size = size;
	 return;
	}

// Since we cannot have user-defined behavior for [], we must use functions
int set_value(farray *array, int index, float value){

	if(index > array->size){
	printf("The index is out of bound.\n");
		return 0.0;
	}

	array->data[index] = value;
	
	return 0.0;
}
	
float access_value(farray *array, int index){
	
	if(index > array->size){
	printf("Index is out of bound\n");
		return -1.0;
	}
	
	array->data[index] = index;
	
	return array->data[index];
	}

// Need a function to print the data in our user-defined array
void print_farray(farray *array){
	
	int i;
	for(i=0;i<array->size;i++){
	printf("%.2f\n",array->data[i]);
		}
	return;
	}

// Since we will dynamically allocate memory for data, we must free it
//	when we are done or at the end of the program.
void free_farray(farray *array){
	free(array->data);
	return;
}
