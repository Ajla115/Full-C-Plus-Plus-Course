//
// Created by Ajla Korman on 12. 5. 2025.
//Write C++ program (using functions) to sort values in an array.


#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortArray(int arr[], int size) {
    if (size <= 1)
        return;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int numbers[] = {5, 2, 9, 1, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Before sorting: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    sortArray(numbers, size);

    std::cout << "After sorting: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
