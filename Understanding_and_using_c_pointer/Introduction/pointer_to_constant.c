#include <stdio.h>

int main(void){
	int num = 5;
	const int limit = 500;
	int *pi;
	const int *pci;

	pi = &num;
	pci = &limit;

	printf("num - address: %p value: %d\n", &num, num);
	printf("limit - address: %p value: %d\n", &limit, limit);
	printf("pi - address: %p value: %p;\n", &pi, pi);
	printf("pci - address: %p value: %p\n", &pci, pci);

	return 0;
}
