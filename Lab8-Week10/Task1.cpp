// Created by User on 25. 2. 2024..
// #1: Print out values of an array using pointers.

#include <iostream>

using namespace std;

int main(){

    int *numpoint;
    int numbers[5] = {1,2,3,4,5};
    numpoint = numbers;

    for(int i = 0; i < 5; i++){
        cout << *numpoint << " ";
        numpoint++;
    }
    return 0;
}
