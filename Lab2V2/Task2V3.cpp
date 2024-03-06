//
// Created by User on 5. 3. 2024..
// #2: Write a C++ program that reads two integers and
// checks if they are multiplied or not.
//
//Test Data :
//Input the first number: 5
//Input the second number: 15
//Expected Output: Multiplied!

#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout << "Enter two numbers: \n";
    cin >> a >> b;

    if (a % b == 0 || b % a == 0){
        cout << "Multiplied!\n";
    } else { //false
        cout << "Not Multiplied\n";
    }

    return 0;
}