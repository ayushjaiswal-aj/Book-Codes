#include <stdio.h>

int main (void){
	char line[80];
	scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]", line);
	
	printf("%s\n", line);

	return 0;
}
