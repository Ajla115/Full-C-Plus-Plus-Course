//
// Created by User on 11. 2. 2024..
//
#include <iostream>
#include <cstring>

using namespace std;

void checkIfPalindrome(const char a[]) {
    char reverseString[256];
    int length = strlen(a);

    // Reverse the string
    for (int i = length - 1, j = 0; i >= 0; i--, j++) {
        reverseString[j] = a[i];
    }
    reverseString[length] = '\0'; // Null-terminate the reverse string

    cout << "Original string is: " << a << endl;
    cout << "Reversed string is: " << reverseString << endl;

    // Compare original and reversed strings to check for palindrome
    if (strcmp(a, reverseString) == 0) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
}

int main() {
    char inputString[256];

    cout << "Please enter a string to check if it is a palindrome: " << endl;
    cin.getline(inputString, sizeof(inputString)); // Read entire line including spaces

    checkIfPalindrome(inputString);

    return 0;
}
