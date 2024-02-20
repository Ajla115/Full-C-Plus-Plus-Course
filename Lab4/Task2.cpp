
// #2: Write a C++ program to find and print the square of each odd number from 1 to user specified value.

#include <iostream>

using namespace std;

int main() {
    int endValue;
    cout << "Please enter the end value: " <<endl;
    cin >> endValue;

    for (int i = 1; i <=  endValue; i++){
        if ( i % 2 != 0){
            cout << "Value is: "<< i << " and square value is: " << i  * i << endl;
        }
    }
}