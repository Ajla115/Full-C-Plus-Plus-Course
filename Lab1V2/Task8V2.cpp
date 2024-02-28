//
// Created by User on 27. 2. 2024..
//#8: Write a C++ program to swap the values of 2 variables.

#include <iostream>

using namespace std;

int main(){

    int var1 = 5;
    int var2 = 9;

    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1- var2;

    cout << var1 << " " << var2 << endl;

    return 0;


}
