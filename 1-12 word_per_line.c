#include <stdio.h>
/*
Exercise 1-12. Write a program that prints its input one word per line. 
*/


int main()
{
    int c; 
    while ((c = getchar()) != EOF) {
       if (c == ' ') {
           putchar('\n');
           continue; 
       }
       putchar(c);
    }
}
/* 
 * Prints a sentence into one word per line
 * Expected Input:
 * Hello World Bye
 *
 * Expected Output:
 * Hello 
 * World
 * Bye
 *
 * Plan:
 * Convert Spaces into Newline
 */
