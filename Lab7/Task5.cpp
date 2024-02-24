//
// Created by User on 24. 2. 2024..
// #5: Write a C++ program that will give us the maximum value inside a multidimensional array

#include <iostream>

using namespace std;

int main(){
    int numbers[2][3] = {{1,12,3}, {4,7,6}};
    int max = 0;

    max = numbers[0][0];

    for(int i = 0; i < 2; i++){
        for(int j = 1; j < 3; j++) {
            if (numbers[i][j] > max){
                max = numbers[i][j];
            }
        }
    }

    cout << "Max is " << max << endl;

}