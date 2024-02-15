//
// Created by User on 15. 2. 2024..
//

#include <iostream>
using namespace std;

void printaj1 (int &a){
    cout<< a;
}

void printaj2(int &&a){
    cout << a;
}

int main () {
    int *p = 1;
    printaj1(p);
    printaj2(1);
    return 0;
}