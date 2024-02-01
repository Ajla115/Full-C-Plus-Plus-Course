// Created by User on 1. 2. 2024.

#include <iostream>
//Input output library - when included gives access to objects that control what should be done with input and output data
//Using namespace std means that we can use names for objects and variables from the standard library.
using namespace std;

int main()
{
    //Displays different text  to the console
    cout << "Welcome to C++!" << endl;
    cout << "Programming is fun!" << endl;
    cout << "Fundamentals First" << endl;
    cout << "Problem Driven" << endl;

    cout << "(10.5 + 2 * 3) / (45 - 3.5) = ";
    //when we don't have endline, then the next thing will be written in the same line as previous
    cout << (10.5 + 2 * 3 ) / (45 - 3.5) << endl;
    return 0;
}
