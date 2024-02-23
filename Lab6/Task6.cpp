// #6: Write C++ function to find the average of all values in an array.
// Created by User on 23. 2. 2024..

#include <iostream>
using namespace std;

int main(){
    int numbers[] = {1,2,3};
    int counter = 0, sum = 0;
    int arrLength = sizeof(numbers) / sizeof(int);

    for(int i = 0; i < arrLength; i++ ){
        sum += numbers[i];
        counter++;
    }
    cout << "Average is " << sum / counter;
    return 0;
}
