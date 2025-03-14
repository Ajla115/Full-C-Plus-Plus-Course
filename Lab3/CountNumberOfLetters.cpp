//
// Created by User on 15. 2. 2024..
//Write a C++ program to count all the words in a given string.

#include <iostream>

using namespace std;

int countLetters(std::string a){
    int counter = 0;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == ' '){
            continue;
        } else {
            counter++;
        }
    }
    return counter;
}

int main(){
    std::string a;
    cout << "Enter a word to count number of letters: "<<endl;
    getline(cin, a);

    cout << "Number of letters in a word: " << countLetters(a) << endl;
}