
// #2: Write a C++ program to find the size of fundamental data types.
//Hint: use sizeof function


#include <iostream>
using namespace std;

int main(){

    cout << "The size of integer data type is " << sizeof(int) << " bytes.\n";
    cout << "The size of double data type is " << sizeof(double) << " bytes.\n";
    cout << "The size of float data type is " << sizeof(float) << " bytes.\n";
    cout << "The size of char data type is " << sizeof(char) << " bytes.\n";
    cout << "The size of string data type is " << sizeof(string) << " bytes.\n";
    cout << "The size of bool data type is " << sizeof(bool) << " bytes.\n";



    return 0;
}