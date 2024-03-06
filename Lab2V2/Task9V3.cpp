//
// Created by User on 6. 3. 2024..
//#9: Write a C++  program to check whether the triangle is an equilateral,
// isosceles or scalene triangle.

#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout << "Enter values for three sides of triangle: \n";
    cin >> a >> b >> c;

    if ( a == b && b == c){
        cout << "Equilateral triangle.\n";
    }
    else if (a == b || b == c || a == c){
        cout << "Isosceles triangle\n";
    }
    else {
        cout << "Scalene triangle\n";
    }

    return 0;

}