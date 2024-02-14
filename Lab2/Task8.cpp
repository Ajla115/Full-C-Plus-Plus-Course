
// Created by User on 14. 2. 2024..
//#8: Write a C++ program that asks the user to enter password and
// check if the password is valid.
//Valid password is “Test124”.

#include <iostream>

using namespace std;

int main(){
    const string valid_password = "Test124";
    string guess;

    cout << "Enter your password: " <<endl;
    cin >> guess;

    if (valid_password==guess){
        cout<<"Password is correct.";
    }
    else{
        cout<<"Password is not correct.";
    }

    return 0;

}
