//#7. Write a C++ program to ask 2 users to enter the name, surname and year of birth.
//The program will then print out Welcome message for each.
//Also, the program will calculate how old both people are.
//Finally, the program will print out who is older.

#include <iostream>
using namespace std;

int main(){

    string n1, n2;
    int year1, year2;

    cout << "Enter first and last name for user 1: " << endl;
    getline(cin, n1);
    cout << "Enter year for user 1: " << endl;
    cin >>  year1;

    /*cin>> leaves the newline character (\n) in the iostream. If getline is used after cin>>,
    the getline sees this newline character as leading whitespace, thinks it is finished and stops reading any further.
    So, if you are going to use getline after cin, include ingore function to clean up the buffer
    Otherwise, it would just skip the next input*/

    cin.ignore();

    cout << "Enter first and last name for user 2: " << endl;
    getline(cin, n2);
    cout << "Enter year for user 2: " << endl;
    cin >>  year2;

    //Types of concatination in C++
    cout << "Welcome user 1 " << n1 << endl;
    cout << "Welcome user 2 " << n2 << endl;

    //Another way of concatination is appending, eg. :
    //fn1.append(ln2)
    //now, when we would print just fn1, we would an output that contains both values that we entered for fn1 and ln1

    if (2024 - year1 > 2024 - year2){

        cout << "User " << n1 << " is older than " << n2<< endl;
    }
    else if (2024 - year1 == 2024 - year2){
        cout << "Users are of the same age." << endl;
    }
    else {
        cout << "User " << n2 << " is older than " << n1 << endl;
    }

    return 0;

}