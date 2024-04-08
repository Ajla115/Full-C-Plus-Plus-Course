// #1: Write a C++ program to print all even numbers from 1 to 50 (inclusive).

#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 50; i++){ //i < 51
        if( i % 2 == 0){
            cout << "Even number is: " << i << endl;
        }
    }


    return 0;
}