//#15: Write a C++ program to check whether a given number is a power of two or not.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int no;
    cout << "Enter number: " << endl;
    cin >> no;

    for(int x = 0; x < no; x++){
        if(pow(2, x) == no){
            cout << "Number " << no << " is a power of two.\n";
            break; //we put break, because we want the result only for this number, and not others
        }
        else if (pow(2, x) > no){
            cout << "Number " << no << " is not a power of 2.\n";
            break;

        }
    }
    return 0;
}