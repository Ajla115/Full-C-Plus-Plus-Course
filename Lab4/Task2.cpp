
// #2: Write a C++ program to find and print the square of each odd number from 1 to user specified value.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int end;
    cout << "Enter end value: \n";
    cin >> end;

    for(int i =1; i<= end; i++){
        if( i % 2 != 0){
            cout << "Square of number " << i << " is " << i * i << endl;
            //pow(i, 2)
            //pow(i,i) - pogresno
        }
    }

    int k = 1;
    while(k <= end){
        if( k % 2 != 0){
            cout << "Square of number as well  " << k << " is " << pow(k, 2) << endl;
        }
        k++;
    }
    return 0;




}

