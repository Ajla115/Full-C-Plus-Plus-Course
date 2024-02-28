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
    char arr[1000];
    double   celsTempRes, fahrTempRes;
    int celsTemp{};

    int fahrTemp{};

    cout << "Celsius and Fahrenheit temperature: " << endl;
    cin >> celsTemp >> fahrTemp;
    if(!cin){
        cout << "DEMO" ;
    }
    cin.getline( arr, 1000);
    cout << arr ;

    cout << celsTemp << " " << fahrTemp ;

    fahrTempRes = (9.0/5.0 * celsTemp) + 32;

    celsTempRes = ( fahrTemp - 32) *  5.0/9.0 ;

    cout << "Result from " << celsTemp <<  " is  " << fahrTempRes << endl;
    cout << "Result from " << fahrTemp <<  " is  " << round(celsTempRes*100)/100 << endl;

    return 0;
}
