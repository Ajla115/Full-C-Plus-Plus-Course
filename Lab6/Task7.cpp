//
// Created by User on 23. 2. 2024..
//7: Write C++ function to reverse elements in an array.
#include <iostream>

using namespace std;

void reverseArray(int arr[], int length) {
    for (int i = 0; i < length / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrLength = sizeof(numbers) / sizeof(int);

    cout << "Original array: ";
    for (int i = 0; i < arrLength; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    reverseArray(numbers, arrLength);

    cout << "Reversed array: ";
    for (int i = 0; i < arrLength; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
