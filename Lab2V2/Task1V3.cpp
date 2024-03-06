//
// Created by User on 5. 3. 2024..
// #1: Write a C++ program that reads an integer and check
// the specified range where it belongs (0-20;21-50;51-80;).
//Print an error message if the number is negative or greater than 80.

#include <iostream>

using namespace std;

int main(){
    int no;
    cout << "Enter a number: \n";
    cin >> no;

    if (no > 0 && no <= 20) {
        cout << "Number is bigger than 0 and smaller than twenty";
    }
    else if (no > 20 && no <= 50){ //1
        cout << "Number is bigger than 20, but smaller or equal than 50.\n";
    }
    else if(no > 50 && no <= 80){ //2
        cout << "Number is bigger than 50, but smaller than 80.";
    }
    else if (no > 80) {
        cout << "Number is  greater than 80.";
    }
    else {
        cout << "Number is negative.";
    }

    return 0;


}


