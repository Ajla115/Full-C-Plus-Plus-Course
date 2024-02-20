//
// Created by User on 20. 2. 2024..
// #7: Write a program in C++ to find the factorial of a number.

#include <iostream>

using namespace std;

int main(){
    int num1, factorial = 1;
    cout << "Enter the number to find his factorial: " << endl;
    cin >> num1;

    for(int i = num1; i > 0; i--){
        factorial *= i;
    }

    cout << "Factorial of a number " << num1 << " is " << factorial << endl;
}