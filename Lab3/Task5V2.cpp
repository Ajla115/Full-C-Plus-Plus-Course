//#5. Consider the following string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
//Find the length of this string.
//Print out the first element of the string.
//Print out the last element of the string.


#include <iostream>

using namespace std;

int main(){

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    //you can calculate the size using length or size function
    cout << "Length of the string is: " << txt.length() << endl;
    //length(txt)
    cout << "Length of the string is: " << txt.size() << endl;

    cout << "First letter of the string is: " << txt[0] << endl;

    //there are multiple ways how you can get the last letter
    cout << "Last letter of the string is: " << txt[txt.length() - 1] << endl;
    cout << "Last letter of the string is: " << txt[txt.size() - 1] << endl;
    cout << "Last letter of the string is: " << txt.back() << endl;

    return 0;
}