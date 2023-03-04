#include <iostream>

using namespace std;

// Function to find the smallest number that is evenly divisible by all of the numbers from 1 to 20
int maxNumber()
{
    long i;
    // i is the number to be checked
    for (i = 20; ; i++) {
        int count = 0;
        for (int j = 1; j <= 20; j++) {
            if (i % j == 0) {
                count++;
            }
            else {
                break;
            }
        }
        if (count == 20) {
            break;
        }
    }
    return i;
}
