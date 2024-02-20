//
// Created by User on 20. 2. 2024..
//

//#15: Write a program in C++ to display the multiplication table vertically from 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int j, i, n;

    cout << "\n\n Display the multipliaction table vertically from 1 to n:\n";
    cout << "-------------------------------------------------------------\n";
    cout << "Input the number upto 5: ";
    cin >> n;

    cout << "Multiplication table from 1 to " << n << endl;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n - 1)
                cout << j << "x" << i << "=" << i * j <<" ";
            else
                cout << j << "x" << i << "=  " << i * j ;
        }
        cout << endl;
    }
}

