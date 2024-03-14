// Created by User on 20. 2. 2024..
// #6: Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + …..+ 1/n^n.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int end, i = 2, number;
    double  sum = 1.0;
    cout << "Enter end number: \n";
    cin >> end;

    while(i <= end){
        double number = 1.0 / (pow(i, i));
        //be careful, about the integer and double division
        sum += number;
        i++;
    }

    cout << "Final sum is: " << round(sum*100)/100 <<  endl;
    return 0;
}

