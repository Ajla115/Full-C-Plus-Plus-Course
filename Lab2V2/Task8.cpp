//#8: Write a C++ program that asks the user to enter password and
// check if the password is valid.
//Valid password is “Test124”.

#include <iostream>

using namespace std;

int main(){
    string guess;

    cout << "Enter your guess: \n";
    cin >> guess;

    if (guess == "Test124"){
        cout << "Correct Password";
    }
    else {
        cout << "Wrong password.";
    }

    return 0;
}
