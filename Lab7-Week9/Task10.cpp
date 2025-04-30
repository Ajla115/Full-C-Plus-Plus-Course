#include <iostream>
#include <string>
#include <cctype> // for std::isspace

using namespace std;

int main() {
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
                    str = "This is a palindrome";
                }
                else{
                    str = "This is not a palindrome";
                }
            }
        }
    }

    // Displaying the array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << arr[i][j][k] << "\n";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
