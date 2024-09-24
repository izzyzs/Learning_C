// Created Sunday September 15, 2024

/*
    Exercise 1-17. Write a program to print all input lines 
    that are longer than 80 characters.
*/
#include <stdio.h>
#define MAXLINE 1000
#define MINLENGTH 80

int longerThan80(char string[], int stringLimit);

int main() {
    char currentLine[MAXLINE];

    while (longerThan80(currentLine, MAXLINE) > 0) {
        if (longerThan80(currentLine, MAXLINE) > MINLENGTH) {
            printf("%s", currentLine);
        }
    }

    longerThan80(currentLine, MAXLINE);
    return 0;
}

// 111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

int longerThan80(char string[], int stringLimit) {
    int character, i;

    for (i = 0; i < stringLimit - 1 && (character = getchar()) != EOF && character != '\n'; ++i) {
        string[i] = character;
    }

    if (character == '\n') {
        string[i] = character;
        ++i;
    }

    string[i] = '\0';

    return i;
}