#include <stdio.h>

int main(void){
	size_t sizet = -5;
	printf("%d\n", sizet);
	printf("%zu\n", sizet);

	sizet = 5;
	printf("%d\n", sizet);
	printf("%zu\n", sizet);

	return 0;
}
