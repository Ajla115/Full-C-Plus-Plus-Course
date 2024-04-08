//#16: Write a C++ program to reverse a string.

#include <iostream>
using namespace std;

int main(){
    string orgTxt;
    cout << "Enter your string: " << endl;
    getline(cin, orgTxt);
    string copy = orgTxt;
    //aa bb c
    //c bb aa
    //i = 3 //j = 4
    //j = 3, i = 4

    for(int i = 0, j = orgTxt.size()-1; i < j; i++, j--){
        if ( orgTxt[i] == ' '){
            i++;
        }
        if ( orgTxt[j] == ' '){
            j++;
        }

        char temp = orgTxt[i];
        orgTxt[i] = orgTxt[j];
        orgTxt[j] = temp;
    }

    cout << "Original string is: " << copy << endl;
    cout << "Reversed string is: " << orgTxt << endl;
    return 0;
}
