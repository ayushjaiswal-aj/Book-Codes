#include <stdio.h>

int main(void){
	const int limit = 100;
	const int * const cpci = &limit;
	const int * const * pcpci = &cpci;

	printf("limit - address: %p, value: %d\n", &limit, limit);
	printf("cpci - address: %p, value: %p, pointing to: %d\n", &cpci, cpci, *cpci);
	printf("pcpci - address: %p, value: %p, pointing to: %p, pointing to (pointing to): %d\n", &pcpci, pcpci, *pcpci, **pcpci);

	return 0;
}
