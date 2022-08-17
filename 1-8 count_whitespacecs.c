/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines. 
*/

#include <stdio.h>

int main()
{
	int blanks = 0, tabs = 0, newlines = 0;
	int c = getchar();
	while(c != EOF)  // Get a string of characters from input
	{
		if (c == ' ')
			blanks++;
		else if (c == '\t')
			tabs++;
		else if (c == '\n') 
			newlines++;
		c = getchar();
	}
	printf("Blanks: %i\n", blanks);
	printf("Tabs: %i\n", tabs);
	printf("Newlines: %i\n", newlines);
}

/* 
 * Count the number of blanks, tabs and newlines
 * ## Expected Input:
 * A string
 * Like -> "Hello, this is me. Mario :D"
 * Or probably the getchar while loop
 *
 *
 * ## Expected Output:
 * Blanks: 3
 * Tabs: 5
 * Newlines: 5 
 * 
 * ## How to detect blanks
 * 
*/
