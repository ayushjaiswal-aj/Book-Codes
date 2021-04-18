#include <stdio.h>
#include <stdint.h>

int main(void){
	int num1 = 10;
	int num2 = -10;

	uintptr_t *pu = &num1;
	printf("uintptr_t *pu = num1 = %u\n", *pu);
	printf("uintptr_t *pu = num2 = %u\n", *pu);

	return 0;
}
