// Created by User on 6. 3. 2024..
// #10: Write a C++ program to input any character and check whether
// it is the alphabet,
// digit or special character by using switch statement

#include <iostream>

using namespace std;

int main(){

    char value;
    int result;

    cout << "Enter a value " << endl;
    cin >> value;

    result = isdigit(value);

    switch (result) {
        case 1:
            cout << "It is a number." << endl;
            break;
        case 0:
            cout << "It is not a number." << endl;
            break;
        default:
            cout << "Error" << endl;
    }

    return 0;

}
