//#6. Write a C++ program to check whether a given number is a power of two or not.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;

    cout << "Enter number: " << endl;
    cin >> num; //16, 33

    //exclude zero immediately, since log of zero is undefined
    if (num <= 0) {
        cout << "Number can't be a power of 2.";
    }

    else if (ceil(log2(num)) == floor(log2(num))){
        cout << "Number is power of 2." << endl; //16
    }
    else {
        cout << "Number is not power of 2." << endl; //33
    }

    return 0;
}
