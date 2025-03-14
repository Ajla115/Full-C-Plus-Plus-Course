//
// Created by User on 5. 3. 2024..
// #7: A student will not be allowed to sit in exam if his/her attendance is less than 75%.
//Take following input from user:
//Number of classes held
//Number of classes attended.
//And then print percentage of classes attended and if a student is allowed to sit in exam or not.
#include <iostream>

using namespace std;

int main(){
    int a; //TOTAL
    double b, c; //Attended, result
    cout << "Enter total number of classes: ";
    cin >> a ;

    cout << "Enter  number of attended classes: ";
    cin >> b ;

    c = (b / a) * 100;

    if ( c >=75){
        cout << "You can come\n";
    }
    else {
        cout << "You can't come.\n";
    }



    return 0;
}