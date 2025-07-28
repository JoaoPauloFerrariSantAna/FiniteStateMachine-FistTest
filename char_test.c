#include <stdio.h>
#include <ctype.h>

#define LENGTH 12

/* made with help from stack overflow */
/* source: https://stackoverflow.com/questions/3305735/kr-exercise-1-9-c */

/* this version was the one i tested before the one in the main file */
/*
 * i've founded easier to deal with when there
 * is a array than with put/getchar, honestly
*/

void run(int word_sz, char word[word_sz]) {
	int i = 0;

	while(word[i] != '\0') {
		if(word[i] == ' ') {
			printf(' ');

			/* keep advancing... */
			while(word[i] == ' ') ++i;
		}

		printf("%c", word[i]);
		++i;
	}
}

int main() {
	char phrase[LENGTH] = "banana   a";
	run(LENGTH, phrase);

	printf("\n");

	return 0;
}
