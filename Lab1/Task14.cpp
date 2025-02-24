//
// Created by User on 27. 2. 2024..
//#8: Write a C++ program to swap the values of 2 variables.

#include <iostream>

using namespace std;

int main(){


    int  var1, var2;

    cout << "Enter first variable: " << endl;
    cin >> var1;

    cout << "Enter second variable: " << endl;
    cin >> var2;

    var1 = var1 + var2; //14 = 5 + 9
    var2 = var1 - var2; // 5 = 14 - 9
    var1 = var1 - var2; // 9 = 14 - 5


    cout << "Value in variable 1 after replacement is: " << var1 << endl;
    cout << "Value in variable 2 after replacement is: " << var2 << endl;

    return 0;


}
