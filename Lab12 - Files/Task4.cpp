//
// Created by Ajla Korman on 30. 5. 2025..
//
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream numbers_file("C:\\Users\\Public\\numbers.txt");
    // change file path according to your device

    string num_text;
    int num=0;
    int sum=0;
    while (getline(numbers_file, num_text)){
        num=stoi(num_text);
        sum=sum+num;
    }
    cout<<sum<<endl;
    numbers_file.close();
}