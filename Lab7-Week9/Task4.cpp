// Created by User on 24. 2. 2024..
// #4: Write a C++ program that will calculate the sum and average of all values in a multidimensional array.

#include <iostream>

using namespace std;

int main(){
    int numbers[2][3] = {{1,2,3}, {4,5,6}};
    int sum = 0, counter = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++) {
            sum += numbers[i][j];
            counter++;
        }
    }

    double avg = (double) sum / counter;
    cout << "Sum is " << sum << endl;
    cout << "Avg is " << avg << endl;

    return 0;

}