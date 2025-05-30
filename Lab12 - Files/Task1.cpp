//
// Created by Ajla Korman on 30. 5. 2025..
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream my_first_file("MyFirstFile.txt");
    string text;
    my_first_file<<"John \n";
    my_first_file<<"Johnson \n";
    my_first_file<<"Department of International Technologies \n";
    my_first_file<<"International Burch University \n";
    my_first_file.close();
    ifstream generated_file("MyFirstFile.txt");
    while (getline(generated_file, text)){
        cout<<text<<endl;
    }

}