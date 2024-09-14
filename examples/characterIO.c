#include <stdio.h>

int main() {
    int character;

    
    while ((character = getchar()) != EOF) {
        putchar(character);
        character = getchar();
    }
    return 0;
}