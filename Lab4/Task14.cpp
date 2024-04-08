// Created by User on 20. 2. 2024..
//#14: Write a program in C++ to display the multiplication table vertically from 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int j, i, n;

    cout << "Display the multiplication table vertically from 1 to n: " << endl;
    cout << "Input number: ";
    cin >> n;

    cout << "Multiplication table from 1 to " << n << endl;
    for (i = 1; i <= 10; i++)  //here go numbers from 1 to 10
    {
        for (j = 1; j <= n; j++) //and here from one to n
        {
            cout << j << "x" << i << "=" << i * j <<endl;

        }
        cout << endl;
    }
    return 0;
}

