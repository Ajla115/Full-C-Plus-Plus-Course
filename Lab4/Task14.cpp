// Created by User on 20. 2. 2024..
//#14: Write a program in C++ to display the multiplication table vertically from 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int j, i, n;

    cout << "Display the multipliaction table vertically from 1 to n: " << endl;
    cout << "Input the number up  to 5: ";
    cin >> n;

    cout << "Multiplication table from 1 to " << n << endl;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n - 1)
                cout << j << "x" << i << "=" << i * j <<endl;
            else
                cout << j << "x" << i << "=  " << i * j<<endl;
        }
        cout << endl;
    }
}

