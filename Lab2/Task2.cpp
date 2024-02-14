//
// Created by User on 12. 2. 2024..
//#2: Write a C++ program to find the size of fundamental data types.
//Hint: use sizeof function

#include <iostream>
using namespace std;

int main()
{
    cout << "Find Size of fundamental data types: "<<endl;
    cout << " The sizeof(char) is : " << sizeof(char) << " bytes" <<endl;
    cout << " The sizeof(int) is : " << sizeof(int) << " bytes" <<endl;
    cout << " The sizeof(float) is : " << sizeof(float) << " bytes" <<endl;
    cout << " The sizeof(double) is : " << sizeof(double) << " bytes" <<endl;
    cout << " The sizeof(bool) is : " << sizeof(bool) << " bytes" <<endl;
    return 0;
}