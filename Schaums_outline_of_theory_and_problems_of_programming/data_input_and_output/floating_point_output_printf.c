#include <stdio.h>

int main(void){
	double x = 5000.00, y = 0.0025;

	printf("%f %f %f %f\n", x, y, x*y, x/y);
	printf("%e %e %e %e\n", x, y, x*y, x/y);

	return 0;
}
