// Created by User on 15. 2. 2024..
//Write a C++ program to count all the vowels in a given string.

#include <iostream>

using namespace std;

int countVowels(std::string a){
    int i = 0, counter = 0;
    while(a[i] != '\0'){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            ++counter;
        }
        i++;
    }
    return counter;
}


int main(){

    std::string a;
    cout << "Enter word to count number of vowers: "<<endl;
    getline(cin, a);
    //cin >> a;

    countVowels(a);
    cout << "Number of vowels in the word is: " << countVowels << endl;

    /*string text;
    cout<<"Enter string";
    getline(cin,text);
    int ctr = 0;
    for(int i = 0; i < int(text.size()); i++){
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
            ++ctr;
        if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
            ++ctr;
    }
    cout<< ctr;*/

    return 0;
}
