// Created by User on 20. 2. 2024..
// #10: Write a program in C++ to print a square pattern with the # character.

//Sample Output:
//Input the number of characters for a side: 4
//# # # #
//# # # #
//# # # #
//# # # #

#include <iostream>

using namespace std;

int main(){
    int rowNo, colNo;
    cout << "Enter a number of characters for each row: " << endl;
    cin >> rowNo; //2

    cout << "Enter a number of characters for each column: " << endl;
    cin >> colNo; //2

    for (int col = 1; col <= colNo; col++)
    {
        for (int row = 1; row <= rowNo; row++)
        {
            cout << "# ";
            //# #
            //# #
        }
        cout << endl;
        //cout << fun1();//0

    }


    return 0;
}

