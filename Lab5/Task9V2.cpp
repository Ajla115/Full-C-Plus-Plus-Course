//#9: Write a function to check if a word is palindrome or not.

#include <iostream>
using namespace std;

bool checkIfPalindrome(string a){
    for(int i = 0, j = a.size() - 1; i<j; i++, j--){
        if(a[i] == ' '){
            i++;
        }

        if(a[j] == ' '){
            j++;
        }

        if(a[i] != a[j]){
            return false;
        }
    }

    return true;
}

int main(){
    string txt;
    cout << "Enter string: \n";
    getline(cin, txt);

    if(checkIfPalindrome(txt)){
        cout << txt << " is a palindrome.\n";
    } else {
        cout << txt << " is not a palindrome.\n";
    }
    return 0;
}