#include <stdio.h>
#include <stdlib.h>

void reorder(int n, int *x);

int main(void){
	int i, n, *x;
	/* read in a value for n */

	printf("How many numbers will be entered: ");
	scanf("%d", &n);

	/* allocate memory */

	x = (int *) malloc(n * sizeof(int));

	/* read in the list of numbers */

	for (i = 0; i<n; i++){
		printf("i=%d, x= ", i);
		scanf("%d", x+i);
	}

	/* reorder all array elements */

	reorder(n, x);

	/* Display reordered list of numbers */

	printf("Reordered list of numbers: \n");
	for (i=0; i<n; i++){
		printf("i = %d x = %d\n", i+1, *(x+i));
	}

	return 0;
}

void reorder(int n, int *x){
	int i, item, temp;
	for (item = 0; item < n-1; item++){
		for (i = item+1; i<n; i++){
			if (*(x+i) < *(x+item)){
				/* interchange two elements */
				temp = *(x+item);
				*(x+item) = *(x+i);
				*(x+i) = temp;
			}
		}
	}
	return ;
}
