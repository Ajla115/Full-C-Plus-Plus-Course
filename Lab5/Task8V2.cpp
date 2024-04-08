//#8: Write a function in C++ to check if a year is a leap year or not.
//Note: Leap year perfectly divisible by 400;
//- if not divisible by 400 and divisible by 100 it is NOT a leap year;
//- if not divisible by 100 but divisible by 4 it IS a leap year.

#include <iostream>
using namespace std;

bool checkIfLeap(int year) {

    while(year < 1582){
        cout << "Enter value bigger than 1582: \n";
        cin >> year;
    }

    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
        return true;
    }
    return false;
}

int main() {
    int year;
    cout << "Enter year: \n";
    cin >> year;

    if(checkIfLeap(year)){
        cout << year << " is a leap year.";
    }
    else {
        cout << year << " is not a leap year.\n";
    }

    return 0;
}