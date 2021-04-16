#include <stdio.h>

int main(void){
	int u = 3;
	int v;
	int *pu;
	int *pv;

	pu = &u;
	v = *pu;
	pv = &v;

	printf("u=%d &u=%X pu=%X *pu=%d\n", u, &u, pu, *pu);
	printf("v=%d &v=%X pv=%X *pv=%d\n", v, &v, pv, *pv);

	return (0);
}
