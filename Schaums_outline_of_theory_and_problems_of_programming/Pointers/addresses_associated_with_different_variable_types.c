#include <stdio.h>

int main(void){
	int *px;
	int i =1;
	float f = 0.3;
	double d = 0.005;
	char c = '*';
	
	px = &i;
	printf("Values: i=%i, f=%f, d=%f, c=%c\n", i, f, d, c);
	printf("Addresses: &i=%p, &f=%p, &d=%p, &c=%p\n", &i, &f, &d, &c);
	printf("Pointer values: px: %p, px+1 = %p, px+2 = %p, px+3 = %p", px, px+1, px+2, px+3);

	return 0;
}
