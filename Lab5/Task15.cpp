//#15: Write a function that will turn lowercase letters into uppercase and vice versa in a string.
//Input: hello
//Output: HELLO

#include <iostream>
using namespace std;
string convert(string a){
    for(int i = 0; i < a.size(); i++){
        if(isupper(a[i])){
            a[i] = tolower(a[i]);
        } else {
            a[i] = toupper(a[i]);
        }
    }
    return a;
}

int main(){
    string txt;
    cout << "Enter string: \n";
    getline(cin, txt);

    cout << "Input: " << txt<< endl;
    cout << "Output: " << convert(txt) << endl;
    return 0;
}
