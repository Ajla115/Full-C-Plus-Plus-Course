// Created by User on 12. 2. 2024..
//#3: Ask the user to enter 3 numbers and then create a simple calculator application.
//Your calculator should:
//a) find the sum of three numbers
//b) find the difference of three numbers
//c) multiply first two numbers and then subtract third one
//d) divide last two numbers and add the first one

#include <iostream>

using namespace std;
int sumNumbers(int a, int b, int c){
    return a + b +c ;
}

int subtractNumbers(int a, int b, int c){
    return a - b  - c ;
}

int thirdOperation(int a, int b, int c){
    return (a * b) - c;
}

int fourthOperation(int a, int b, int c){
    return (b / c) + a;
}
int main(){
    int a,b,c;

    cout << "Enter first number: "<<endl;
    cin >> a;

    cout << "Enter second number: "<<endl;
    cin >> b;

    cout << "Enter third number: "<<endl;
    cin >> c;

    int sum = sumNumbers(a,b,c);
    cout << "Sum of three numbers " << a<< ", " << b << ", "<< " and " << c<< " is " << sum << endl;

    int subtraction = subtractNumbers(a,b,c);
    cout << "Subtraction of three numbers " << a<< ", " << b << ", "<< " and " << c<< " is " << subtraction<< endl;

    int thirdTask= thirdOperation(a,b,c);
    cout << "Multiplication of first two numbers " << a<< " and " << b << ", and difference with third number  "<< c<< " is " << thirdTask<< endl;

    int fourthTask= fourthOperation(a,b,c);
    cout << "Division of second and third number " << b<< " and " << c << ", and sum with first number  "<< a<< " is " << fourthTask<< endl;


}