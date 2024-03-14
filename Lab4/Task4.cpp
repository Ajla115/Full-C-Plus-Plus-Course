//#4: Write a C++ program to ask user for password until they enter correct password.
// The password will be initially set by the user.
//If the user enters wrong password 5 times, print out “Wrong password, better luck next time.”

#include <iostream>
#include <string>

using namespace std;

int main() {
    int attempt = 0;
    string initialPassword = "guess123", guessPass;

    cout << "Try to guess the password: \n";
    cin >> guessPass; //this is the first attempt to guess the password

    while(attempt < 5){

        if (guessPass == initialPassword){
            cout << "Congratulations! You have guessed the password\nExiting...";
            break;
        }
        else {
            cout << "Unfortunately, wrong password. Guess again: \n";
            cin >> guessPass;
        }

        attempt++;
    }
    return 0;
}
