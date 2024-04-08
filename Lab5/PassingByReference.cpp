//Passing by Reference

#include <iostream>
using namespace std;

void fun(int* x, int* y){
    *x = 20;
    *y = 10;
}

void fun2(int* x){
    *x = 35;
}

int main(){

    int x = 10, y = 20;

    cout << "Their original values are: " << x << " and " << y << endl;

    fun(&x, &y);

    cout << "Their new  values are: " << x << " and " << y << endl;

    int z = 30;
    fun2(&z);
    cout << "New value of z is: " << z << endl;
    cout << "Old value of z is: " << z << endl;

    return 0;

}

