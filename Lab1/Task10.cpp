//
// Created by User on 27. 2. 2024..
// #10: Write a C++ program that serves a temperature calculator (converts Fahrenheit into Celsius, vice versa).
//
//C = (°F - 32) × 5/9
//°F = (9/5 × °C) + 32

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float fahrTemp, celsTemp, celsResult, fahrResult;

    cout << "Enter temperature in Fahrenheit to convert to  Celsius: " << endl;
    cin >> fahrTemp;

    celsResult = (fahrTemp - 32) * (5/9);

    cout << "Converted temperature " << fahrTemp << " to Celsius is " << celsResult << endl;

    cout << "Enter temperature in Celsius to convert to Fahrenheit: " << endl;
    cin >> celsTemp;

    fahrResult = (((9/5) * celsTemp) + 32);

    cout << "Converted temperature " << celsTemp << " to Fahrenheit is " << fahrResult << endl;



    return 0;
}
