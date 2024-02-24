//
// Created by User on 24. 2. 2024..
// #10: Write a C++ program that will check whether a string inside a three-dimensional array is a palindrome if not.
// If yes, replace the string with the sentence  “This is a palindrome”.

#include <iostream>
#include <string>
#include <cctype> // for std::isspace

using namespace std;

int main() {
    string result;

    string arr[2][2][2] = {
            {{"racecar", "ana voli milovana"}, {"domod", "madam"}},
            {{"mom", "noon"}, {"noon", "civic"}}
    };

    // Checking and replacing palindromes
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                string& str = arr[i][j][k];
                bool isPalindrome = true;

                // Removing spaces and converting to lowercase
                string cleanedStr;
                for (char c : str) {
                    if (!isspace(c)) {
                        cleanedStr += tolower(c);
                    }
                }
                // Checking if cleanedStr is a palindrome
                int left = 0;
                int right = cleanedStr.length() - 1;
                while (left < right) {
                    if (cleanedStr[left] != cleanedStr[right]) {
                        isPalindrome = false;
                        break;
                    }
                    left++;
                    right--;
                }
                // If palindrome, replace with the sentence
                if (isPalindrome) {
                     result = "This is a palindrome";
                }
                else{
                    result = "This is not a palindrome";
                }
            }
        }
    }

    // Displaying the array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << arr[i][j][k] << ": "  << result << "\n";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

