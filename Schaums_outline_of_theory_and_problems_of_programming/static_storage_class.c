#include <stdio.h>
#include <stdlib.h>

int a = 10, b = 20, c = 30;

void show_global_variables();
void dummy();

int main (void){
	static int a = 100;
	show_global_variables();
	dummy();
	dummy();
	dummy();
	show_global_variables();
	
	return (EXIT_SUCCESS);
}

void dummy(){
	static int c = 30;
	c = c * 10;
	printf("dummy: a = %d, b = %d, c = %d\n", a, b, c);
}

void show_global_variables(){
	printf("show_global variabel: a = %d, b = %d, c = %d\n", a, b, c);
}
