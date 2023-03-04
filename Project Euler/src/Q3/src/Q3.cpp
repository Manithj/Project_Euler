#include <iostream>
#include <cmath>
using namespace std;

// Function to find the largest prime factor of 600851475143
int maxPrime() {
    // n is the number to be factored
    long long n = 600851475143;
    // maxPrimeNumber is the largest prime factor
    int maxPrimeNumber = 1;

    // Divide by 2 until n is odd

    while (n % 2 == 0) {
        maxPrimeNumber = 2;
        n /= 2;
    }

        // Divide by odd numbers until n is prime
        for (int i = 3; i <= sqrt(n); i += 2) {
            while (n % i == 0) {
                maxPrimeNumber = i;
                n /= i;
            }
        }

    // If n is prime, n is greater than 2
    if (n > 2) {
        maxPrimeNumber = int(n);
    }


    return maxPrimeNumber;
}
