#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* my_calloc(size_t n, size_t size);

int main(void){
	int *pi;
	int n = 5;

	pi = (int *) my_calloc(n, sizeof(int));
	
	return 0;
}

void* my_calloc(size_t n, size_t size){
	void *p;
	p = malloc(n * size);
	memset(p, 0, n * size);

	return p;
}	
