//#3: Ask the user to enter 3 numbers and then create a simple calculator application.
//Your calculator should:
//a) find the sum of three numbers
//b) find the difference of three numbers
//c) multiply first two numbers and then subtract third one
//d) divide last two numbers and add the first one

#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3;

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Enter third number: " << endl;
    cin >> num3;

    cout << "Operation 1: " << num1 + num2 + num3 << endl;
    cout << "Operation 2: " << num1 - num2 - num3 << endl;
    cout << "Operation 3: " << num1 * num2 - num3 << endl;
    cout << "Operation 4: " << num2 / num3 + num1 << endl;

    return 0;

}
