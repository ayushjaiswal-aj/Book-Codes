#include <stdio.h>

long int fibonacci (int count);

void main(void){
	int count, n;

	printf("How many fibonacci numbers?\n");
	scanf("%d", &n);
	for (count = 1; count <= n; count++){
		printf("i = %2d  F = %ld\n", count, fibonacci(count));
	}
}

long int fibonacci(int count){
	static long int f1 = 1, f2 = 1;
	long int f;

	if (count < 3){
		f = 1;
	} else {
		f = f1 + f2;
	}
	f2 = f1;
	f1 = f;
	return f;
}
