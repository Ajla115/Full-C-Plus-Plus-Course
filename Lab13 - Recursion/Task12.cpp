//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive function to perform one full pass of bubble sort
void bubbleSort(int arr[], int n) {
    // Base case: if only one element, it's already sorted
    if (n == 1)
        return;

    // One pass: push the largest element to the end
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            // Swap if elements are in the wrong order
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursively sort the rest of the array
    bubbleSort(arr, n - 1);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
