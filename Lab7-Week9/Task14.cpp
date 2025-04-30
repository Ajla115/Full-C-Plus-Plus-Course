//
// Created by Ajla Korman on 30. 4. 2025..
//
#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Update the array by multiplying next and previous elements
    for (int i = 0; i < 2; ++i) {
        for (int j = 1; j < 2; ++j) {  // We start from 1 to avoid out of bounds for previous and next elements
            arr[i][j] = arr[i][j-1] * arr[i][j+1];
        }
    }

    // Displaying the updated array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
