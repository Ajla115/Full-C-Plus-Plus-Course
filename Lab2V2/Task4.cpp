//
// Created by User on 5. 3. 2024..
// #4: Write a C++ program that asks the user to enter a
// username and password and check if the credentials are valid.
//Valid username is “testuser” and password is “Test124”.

#include <iostream>

using namespace std;
int main(){
    string username, password;

    cout << "Enter username and password: \n";
    cin >> username >> password ;

    if (username == "testuser" && password == "Test124"){
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;

}
