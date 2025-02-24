//#8: Write a C program to swap the values of 2 variables.
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int  var1, var2, temp;

    cout << "Enter first variable: " << endl;
    cin >> var1;

    cout << "Enter second variable: " << endl;
    cin >> var2;

    temp = var1;
    var1 = var2;
    var2 = temp;

    cout << "Value in variable 1 after replacement is: " << var1 << endl;
    cout << "Value in variable 2 after replacement is: " << var2 << endl;

    return 0;

}