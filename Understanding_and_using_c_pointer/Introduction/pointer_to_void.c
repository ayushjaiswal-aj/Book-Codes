#include <stdio.h>

int main(void){
	int num;
	int *pi = &num;
	void *pv;

	printf("Value of pv: %p\n", pv);
	printf("Value of pi: %p\n", pi);
	pi = (int *) pv;
	printf("Value of pi: %p\n", pi);

	return 0;
}
