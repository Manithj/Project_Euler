#include <iostream>

using namespace std;

// Function to find the product of the Pythagorean triplet for which a + b + c = 1000
int pythagorean() {
    int a, b, c, t;
    // a, b, c are the sides of the triangle
    for (a = 1; a < 1000; a++) {
        // loop through all possible values of b
        for (b = a + 1; b < 1000; b++) {
            c = 1000 - a - b;
            // check if a^2 + b^2 = c^2
            if (a * a + b * b == c * c) {
                t = a * b * c ;
                break;
            }
        }
    }
    return t;
}
