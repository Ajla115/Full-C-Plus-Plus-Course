//
// Created by User on 4. 4. 2024..
//
#include <iostream>

using namespace std;

int reverse_number(int num)
{
    string temp="";
    temp=to_string(num);
    string newstring="";
    int newint=0;

    for(int i=1;i<(int)temp.length();i++)
    {
        newstring=newstring+newstring[temp.length()-i];
    }
    newint=stoi(newstring);
    return newint;
}

int main(){
    int num;
    cin >> num;
    cout << reverse_number(num);
    return 0;

}