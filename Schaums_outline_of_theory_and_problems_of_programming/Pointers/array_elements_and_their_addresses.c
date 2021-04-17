#include <stdio.h>

int main(void){
	static int x[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	int i;
	for (i=0; i<10; i++){
		printf("i= %d, x[i]= %d, *(x+i)= %d\n", i, x[i], *(x+i));
		printf("&x[i]= %X x+i= %X\n", &x[i], (x+i));
	}

	return 0;
}
