//
// Created by User on 5. 3. 2024..
//

#include <iostream>

using namespace std;

int main(){
    char grade;
    cout << "Enter grade: ";
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "Excellent\n";
            break;
        case 'B' :
            cout << "Great \n";
            break;
        default:
            cout << "There is no appropriate grade.";
    }

    return 0;
}
