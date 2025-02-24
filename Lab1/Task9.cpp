//
// Created by User on 27. 2. 2024..
// #9: Write a C++ program to convert 6 hours 40 minutes into seconds.

#include <iostream>

using namespace std;

int main(){

    int hours = 6, minutes = 40, seconds;

    seconds = ( 6 * 3600 ) + (40 * 60);

    cout << "Result in seconds is: " << seconds << endl;

    return 0;

}