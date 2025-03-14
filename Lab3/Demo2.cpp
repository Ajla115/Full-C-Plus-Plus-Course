//
// Created by User on 10. 3. 2024..
//
//
// Created by User on 10. 3. 2024..
//

#include <iostream>

using namespace std;

int main(){


    int year;
    cout << "Enter year: \n";
    cin >> year;
    cout << "Year is: " << year;

    cin.ignore();
    //By default, cin.ignore() ignores only one character from the input buffer.
    //However, since the newline character ('\n') is left in the buffer after cin >> year,
    //this cin.ignore(); successfully removes that newline.

    string name;
    cout << "Enter name:  " << endl;
    getline(cin, name);
    //getline(cin, name); reads the entire line (including spaces).
    //cin reads only the first word, it stops after space

    cout << name;
    cout << "Test";


    return 0;

}