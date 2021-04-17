#include <stdio.h>

int main(void){
	int n, count;
	float avg, d, sum;
	float list[100];

	/* read value of n */
	printf("how many numbers will be averaged\n");
	scanf("%d", &n);

	for (count=0; count<n; count++){
		printf("i= %d x = ", count);
		scanf("%f", &list[count]);
		sum += list[count];
	}

	avg = sum/n;
	printf("The average is %5.2f\n", avg);
	
	/* calculate and display the deviation about the average */

	for (count=0; count < n; count++){
		d = list[count] - avg;
		printf("i= %d, x= %5.2f, d= %5.2f\n", count, list[count], d);
	}

	return 0;
}
