#include <stdio.h>

void modify(int a[]);

int main(void){
	int count, a[3];
	printf("From main, before calling the function: \n");
	for (count=0; count<3; count++){
		a[count] = count + 1;
		printf("a[%d] = %d\n", count, a[count]);
	}

	modify(a);
	printf("From main, after calling the function: \n");
	for (count=0; count <= 2; count++){
		printf("a[%d]= %d\n", count, a[count]);
	}

	return 0;
}

void modify(int a[]){
	int count;
	printf("From the function, after modifying the values: \n");
	for (count =0; count <= 2; count++){
		a[count] = -9;
		printf("a[%d] = %d\n", count, a[count]);
	}
	return ;
}
