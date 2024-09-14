// Created Saturday, September 14, 2024
/*
    PROMPT: Exercise 1-6: Verify that the expresion getchar() != EOF is 0 or 1.
*/

#include <stdio.h>

int main() {
    int characterIn;
    int isEOF;

    do {
        characterIn = getchar();
        isEOF = characterIn == EOF;
        printf("%d", isEOF);
        printf("\n");
    } while (characterIn != EOF);

    return 0;
}


/*
    example output:

    0
    0
    0
    0
    0
    0
    0
    0
    1

 */