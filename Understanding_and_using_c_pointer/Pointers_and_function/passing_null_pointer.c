#include <stdio.h>
#include <stdlib.h>

int* allocate_array(int *arr, int size, int value){
	if(arr != NULL){
		int i;
		for(i=0; i<size; i++){
			*(arr + i) = value;
		}
	}
	return arr;
}

int main(void){
	int *vector = (int *) malloc(5 * sizeof(int));
	allocate_array(vector, 5, 45);
	int i;
	for(i=0; i<5; i++){
		printf("*(vector + %d) = %d\n", i, *(vector + i));
	}
	return 0;
}
