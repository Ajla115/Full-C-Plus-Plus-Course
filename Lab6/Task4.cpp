// Created by User on 23. 2. 2024..
// #4: Write C++ program to count the number of occurrences of specific element in an array.

#include <iostream>

using namespace std;

int main(){
    int numbers[] = {23,45,67,45,11,89,90,45};
    int specific_number = 45;
    int counter = 0;

    for(int number : numbers ){
        if(number == specific_number){
            counter++;
        }
    }

    cout << "Number of occurences is: " << counter << endl;
}