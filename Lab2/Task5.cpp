
// Created by User on 14. 2. 2024..
// #5: Write a C++ program that reads an integer and check the
// specified range where it belongs (0-20;21-50;51-80;).
//Print an error message if the number is negative or greater than 80.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Please enter an integer: "<< endl;
    cin >> num;
    if ( num > 0 && num < 21) {
        cout << "Number is in the range between 0 and 20" << endl;
    }
    else if (num > 20 && num < 50) {
        cout << "Number is in the range between 20 and 50" << endl;
    }
    else if (num > 50 && num < 80) {
        cout << "Number is in the range between 50 and 80" << endl;
    }
    else {
        cout << "Number is greater than 80 or negative." << endl;
    }
}
