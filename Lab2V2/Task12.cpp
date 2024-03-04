//#12: Write a C++ program to print the message based on the grade you received.
//A -  Excellent
//B - Great
//C -  Well done
//D - You passed
//F - Better try again


#include <iostream>

using namespace std;

int main(){

    char grade;

    cout << "Enter grade: " << endl;
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "Excellent"<< endl;
            break;
        case 'B':
            cout << "Great"<< endl;
            break;
        case 'C':
            cout << "Well done" << endl;
            break;
        case 'D':
            cout << "You passed "<< endl;
            break;
        case 'F':
            cout << "Try again better" << endl;
            break;
        default:
            cout << "This grade does not exist";
    }

    return 0;

}
