#include <iostream>
using namespace std;

// Function to find the 10001st prime number
// The function isPrime() is used to check if a number is prime or not
bool isPrime(int num) {
    if (num == 2 || num == 3) return true;
    if (num == 1 || num % 2 == 0) return false;
    // Check if the number is divisible by any odd number from 3 to the square root of the number
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find the 10001st prime number
int prime() {
    int count = 1; 
    int num = 3;
    // Check if the number is prime and if it is the 10001st prime number
    while (count < 10001) {
        if (isPrime(num)) {
            count++;
        }
        num += 2; 
    }
    return num - 2;
}
