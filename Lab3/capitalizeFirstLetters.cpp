// Created by User on 15. 2. 2024..
// Write a C++ program to change the case (lower to upper and upper to lower cases) of each character in a given string.

#include <iostream>
#include <string>
using namespace std;

string changeCases(std::string text) {
    for (int x = 0; x < text.length(); x++)
    {
        if (isupper(text[x]))
        {
            text[x] = tolower(text[x]);
        }
        else
        {
            text[x] = toupper(text[x]);
        }
    }
    return text;
}
int main()
{
    std::string text;
    cout<<"Enter string to capitalize start letters: "<<endl;

    //getLine takes longer phrases, that can include spaces
    getline(cin,text);

    cout << "String with changed cases is: " <<  changeCases(text);

    return 0;
}


