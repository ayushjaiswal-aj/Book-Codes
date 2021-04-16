#include <stdio.h>

int main(void){
	char item[20];
	int partno;
	float cost;

	char *pc;
	int *pd;
	float *pf;

	puts("Enter string, integer and float");
	scanf("%s %d %f", item, &partno, &cost);
	printf("item: %s\npartno: %d\ncost: %f\n", item, partno, cost);

	pc = item;
	pd = &partno;
	pf = &cost;

	puts("Enter same data again");
	scanf("%s %d %f", pc, pd, pf);
	printf("item: %s\npartno: %d\ncost: %f\n", item, partno, cost);

	return 0;
}
