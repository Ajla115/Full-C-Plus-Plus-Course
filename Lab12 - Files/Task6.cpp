//
// Created by Ajla Korman on 30. 5. 2025..
//
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ofstream new_file("MyFirstFile2.txt");
    ifstream old_file("MyFirstFile.txt");
    string text;
    while (getline(old_file, text)){
        new_file<<text+"\n";
    }
    old_file.close();
    new_file.close();

}