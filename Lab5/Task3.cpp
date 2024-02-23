// Created by User on 23. 2. 2024..
// #3: Write a function in C++ to display the cube of the number up to an integer.
//Sample Output:
//Input the number of terms : 5
//Number is : 1 and the cube of 1 is: 1
//Number is : 2 and the cube of 2 is: 8
//Number is : 3 and the cube of 3 is: 27
//Number is : 4 and the cube of 4 is: 64
//Number is : 5 and the cube of 5 is: 125

#include <iostream>
using namespace  std;

void cubeResultsUpToNumber(int a){
    for (int i = 1; i <= a; i++) {
        cout << "Number is: " << i << " and the cube of " << i << " is: " << i * i * i << endl;
    }
}

int main(){
    int num1;
    cout << "Input the number of terms: \n";
    cin >> num1;
    cubeResultsUpToNumber(num1);
    return 0;
}