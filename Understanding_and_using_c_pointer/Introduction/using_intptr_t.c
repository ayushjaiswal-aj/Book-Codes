#include <stdio.h>
#include <stdint.h>

int main(void){
	int num = 10;
	intptr_t *pi = &num;
	printf("intptr_t *pi = num = %d\n", *pi);

	return 0;
}
