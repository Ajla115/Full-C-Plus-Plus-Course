//#11: Write a C++ program to simulate calculator behavior using switch - case.

#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    char sign;

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;

    cout << "Enter sign of desired operation: " << endl;
    cin >> sign;

    switch(sign){
        case '+':
            cout << "Sum is: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Subtraction result  is: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Multiplication is: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Division is: " << num1 / num2 << endl;
            break;
        case '%':
            cout << "Remainder is: " << num1 % num2 << endl;
            break;
        default:
            cout << "This operator is not allowed";
    }

    return 0;

}
