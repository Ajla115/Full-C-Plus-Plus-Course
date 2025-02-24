//
// Created by User on 28. 2. 2024..
//

#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout << "Enter values for two angles: " << endl;
    cin >> a >> b;

    cout << "Value of third angle is: " << 180 - (a+b) << endl;
}