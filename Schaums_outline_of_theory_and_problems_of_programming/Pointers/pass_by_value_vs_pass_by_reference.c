#include <stdio.h>

void function1 (int u, int v);
void function2 (int *pu, int *pv);

int main(void){
	int u = 1;
	int v = 3;

	printf("Before calling function1: u=%d, v=%d\n", u, v);
	function1(u, v);
	printf("After calling function1: u=%d, v=%d\n", u, v);

	printf("Before calling function2: u=%d, v=%d\n", u, v);
	function2(&u, &v);
	printf("After calling function2: u=%d, v=%d\n", u, v);

	return 0;
}

void function1(int u, int v){
	u=0;
	v=0;
	printf("Within function1: u=%d, v=%d\n", u, v);
	return ;
}

void function2(int *pu, int *pv){
	*pu = 0;
	*pv = 0;
	printf("Within function2: *pu%d, *pv=%d\n", *pu, *pv);
	return ;
}
