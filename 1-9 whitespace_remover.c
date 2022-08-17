/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank. 
*/


#include <stdio.h>

int main() {
	int c = 0, blank_counter = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			blank_counter++;
		}
		else  // Assumes c != ' '
			blank_counter = 0;  // reset the blank_counter
		if (blank_counter >= 2) {
			blank_counter--;
			continue;
		}
		putchar(c);
	}
}

/* It translates extra blanks into a single blank
 * Basically, it prints individual characters and skips multiple blanks
 * Expected Input:
 * Hello                    World
 *
 * Expected Output:
 * Hello World
 * 
 * Plan:
 * We could count how many ' ' there are
 * 
 * If the current whitespace_counter exceed 2
 * Then we could just delete the incoming characters as long as its not a blank
 *
 */ 
