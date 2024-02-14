// Created by User on 14. 2. 2024..
//#10: Write a C++ program that asks the user for the number
// between 1 and 7 and converts the number to the day in the week.

#include <iostream>

using namespace std;
int main(){
    int number;
    cout << "Enter a number to get a day in the week: "<<endl;
    cin >> number;

        switch(number) {
            case 1:
                cout << "Monday" << endl;
                break;
            case 2:
                cout << "Tuesday" << endl;
                break;
            case 3:
                cout << "Wednesday" << endl;
                break;
            case 4:
                cout << "Thursday" << endl;
                break;
            case 5:
                cout << "Friday" << endl;
                break;
            case 6:
                cout << "Saturday" << endl;
                break;
            case 7:
                cout << "Sunday" << endl;
                break;
            default:
                cout << "Value entered is not between 1 and 7" << endl;
            }
        }

