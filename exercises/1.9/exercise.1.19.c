/*
    Exercise 1-19. Write a function reverse(s) that reverses the character 
    string s. Use it to write a program that reverses its input a line at a time. 
*/

#include <stdio.h>
#include <stdlib.h>


char* mySizeArray(int size);


enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    FILE *fil;
    fil = fopen("filename.txt", 'w');
    enum Month myVar = 8;
    printf("%d\n", myVar);

    char* ish = mySizeArray(4);
}

char* mySizeArray(int size) {
    char* list = (char*)malloc(size * sizeof(char));
    return list;
}