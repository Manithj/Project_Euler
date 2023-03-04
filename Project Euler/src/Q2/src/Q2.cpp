#include <iostream>
using namespace std;

// Function to find the sum of even numbers in the fibonacci sequence
int fibonacci() {
    int prev = 1;
    int curr = 2;
    int sum_even = 2; 

    while (curr <= 4000000) {
        int nterm = prev + curr;
        prev = curr;
        curr = nterm;

        if (nterm % 2 == 0) {
            sum_even += nterm;
        }
    }

     return sum_even;
}