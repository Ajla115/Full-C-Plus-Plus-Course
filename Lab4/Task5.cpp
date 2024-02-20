// Created by User on 20. 2. 2024..
//#5: Write a C++ program to find the sum of 10 numbers (entered by user). If the user enters negative number,
// the loop is terminated and sum is displayed.

#include <iostream>
#include <string> // Include the string header for using std::string

using namespace std;

int main() {
    int num1, sum = 0;
    for (int i = 1; i <= 10; i++){
        cout << "Please enter your "<< i <<". number" << endl;
        cin >> num1;
        if ( num1 < 0){
            break;
        }
        sum += num1;
    }

    cout << "Sum is: " << sum << endl;

    return 0;
}