#include <stdio.h>
#include <ctype.h>

int main (void){
	char letters[80];
	int count, tag;

	for (count = 0; (letters[count] = getchar()) != '\n'; count++);

	tag = count;

	for (count = 0; count < tag; count++){
		putchar(toupper(letters[count]));
	}
}

