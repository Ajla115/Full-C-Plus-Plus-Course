// Created by User on 23. 2. 2024..
//#1: Write a function in C++ to check if a number is prime.
//1 is True, 0 is False
#include <iostream>

using namespace std;

bool checkIfPrime(int a){
    bool prime = false;
    if ( a == 0 || a == 1){
        prime = true;
        return true;
    }
    for(int i = 2; i <= a/2; i++){
        if( a % i == 0){
            prime = false;
            return false;
        }
    }
    return true;
}

int main(){
    int num1;
    while(true){
        cout << "Please enter a number to check whether it is prime or not: " << endl;
        cout << "Please enter -1 to exit the program" << endl;
        cin >> num1;
        if(num1 == -1){
            break;
        }
        cout << "Number is prime (Y/N): " << checkIfPrime(num1) << endl;
    }
    return 0;
}
