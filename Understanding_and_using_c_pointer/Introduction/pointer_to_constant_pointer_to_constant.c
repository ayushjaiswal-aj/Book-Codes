#include <stdio.h>

int main(void){
	const int limit = 100;
	const int * const * pcpci = &limit;

	printf("limit - address: %p, value: %d\n", &limit, limit);
	printf("pcpci - address: %p, value: %p\n", &pcpci, pcpci);
	printf("limit = *pcpci = %d\n", *pcpci);

	return 0;
}
