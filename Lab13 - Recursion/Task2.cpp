//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive function to check if number is even
bool isEven(int n) {
    if (n == 0)
        return true;  // 0 is even
    else if (n == 1)
        return false; // 1 is odd
    else
        return isEven(n - 2);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Convert negative numbers to positive
    if (number < 0)
        number = -number;

    if (isEven(number))
        cout << number << " is even." << endl;
    else
        cout << number << " is odd." << endl;

    return 0;
}
