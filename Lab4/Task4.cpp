#include <iostream>
#include <string> // Include the string header for using std::string

using namespace std;

int main() {
    string userPassword, guess;
    cout << "Please enter the your password: " << endl;
    cin >> userPassword;

    int count = 0;
    while (count <= 5) { // Change condition to < 5 to allow 5 guesses
        cout << "Please try to guess the password: " << endl;
        cin >> guess;

        if (guess == userPassword) { // Compare strings using the == operator
            cout << "Congratulations, you have guessed the password" << endl;
            break;
        }
        count++;
    }

    if (count == 6) { // Check if the user has used all 5 guesses
        cout << "Unfortunately, you have used all of your 5 guesses. Restart and try again." << endl;
    }

    return 0;
}
