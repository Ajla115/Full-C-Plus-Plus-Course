//
// Created by Ajla Korman on 27. 3. 2025..
//
#include <iostream>
using namespace std;

// Function to find the length of the longest subarray with sum at least k
int longestSubarrayWithSumAtLeastK(int arr[], int size, int k) {
    int maxLength = 0;

    // Brute force: Try every subarray
    for (int start = 0; start < size; start++) {
        int currentSum = 0;

        for (int end = start; end < size; end++) {
            currentSum += arr[end];

            // If sum is at least k, update max length
            if (currentSum >= k) {
                int length = end - start + 1;
                maxLength = max(maxLength, length);
            }
        }
    }

    return maxLength;
}

int main() {
    int arr[] = {1, 2, 3, -1, 4, 2};
    int k = 7;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = longestSubarrayWithSumAtLeastK(arr, size, k);
    cout << "Length of longest subarray with sum at least " << k << " is: " << result << endl;

    return 0;
}
