#include <stdio.h>

//#define NULL 0

int main(void){
	FILE *fpt;
	char c;

	fpt = fopen("sample.dat", "r");
	if (fpt ==  NULL){
		printf("ERROR - cannot open the designated file\n");
	} 
	else {
		do{
			c = getc(fpt);
			putchar(c);
		}
		while (c != '\n');
	}
	fclose(fpt);
}
