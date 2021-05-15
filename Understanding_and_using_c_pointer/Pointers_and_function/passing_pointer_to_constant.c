#include <stdio.h>
#include <stdlib.h>

void passing_address_of_constants(const int *num1, int *num2){
	*num2 = *num1;
}

int main(void){
	const int limit = 100;
	int result = 5;
	passing_address_of_constants(&limit, &result);
	printf("Before: result = 5\nAfter: result = %d\n", result);
	return 0;
}
