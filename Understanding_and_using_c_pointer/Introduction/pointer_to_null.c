#include <stdio.h>

#define NULL ((void *) 0)

int main(void){
	int *pi = NULL;
	if (pi){
		printf("not null\n");
	}
	else {
		printf("is null\n");
	}

	return 0;
}
