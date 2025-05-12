//
// Created by User on 24. 2. 2024..
// #5: Write a C++ program to check if the number is prime or not (using recursion).

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n, int divisor = 2) {
    if (n <= 2) // Base case: 0, 1, and 2 are not prime
        return (n == 2);
    if (n % divisor == 0) // If n is divisible by divisor, it's not prime
        return false;
    if (divisor * divisor > n) // If divisor squared is greater than n, n is prime
        return true;
    return isPrime(n, divisor + 1); // Recursively check with the next divisor
}

int main() {
    int num;

    cout << "Enter a number to check if it's prime: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}

