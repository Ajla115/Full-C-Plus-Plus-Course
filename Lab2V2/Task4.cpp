// #4: Write a C++ program to find the third angle of a triangle.

#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter value of first angle: \n";
    cin >> a;

    cout << "Enter value of second angle: \n";
    cin >> b;

    cout << "Value of third angle: " << 180 - (a+b) << endl;
    return 0;
}