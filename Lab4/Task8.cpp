//#8: Write a program in C++ to find the sum of the digits of a given number.

#include <iostream>

using namespace std;

int main(){

    int number, sum = 0, num_digit, copy;
    cout << "Enter number: \n";
    cin >> number;
    copy = number;
    //just copy the value of number into the another variable so we can print it out later

    while(number > 0){
        num_digit = number % 10;
        //123 % 10 => 3
        sum += num_digit;
        number = number / 10;
        //123 / 10 => 12
    }

    cout << "Sum of digits of a number " << copy << " is " << sum << endl;
    return 0;
}