//
// Created by User on 28. 2. 2024..
// #16: Write a C++ program to display the operation of pre and post increment and decrement..

#include <iostream> /


using namespace std;

int main()
{
    int x = 4, a, b;

    a = ++x;
    cout << a << endl; //5

    b = x++;
    cout << b << endl ; //5
    cout << x << endl; //6
    return 0;
}