//#16: Write a C++ program to reverse a string.

#include <iostream>
using namespace std;

int main(){
    string txt, copy;
    cout << "Enter string: " << endl;
    getline(cin, txt);
    copy = txt; //save it here just for comaprison for later

    for(int i = 0,j = txt.length() - 1; i < j;  i++, j--){

            if(i == ' '){
                i++;
            }

            if(j == ' '){
                j--;
            }

            char temp = txt[i]; //swamp characters
            txt[i] = txt[j];
            txt[j] = temp;

    }

    cout << "Oiginal  string is: " << copy  << endl;
    cout << "Reversed string is: " << txt  << endl;

    return 0;
}
