//
// Created by User on 15. 2. 2024..
// #5: Write a C++ program to reverse the string.

#include <iostream>

using namespace std;

int main(){
    string value, reversedString;
    cout << "Please enter a string whose value will be reversed: "<< endl;

    // Read the whole line, allowing spaces and longer phrases
    getline(cin, value);

    for(int i = value.length() - 1; i >= 0; i--){
        reversedString += ((value[i]));
    }

    //This is not needed with std::string, but only with char type
    //reversedString += '\0';

    cout << "Reversed string is:  "<< reversedString<< endl;
}

