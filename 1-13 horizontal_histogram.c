/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/


#include <stdio.h>

#define MAX_WORDS 3

int main()
{
    int c, max_length, char_length = 0;
    int index = 0, length_of_words[MAX_WORDS];
    printf("Input a %i worded sentence below", MAX_WORDS);
    printf("\nHere -> ");
    // To get the value and evaluate the lengths of words
    while ((c = getchar()) != EOF) {
        if ((c == ' ') || (c == '\n')) {
            length_of_words[index] = char_length;
            if (char_length > max_length)
                max_length = char_length;
            char_length = 0;  index++;  continue;
        }
        char_length++;
    }
    // To draw the chart
    for (int i = 0; i < MAX_WORDS; i++) {
        int word_length = length_of_words[i];
        printf("%i. | ", i + 1);
        for (int j = 0; j < word_length; j++)
                printf(" -"); 
        printf("\n"); 
    }
    // To draw the 1 2 3 4 5 thing
    printf("      ");
    for (int i = 1; i <= max_length; i++)
        printf("%i ", i);
}
/*Horizontal Histogram
 * Expected Input
 * A word
 *
 * Expected Output
 * A    | - 
 * word | - - - - 
 *        1 2 3 4 
 *
 * Plan:
 * We first want to have a function that counts the words
 * Purpose - It help us determine the maximum length of the dashes in histogram
 *
 * In displaying the output
 * Word itself here |
 * word | %
 * 
 * We could have an array that stores the length of each word
 *
 * Count length of word
 * Basically, count each character until the whitespace
 *
 * If the maximm legnth of word is 5
 * and we only have nat, which is legnth of 3
 * so we have two spaces left
 * basically, we just add a space until the loop reaches to 5
 */      
