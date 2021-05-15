#include <stdio.h>
#include <stdlib.h>

void swap_with_pointers(int *pnum1, int *pnum2){
	int tmp;
	tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}

int main(void){
	int n1 = 5;
	int n2 = 10;
	swap_with_pointers(&n1, &n2);
	return 0;
}
