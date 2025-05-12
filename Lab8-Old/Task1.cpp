// Created by User on 24. 2. 2024..
// #1: Write a C++ program that will find sum of numbers until user specified number (using recursion).


#include <iostream>
using namespace std;

int sumRecursively(int end){
    int sum = 0;
    if (end == 0) // Base case: If the end number is 0, return 0
        return 0;
    else
        return end +  sumRecursively(end - 1); // Recursively call the function with end-1
}


int main(){

    int end;

    cout << "Enter stop number: ";
    cin >> end;

    cout << "Sum until number " << end << " is " << sumRecursively(end);
    return 0;

}
