// Created by User on 15. 2. 2024.
// Write a C++ program to reverse a number.

#include <iostream>
using namespace std;


int main() {

    int n, reversed_number = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0) {
        remainder = n % 10;  // 75 % 10 = 5 // 2nd round  7 % 10 = 7
        reversed_number = reversed_number * 10 + remainder; // 0 * 10 + 5 = 5 --> first iteration //5*10 + 7 = 57
        n /= 10; //75/10 = 7 //2.round 7 / 10 = 0 --> break the loop
    }

    cout << "Reversed Number = " << reversed_number;

    return 0;
}