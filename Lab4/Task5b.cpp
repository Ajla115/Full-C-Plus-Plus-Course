// Created by User on 20. 2. 2024..
// b) Write a C++ program to find sum of 10 numbers, but this time skip over negative numbers


#include <iostream>

using namespace std;

int main() {
    int num1, sum = 0;
    for (int i = 1; i <= 10; i++){
        cout << "Please enter your "<< i <<". number" << endl;
        cin >> num1;
        if ( num1 < 0){
            continue;
        }
        sum += num1;
    }

    cout << "Sum is: " << sum << endl;

    return 0;
}