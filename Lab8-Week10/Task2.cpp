// Created by User on 25. 2. 2024..
// #2: Add all values from array using pointers.

#include <iostream>

using namespace std;

int main(){

    int *numpoint;
    int sum = 0 ;
    int numbers[5] = {1,2,3,4,5};
    numpoint = numbers;

    for(int i = 0; i < 5; i++){
        sum += *numpoint;
        numpoint++;
    }
    cout << "Sum is: " << sum;
    return 0;
}

