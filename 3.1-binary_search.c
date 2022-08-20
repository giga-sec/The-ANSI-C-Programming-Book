/* Our binary search makes two tests inside the loop, when one would suffice (at
the price of more tests outside.) Write a version with only one test inside the loop and
measure the difference in run-time.
 */

#include <stdio.h>

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1; 
    mid = (low + high) / 2;
    while (mid != x) {
        if (low <= high) {
            if (x < v[mid])
                high = mid + 1;
            else  // Assumes(x > v[mid])
                low = mid + 1;
            mid = (low + high) / 2;
        }
    }
        return mid; // found match
    return -1; // no match
}

int main() {
    
}
/* Tf? One test? 
 * Okay so more tests outside?
 * Okay okay, so we'll basically have to create a one test inside of the loop
 * And we can create other tests outside of the loop
 *
 * Well we could say that
 * Wtf, how we gon make tests outside? What tests will do outside?
 *
 * So we gon make a function that has a while condition that doesn't require low and high
 * We could say while(mid != x)
 * But then we got problems, 
 *  Inifnite loop: we lose the ability to get out of the loop if no match is found
 * Bruh idk man
 * 
 */
