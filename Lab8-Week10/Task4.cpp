//  Created by User on 25. 2. 2024..
// #4: Write C++ program to reverse string using pointers.

#include <iostream>

void reverseString(char* str) {

    char* start = str;
    char* end = str;

    while (*end != '\0')
        end++;

    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, world!";
    std::cout << "Original string: " << str << std::endl;

    reverseString(str);
    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}