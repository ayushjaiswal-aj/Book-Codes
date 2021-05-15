#include <stdio.h>
#include <stdlib.h>

int (*fptr)(int);

int square(int num){
	return num * num;
}

int main(void){
	int n = 5;
	fptr = square;
	printf("%d square is %d\n", n, fptr(n));
	return 0;
}
