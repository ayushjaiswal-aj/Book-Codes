#include <stdio.h>
#include <stdlib.h>

int linecount (void);

int main(void){
	int n;
	int count = 0;
	int sum = 0;
	float avg;

	printf("Enter the text below\n");

	while ((n = linecount()) > 0){
		sum += n;
		count++;
	}

	avg = (float) sum / count;
	printf("\nAverage number of characters per line: %5.2f\n", avg);
}

int linecount (void){
	char line[80];
	int count = 0;
	
	while ((line[count] = getchar()) != '\n'){
		count++;
	}
	return (count);
}
