//#5: Write a C++ program that reads an integer
// and check the specified range where it belongs (0-20;21-50;51-80;).
// Print an error message if the number is negative or greater than 80.

#include <iostream>

using namespace std;

int main(){

    int no;

    cout << "Enter a number: " << endl;
    cin >> no;

    if (no >= 0 && no <= 20)
        cout << "Number is between 0 and 20.";
    else if (no >= 21 && no <= 50)
        cout << "Number is between 21 and 50.";
    else if (no >=51 && no <= 80) //80
        cout << "Number is between 51 and 80.";
    else if (no >= 81) //80
        cout << "Number is  greater than 80";
    else
        cout << "Number is negative.";
















return 0;
}
