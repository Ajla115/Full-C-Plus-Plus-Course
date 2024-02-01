// Created by User on 1. 2. 2024..

#include <iostream>
using namespace  std;
int main(){

    //prompt user for input
    int seconds;

    cout << "Enter seconds to be converted to minutes: ";
    cin >> seconds;

    int minutes = seconds / 60;
    int remainingSeconds = seconds % 60 ;

    cout << "Converted seconds " << seconds << " is " << minutes << " minutes " << "and the remaining seconds are " << remainingSeconds << ". "<< endl;



    return 0;
}