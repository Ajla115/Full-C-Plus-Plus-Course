//
// Created by User on 23. 2. 2024..
//

//#7: Write a C++ function to find some of all digits between two numbers.

#include <iostream>

using namespace std;

int sumBetween(int num1, int num2){
    while(num2 < num1){
        cout << "End number has to be bigger than start number.\n";
        cout << "Enter it again here:\n";
        cin >> num2;
    }
    int sum = 0;
    for(int i = num1; i <= num2; i++) {
        sum += i;
    }
    return sum;
}


int main() {

    int num1, num2;

    cout << "Enter start number: ";
    cin >> num1;

    cout << "Enter end number: ";
    cin >> num2;

    cout << "Sum between numbers " << num1 << " and " << num2 << " is " << sumBetween(num1, num2);

}