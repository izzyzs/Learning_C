// Created Saturday, September 14, 2024
/*
    PROMPT: Exercise 1-10. Write a program to copy its input to its output,
    replacing each tab by \t, each backspace by \b, and each backslash by \\.
    This makes tabs and backspaces visible in an unambiguous way.
*/

#include <stdio.h>

int main() {
    int character;

    while ((character = getchar()) != EOF) {
        switch (character) {
        case '\t':
            putchar('\\');
            putchar('t');
        case '\b':
            putchar('\\');
            putchar('b');
        case '\\':
            printf("\\");
        default:
            putchar(character);
        }
    }
    return 0;
}