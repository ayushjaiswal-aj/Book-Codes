/* 
	count the number of vowels, consonants, digits, whitespace characters, and other characters in a line of text
*/

#include <stdio.h>
#include <ctype.h>

void scan_line(char [], int *,  int *, int *, int *, int *);

int main(void){
	char line[80];
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int whitespc = 0;
	int other = 0;

	printf("Enter a line of text below:\n");
	scanf("%[^\n]", line);

	scan_line(line, &vowels, &consonants, &digits, &whitespc, &other);

	printf("No. of vowels: %d\n", vowels);
	printf("No. of consonants: %d\n", consonants);
	printf("No. of digits: %d\n", digits);
	printf("No. of whitespace characters: %d\n", whitespc);
	printf("No. of other characters: %d\n", other);

	return 0;
}

void scan_line(char line[], int *pv, int *pc, int *pd, int *pw, int *po){
	char c;
	int count = 0;
	while ((c = toupper(line[count])) != '\0'){
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
			(*pv)++;
		}
		else if(c >= 'A' && c <= 'Z'){
			(*pc)++;
		}
		else if(c >= '0' && c <= '9'){
			(*pd)++;
		}
		else if (c ==' ' || c == '\t'){
			(*pw)++;
		}
		else {
			(*po)++;
		}
		count ++;
	}
	return ;
}
