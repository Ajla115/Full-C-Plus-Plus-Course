
// Created by User on 1. 2. 2024..
//#7: Write a C program to ask user to enter length and width of rectangle. Find area of that rectangle.

#include <iostream>
using namespace std;

int main(){
    int width;
    int length;
    int area;

    cout <<"Enter value for width of the rectangle: ";
    cin >> width;

    cout <<"Enter value for length of the rectangle: ";
    cin >> length;

    area = width * length;

    cout <<"Calculated area for rectangle with dimensions " << width << " and " << length << " is " <<area;

}

