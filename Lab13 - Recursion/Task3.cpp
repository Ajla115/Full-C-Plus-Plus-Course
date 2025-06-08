//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive function to reverse a string
string reverseString(const string& str, int index) {
    if (index < 0)
        return "";
    return str[index] + reverseString(str, index - 1);
}

// Function to check if a string is a palindrome using recursion
bool isPalindrome(const string& str, int left, int right) {
    if (left >= right)
        return true;
    if (str[left] != str[right])
        return false;
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    string reversed = reverseString(word, word.length() - 1);
    cout << "Reversed word: " << reversed << endl;

    if (isPalindrome(word, 0, word.length() - 1))
        cout << word << " is a palindrome." << endl;
    else
        cout << word << " is not a palindrome." << endl;

    return 0;
}
