#include <iostream>

// Function to calculate the length of the Collatz sequence for a given number
int seq_length(long n) {
    int length = 1;  // Initialize the length to 1
    while (n != 1) {  // Loop until n becomes 1
        if (n % 2 == 0) {  // If n is even
            n = n / 2;  
        } else {  // If n is odd
            n = 3 * n + 1;  
        }
        length++;  
    }
    return length;  
}

// Function to find the starting number that produces the longest Collatz sequence
int collatz() {
    long longestStartNum = 1;  
    int longestSeqLength = 1;  

    // Loop through all numbers from 1 to 999,999
    for (long i = 1; i < 1000000; i++) {
        int sequence_length = seq_length(i);  // Calculate the length of the sequence for the current number
        if (sequence_length > longestSeqLength) {  // If the length of the sequence is longer than the previous longest
            longestSeqLength = sequence_length;  // Update the length of the longest sequence
            longestStartNum = i;  // Update the starting number that produces the longest sequence
        }
    }

    return longestStartNum;  
}

