// Created by User on 15. 2. 2024..
// #4: Write a C++ program to count the total number of digits 1 appearing in all positive integers less than or equal
// to a given integer n.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number";
    cin>>num;

    int m = 0, k = 0, result = 0, base = 1;
    while (num > 0) {
        k = num % 10;
        num = num / 10;

        if (k > 1) { result += (num+1)*base; }
        else if (k < 1) { result += num*base; }
        else { result += num*base+m+1; }

        m += k*base;
        base *= 10;
    }


    return 0;
}

