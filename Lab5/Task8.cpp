// Created by User on 23. 2. 2024..
// #8: Write a function in C++ to check if a year is a leap year or not.
//Note: Leap year perfectly divisible by 400;
//- if not divisible by 400 and divisible by 100 it is NOT a leap year;
//- if not divisible by 100 but divisible by 4 it IS a leap year.

#include <iostream>
using namespace std;

bool checkIfLeapYear(int year) {
    // Leap years were first introduced in the Gregorian calendar in 1582
    while  (year < 1582) {
        cout << "Enter a year greater than or equal to 1582." << endl;
        cin >> year;
    }

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        return true;
    }

    return false;
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    cout <<  checkIfLeapYear(year) << endl;
    cout << "Leap year (Y => 1, N => 0)" << endl;
    return 0;
}
