#include <stdio.h>

void function(int n){
	printf("from function n: %d\n", n);
}

int main(void){
	void (*fp) (int);
	fp = function;

	fp(5);

	return 0;
}
