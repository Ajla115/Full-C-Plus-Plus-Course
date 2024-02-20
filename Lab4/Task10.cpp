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
    int numOfChars;
    cout << "Enter a number of characters for each line: " << endl;
    cin >> numOfChars;

    for (int row = 1; row <= numOfChars; ++row)
    {
        for (int col = 1; col <= numOfChars; ++col)
        {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}
