//
// Created by User on 6. 3. 2024..
// #10: Write a C++ program to input any character and check whether
// it is the alphabet,
// digit or special character by using switch statement

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Input a character: \n";
    cin >> ch;

    switch(ch){

    case '0': case '1': case '2' : case '3': case '4': case '5':
    case '6' : case '7' : case '8' : case '9' :
        cout << "It is a number\n";
        break;

    case '!': case '@': case '#': case '$': case '%': case '^': case '&': case '*': case '(': case ')':
    case '-': case '_': case '+': case '=': case '[': case ']': case '{': case '}': case '|': case '\\':
    case ';': case ':': case '\'': case '"': case '<': case '>': case ',': case '.': case '/': case '?':
         cout << "It is a special character." << endl;
         break;

    default:
          cout << "It is a letter.";

    }

    return 0;
}