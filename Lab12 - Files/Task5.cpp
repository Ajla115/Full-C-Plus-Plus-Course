//
// Created by Ajla Korman on 30. 5. 2025..
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string input;
    string text;
    ofstream my_file("Words.txt");
    cout<<"Write your words into the file"<<endl;
    while(true){
        cin>>input;
        if (input=="exit"){
            break;
        } else {
            my_file<<input+"\n";
        }
    }
    my_file.close();

    ifstream read_file("Words.txt");
    while(getline(read_file,text)){
        cout<<text<<endl;
    }
}