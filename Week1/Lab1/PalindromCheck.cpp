// Created by User on 11. 2. 2024..
#include <iostream>
#include <cstring> // for strlen

using namespace std;

void checkIfPalindrom(std::string a) {
    bool word = false;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == ' ') {
            continue;
        }
        std::string noSpacesWord;
        noSpacesWord += a[i];
        /*else {
            a[i] = toupper(a[i]);
            word = true;
            //if (a[i] == ' '){

            }
        }*/
        cout << a;
    }
}



int main() {

    std::string  a = "Ana voli milovana";

    checkIfPalindrom(a);
    return 0;

}

