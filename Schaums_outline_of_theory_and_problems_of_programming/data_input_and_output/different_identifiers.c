#include <stdio.h>

int main(void){
	short ix, iy;
	long lx, ly;
	double dx, dy;

	scanf("%hd %ld %lf", &ix, &lx, &dx);
	scanf("%3ho, %7lx %15le", &iy, &ly, &dy);
	printf("ix: %hd, lx: %ld, dx: %lf\n", ix, lx, dx);
	printf("iy: %3ho, ly: %7lx, dy: %15le\n", iy, ly, dy);

	return 0;
}
