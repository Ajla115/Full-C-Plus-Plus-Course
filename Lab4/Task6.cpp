// Created by User on 20. 2. 2024..
// #6: Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + 1/4^4 + 1/5^5 + 1/6^6…..+ 1/n^n.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int  number;
    double  sum = 1.0;
    cout << "Enter end number: " << endl;
    cin >> number;
    for(int i = 2; i <= number; i++){
        sum += 1.0/(pow(i,i));
        // 1.0 / 4 = 0.25
    }

    cout << "Final sum is: " << round(sum*1000)/1000<<  endl;
    //1.2456788887
    //124.567
    //125
    //1.25
    //round(sum)
    //1.59
    //1   2
    return 0;
}

