//
// Created by User on 23. 2. 2024..
// #3: Display sum and average of array elements.

#include <iostream>

using namespace std;

int main(){
    int numbers[] = {1,2,3};
    int sum = 0, avg = 0;
    int arrLength = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < arrLength ; i++){
        sum += numbers[i];
    }
    avg = sum / arrLength;

    cout << "Sum is " << sum << endl;
    cout << "Average is " << avg << endl;
}