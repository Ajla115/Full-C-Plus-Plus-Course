//
// Created by User on 6. 3. 2024..
//#9: Write a C++  program to check whether the triangle is an equilateral,
// isosceles or scalene triangle.

#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cout << "Enter values: \n";
    cin >> a >> b >> c;

    if (a == b && a == c){ //b == c
        cout << "All sides are equal\n";
    }
    else if (a == b || a == c || b == c){
        cout << "Only two sides are same\n";
    }
    else {
        cout << "No sides are the same.\n";
    }

    return 0;

}