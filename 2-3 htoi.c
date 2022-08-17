/*
Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. 
The allowable digits are 0 through 9, a through f, and A through F. 
*/

#include <stdio.h>
#include <math.h>

// All symbolic constants are used in hex_to_dec function
#define BASE_HEX 16
#define LTTR_HEXA 65
#define NUM_HEXA 48
#define SKIP_PREFIX 2

int power(double, double);


int hexa_len(char str[]) {
    // Also includes 0x in counting
    int len = 2; // Skip 2 characters ahead because prefix 0x 
    while (str[len] != '\0')
        len++;
    return len - 1;  // To make length assume it starts count at 0
}

long hex_to_dec(char hexa[]) {
    int len = hexa_len(hexa);
    int decimal = 0;  // Store the converted hex to dec here
    int decrement_len = len - SKIP_PREFIX;  // Exponent For formula of hex to decimal conversion
    
    for (int i = SKIP_PREFIX; i <= len; i++) {
        char ascii_char = (char)hexa[i];
        if (ascii_char > '9') 
            ascii_char = ascii_char - LTTR_HEXA + 10;
        else if (ascii_char <= '9') 
            ascii_char -= NUM_HEXA;
        decimal += ascii_char * (pow(BASE_HEX, decrement_len));  // Formula for hex to decimal conversion
        decrement_len--;
    } 
    return decimal;
}

int main() {
    // Get the user input
    char hx[50];
    printf("-- Hexadecimal to Decimal --");
    printf("\nHexadecimal: ");
    scanf("%s", &hx);
    printf("Decimal: %ld", hex_to_dec(hx));
}
/* Expected Input:
 * A hexadecimal with uppercase letters -> 0xE9
    * uppercase only as to be comptabile with ASCII numbering
 *
 * Expected Output:
 * The inputted hexadecimal will be converted to int
 * Inputed -> 0xE9
 * Output -> 233
 *
 * Plan:
 * --> CONVERT HEXADECIMAL IN STRING TO AN INT
 * I got it wrong, I only looked up INT to Hexa thinking it would be the same in vice versa
 * I came up a wrong plan
 * But this time, is better
 * C9 
 * C = 12 * (16 ^ 1)
 *     ASCII_CHAR * (16 ^ DECREMENTING_LEN)
 * To get the ASCII_CHAR
 * -> ascii_char = char - 15
 *
 *
 * To get DECREMENTING LEN
 * The len will be the (count of digits of hexadecimal) - 1 
 * Each iteration of loop will decrease the len till equal to 0
 * -> Get the length of the hexadecimal first
 *      ->
 *
 * --> GET USER INPUT
 * Get a user input using the while loop get char, maybe put it in a function
 * Then we put that into an array
 * So how we put it into an array is we also need to have a count for characters counted
 * Then the statement will be like this arr[word_count];
 * It will be declared 
 * Hmm okay, so the problem with this approach is the characters will be forgetten
 * Wrong Solution ^
 * 
 * --> CREATE ARRAY THAT STORES THE USER INPUT
 * Best to just declare a #define MAXLINE 1000
 * Then declare array with arr[MAXLINE];
 * 
 *
 * 
 */
