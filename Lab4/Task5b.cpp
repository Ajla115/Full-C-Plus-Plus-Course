// #5. b)  Write a C++ program to find sum of 10 numbers, but this time skip over negative numbers

#include <iostream>
#include <string> // Include the string header for using std::string
using namespace std;

int main() {
    int entries, sum  = 0, counter = 1, number;

    while(entries < 10){
        cout << counter << ". number is:  ";
        cin >> number;
        counter++; //this is used just to count numbers
        entries++; //this is the increment of the while loop

        if (number < 0){
            cout << "This is negative number, so skip over it...\n";
            continue;
        } else {
            sum += number;
        }
    }

    cout << "Total sum is " << sum << endl;
    return 0;
}