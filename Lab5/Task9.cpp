// Created by User on 23. 2. 2024..
// #9: Write a function to check if a word is palindrome or not.

#include <iostream>
using namespace std;

bool checkIfPalindrome(string word) {
    int left = 0;
    int right = word.length() - 1;

    while (left < right) {
        // Skip spaces
        while (left < right && word[left] == ' ') {
            left++;
        }
        while (left < right && word[right] == ' ') {
            right--;
        }

        // Compare characters
        if (word[left] != word[right]) {
            return false;
        }

        // Move to the next characters
        left++;
        right--;
    }

    return true;
}

int main() {
    string word;
    cout << "Enter a word: ";
    getline(cin, word);

    cout << "Is the word a palindrome? (1 for true, 0 for false): " << checkIfPalindrome(word) << endl;
    return 0;
}
