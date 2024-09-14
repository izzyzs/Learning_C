// created saturday september 14, 2024
/*
PROMPT: Exercise 1-9. Write a program to copy its input to its output, replacing each 
string of one or more blanks by a single blank.
*/

#include <stdio.h>

int main() {
    int lastChar;
    int character;

    while((character = getchar()) != EOF) {
        if (character != ' ') {
            if (lastChar == ' ') {
                putchar(' ');
                putchar(character);
                lastChar = character;
                continue;
            }
            putchar(character);
            lastChar = character;
        } else {
            lastChar = character;
            continue;
        }
    }
    return 0;
}