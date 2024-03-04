
// #6: Write a C++ program that reads two integers and checks
// if they are multiplied or not.
//Test Data :
//Input the first number: 3
//Input the second number: 8 // 3 * x
//Expected Output: Multiplied!

#include <iostream>

using namespace std;

int main(){
    int a,b;

    cout << "Enter first and second number: \n";
    cin >> a >> b;

    if (a % b == 0 || b % a == 0)
        cout << "Multiplied\n";
    else
        cout << "Not multiplied\n";
}