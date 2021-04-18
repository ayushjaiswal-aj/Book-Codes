#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void initialize(char english[], char piglatin[]);
void readinput(char english[]);
int countwords(char english[]);
void convert(int words, char english[], char piglatin[]);
void writeoutput(char piglatin[]);

int main(void){
	char english[80], piglatin[80];
	int words;
	printf("welcome to the piglatin generator\n");
	printf("Type \'END\' when finished\n");

	do {
		/* process a new line of text */
		initialize(english, piglatin);
		readinput(english);

		/* test for stopping condition */
		if (toupper(english[0]) == 'E' && toupper(english[1]) == 'N' && toupper(english[2]) == 'D'){
			break;
		}
		/* count words in the line */
		words = countwords(english);

		/* convert english into piglatin */
		convert(words, english, piglatin);
		writeoutput(piglatin);
	}
	while (words>=0);
	printf("naveha aa icena ayda (have a nice day) \n");
}

/* initialize the character arrays with blank spaces */
void initialize(char english[], char piglatin[]){
	int count;
	for (count=0; count < 80; count++){
		english[count] = piglatin[count] = ' ';
	}
	return ;
}

/* read one line of English text */
void readinput(char english[]){
	int count = 0;
	char c;
	while ((c = getchar()) != '\n'){
		english[count] = c;
		count++;
	}
	return ;
}

/* scan the english text and determine the number of words */
int countwords(char english[]){
	int count, words = 1;
	for (count = 0; count < 79; count++){
		if (english[count] == ' ' && english[count + 1] != ' '){
			words++;
		}
	}
	return (words);
}

void convert(int words, char english[], char piglatin[]){
	int n, count;
	int m1 = 0;
	int m2;
	/* convert each word */
	for (n=1; n<=words; n++){
		count = m1;
		while(english[count] != ' '){
			m2 = count++;
		}
		/* transpose the first letter and add 'a' */
		for (count = m1; count<m2; count++){
			piglatin[count + (n-1)] = english[count+1];
		}
		piglatin[m2 + (n - 1)] = english[m1];
		piglatin[m2 + n] = 'a';

		/* reset the initial marker */
		m1 = m2 + 2;
	}
	return ;
}

/* display the line of text in piglatin */
void writeoutput(char piglatin[]){
	int count = 0;
	for (count = 0; count < 80; count++){
		putchar(piglatin[count]);
	}
	printf("\n");
	return ;
}
