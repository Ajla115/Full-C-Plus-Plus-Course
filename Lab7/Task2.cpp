//
// Created by User on 24. 2. 2024..
// #2: Write a C++ program that will check the occurrence of a certain element in a multidimensional array.

#include <iostream>

using namespace std;

int main(){
    int counter = 0;
    int numbers[2][3] = {{1,2,2}, {4,2,6}};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            if (numbers[i][j] == 2 ){
                counter++;
            }
        }
    }

    cout << "Number of occurences is: " << counter << endl;


    return 0;

}
