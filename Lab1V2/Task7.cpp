//
// Created by User on 27. 2. 2024..
// #7: Write a C++ program to ask user to enter length and width of rectangle. Find area of that rectangle.

#include <iostream>

int main(){
    int length, width, area;

    std :: cout << "Enter length and width: " << std::endl;
    std:: cin >> length >> width;

    area = length * width;

    std::cout << "Area is: " << area << std::endl;


}