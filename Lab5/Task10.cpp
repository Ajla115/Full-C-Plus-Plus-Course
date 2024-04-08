// Created by User on 23. 2. 2024..
// #10: Write a function to duplicate the value of a number – using passing parameter by reference.

#include <iostream>

using namespace  std;
void duplicateValue(int &x){
    x = x*2;
}
int main(){

    int num1;
    cout << "Enter number: " ;
    cin >> num1;

    cout << "Old value of number is " << num1 << endl;
    duplicateValue(num1);
    cout << "New value of number is " << num1 << endl;
    return 0;


}
