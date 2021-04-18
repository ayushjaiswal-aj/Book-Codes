#include <stdio.h>

int main(void){
	int vector[] = {28, 41, 7};
	int *pi = vector + 2;

	printf("%d\n", *pi);
	pi--;
	printf("%d\n", *pi);
	pi--;
	printf("%d\n", *pi);

	return 0;
}
