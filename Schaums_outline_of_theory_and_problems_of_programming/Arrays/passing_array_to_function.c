#include <stdio.h>

float average(int n, float x[]);

int main(void){
	int n, i;
	float avg;
	float list[100];
	
	puts("Enter how many numbers will you enter");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		printf("list[%d]: \n", i);
		scanf("%f", &list[i]);
	}

	avg = average(n, list);
	printf("average: %f\n", avg);
	return 0;
}

float average(int n, float x[]){
	int i;
	float sum = 0;
	for (i=0; i<n; i++){
		sum += x[i];
	}
	return (sum/n);
}
