#include <stdio.h>
#include <stdlib.h>

typedef int (*fptr_operation) (int, int);

int add (int n1, int n2){
	return n1 + n2;
}

int sub(int n1, int n2){
	return n1 - n2;
}

int compute(fptr_operation operation, int n1, int n2){
	return operation(n1, n2);
}

int main(void){
	printf("%d\n", compute(add, 5, 6));
	printf("%d\n", compute(sub, 6, 5));

	return 0;
}
