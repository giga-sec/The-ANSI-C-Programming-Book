/*
Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way. 
*/

#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t   ");
            continue;
        }
        putchar(c);
    }
}
/* Replaces tab with \t   with their corresponding value
 * Expected Input
 * Hello    World 
 *
 * Expected Output
 * Hello\t   World
 *
 * Plan: 
 *  
 */
