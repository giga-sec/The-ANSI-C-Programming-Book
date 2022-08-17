/*
 * Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
 * where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. 
 */

#include <stdio.h>

void any(char str1[], char str2[]) {
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) 
        for (j = 0; str2[j] != '\0'; j++)
            if (str1[i] == str2[j]) {
                printf("Found Char: %c", str1[i]);
                printf("\nAt Index: %i", j);
            }
}

int main() {
    char inspirational[] = "FOUR!";
    char word[] = "WOTAH";
    any(inspirational, word);
}
/* Oh I am familiar with this function
 * It's the same as the any() function in python
 * Where it returns True if a char in string exists on another string's char
 * But this exercise wants us to return the index position
 *
 * Expected Input:
 * char inspirational[] = "FOUR!";
 * char word[] = "WOTAH";
 * 
 * Expected Output:
 * Found Char: O
 * At Index: 1
 *
 */
