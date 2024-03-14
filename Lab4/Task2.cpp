
// #2: Write a C++ program to find and print the square of each odd number from 1 to user specified value.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int end, i = 1;
    cout << "Enter end value: \n";
    cin >> end;

    while(i < end){
        //with the while loop, the value of i has to be previously declared and initialized,
        //in contrary to the for loop, where i gets declared, initialized and used in the same line
        if (i % 2 != 0){
            cout << "Square of odd number " << i << " is " << pow(i, 2) << endl;
        }
        i++; //never forget this increment in while loop, otherwise you would get infinitive loop
    }

    return 0;

}

