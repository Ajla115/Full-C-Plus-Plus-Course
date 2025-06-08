//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive function to print binary representation
void decimalToBinary(int n) {
    if (n == 0)
        return;
    decimalToBinary(n / 2);       // Recursive call
    cout << n % 2;                // Print remainder (binary digit)
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    if (number == 0) {
        cout << "Binary: 0" << endl;
    } else {
        cout << "Binary: ";
        decimalToBinary(number);
        cout << endl;
    }

    return 0;
}
