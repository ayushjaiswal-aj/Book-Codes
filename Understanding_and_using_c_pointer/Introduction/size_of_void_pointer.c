#include <stdio.h>

int main(void){
	size_t size = sizeof(void*);
	printf("sizeof(void*): %zu", size);
	return 0;
}
