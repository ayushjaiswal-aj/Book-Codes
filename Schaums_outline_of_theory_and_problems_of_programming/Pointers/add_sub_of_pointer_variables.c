#include <stdio.h>

int main(void){
	int *px, *py;
	static int a[6] = {1, 2, 3, 4, 5, 6};
	px = &a[0];
	py = &a[5];
	printf("px= %p, py= %p\n", px, py);
	printf("py - px = %p\n", py-px);

	return 0;
}
