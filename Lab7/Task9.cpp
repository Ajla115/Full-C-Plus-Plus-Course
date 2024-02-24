// Created by User on 24. 2. 2024..
// #9: Write a C++ program that will reverse all strings in a three-dimensional array.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string arr[2][2][2] = {
            {{"abc", "def"}, {"ghi", "jkl"}},
            {{"mno", "pqr"}, {"stu", "vwx"}}
    };

    // Reversing strings
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                int left = 0;
                int right = arr[i][j][k].length() - 1;
                while (left < right) {
                    swap(arr[i][j][k][left], arr[i][j][k][right]);
                    //left and right are indexes of the string found at position [i][j][k]
                    //swap is a standard library call, such as cin, cout, etc..
                    left++;
                    right--;
                }
            }
        }
    }

    // Displaying reversed strings
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
