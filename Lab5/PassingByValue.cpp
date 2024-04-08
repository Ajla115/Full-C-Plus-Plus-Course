//Passing by Value

#include <iostream>

using namespace std;
void fun(int x, int y){
    x = 20;
    y = 10;
}

int fun2(int x){
    x = 35;
    return x;
}

int main(){

    int x = 10, y = 20;
    int z = 30;

    fun(x, y);
    cout << "Their original values are: " << x << " and " << y << endl;

    int newZ = fun2(z);
    cout << "New value of z is: " << newZ << endl;
    cout << "Old value of z is: " << z << endl;

    return 0;

}
