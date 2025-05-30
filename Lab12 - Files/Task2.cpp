//
// Created by Ajla Korman on 30. 5. 2025..
//

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream my_file("C:\\Users\\Public\\beatles.txt");
    // Change the file path according to your device
    string text;

    while (getline(my_file,text)){
        for (int i=0;i<text.length();i++){
            if (isupper(text[i])){

                text[i]= tolower(text[i]);
            } else {
                text[i]= toupper(text[i]);
            }
        }
        cout<<text;
    }

}