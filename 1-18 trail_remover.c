/*
Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines.
*/

#include <stdio.h>

int main() {
    int c, first_char = 1;
    while((c = getchar()) != EOF) {
        if (first_char == 1) { 
            if (c == ' ') 
                continue;
            first_char = 0;
        }
        if (c == '\n') {
            first_char = 1;
            continue;
        }
        putchar(c);
    }
}
/* Remove trailing blanks, tabs from each line of input
 * Delete entirely blank lines
 *
 * Expected Input:
 *   Hello World
 *
 * Goodbye World
 *
 * Expected Output
 * Hello World
 * Goodbye World
 *
 * Rules of Program
 * IF -> A line with only 1 character exists
 * THEN -> Skip printing that line
 *
 * The sentence must start not with a ' '
 * So if ever that a sentence starts with ' ',
 * Then just skip printing that until it's a word
 * if first_char == true;
 *      while(c == ' ')
 *          continue;
 * putchar(c);  // Print it
 *
 * 
 */
