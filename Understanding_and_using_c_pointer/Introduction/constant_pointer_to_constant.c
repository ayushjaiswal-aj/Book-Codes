#include <stdio.h>

int main(void){
	const int limit = 100;
	const int * const cpci = &limit;

	printf("limit- address: %p, value: %d\n", &limit, limit);
	printf("cpci - address: %p, value: %p\n", &cpci, cpci);

	return (0);
}
