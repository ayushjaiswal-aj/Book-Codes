#include <stdio.h>

int main(void){
	float x =123.456;

	printf("%7f %7.3f %7.1f\n", x, x, x);
	printf("%12e %12.5e %12.3e\n", x, x, x);

	return 0;
}
