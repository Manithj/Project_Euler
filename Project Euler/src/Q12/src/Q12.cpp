#include <iostream>
using namespace std;

int divisor() {
    int n = 1; // triangle number index
    int tn = 1; // current triangle number
    int divisorCount = 0; // number of divisors
    int i; // loop variables

    // Loop until a triangle number with over 500 divisors is found
    while (divisorCount <= 500) {
        // Calculate the next triangle number
        n++;
        tn += n;

        // Count the divisors of the current triangle number
        divisorCount = 0;
        for (i = 1; i <= tn / i; i++) {
            if (tn % i == 0) {
                divisorCount += 2;
                if (tn / i == i) {
                    divisorCount--;
                }
            }
        }
    }

    return tn;
}
