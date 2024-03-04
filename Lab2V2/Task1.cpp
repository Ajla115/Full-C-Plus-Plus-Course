
// #1: Write a C++ program to convert Celsius into Fahrenheit.
//Formula: 1.8C + 32

#include <iostream>

using namespace std;

int main(){

    double temp1, temp2;

    cout << "Enter temperature to convert it: \n";
    cin >> temp1;

    temp2 = 1.8 * temp1 + 32;

    cout << "Temperature in Fahrenheit is: " << temp2 << endl;

    return 0;
}
