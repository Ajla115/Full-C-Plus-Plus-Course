// #7: Write a program in C++ to find the factorial of a number.

#include <iostream>

using namespace std;

int main(){
    //6
    //6*5*4*3*2*1 = 720

    int seconds;
    cout << seconds;

    int num, factorial = 1;
    cout << "Enter number: " << endl; //6
    cin >> num;

    for( int i = num; i > 0; i--){
        factorial *= i;
        //1*6*5*4*3
    }

    cout << "Factorial of a number " << num << " is " << factorial << endl;
    return 0;



}