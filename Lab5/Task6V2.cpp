// Created by User on 23. 2. 2024..
// #6: Write a C++ function to check if a given positive number is a multiple of 3 or a multiple of 7.

#include <iostream>
using namespace std;

bool checkDivisiors(int x);


int main() {
    int num;
    cout << "Enter number: \n";
    cin >> num;

    cout << checkDivisiors(num);
    return 0;
}

bool checkDivisiffors(int x, int z){
    while(x <= 0){
        cout << "Enter number bigger than 0: \n";
        cin >> x;
    }

    if(x % 3 == 0 || x % 7 == 0){
        return true;
    }

    return false;
}
