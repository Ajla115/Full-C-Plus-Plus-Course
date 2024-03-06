//
// Created by User on 6. 3. 2024..
// #14: Write a C++ program to check if the number entered by the user is of length 2 or more and if it is odd.
// If that is the case, print “GOOD NUMBER”. Otherwise, don’t accept this number.

#include <iostream>
using namespace std;

int main(){
    string no;
    cout << "Enter a number: \n";
    cin >> no;

    if (no.length() >= 2) {
        int lastDigit = no.back() - '0';
        //back() -> is a function that will get us the last digit
        //in order to properly convert it to its integer value, we subtract character 0 from it, that is just the formula
        if (lastDigit % 2 != 0) {
            cout << "GOOD NUMBER";
        } else {
            cout << "Number is not accepted.\n";
        }
    }
    else {
        cout << "Number is not accepted.\n";
    }

    return 0;

}