// Created by User on 24. 2. 2024..
// #7: Write a C++ program that will print out all elements from a three-dimensional array.

#include <iostream>

using namespace std;

int main(){
    int numbers[3][4][3] = {{{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}},
                            {{12,13,14}, {15,16,17}, {18,19,20}, {21,22,23}},
                            {{24,25,26}, {27,28,29}, {30,31,32}, {33,34,35}}};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 3; k++){
                cout << numbers[i][j][k] << " ";
            }
        }
    }

    return 0;
}