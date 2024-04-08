//#8: Write a program in C++ to find the sum of the digits of a given number.

#include <iostream>

using namespace std;

int main(){

    int number, sum = 0, num_digit, copy;
    cout << "Enter number: \n";
    cin >> number;
    //123
    copy = number;
    //just copy the value of number into the another variable so we can print it out later

    while(number > 0){
        num_digit = number % 10;
        //123 % 10 = 3
        //12 % 10 = 2
        // 1 % 10 = 1 //0.1
        sum += num_digit;
        //0+3 = 3 + 2 = 5 +1 = 6
        number = number / 10;
        // 123 / 10 = 12
        // 12 / 10 = 1
        // 1 / 10 = 0

    }


    cout << "Sum of digits of a number " << copy << " is " << sum << endl;
    return 0;
}