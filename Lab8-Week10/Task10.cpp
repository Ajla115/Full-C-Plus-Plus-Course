//
// Created by Ajla Korman on 12. 5. 2025..
// Write C++ program (using functions) to find factorial of numbers in array using pointers.


#include <iostream>

int factorial(int* number) {
    if (number == nullptr || *number < 0)
        return -1;

    int result = 1;
    for (int i = 1; i <= *number; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int numbers[] = {3, 4, 5, 0, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Factorials of numbers in array:" << std::endl;

    for (int i = 0; i < size; i++) {
        int* ptr = &numbers[i];
        int fact = factorial(ptr);

        std::cout << *ptr << "! = " << fact << std::endl;
    }

    return 0;
}
