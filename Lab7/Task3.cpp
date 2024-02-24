//  Created by User on 24. 2. 2024..
// #3: Write a C++ program that will ask the user to enter values into a multidimensional array.

#include <iostream>

using namespace std;

int main(){
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    int numbers[m][n]; //this can't be initialized before declaration bc of m and n

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << "Enter a element: " ;
            cin >> numbers[i][j];
            cout << "\n";
        }
    }

    cout << "The new multidimensional array is: " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout <<  numbers[i][j] << " ";
        }
    }
}