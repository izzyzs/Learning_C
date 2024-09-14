// Created Saturday, September 14, 2024
// count digits, white space, other

#include <stdio.h>

int main() {
    int character, i, numberOfWhites, numberOfOthers;
    int numberOfDigits[10];

    numberOfWhites = numberOfOthers = 0;
    for (i = 0; i < 10; ++i)
        numberOfDigits[i] = 0;
    
    while ((character = getchar()) != EOF)
        if (character >= '0' && character <= '9')
            ++numberOfDigits[character-'0'];
        else if (character == ' ' || character == '\n' || character == '\t')
            ++numberOfWhites;
        else
            ++numberOfOthers;
    
    printf("digits =");
    for(i = 0; i < 10; ++i)
        printf(" %d", numberOfDigits[i]);
    printf(", white space = %d, other = %d\n",
        numberOfWhites, numberOfOthers);
    return 0;
}