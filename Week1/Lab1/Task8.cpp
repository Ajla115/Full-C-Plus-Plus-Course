
// Created by User on 1. 2. 2024..

//#8: Write a C program to swap the values of 2 variables.

#include <iostream>
using namespace std;
int main(){

    int var1;
    int var2;

    cout <<"Enter value for first variable: ";
    cin >> var1;

    cout <<"Enter value for second variable: ";
    cin >> var2;

    cout <<"Value of first variable before swap is  " << var1 << endl;
    cout <<"Value of second variable before swap is  " << var2 << endl;

    int temp; //variable for switching
    temp = var1;
    var1 = var2;
    var2 = temp;

    cout <<"Value of first variable after swap is  " << var1 << endl;
    cout <<"Value of second variable after swap is  " << var2 << endl;

}
