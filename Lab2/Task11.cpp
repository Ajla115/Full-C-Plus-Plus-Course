// Created by User on 14. 2. 2024..
// #11: Write a C++ program to simulate calculator behavior using switch - case.

#include <iostream>

using namespace std;
int main(){

    int num1, num2;
    char sign;

    cout << "Enter one number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Enter sign operator: " << endl;
    cin >> sign;

    switch(sign) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/' :
            cout << num1 / num2 << endl;
            break;
        case '%' :
            cout << num1 % num2 << endl;
            break;
        default:
            cout << "Something went wrong" << endl;
        }
}