/*Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in...
 *... s1 that matches any character in the string s2. */


#include <stdio.h>

// Delete any char in str1 where the char exists in str2
void squeeze(char str1[], char str2[]) {
   int i, j, no_exist;

   for (i = 0; str1[i] != '\0'; i++) { 
       j = no_exist = 0;
       while (str2[j] != '\0') {
            if (str1[i] == str2[j++]) {
                no_exist = 1; // 1 means char in str1 exists on str2's char
                break;
            }
        }
        if (no_exist == 0) 
            printf("%c", str1[i]);
   }
}

int main() {
    char a[] = 	"What's up guys! It's Quandale Dingle here!" 
		"\nI have been arrested for multiple crimes including:" 
		"\n\tBattery on a police officer, Grand theft, Declaring war on Italy, and public indecency." 
		"\nI will be escaping prison on, MARCH 28TH! After that.... I WILL TAKE OVER THE WORLD";
    char b[] = "aeiou";
    squeeze(a, b);
}
/* Expected Input:
 * char a[] = "Hello"
 * char b[] = "World"
 * squeeze(a, b);
 *
 * Expected Output:
 * He
 * char l and o got deleted because it exists in the characters of world.
 *
 * 
 */
