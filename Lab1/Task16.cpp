//
// Created by User on 28. 2. 2024..
// #16: Write a C++ program to display the operation of pre and post increment and decrement..

#include <iostream>


using namespace std;


bool ifEligible(string country, int age) {
    if (country != "Bosnia") {
        return false;
    }

    if (age >= 18) {
        return true;
    }

    return false;

}

int main()
{
    int a, b, x = 4;

    cout << ifEligible("Bosnia", 18) << endl;
    cout << ifEligible("Croatia", 20) << endl;
    cout << ifEligible("Bosnia", 5) << endl;


    cout << x << endl;
    a =  x++; // x = x + 1

    // 1. a = x
    // 2. x = x + 1
    cout << x << endl; //5
    cout << a << endl; //4

    a = ++x;
    // 1. x = x + 1
    // a = x
    cout << a << endl;



    //cout << x << endl; // 4
    //a = x--;
    // a = x
    // x =  x - 1
   // cout << a << endl; //4
    //cout << x << endl; //3

   // b = --x; //
    //x = x-1 //2
    //b = x
  //  cout << b << endl; // 2





}