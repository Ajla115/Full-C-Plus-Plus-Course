// #13: Create a simple calculator application.
// The user will enter two numbers, and the application will perform calculation using 4 basic operations.

#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    cout << "Sum is " << num1 + num2 << endl;
    cout << "Division is " << num1 - num2 << endl;
    cout << "Multiplication is " << num1 * num2 << endl;
    cout << "Division is " <<  ((double) num1)/ num2 << endl;

    return 0;


}
