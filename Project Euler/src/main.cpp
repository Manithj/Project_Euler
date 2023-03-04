#include <iostream>
#include "Q1/src/Q1.h"
#include "Q10/src/Q10.h"
#include "Q2/src/Q2.h"
#include "Q3/src/Q3.h"
#include "Q4/src/Q4.h"
#include "Q5/src/Q5.h"
#include "Q6/src/Q6.h"
#include "Q7/src/Q7.h"
#include "Q8/src/Q8.h"
#include "Q9/src/Q9.h"
using namespace std;

int main() {
    int input;
    cout <<"Enter Question Number = " << endl;
    cin >> input;
    switch (input) {
    case 1:
        cout<<sum();
        break;
    case 2:
        cout<<fibonacci();
        break;
    case 3:
       cout<< maxPrime();
        break;
    case 4:
        cout<<largestPalindrome();
        break;
    case 5:
        cout<<maxNumber();
        break;
    case 6:
        cout << square();
        break;
    case 7:
        cout << prime();
        break;
    case 8:
        cout << product();
        break;
    case 9:
        cout << pythagorean();
        break;
    case 10:
        cout << primeSum();
        break;
    default:
        cout << "Error";
    }
    return 0;
}