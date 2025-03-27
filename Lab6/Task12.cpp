//
// Created by Ajla Korman on 27. 3. 2025..
//

#include <iostream>
using namespace std;

// Function to find the equilibrium index
int findEquilibriumIndex(int arr[], int size) {
    int totalSum = 0;
    int leftSum = 0;

    // First, calculate the total sum of the array
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    // Traverse the array and check for equilibrium index
    for (int i = 0; i < size; i++) {
        // Subtract current element from totalSum to get the right sum
        totalSum -= arr[i];

        // Now, compare left and right sums
        if (leftSum == totalSum) {
            return i; // Found the equilibrium index
        }

        // Add current element to leftSum for next iteration
        leftSum += arr[i];
    }

    // If no equilibrium index found, return -1
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = findEquilibriumIndex(arr, size);

    if (index != -1) {
        cout << "Equilibrium index is: " << index << endl;
    } else {
        cout << "No equilibrium index found." << endl;
    }

    return 0;
}
