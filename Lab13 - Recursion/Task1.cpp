//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Handle negative numbers by converting to positive
    if (number < 0) {
        number = -number;
    }

    int result = sumOfDigits(number);
    cout << "Sum of digits: " << result << endl;

    return 0;
}
