#include <stdio.h>

int main(void){
	int vector[] = {28, 42, 7};
	int *p0 = vector;
	int *p1 = vector + 1;
	int *p2 = vector + 2;

	printf("p2 - p0 = %d\n", p2 - p0);
	printf("p2 - p1 = %d\n", p2 - p1);	
	printf("p0 - p1 = %d\n", p0 - p1);
	printf("p0 - p2 = %d\n", p0 - p2);

	return 0;
}
