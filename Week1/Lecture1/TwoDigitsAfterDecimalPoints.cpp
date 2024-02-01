// Created by User on 1. 2. 2024..

/*Write a program that displays the 6%-sales tax with
two digits after the decimal point. */

#include <iostream>
#include <ctime>
using namespace  std;
int main() {
    double fee;
    int tax = 6;
    cout << "Enter total cost to calculate fee: ";
    cin >> fee;
    cout << "Sales tax is " << static_cast<int>(tax * fee) / 100.0;




}
