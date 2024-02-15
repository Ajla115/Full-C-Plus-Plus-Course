//
// Created by User on 15. 2. 2024..
// #6: Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.

#include <iostream>
#include <string>
using namespace std;

string capitalizeStartLetters(std::string c) {
        int counter{0};
        for (int i = 0; c[i+1] != '\0'; i++) {
            if (c[i] == ' ' && c[i + 1] != ' ') {
                counter++;
                if (counter > 1)
                    c[i + 1] = toupper(c[i + 1]);
            }
        }

        return c;
}
int main()
{
    std::string text;
    cout<<"Enter string to capitalize start letters: "<<endl;

    //getLine takes longer phrases, that can include spaces
    getline(cin,text);

   cout << "Number of letters in a word is: " <<  capitalizeStartLetters(text);

    return 0;
}

