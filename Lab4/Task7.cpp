// #7: Write a program in C++ to find the factorial of a number.

#include <iostream>

using namespace std;

int main(){
    int number, factorial = 1; //give factorial immediately value of 1
    cout << "Enter number: \n";
    cin >> number;

    for(int i = number; i > 0; i--){
        //be sure to exclude 0 from i > 0, otherwise whole result will be zero
        factorial *= i;
    }
    cout << "Factorial value of number " << number << " is " << factorial << endl;
    return 0;
}