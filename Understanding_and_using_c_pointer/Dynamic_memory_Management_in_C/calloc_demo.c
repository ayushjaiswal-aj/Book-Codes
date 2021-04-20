#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *pi;
	pi = calloc(5, sizeof(int));

	printf("*pi = %d\n", *pi);
	printf("*(pi+1) = %d\n", *(pi+1));
	printf("*(pi+2) = %d\n", *(pi+2));
	printf("*(pi+3) = %d\n", *(pi+3));
	printf("*(pi+4) = %d\n", *(pi+4));

	return 0;
}
