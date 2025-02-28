// #7: Write a C++ program that reads an integer
// between 1 and 12 and print the month of the year in English.

#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "Enter number: \n";
    cin >> a;

    if (a == 1){
        cout << "January\n";
    }
    else if (a == 2){
        cout << "February\n";
    }
    else if (a == 3){
        cout << "March\n";
    }
    else if (a == 4){
        cout << "April\n";
    }
    else if (a == 5){
        cout << "May\n";
    }
    else if (a == 6){
        cout << "June\n";
    }
    else if (a == 7){
        cout << "July\n";
    }
    else if (a == 8){
        cout << "August\n";
    }
    else if (a == 9){
        cout << "September\n";
    }
    else if (a == 10){
        cout << "October\n";
    }
    else if (a == 11){
        cout << "November\n";
    }
    else if (a == 12){
        cout << "December\n";
    }
    else {
        cout << "Negative number or bigger than 12.\n";
    }

    return 0;
}