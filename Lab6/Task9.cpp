// Created by Ajla Korman on 27. 3. 2025.
// Write a function to find the length of the longest continuous increasing subarray.

#include <iostream>
#include <algorithm>  // za std::max
using namespace std;

int longestIncreasingSubarray(int arr[], int size) {
    if (size == 0) return 0;

    int currentLength = 1;
    int maxLength = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) {
            currentLength++;
        } else {
            // ažuriramo maksimalnu dužinu ako je potrebno
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    // Provjerimo zadnji niz ako se završio s rastom
    maxLength = max(maxLength, currentLength);
    return maxLength;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = longestIncreasingSubarray(arr, size);
    cout << "Length of longest continuous increasing subarray: " << result << endl;

    return 0;
}
