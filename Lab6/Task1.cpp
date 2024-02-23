// Created by User on 23. 2. 2024..
// #1: Write C++ program to print index and the value found on that index.

#include <iostream>

using namespace std;

int main(){
    string cars[5] = {"Volvo", "BMW", "Kia", "Toyota", "Mercedes"};
    for(int i = 0; i < 5; i++){
        cout << "On the index " << i  << ", value " << cars[i] << " is stored." << endl;
    }

}
