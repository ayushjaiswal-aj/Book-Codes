#include <stdio.h>

int main(void){
	char *titles[] = {	"A tale of two cities",
				"Wuthering heights",
				"Don quixote",
				"Odyssey",
				"Moby-Dick",
				"Hamlet",
				"Gulliver's travels"	
			};

	char **bestBooks[3];
	char **englishBooks[4];

	bestBooks[0] = &titles[0];
	bestBooks[1] = &titles[3];
	bestBooks[2] = &titles[5];
	
	englishBooks[0] = &titles[0];
	englishBooks[1] = &titles[1];
	englishBooks[2] = &titles[5];
	englishBooks[3] = &titles[6];

	printf("englishBooks[0]: %s\n", *englishBooks[0]);
	printf("englishBooks[1]: %s\n", *englishBooks[1]);
	printf("englishBooks[2]: %s\n", *englishBooks[2]);
	printf("englishBooks[3]: %s\n", *englishBooks[3]);
	
	printf("bestBooks[0]: %s\n", *bestBooks[0]);
	printf("bestBooks[1]: %s\n", *bestBooks[1]);
	printf("bestBooks[2]: %s\n", *bestBooks[2]);

	return 0;
}
