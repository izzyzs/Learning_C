// Created Saturday, September 14, 2024
// 8:32 pm

// Continued Sunday, September 15, 2024
// 4:05 pm
// copied longest-line program;
// 4:35 pm
// starting editing process;

/*
    PROMPT: Exercise 1-16. Revise the main routine of the
    longest-line program so it will correctly print the
    length of arbitrarily long input lines, and as much as
    possible of the text.
    
    I solved it by using i, the index counting integer as a tool to continuously
    update to the current line length while simultaneously avoiding writing 
    outside the bounds set by MAXLINE for the char buffer.

    COMPLETED: sunday september 15, 2024 9:21pm
*/

#include <stdio.h>
#define MAXLINE 1000

int getLine(char string[], int stringLimit);
void copy(char from[], char to[]);

int main() {
    int length;
    int maxLength;
    char currentLine[MAXLINE];
    char longestLine[MAXLINE];

    maxLength = 0;
    while ((length = getLine(currentLine, MAXLINE)) >  0)
        if (length > maxLength) {
            maxLength = length;
            copy(currentLine, longestLine);
        }
    if (maxLength > 0)
        printf("%s", longestLine);
        printf("%d", maxLength);
    return 0;
}

/**
 * getLine:     
 *      read a line into s, 
 *      return length
*/


int getLine(char string[], int stringLimit) {
    int currentChar, i = 0;

    while ((currentChar=getchar()) != EOF && currentChar != '\n') {
        if (i < stringLimit-1) {
            string[i] = currentChar;
            ++i;
        } else if (i < stringLimit) {
            string[i] = '\0';
            ++i;
        } else {
            ++i;

        }
    } 
    if (currentChar == '\n') {
        string[i] = currentChar;
        ++i;
    }
    
    return i;
}



/**
 * copy:
 *      copy 'from' into 'to';
 *      assume to is big enough
*/
void copy(char from[], char to[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

// Certainly! Here’s a 2000-character one-liner that combines various ideas into a continuous, elaborate statement: In the vast expanse of human experience, where the unyielding march of time relentlessly propels us forward into the ever-unfolding narrative of existence, we find ourselves traversing the intricate tapestry of life, woven with threads of joy and sorrow, triumph and defeat, love and loss, all while striving to grasp the elusive essence of purpose amidst the ceaseless ebb and flow of our daily endeavors, each moment presenting us with a myriad of opportunities and challenges, as we navigate through the labyrinthine corridors of our ambitions and dreams, seeking meaning in the seemingly mundane yet profoundly significant interactions we encounter, and endeavoring to understand the complex interplay of our actions and their repercussions on both our personal trajectories and the broader societal fabric, thus highlighting the perennial quest for balance and harmony in a world characterized by its inherent unpredictability and constant change, urging us to reflect on our values and aspirations, and to consider the impact of our choices on the environment and the communities with which we share this fragile and wondrous planet, all while appreciating the fleeting beauty of the present moment, acknowledging the lessons of the past, and remaining hopeful for the future, ever mindful of the intricate dance of fate and free will that shapes our journey through the ever-expanding universe of possibilities, as we strive to leave a meaningful imprint on the world, fostering connections and understanding, and embracing the shared humanity that binds us together in this grand and remarkable adventure called life. This one-liner aims to capture a broad spectrum of human experience and philosophical reflection in a single, continuous sentence.