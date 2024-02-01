// Created by User on 1. 2. 2024.

#include <iostream>
using namespace  std;

int main() {
    //Simple program without input
    double radius;
    double area;

    //Step 1: Read in radius
    radius = 20;

    //Step 2: Compute area
    area = radius * radius * 3.14159;

    //Step 3: Display the area
    cout << "The area is ";
    cout << area << endl;
    //cout << area << std :: endl;
    //std :: endl  --> skips to the new line, and flushes the buffer
    //buffer is something stored temporarily in the cachce, so this cleans it
    //good for smaller programs, but not for the bigger programs, since this flushing of buffer happens automatically by OS
    //another way to write this is cout << '\n' << std::flush;

    //Program with input
    double number1, number2, number3;
    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    //Compute avg
    double average = (number1 + number2 + number3) / 3;

    //Display results
    cout << "The average of " << number1 << ", " << number2 << ", " << number3 << " is " << average << endl;

    return 0;






}
