//#11: Write a C++ program to perform different operations based on the choice (menu-like behavior):
//In case the user selects option 1 - ask the user to enter year of birth.
//In case the user selects option 2 - calculate how old the user is (if the user entered value; if not, ask the user to enter year of birth).
//In case the user selects option 3 - the program will inform the user if the user is old or not (OLD users are the one who have more than 40 years).

#include <iostream>

using namespace std;

int main(){

    int option, day = 0, month = 0, year = 0, age;
    string dob;

    cout << "Choose menu option: \n";
    cout << "Option 1 - ask the user to enter date of birth\n";
    cout << "Option 2 - calculate user's age\n";
    cout << "Option 3 - inform the user about their age\n";
    cout << "Option 4 - exit the program\n";
    cout << "Chose your option: \n";

    cin >> option;

    switch(option){
        case 1:
            cout << "Please enter your date of birth(enter just numbers):\n";
            cin >> day >> month >> year;
            cout << "Your date of birth is " << day << "." << month << "." << year << ".\n";
            break;
        case 2:
            if (year == 0 ){
                cout << "Please enter your year of birth, so we can calculate your age: \n";
                cin >> year;
                age = 2024 - year;
                cout << "Your age is " << age;
            }
            else {
                age = 2024 - year;
                cout << "Your age is " << age;
            }
            break;
        case 3:
            if (year == 0){
                cout << "Please enter your year of birth, so we can calculate your age: \n";
                cin >> year;
            }
            age = 2024 - year;
            if (age < 40){
                cout << "You are young\n";
            }
            else {
                cout << "You are old.\n";
            }
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "There is no match for this option.\n";

    }

    return 0;
}