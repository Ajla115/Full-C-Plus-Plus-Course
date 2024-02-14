
// Created by User on 14. 2. 2024..
//#6: Write a C++ program that reads two integers and checks if they are
// multiplied or not.

//Test Data :
//Input the first number: 5
//Input the second number: 15
//Expected Output: Multiplied!

#include <iostream>
using namespace  std;

int main(){
    int a, b;
    cout << "Enter number that you will check: " << endl;
    cin >> a;

    cout << "Enter second number: "<<endl;
    cin >> b;

    if(a%b==0 || b%a==0){
        cout<<"Multiplied!"<<endl;
    } else {
        cout<<"Not multiplied"<<endl;
    }

    return 0;
}
