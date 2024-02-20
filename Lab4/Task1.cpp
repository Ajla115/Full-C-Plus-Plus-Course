//
// Created by User on 20. 2. 2024..
// #1: Write a C++ program to print all even numbers from 1 to 50 (inclusive).

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 50; i++){
        if ( i % 2 == 0){
            cout << i << endl;
        }
    }
}