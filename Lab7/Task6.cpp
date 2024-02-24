// Created by User on 24. 2. 2024..
// #6: Write a C++ program that will return the length of each string in a multidimensional array;

#include <iostream>

using namespace std;

int main(){
    string words[2][3] =  {{"John", "Amelia", "Beverly"}, {"Carl", "Mario", "Evelyn"}};


    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++) {
            cout << "Lenght of string  " << words[i][j] << " is " << words[i][j].length() << endl;

        }
    }

    return 0;
}