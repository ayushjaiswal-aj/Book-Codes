#include <stdio.h>
#include <stdlib.h>

int main(void){
	char c, d;
	float x, y;
	int i,j;

	puts("enter char\n");
	c = getchar();
	puts("enter floating point\n");
	scanf("%f", &x);
	puts("enter integer\n");
	scanf("%d", &i);

	putchar(c);
	putchar(d);
	printf("\n%f\t %f", x, y);
	printf("\n%d\t %d\n", i, j);

	return (0);
}

