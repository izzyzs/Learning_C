// Created Saturday September 14, 2024
/*
    PROMPT: Exercise 1-12. Write a program that prints its input one 
    word per line.
*/

#include <stdio.h>

int main() {
    int character;
    
    while ((character = getchar()) != EOF) {
        if (character == ' ' || character == '\t' || character == '\n') {
            putchar('\n');
        } else {
            putchar(character);
        }
    }
    return 0;
}