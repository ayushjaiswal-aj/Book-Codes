#include <stdio.h>
#include <time.h>

int main(void){
	time_t start, finish;
	int count, n = 23;
	long int loop, loopmax = 10000000;
	register int f, f1, f2;

	time(&start);

	for (loop = 1; loop <= loopmax; loop++){
		//printf("-------------------loop: %ld-----------------------\n", loop);
		f1 = 1;
		f2 = 1;
		for (count = 1; count <= n; count++){
			f = (count < 3) ? 1 : f1 + f2;
			//printf("count: %d, f: %d, f1: %d, f2: %d\n", count, f, f1, f2);
			f2 = f1;
			f1 = f;
		}
	}
	count--;
	time(&finish);
	printf("i = %d F = %d\n", count, f);
	printf("elapsed time: %f seconds\n", difftime(finish, start));
}
