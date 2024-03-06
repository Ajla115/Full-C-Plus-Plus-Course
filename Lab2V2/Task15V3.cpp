//
// Created by User on 6. 3. 2024..
// #15: Write a C++ program to convert an even number into the nearest next odd number.

#include <iostream>

using namespace std;

int main(){
    int no;
    cout << "Enter a number: ";
    cin >> no;

    if (no % 2 != 0){
        cout << no << " is already an odd number, so nothing will be done.\n";
    }
    else {
        no++; //no = no+1
        cout << "The new odd number that replaces the even number is " << no << endl;
    }

    return 0;
}
