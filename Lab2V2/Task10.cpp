//#10: Write a C++ program that asks the user for the
// number between 1 and 7 and converts the number to the day in the week.

#include <iostream>

using namespace std;

int main(){

    int day;
    cout << "Enter day: \n";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "Number should be between 1 and 7.";
    }

    return 0;

}
