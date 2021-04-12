#include <stdio.h>
#include <ctype.h>

int main(void){
	FILE * fpt;
	char c;

	/* open a new data file for writing only */
	fpt = fopen("sample.dat", "w");

	/* read each character and write its uppercase equivalent to the data file */

	do{
		putc(toupper(c = getchar()), fpt);
	}
	while (c != '\n');

	/* close the data file */
	fclose (fpt);
}
