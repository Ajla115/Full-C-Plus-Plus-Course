//
// Created by User on 24. 2. 2024..
// #1: Write a C++ program that will check whether your multidimensional array has even numbers,
// and if yes, replace them with zeros.

#include <iostream>

using namespace std;

int main(){
    int numbers[2][3] = {{1,2,3}, {4,5,6}};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            if (numbers[i][j] % 2 == 0){
                numbers[i][j] = 0;
            }
        }
    }

    //print after switching
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
                cout << numbers[i][j] << " ";
        }
    }

    return 0;

}