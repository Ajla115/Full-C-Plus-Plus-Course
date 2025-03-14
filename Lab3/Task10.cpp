//Create complex calculator using switch case.
//The calculator should include:
//Basic functions (+, - , *, /)
//Logarithm,
//Square root of a number,
//Number to the power,
//Trigonometric functions (sin, cos, tan)
//Value rounded down and rounded up.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cout << "Option 1: Addition\n";
    cout << "Option 2: Subtraction\n";
    cout << "Option 3: Multiplication\n";
    cout << "Option 4: Division\n";
    cout << "Option 5: Logarithm\n";
    cout << "Option 6: Square root\n";
    cout << "Option 7: Number to a certain power\n";
    cout << "Option 8: Sin, cos and tan\n";
    cout << "Option 9: Round up and down\n";
    cout << "Option 10: Just exit the program\n";

    int option, n1, n2;
    double n3;
    cout << "Please choose appropriate option:\n";
    cin >> option;

    switch(option){
        case 1:
            cout << "Enter two numbers: " << endl;
            cin >> n1 >> n2;
            cout << "Result of addition is: " << n1 + n2 << endl;
            break;
        case 2:
            cout << "Enter two numbers: " << endl;
            cin >> n1 >> n2;
            cout << "Result of subtraction is: " << n1 - n2 << endl;
            break;
        case 3:
            cout << "Enter two numbers: " << endl;
            cin >> n1 >> n2;
            cout << "Result of multiplication is: " << n1 * n2 << endl;
            break;
        case 4:
            cout << "Enter two numbers: " << endl;
            cin >> n1 >> n2;
            cout << "Result of division is: " << n1 / n2 << endl;
            break;
        case 5:
            cout << "Enter one number: " << endl;
            cin >> n1;
            if (n1 != 0){
                cout << "Logarithm of  " << n1 << " is " << log(n1)<< endl;
            }
            else {
                cout << "Logarithm of 0 is undefined." << endl;
            }
            break;
        case 6:
            cout << "Enter one number: " << endl;
            cin >> n1;
            if (n1 >= 0){
                cout << "Square root of  " << n1 << " is " << sqrt(n1)<< endl;
            }
            else {
                cout << "Square root of negative numbers is in irrational set of numbers." << endl;
            }
            break;
        case 7:
            cout << "Enter two numbers: " << endl;
            cin >> n1 >> n2;
            cout << n1 << " to the power of " << n2 << " is " << pow(n1, n2) << endl;
            break;
        case 8:
            cout << "Enter one number: " << endl;
            cin >> n1;
            cout << " Sin of " << n1 << " is " << sin(n1) << endl;
            cout << " Cos of " << n1 << " is " << cos(n1) << endl;
            cout << " Tan of " << n1 << " is " << tan(n1) << endl;
            break;
        case 9:
            cout << "Enter one number: " << endl;
            cin >> n3;
            cout << " Round up of  " << n3 << " is " << ceil(n3) << endl;
            cout << " Round down of  " << n3 << " is " << floor(n3) << endl;
            break;
        case 10:
            cout << "Exiting...." << endl;
            break;
    }

    return 0;
}
