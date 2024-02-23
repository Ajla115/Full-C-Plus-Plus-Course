//#2: Write a function in C++ to ask user to enter password as long as the user doesn’t enter correct password.
//strcmp(correctPass, guess) function is used for std::string
//basic comparison is used for regular strings

#include <iostream>
#include <cstring>

using namespace  std;
void guessPassword(string correctPass){
    string guess;
    cout << "Enter your guess for password: " << endl;
    cin >> guess;

    while(correctPass !=  guess){
        cout << "You have entered wrong password. Please try again!" << endl;
        cin >> guess;
    }

    cout << "Password is guessed correctly" << endl;
}
int main(){
    string correctPass, guess;
    cout << "Please enter the correct password: " << endl;
    getline(cin, correctPass);

    guessPassword(correctPass);

}