#include <stdio.h>
#include <stdlib.h>
#include <./data.c>

static int n;

void test (void);

int main(void){
	test ();
	return (0);
}

void test (void){
	printf("n = %d\n", n);
}
