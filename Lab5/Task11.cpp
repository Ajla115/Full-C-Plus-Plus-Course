// Created by User on 23. 2. 2024.
// #11: Write a function to swap the values of 2 numbers (using call by reference).

#include <iostream>

using namespace std;
void swapValues(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Value of num1 before swapping is " << num1 << endl;
    cout << "Value of num2 before swapping is " << num2<< endl;

    swapValues(num1, num2);

    cout << "Value of num1 after swapping is " << num1 << endl;
    cout << "Value of num2 after swapping is " << num2<< endl;
}
