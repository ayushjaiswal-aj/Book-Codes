#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *pi;
	pi = (int*) malloc(sizeof(int));
	if (pi == NULL){
		printf("Memory not allocated\n");
		return (-1);
	}

	return 0;
}
