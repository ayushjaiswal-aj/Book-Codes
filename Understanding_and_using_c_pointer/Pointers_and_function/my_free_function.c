#include <stdio.h>
#include <stdlib.h>

void safe_free(void **pp){
	if(pp != NULL && *pp != NULL){
		free(*pp);
		*pp = NULL;
	}
}

int main(void){
	int *p = NULL;
	p  = (int*)malloc(sizeof(int));
	*p = 500;
	printf("p = %p\t*p = %d\n", p, *p);
	safe_free(&p);
	printf("Segmentation fault is due to accessing of freed pointer\n");
	printf("p = %p\t*p = %d\n", p, *p);
	
	return 0;
}
