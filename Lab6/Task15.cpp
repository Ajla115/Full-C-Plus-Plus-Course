//
// Created by Ajla Korman on 27. 3. 2025..
//
#include <iostream>
using namespace std;

void updateArrayByMultiplyingNeighbors(int arr[], int size) {
    if (size <= 1) return;

    int original[size];

    // Copy original array to avoid overwriting
    for (int i = 0; i < size; i++) {
        original[i] = arr[i];
    }

    // Update first element (only next neighbor exists)
    arr[0] = original[0] * original[1];

    // Update middle elements
    for (int i = 1; i < size - 1; i++) {
        arr[i] = original[i - 1] * original[i + 1];
    }

    // Update last element (only previous neighbor exists)
    arr[size - 1] = original[size - 1] * original[size - 2];
}

int main() {
    int arr[] = {2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    updateArrayByMultiplyingNeighbors(arr, size);

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
