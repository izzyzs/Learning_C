// Created Saturday, September 14, 2024
/*
    PROMPT: Exercise 1-13. Write a program to print a histogram of 
    the lengths of words in its input. It is easy to draw the histogram 
    with the bars horizontal; a vertical orientation is more challenging.
*/

#include <stdio.h>

int main() {
    int character, i, j, lengthOfOneWord = 0;
    int lengthOfWords[10];

    for (i = 0; i < 10; i++)
        lengthOfWords[i] = 0;

    while ((character = getchar()) != EOF) {
        // printf("\nThe character: %c\n", character);
        if (character != ' ' && character != '\n' && character !='\t') {
            // printf("TRUE\n");
            lengthOfOneWord++;
            // printf("lengthOfOneWord: %d", lengthOfOneWord);
        } else {
            // printf("character != ' ': %d\ncharacter != '\\n': %d\ncharacter !='\\t': %d\n", (character != ' '), (character != '\n'), (character =='\t'));
            lengthOfWords[lengthOfOneWord-1]++;
            lengthOfOneWord = 0;
        }

    }
    
    for (i = 0; i < 10; i++) {
        printf("Words with length %d\t", i+1);
        for (j = 0; j < lengthOfWords[i]; j++)
            printf("-");
        printf("\n");
        // printf("%d",lengthOfWords[i]);
    }

    return 0;
}