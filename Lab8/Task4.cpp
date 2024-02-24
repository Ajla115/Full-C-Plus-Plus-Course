//
// Created by User on 24. 2. 2024..
// #4: Write a C++ program to reverse the number (using recursion).
//1234→ 4321

#include <iostream>
using namespace std;

int reverseNumber(int n, int reversedNum = 0) {
    if (n == 0) // Base case: if n becomes 0, return reversedNum
        return reversedNum;
    else
        return reverseNumber(n / 10, reversedNum * 10 + n % 10); // Recursively reverse the number
}

int main() {
    int num;

    cout << "Enter a number to reverse: ";
    cin >> num;

    int reversed = reverseNumber(num);

    cout << "Reversed number: " << reversed << endl;

    return 0;
}

