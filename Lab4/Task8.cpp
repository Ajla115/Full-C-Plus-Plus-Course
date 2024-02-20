//
// Created by User on 20. 2. 2024..
// #8: Write a program in C++ to find the sum of the digits of a given number.

#include <iostream>

using namespace std;

int main(){
    int num1, num2, lastDigit,  sum = 0;
    cout << "Enter the number to find sum of his digits: " << endl;
    cin >> num2;

    num1 = num2;
    while(num1 != 0){
        lastDigit = num1 % 10;
        sum += lastDigit;
        num1 = num1 / 10;

    }

    cout << "Sum of digits of a number " << num2 << " is " << sum << endl;
}