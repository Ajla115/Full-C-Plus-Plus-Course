//
// Created by User on 12. 2. 2024..

//#1: Write a C++ program to convert Celsius into Fahrenheit.
//Formula: 1.8C + 32

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    double celsTemperature;

    cout << "Enter temperature in Celsius: "<<endl;
    cin >> celsTemperature;

    double fahrenheitResult = 1.8 * celsTemperature + 32;
    cout << "Temperature converted to Fahrenhei is: " << fahrenheitResult << endl;
}
