#include <stdio.h>
#include <ctype.h>

/* made with help from stack overflow */
/* source: https://stackoverflow.com/questions/3305735/kr-exercise-1-9-c */

void run() {
	char word;

	while((word = getchar()) != EOF) {
		if(word == ' ') {
			printf(" ");

			/* keep advancing... */
			while(word == ' ') word = getchar();
		}
		putchar(word);
	}
}

int main() {
	run();
	printf("\n");

	return 0;
}
