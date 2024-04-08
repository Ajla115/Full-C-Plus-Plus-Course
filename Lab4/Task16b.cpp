//Write a C++ program to reverse a number.

#include <iostream>
using namespace std;

int main(){
    int number, reversedNumber = 0, num_digit;
    cout << "Enter a number: " << endl;
    cin >> number;

    cout << "Original number is: " << number << endl;

    while(number != 0){
       num_digit = number % 10; // 75 % 10 = 5 // 2nd round  7 % 10 = 7
       reversedNumber = reversedNumber * 10 + num_digit; // 0 * 10 + 5 = 5 --> first iteration //5*10 + 7 = 57
       number = number / 10;  //75/10 = 7 //2.round 7 / 10 = 0 --> break the loop
   }

   cout << "Reversed number is: " << reversedNumber << endl;
   return 0;
}