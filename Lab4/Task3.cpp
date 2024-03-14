// #3: Write a C++ program to print all numbers  from 1 to 100, which divided by specified number have a remainder equal to 3.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a specific number: \n" << endl;
    cin >> num;
    cout << "Number between 1 and 100 that have remainder of 3 when divided with " << num << " are: \n";
    for(int i = 1; i <= 100; i++){
        if(i % num == 3){
            //do not confuse this % sign, with % sign that is used for discounts, attendance etc..
            //in c++, % stands for the remainder of divisions
            //calculating attendance or discount procentage has to be done by its formula, and not just by using this sign
            cout << i << endl;
        }
    }
    return 0;
}