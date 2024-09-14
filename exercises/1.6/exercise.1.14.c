// Created Saturday September 14, 2024
/*
PROMPT: Exercise 1-14. Write a program to print a histogram of the 
frequencies of different characters in its input.
*/
#include <stdio.h>

int main() {
    int character = 0, i, j, lowerCharFrequency[26], upperCharFrequency[26], everyOtherCharFrequency = 0, numbersFrequency[10];

    for (i = 0; i < 26; i++) {
        lowerCharFrequency[i] = 0;
        upperCharFrequency[i] = 0;
        if (i > 11) {
            numbersFrequency[i] = 0;
        }
    }


    while ((character = getchar()) != EOF) {
        printf("\n%c: %d\n", character, character);
        printf("(character >= 'A' && character <= 'Z'): %d\n", (character >= 'A' && character <= 'Z'));
            printf("(character >= 'a' && character <= 'z'): %d\n", (character >= 'a' && character <= 'z'));
        if (character >= 'A' && character <= 'Z') {
            printf("%c", character);
            ++upperCharFrequency[character - 'A'];
        } else if (character >= 'a' && character <= 'z') {
            ++lowerCharFrequency[character - 'a'];
        } else if (character >= '0' && character <= '9') {
            ++numbersFrequency[character-'0'];
        } else {
            ++everyOtherCharFrequency;
        }
    }

    for (i = 0; i < 26; i++) {
        printf("%c\t",i+'a');
        for(j = 0; j < lowerCharFrequency[i]; j++)
            printf("*");
        printf("\n");
    }
    for (i = 0; i < 26; i++) {
        printf("%c\t",i+'A');
        for(j = 0; j < upperCharFrequency[i]; j++)
            printf("*");
        printf("\n");
    }
    for (i = 0; i < 10; i++) {
        printf("%c\t",i+'0');
        for(j = 0; j <  numbersFrequency[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}