#include <iostream>
using namespace std;

// Function to find the number is palindrome or not
bool isPalindrome(int n) {
    int rev = 0;
    int temp = n; // rev =  reversed number of the input integer
    
    // temp = input integer
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

// Function to find the largest palindrome made from the product of two 3-digit numbers
int largestPalindrome() {
    int largest = 0;
    // i and j are the two 3-digit numbers
    for (int i = 100; i < 1000; i++) {
        // j starts from i to avoid duplicate products
        for (int j = i; j < 1000; j++) {
            int product = i * j;
            // Check if the product is palindrome and if it is the largest palindrome
            if (isPalindrome(product) && product > largest) {
                largest = product;
            }
        }
    }
    return largest;
}
