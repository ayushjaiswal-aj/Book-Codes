#include <stdio.h>

int main(void){
	int num = 5;
	int *pi = &num;

	printf("%d\n", *pi);
	*pi = 50;
	printf("*pi = 50\n");
	printf("*pi: %d\n", *pi);
	printf("num: %d\n", num);

	num = 500;
	printf("num = 500\n");
	printf("*pi: %d\n", *pi);
	printf("num: %d\n", num);

	return 0;
}
