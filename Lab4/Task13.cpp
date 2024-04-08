// Created by User on 20. 2. 2024..
// #13:Write a program in C++ to calculate the sum of the series
// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).

#include <iostream>
using namespace std;

int main()
{
    double sum = 0, a;
    int n, i;
    cout << "\n\n Find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):\n";
    cout << "----------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        a =  i*i;
        cout <<  i << "*" << i << " = " << a << endl;
        sum += a;
    }
    cout << " The sum of the above series is: " << sum << endl;
}
