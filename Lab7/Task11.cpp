// Created by User on 24. 2. 2024..
// #11: Write a C++ program that will take integers as input from the user and will store their
// square root values into a three-dimensional array.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int m, n, c;

    cout << "Enter number of outer rows: ";
    cin >> m;

    cout << "Enter number of inner rows: ";
    cin >> n;

    cout << "Enter number of columns: ";
    cin >> c;

    int numbers[m][n][c];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < c; ++k) {
                cout << "Outer row " << i << ", inner row: " << j << ", column " << k << ", value here is: ";
                int num;
                cin >> num;
                numbers[i][j][k] = sqrt(num); // Calculate and store square root
            }
            cout << endl;
        }
        cout << endl;
    }

    // Displaying the array with square root values
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < c; ++k) {
                cout << "Square root of number at [" << i << "][" << j << "][" << k << "]: " << numbers[i][j][k] << endl;
            }
        }
    }


    return 0;
}
