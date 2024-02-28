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
    double  celsTempRes, fahrTempRes;
    int celsTemp, fahrTemp;

    cout << "Celsius and Fahrenheit temperature: " << endl;
    //cout << celsTemp << " " << fahrTemp ;
    cin >> celsTemp >> fahrTemp ;

    fahrTempRes = (9.0/5 * celsTemp) + 32;

    celsTempRes = ( fahrTemp - 32) *  5/9.0 ;

    cout << "Result from " << celsTemp <<  " is  " << fahrTempRes << endl;
    cout << "Result from " << fahrTemp <<  " is  " << round(celsTempRes*100)/100 << endl;

    //celsTempRes -> 45.5678992625773 -> 4556.7899 -> 4557 -> 45.57
    //celsTempRes -> 4533.56778992625773 -> 4533567.7899 -> 453357 -> 4533.57

    return 0;
}
