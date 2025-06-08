//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive binary search function
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right)
        return -1; // Base case: not found

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid; // Found the target
    else if (target < arr[mid])
        return binarySearch(arr, left, mid - 1, target); // Search left half
    else
        return binarySearch(arr, mid + 1, right, target); // Search right half
}

int main() {
    int arr[] = {2, 4, 7, 10, 14, 18, 21, 27};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter a number to search: ";
    cin >> target;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1)
        cout << "Found at index " << result << "." << endl;
    else
        cout << "Not found in array." << endl;

    return 0;
}
