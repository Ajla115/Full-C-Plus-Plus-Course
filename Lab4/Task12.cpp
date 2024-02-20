
// Created by User on 20. 2. 2024..
// #12:Write a program in C++ to input any number and print it in words.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to print it in words: ";
    cin >> num;

    string words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    // Temporary array to store the words in reverse order
    string wordsInReverse[20];

    int index = 0;
    // Process each digit of the number from right to left
    while (num > 0) {
        int digit = num % 10; // Extract the last digit
        wordsInReverse[index++] = words[digit]; // Store the word in reverse order
        num /= 10; // Move to the next digit
    }

    cout << "Number in words: ";
    for (int i = index - 1; i >= 0; --i) {
        cout << wordsInReverse[i] << " ";
    }

    cout << endl;
    return 0;
}
