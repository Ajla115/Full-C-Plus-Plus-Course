//
// Created by User on 5. 3. 2024..
// #1: Write a C++ program that reads an integer and check
// the specified range where it belongs (0-20;21-50;51-80;).
//Print an error message if the number is negative or greater than 80.

#include <iostream>

using namespace std;

int main(){

    int no;
    cout << "Enter number: \n";
    cin >> no;

    if (no > 0 && no <= 20){
        cout << "Range (0-20)\n";
    }
    else if (no >= 21 && no <= 50){
        cout << "Range(21-51)\n";
    }
    else if(no > 50 && no <= 80){
        cout << "Range (50 - 81)\n";
    }
    else {
        cout << "Bigger than 80 or negative.\n";
    }



    return 0;


}


