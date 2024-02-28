// #13: Create a simple calculator application.
// The user will enter two numbers, and the application will perform calculation using 4 basic operations.

#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    cout << "Division: " <<  ((double)num1 / num2)  << endl;


}
