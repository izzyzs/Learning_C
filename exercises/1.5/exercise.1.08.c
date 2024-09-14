// Created Feb 15, 2024
#include <stdio.h>


int main() {
	int character, numberOfBlanks = 0, numberOfTabs = 0, numberOfNewlines = 0;

	while ((character=getchar()) != EOF) {
		if (character == ' ')
			numberOfBlanks++;
		else if (character == '\t')
			numberOfTabs++;
		else if (character == '\n')
			numberOfNewlines++;
	}
	printf("There are %d blanks,\n%d tabs,\nand %d newlines!\n", numberOfBlanks, numberOfTabs, numberOfNewlines);
}
