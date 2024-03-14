// #1: Write a C++ program to print all even numbers from 1 to 50 (inclusive).

#include <iostream>
using namespace std;

int main(){
    cout << "Even numbers are: " << endl;
    for(int i = 0; i <= 50; i++){  //if 50 was exclusive (excluded), then you would only write i < 50
        if(i % 2 == 0){            //here, i becomes every single number from 1 to 50
            cout << i << endl;
        }
    }
    return 0;
}
