#include <stdio.h>
#include <stdlib.h>

int* allocateArray(int size, int value){
	int *arr = (int*) malloc(size * sizeof(int));
	int i;
	for(i=0; i<size; i++){
		*(arr + i) = value;
	}
	return arr;
}

int main(void){
	int *vector = allocateArray(5, 34);
	int i;
	for(i=0; i<5; i++){
		printf("%d\n", *(vector + i));
	}
	return 0;
}
