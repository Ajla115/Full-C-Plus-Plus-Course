//
// Created by Ajla Korman on 30. 4. 2025..
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[2][2][2] = {
        {{"abc", "def"}, {"ghi", "jkl"}},
        {{"mno", "pqr"}, {"stu", "vwx"}}
    };

    // Reversing the order of strings in the 3D array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 1; ++k) {
                swap(arr[i][j][k], arr[i][j][1-k]);  // Swap the two elements
            }
        }
    }

    // Displaying the array after reversal
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << arr[i][j][k] << " ";
            }
            cout << "| ";
        }
        cout << endl;
    }

    return 0;
}
