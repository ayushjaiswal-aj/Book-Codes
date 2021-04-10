#include <stdio.h>

int main(void){
	char line[80];
	
	scanf("%[^\n]", line);
	printf("line: %s", line);
	
	return (0);
} 
