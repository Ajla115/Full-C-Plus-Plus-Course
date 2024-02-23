// Created by User on 23. 2. 2024..
// #10: Write a function to duplicate the value of a number – using passing parameter by reference.

#include <iostream>

using namespace  std;
int duplicateValue(int &num1){
    return num1*num1;
}
int main(){
    int num1;
    cout << "Enter number: " ;
    cin >> num1;

    cout << duplicateValue(num1);
}
