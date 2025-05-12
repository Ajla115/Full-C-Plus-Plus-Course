//
// Created by User on 25. 2. 2024..
// #7: Write a function that finds the maximum and minimum values in an array using pointers.

//#7: Write a function that finds the maximum and minimum values in an array using pointers.
#include <iostream>

void findMinMax(int* arr, int size, int* max, int* min) {
    if (arr == nullptr || size == 0)
        return;

    *max = *arr;
    *min = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max)
            *max = *(arr + i);
        if (*(arr + i) < *min)
            *min = *(arr + i);
    }
}

int main() {
    int arr[] = {9, 4, 2, 7, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxVal, minVal;
    findMinMax(arr, size, &maxVal, &minVal);

    std::cout << "Maximum value: " << maxVal << std::endl;
    std::cout << "Minimum value: " << minVal << std::endl;

    return 0;
}