// Created by User on 23. 2. 2024..
// #6: Write a C++ function to check if a given positive number is a multiple of 3 or a multiple of 7.

#include <iostream>
using namespace std;

bool checkNumber(int a) {
    while (a < 0) {
        cout << "Please enter a number bigger than 0: ";
        cin >> a;
    }

    if (a % 3 == 0 || a % 7 == 0) {
        return true;
    }

    return false;
}

int main() {
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    cout << checkNumber(num1)<<endl;
    cout << "<----1 stands for TRUE, 0 stands for FALSE---->";
    return 0;
}
