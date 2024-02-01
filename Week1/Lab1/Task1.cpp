// Created by User on 1. 2. 2024..

/*#1: Write a C program to print your name, date of birth and mobile number.*/

#include <iostream>
using namespace std;

int main() {
    string name;
    string surname;
    string dob;
    string mobile;

    cout << "Enter your first and last name: \n";
    cin >> name >> surname;

    cout << "Enter your date of birth: " << endl;
    cin >> dob;

    cout << "Enter your mobile phone: " << endl;
    cin >> mobile;

    cout << "This is a person named " << name << " " << surname << ", which was born on " << dob << " Its phone number is " << mobile << endl;
}
