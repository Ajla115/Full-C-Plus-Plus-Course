//#7. Write a C++ program to ask 2 users to enter the name, surname and year of birth.
//The program will then print out Welcome message for each.
//Also, the program will calculate how old both people are.
//Finally, the program will print out who is older.

#include <iostream>
using namespace std;

int main(){

    string fn1, fn2, ln1, ln2;
    int year1, year2;

    cout << "Enter first, last name and year of birth for user 1: " << endl;
    cin >> fn1 >> ln1 >> year1;
    //cout<< fn1 << ln1 ;

    cout << "Enter first,last name and year of birth for user 2: " << endl;
    cin >> fn2 >> ln2 >> year2;

    //Types of concatination in C++
    cout << "Welcome user 1 " << fn1 + " "  + ln1 << endl;
    cout << "Welcome user 2 " << fn2 + " "  + ln2 << endl;

    //Another way of concatination is appending, eg. :
    //fn1.append(ln2)
    //now, when we would print just fn1, we would an output that contains both values that we entered for fn1 and ln1

    if (2024 - year1 > 2024 - year2){

        cout << "User " << fn1 + " "  + ln1 << " is older than " << fn2 + " "  + ln2 << endl;
    }
    else if (2024 - year1 == 2024 - year2){
        cout << "Users are of the same age." << endl;
    }
    else {
        cout << "User " << fn2 + " "  + ln2 << " is older than " << fn1 + " " + ln1 << endl;
    }

    return 0;

}