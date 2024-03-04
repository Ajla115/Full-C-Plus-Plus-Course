//#8: Write a C program to swap the values of 2 variables.
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int  var1, var2;
    cout << "Enter value 1: " << endl;
    cin >> var1;

    cout << "Enter value 2: " << endl;
    cin >> var2;

    var1 = var1 + var2 ;
    var2 = var1 - var2;
    var1 = var1 - var2;

    cout << "Value 1 and value 2:  " << var1 << " " << var2;

    return 0;



}