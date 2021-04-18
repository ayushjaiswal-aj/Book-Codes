#include <stdio.h>

int *globalpi;

void function(){
	static int *staticpi;
	int num = 0;
	staticpi = &num;
	*staticpi = (*staticpi) + 100;
	printf("*staticpi = %d\n", *staticpi);
	printf("*globalpi = %d\n", *globalpi);
}

int main(void){
	int num = 0;
	globalpi = &num;
	*globalpi = 200;
	function();
	*globalpi = *globalpi + 200;
	function();

	return 0;
}	
