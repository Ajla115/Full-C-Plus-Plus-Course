// Created by User on 24. 2. 2024..
// #2: Write a C++ program that will find fibonacci series until user specified number (using recursion).

#include <iostream>
using namespace std;

// Function to recursively calculate Fibonacci series
void fibonacci(int n, int a = 0, int b = 1) {
    if (a <= n) {
        cout << a << " ";
        fibonacci(n, b, a + b);
    }
}

int main() {
    int n;

    cout << "Enter a number to find Fibonacci series up to that number: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " is: ";
    fibonacci(n);

    return 0;
}
