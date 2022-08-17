/*
Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time. 
*/

#include <stdio.h>
    
#define MAXLINE 1000 /* maximum input line length */
int getline(char line[], int maxline);
void reverse(char to[], char from[], int word_len);


/* print the longest input line */
int main() {
    int length_of_word; /* current line length */
    char line[MAXLINE]; /* current input line */
    char reversed_line[MAXLINE]; /* longest line saved here */
   

    while ((length_of_word = getline(line, MAXLINE)) > 0) {
        reverse(reversed_line, line, length_of_word);
        printf("%s", line, reversed_line);
    }
    return 0;
}

int getline(char s[],int lim) {
    int c, i;
    // Get the input and store it into an array
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
       s[i] = c;
       ++i;
    }
    s[i] = '\0';
    return i;  // Also returns the length of the string
}

void reverse(char to[], char from[], int word_len) {
    int i = 0;  int j = word_len - 1;
    while (j >= 0) {
        to[i] = from[j];
        i++;   j--;
    }
} 

/* Expected Input
 * A man
 *
 * Expected Output
 * nam a
 *
 * Plan:
 * How do we print the last character of a stream
 */
