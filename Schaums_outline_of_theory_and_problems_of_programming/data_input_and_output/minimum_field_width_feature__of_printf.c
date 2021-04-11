#include <stdio.h>

int main(void){
	int i = 12345;
	float x = 345.678;

	printf("%3d %5d %8d\n", i, i, i);
	printf("%3f %10f %13f\n", x, x, x);
	printf("%3e %13e %16e\n", x, x, x);

	return 0;
}
