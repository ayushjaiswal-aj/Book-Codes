#include <stdio.h>

int main(void){
	int line[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int *pl;
	int i;

	puts("line before assigning other values");
	for(i=0; i<8; i++){
		printf("line[%d]: %d\n", i, line[i]);
	}

	line[1] = line[0];
	line[3] = *(line + 2);
	*(line + 5) = line[4];
	*(line + 7) = *(line + 6);

	puts("line after assigning other values");
	for (i=0; i<8; i++){
		printf("line[%d]: %d\n", i, line[i]);
	}

	pl = &line[0];
	printf("&line[0] => pl: %p\n", pl);
	pl = line + 1;
	printf("(line + 1) => pl: %p\n", pl);
	return 0;
}
