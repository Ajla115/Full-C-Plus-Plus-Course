//
// Created by User on 25. 2. 2024..
//#8: Write a function that swaps the values of two variables using pointers.

#include <iostream>

void swapIntegers(int* a, int* b) {
    if (a == nullptr || b == nullptr)
        return;

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    swapIntegers(&x, &y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}

