//
// Created by Ajla Korman on 27. 3. 2025..
// Implement a C++ function to find the first peak element in an array (an element which is greater than or equal to its neighbours).

#include <iostream>
using namespace std;

int firstPeakElement(int arr[], int size) {
    // Provjera za veličinu manjom od 3
    if (size == 0) return -1;
    if (size == 1) return arr[0];
    if (size == 2) return (arr[0] >= arr[1]) ? arr[0] : arr[1];

    // Provjera prvog i posljednjeg elementa kao posebni slučajevi
    if (arr[0] >= arr[1]) return arr[0];

    for (int i = 1; i < size - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i];
        }
    }

    if (arr[size - 1] >= arr[size - 2]) return arr[size - 1];

    return -1;
}

int main() {
    int arr[] = {1, 3, 4, 3, 5, 6, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int peak = firstPeakElement(arr, size);
    if (peak != -1) {
        cout << "First peak element is: " << peak << endl;
    } else {
        cout << "No peak element found." << endl;
    }

    return 0;
}
