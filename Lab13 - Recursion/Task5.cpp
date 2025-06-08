//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive function to calculate power
int power(int base, int exponent) {
    if (exponent == 0)
        return 1; // Base case: any number to the power of 0 is 1
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    // Optional: Handle negative exponent (basic handling)
    if (exponent < 0) {
        cout << "This version only supports non-negative exponents." << endl;
    } else {
        int result = power(base, exponent);
        cout << base << "^" << exponent << " = " << result << endl;
    }

    return 0;
}
