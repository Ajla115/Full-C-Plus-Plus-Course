//
// Created by User on 20. 2. 2024..
// #3: Write a C++ program to print all numbers  from 1 to 100, which divided by specified number have a remainder equal to 3.

#include <iostream>

using namespace std;

int main() {
    int specificValue;
    cout << "Please enter the specific value to divide with: " <<endl;
    cin >> specificValue;

    for (int i = 1; i <=  100; i++){
        if ( i % specificValue == 3){
            cout << "Number who has a remainder of 3 when divided with " << specificValue << " is " << i << endl;
        }
    }
}