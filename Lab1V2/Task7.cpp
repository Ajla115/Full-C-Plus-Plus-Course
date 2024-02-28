//
// Created by User on 27. 2. 2024..
// #7: Write a C++ program to ask user to enter length and width of rectangle. Find area of that rectangle.

#include <iostream>

using namespace std;

int main(){
    double length, width, area;

    cout << "Enter the length and width:  " << endl;
    cin >> length >> width;

    cout << "Area is: " << (int) (length * width) << endl;

    return 0;
}
