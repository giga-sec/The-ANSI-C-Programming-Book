/*Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab
into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write
a function for the other direction as well, converting escape sequences into the real characters.
 */

#include <stdio.h>

#define MAX 1000

void escape(char s[], char t[]) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        switch(s[i]) {
            case '\n':
                t[i+j] = '\\';
                t[i+(++j)] = 'n';
                t[i+(++j)] = '\n';
                break;
            case '\t':
                t[i+j] = '\\';
                t[i+(++j)] = 't';
                t[i+(++j)] = '\t';
                break;
            default:
                t[i+j] = s[i];
                break;
        }
    }
    t[i+j] = '\0';  // Every string must end with \0
}

int main() {
    char message[MAX] = "What's up guys, it's Quandele Dingle here\n"
                        "I have been arrested for multiple crimes\n"
                        "Including battery on police officer\n"
                        "Grand theft, declaring war on Italy, and public indecency\n"
                        "\tI will be escaping prison on March 28th\n" 
                        "\tAfter that I will take over the world\n";
    char final_message[MAX];
    escape(message, final_message);
    printf("%s", final_message);
}
/* case '\n':
 *      
 * case '\t':
 * Okay so to print '\n' to string literal "\n", we'd need two elements of char
 *
 */
