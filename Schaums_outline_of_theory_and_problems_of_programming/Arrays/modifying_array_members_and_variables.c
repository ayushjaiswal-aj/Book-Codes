#include <stdio.h>

int a=1;
void modify(int b, int c[]);

int main(void){
	int b = 2;
	int count, c[3];
	printf("From main, before calling the function: \n");
	printf("a = %d, b = %d\n", a, b);
	for (count = 0; count < 3; count++){
		c[count] = 10 * (count + 1);
		printf("c[%d] = %d\n", count, c[count]);
	}

	modify(b, c);
	printf("From main, after calling the function: \n");
	printf("a = %d, b = %d\n", a, b);
	for (count = 0; count <= 2; count++){
		printf("c[%d] = %d\n", count, c[count]);
	}
}

void modify(int b, int c[]){
	int count;
	printf("From the function, after modifying the values: \n");
	a = -999;
	b = -999;
	printf("a = %d, b = %d\n", a, b);
	for (count = 0; count < 3; count++){
		c[count] = -9;
		printf("c[%d] = %d\n", count, c[count]);
	}
	return ;
}
