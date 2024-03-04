//#9: Write a C++ program that asks the user for the name and prints out Hello NAME!

#include <iostream>
using namespace std;

int main(){

    string name;
    cout << "Enter your name: \n";
    cin >> name;

    cout << "Hello, " << name;
    return 0;
}
