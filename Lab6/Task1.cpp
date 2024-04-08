// Created by User on 23. 2. 2024..
// #1: Write C++ program to print index and the value found on that index.

#include <iostream>

using namespace std;

int main(){
    string cars[5] = {"Volvo", "Range Rover", "VW", "Audi", "Toyota"};

    for(int i = 0; i < 5; i++){
        cout << "Index: " << i << ", Value: " << cars[i] << endl;
    }

    cout << "Using foreach loop: " << endl;
    for(string single_item : cars){
        cout << "Car is: " << single_item << endl;
    }








}
