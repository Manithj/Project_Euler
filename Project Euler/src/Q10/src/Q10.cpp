#include <iostream>
#include <cmath>

using namespace std;


// Function to find the sum of all the primes below two million
// check if the number is prime
bool isPrimee(int n) {
    // Check if the number is 1 or 0
    if (n <= 1) {
        return false;
    }
    // Check if the number is divisible by any number from 2 to the square root of the number
    for (int i = 2; i <= sqrt(n); i++) {
        // If the number is divisible by any number, it is not prime
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the sum of all the primes below two million
long long primeSum()
{
    long long sum = 0;
    // Check if the number is prime and add it to the sum
    for (int i = 2; i <= 2000000; i++) {
        // Check if the number is prime and add it to the sum
        if (isPrimee(i)) {
            sum += i;
        }
    }

    return sum;
}