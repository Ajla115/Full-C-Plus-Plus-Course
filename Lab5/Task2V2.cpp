//#2: Write a function in C++ to ask user to enter password as long as the user
// doesn’t enter correct password.

#include <iostream>
using namespace std;

void guessPassword() {

    string guess;


    while (true) {
        cout << "Enter your guess: " << endl;
        getline(cin, guess);

        if (guess == "Programming12345") {
            cout << "Your password is correct.\n";
            break;
        }

        if (guess == "Quit" || guess == "quit") {
            cout << "Exiting...";
            break;
        }
    }
}

int main(){

    guessPassword();

    return 0;
}

