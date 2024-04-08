//#3: Write a function in C++ to display the cube of the number up to an integer.

#include <iostream>
#include <cmath>
using namespace std;

void calculateCubes(int x){
    for(int i = 1; i <= x; i++){
        cout << "Number is: " << i << " and the cube of " << i << " is: "
             << pow(i, 3) << endl;
        //i*i*i
    }
}


int main(){
    int num;
    cout << "Enter number: \n";
    cin >> num;

    calculateCubes(num);

    return 0;
}

