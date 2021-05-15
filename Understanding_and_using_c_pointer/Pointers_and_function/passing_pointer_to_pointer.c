#include <stdio.h>
#include <stdlib.h>

void allocate_array(int **arr, int size, int value){
	*arr = (int*)malloc(size * sizeof(int));
	if(*arr != NULL){
		int i;
		for(i=0; i<size; i++){
			*(*arr + i) = value;
		}
	}
}

int main(void){
	int *vector = NULL;
	int i;	
	allocate_array(&vector, 5, 45);
	for(i=0; i<5; i++){
		printf("*(vector+%d): %d\n", i, *(vector + i));
	}

	return 0;
}
