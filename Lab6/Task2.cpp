//Created by User on 23. 2. 2024..
// #2: Take 5 inputs from user and store them in an array.

#include <iostream>
using namespace std;

int main(){
    int numbers[5];

    cout << "Enter 5 numbers: \n" ;

    for(int i = 0; i < 5; i++){
        cin >> numbers[i];
    }

    cout << "New array is: \n";

    for(int i = 0; i < 5; i++){
        cout <<  numbers[i] << endl;
    }


}


