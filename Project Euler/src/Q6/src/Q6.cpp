#include <iostream>
using namespace std;

// Function to find the difference between the sum of the squares of the first 100 natural numbers and the square of the sum
int square() {
    int sumOfsq = 0; //sum of square
    int sqOfSum = 0; //square of sum
    int sum = 0; // sum before square of sum
    int total; //difference between the sum of the squares of the first 100 natural numbers and the square of the sum

    // Find the sum of the squares of the first 100 natural numbers
    for (int i = 1; i <= 100; i++) {
        sumOfsq += i * i;
        sum += i;
    }
    sqOfSum = sum * sum;
    total = sqOfSum - sumOfsq;

    return total;
}
