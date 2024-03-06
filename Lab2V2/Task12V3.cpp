//
// Created by User on 6. 3. 2024..
//

#include <iostream>
using namespace std;

int main() {
    int year;

    // Prompt the user to enter the year
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

