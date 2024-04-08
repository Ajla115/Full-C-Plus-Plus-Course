//#10: Write a function to duplicate the value of a number – using passing parameter by reference.


#include <iostream>
using namespace std;

void  duplicate(int* num){
    *num = *num *2;
}

int duplicateValues(int num){
    num = num * 2;
    return num;
}

int main(){
    cout << "Pass by reference: " << endl;
    cout << "Enter number: " << endl;
    int num;
    cin >> num;

    duplicate(&num);
    cout << "Value after duplication is: " << num << endl;

    cout << "Pass by value " << endl;
    cout << "Enter number: " << endl;
    int x;
    cin >> x;

    int newX = duplicateValues(x);
    cout << "Value after duplication is: " << newX << endl;
    cout << "Value before duplication is: " << x << endl;



    return 0;

}

