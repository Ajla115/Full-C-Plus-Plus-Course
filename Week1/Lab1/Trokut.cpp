// Created by User on 5. 2. 2024.
#include <iostream>
#include <valarray>
#include <vector>

using namespace std;
int checkIfNumber() {
    int a;
    cout << "Enter one number for length of triangle side: " << endl;
    while(true){
        while (!(cin >> a)){
            cout << "You have entered wrong type of data." << endl;
            cout << "Please try again." << endl;
            cout << "Enter value for side of triangle again: " << endl;
            cin.clear(); // clears any previous error logs
            cin.ignore(1000, '\n'); // removes everything left in the buffer
        }

        if (a <= 0){
            cout << "Please enter a positive integer greater than zero."<<endl;
            continue; //skips this input, and waits for the next one
        }

        break; // break out of the loop if input is valid
    }

    return a;
}



void checkIfTriangle(int a, int b, int c){
    if ( b == a  && b == c ) {
        cout << "Triangle has three equal sides."<<endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "Triangle has two equal sides."<<endl;
    }
    else {
        cout << "No sides are equal."<<endl;
    }

}

void checkIf90Degrees(int a, int b, int c){
    double a_square = pow(a, 2);
    double b_square = pow(b, 2);
    double c_square = pow(c, 2);

    if (a_square + b_square == c_square || b_square + c_square == a_square || a_square + c_square == b_square) {
        cout << "The triangle has a 90 degree angle."<<endl;
    } else {
        cout << "The triangle does not have a 90 degree angle."<<endl;
    }

}

double  calculateArea(int a, int b, int c){
    double s = (double) (a+b+c)/2;
    double area = s * sqrt((s*(s-a)*(s-b)*(s-c)));
    return  area ;
}

int main(){

    cout << "Welcome to the Triangle application!"<< endl;

    int aPrim = checkIfNumber();
    int bPrim = checkIfNumber();
    int cPrim = checkIfNumber();

    checkIfTriangle(aPrim, bPrim, cPrim);
    checkIf90Degrees(aPrim, bPrim, cPrim);
    cout << "Area is " << calculateArea(aPrim, bPrim, cPrim)<<endl;

    return 0;
}
