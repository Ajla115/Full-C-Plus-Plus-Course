//#11: Write a function to swap the values of 2 numbers (using call by reference).

#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    cout << " a before swap is " << a << endl;
    cout << " b before swap is " << b << endl;

    swap(&a, &b);

    cout << " a after swap is " << a << endl;
    cout << " b after swap is " << b << endl;


    return 0;

}