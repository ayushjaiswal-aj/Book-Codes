#include <stdio.h>

int main(void){
	int v = 3;
	int *pv;
	pv = &v;
	printf("*pv= %d v= %d\n", *pv, v);
	*pv = 0;
	printf("*pv= %d v= %d\n", *pv, v);

	return 0;
}
