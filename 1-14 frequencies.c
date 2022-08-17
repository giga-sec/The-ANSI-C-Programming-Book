/*
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input. 
*/

#include <stdio.h>

#define MAX_ASCII_CHAR 127

int main() {
    char c = 'A';
    int appearance_character[MAX_ASCII_CHAR];

    for (int i = 0; i < MAX_ASCII_CHAR; i++) {
        appearance_character[i] = 0;
    }

    int maximum_length = 0;
    while ((c = getchar()) != EOF) {
        int num = c;
        appearance_character[num]++;
        if (appearance_character[num] > maximum_length)
                maximum_length = appearance_character[num];
    }

    for (int i = 0; i < MAX_ASCII_CHAR; i++) {
        int num = appearance_character[i];
        if (num > 0) {
            if (i == ' ')
                printf("\\b |");
            else if (i == '\n')
                printf("\\n |");
            else
                printf("%c  |", i);
            for (int j = 0; j < num; j++)
                printf(" - ");
            printf("\n");
        } 
    }

    printf("    ");    
    for (int i = 1; i <= maximum_length; i++) {
        if (i >= 10)
            printf("%i ", i);
        else
            printf(" %i ", i);
    }
}
/* Print a histogram of frequencies of different characters in the input
 * Expected Input
 * two words
 *
 * Expected Output
 *   | - 
 * d | -
 * o | - -
 * r | - 
 * t | - 
 * w | -
 * s | - -
 *     1 2
 *
 * Things that will be tracked
 * Highest amount of apperance in the word
 * The number of apperance of characters
 *
 * Plans to track
 * Use an array
 * The elements will be the amount of apperance
 * The indeces will be the ascii value in it
 * We're gonna use the ASCII value of a character to determine the index location of a character
 * Maximum length will be 127 of an array
 *
 * Things that will not be included in the histogram
 * - Characters that have zero appearance in the input
 * - 
 */
