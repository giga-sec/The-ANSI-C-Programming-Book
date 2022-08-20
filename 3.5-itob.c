/*Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b
character representation in the string s. In particular, itob(n,s,16) formats s as a
hexadecimal integer in s.
*/

#include <stdio.h>

#define MAX 1000
#define TO_HEXA 55
#define TO_CHAR '0'

void itob(int n, char s[], int b) {
    int i = 0;  // Counter for temp
    int j = 0;  // Counter for s
    int min_len = 0, max_len;

    if (b == 2 || b == 8)
        while (n > 0) {
            s[i++] = (n % b) + TO_CHAR;
            n /= b;
        }
    else if (b == 16) {
        char hex;
        while (n > 0) {
            hex = (n % b);
            if (hex >= 10)
                s[i++] = hex + TO_HEXA;
            else
                s[i++] = hex + TO_CHAR;
            n /= 16;
        }
    }

    // Reverse the temp string and store it to s string
    max_len = i - 1;  // - 1 because extra
    while (min_len <= max_len) {
        char temp = s[max_len];
        s[max_len] = s[min_len];
        s[min_len] = temp;

        --max_len;
        ++min_len;
    }

    s[++i] = '\0';
}

int main() {
    char str[MAX] = "";
    int base_num = 16;
    itob(30, str, base_num);
    printf("Base %i: %s", base_num, str);
}
/* Expected Input
 * itob(30, s[], 2)  // base 2
 *                   // base 8
 *                   // base 16
 *
 * Expected Output
 * s[] = 0001 1110
 * s[] = 036
 * s[] = 0x1E
 *
 * Plan:
 * Convert decimal to binary
 *
 *
 *
 * Format of output
 * Base 2 = leading zeros of bits must be included if there is
*         = it must be set of four bits
*  Base 8 = leading zeros if needed
*         = it must be set of three bits
*  Base 16 = 0x prefix must be there
*  Eeh forget about the format of the output, I'm lazy right now
 */
