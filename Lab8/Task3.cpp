//Created by User on 24. 2. 2024..
// #3: Write a C++ program to find number to the power of n (using recursion).

#include <iostream>
using namespace std;

// Function to calculate power recursively
double power(double base, int exponent) {
    if (exponent == 0) // Base case: Anything raised to the power of 0 is 1
        return 1;
    else if (exponent > 0) // If exponent is positive
        return base * power(base, exponent - 1); // Recursive call to calculate power
    else // If exponent is negative
        return 1 / power(base, -exponent); // Convert negative exponent to positive and reciprocate
}

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << " raised to the power of " << exponent << " is: " << power(base, exponent) << endl;

    return 0;
}
