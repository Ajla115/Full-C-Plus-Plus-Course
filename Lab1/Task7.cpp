//
// Created by User on 27. 2. 2024..
// #7: Write a C++ program to ask user to enter length and width of rectangle. Find area of that rectangle.

#include <iostream>

int main() {

    float length, width, area;

    std:: cout << "Enter value for length of the rectangle: " << std::endl;
    std::cin >> length;

    std:: cout << "Enter value for the width of the rectangle: " << std::endl;
    std::cin >> width;

    area = length * width;

    std::cout << "Area is: " << round(area*100)/100.0;

    return 0;


}