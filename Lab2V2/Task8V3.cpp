//
// Created by User on 5. 3. 2024..
//#8: Write a C++  Program to find the maximum between three numbers.
#include <iostream>
using namespace std;

int main() {
   int a,b,c;
   cout << "Enter three numbers: \n";
   cin >> a >> b >> c;

   if (a > b && a > c){
       cout << a << " is max.\n";
   }
   else if (b>c){
       cout << b << " is max.\n";
   }
   else {
       cout << c << " is max.\n";
   }

    return 0;
}
