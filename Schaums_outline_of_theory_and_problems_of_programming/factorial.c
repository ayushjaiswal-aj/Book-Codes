#include<stdio.h>

long long int factorial (int n);

int main(void){
	auto int n;
	printf("\nn = ");
	scanf("%d", &n);

	printf("\nn! = %lld\n", factorial(n));
}

long long int factorial(int n){
	auto int i;
	auto long long int prod = 1;

	if (n>1){
		for (i=2; i<=n; i++){
			prod *= i;
		}
	}
	return (prod);
}
