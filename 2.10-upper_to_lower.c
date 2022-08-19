/*Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case,
with a conditional expression instead of if-else.
*/
#include <stdio.h>

void print_tolower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        int to_lower = 32; // gap between 'A' and 'a'
        if (str[i] >= 'a')
            continue;
        else if (!(str[i] >= 'A' && str[i] <= 'Z'))
            continue;
        else
            str[i] += to_lower;
    }
    printf("%s", str);
}

void print_improved_tolower(char str[]) {
    int to_lowr = 32;  // Gap between 'A' and 'a'
    int c;  // to store the char's on str
    int test;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        (!(c >= 'A' && c <= 'Z')) ?: (str[i] += to_lowr);
    }
    printf("%s", str);
}

int main() {
    char str[] = "H3llo World123\n";
    print_tolower(str);

    char new_str[] = "Hello WORLDIE";
    print_improved_tolower(new_str);
}
/* Improved Version of print_tolower()
 * (str[i] >= 'a') || (!(str[i] >= 'A' && str[i] <= 'Z'))
 * Make a compact version of this above ^
 * 
 * Or we could instead see if a letter is uppercase
 * Which is, (str[i] >= 'A' && str[i] <= 'Z')
 * then that's where we do str[i] += to_lower;
 */


/* Expected Input
 * A string with any characters
 * H3llo World123
 *
 * Expected Output
 * A lowercased formatted string
 * h3llo world123
 *
 * Logic:
 * - function accepts non-alpha char but doesn't convert them
 * - skip alpha who are already in lowercase
 * - convert uppercase to lowercase
 * 
 * Algo
 * Loop: Scan Each letter
 *  If char is lowercase
 *      go back to loop
 *  If char is not alpha
 *      go back to loop
 *  else // assumes char is uppercase and alpha
 *      convert uppercase char to lower
 *      save that new char to the array's index
 *  
 *
 * Plan:
 * Identify if char is lowercase
 *  then do nothing
 * How to? 
 * if char >= 'a'
 *  
 *
 * Identify if char is not alpha
 *  then do nothing
 * How to?
 * if char >= 'A' AND char <= 'Z'
 *
 * Identify if char is UPPERCASE
 * We could use else
 * 
 * Scan Each letter
 * char str[1000] = "H3llo world123";
 * for (int i = 0; str[i] != '\0'; i++)
 * 
 * Convert a uppercase char to lower
 * 'A' to 'a'
 * 65 to 97
 * 32 gap
 * initialized -> int to_lower = 32
 * 'A' + to_lower;
 * str[0] = 'A' + to_lower;  // save new letter
 *
 *
 */
