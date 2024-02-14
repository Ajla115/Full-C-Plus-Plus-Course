//
// Created by User on 14. 2. 2024..
//#4: Write a C++ program to find the third angle of a triangle.

#include <iostream>

using namespace std;

int main(){
    int sum = 180, a, b;
    while (true){
        cout << "Enter value for the first angle of triangle: "<< endl;
        cin >> a;
        if ( a > 0){
            break;
        }
    }
    while (true){
        cout << "Enter value for the second angle of triangle: "<< endl;
        cin >> b;
        if ( b > 0){
            break;
        }
    }

    int third_angle =  sum - (a+b);
    cout <<"Value of the third angle is: " << third_angle << endl;
}