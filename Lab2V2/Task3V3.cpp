//
// Created by User on 5. 3. 2024..
// #3: Write a C++ program that reads an integer between
// 1 and 12 and print the month of the year in English.

#include <iostream>

using namespace std;

int main(){

    int month;
    cout << "Enter month: ";
    cin >> month;

    switch(month){
        case 1:
            cout << "January\n";
            break;
        case 2:
            //else if(month == 2)
            cout << "February\n";
            break;
        case 3:
            //else if (month == 3)
            cout << "March\n";
            break;
        default:
            //else
            cout << "No match was found";
    }

    return 0;
}
