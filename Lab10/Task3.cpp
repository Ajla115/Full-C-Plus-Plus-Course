// Created by User on 25. 2. 2024..
// #3: Write a function that accepts 2 arguments (passed by reference with pointer argument).
// The function should change the initial value of variables to new values. Function is a void function.

#include <iostream>

using namespace std;

void test(int*, int*);

int main() {
    int a = 5, b = 5;
    cout << "Before changing:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    test(&a, &b);

    cout << "\nAfter changing" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

void test(int* n1, int* n2) {
    *n1 = 10;
    *n2 = 11;
}
