#include <stdio.h>

int main(void){
	int num = 0;
	int *pi = &num;

	printf("Address of num: %d Value: %d\n", &num, num);
	printf("Address of pi: %d Value: %d\n", &pi, pi);

	printf("use of different format spacifiers\n");

	printf("Address of pi: %d Value: %d\n", &pi, pi);
	printf("Address of pi: %x Value: %x\n", &pi, pi);
	printf("Address of pi: %p Value: %p\n", &pi, pi);

	return 0;
}
