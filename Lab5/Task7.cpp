//
// Created by User on 23. 2. 2024..
//

//#7: Write a C++ function to find some of all digits between two numbers.

#include <iostream>

using namespace std;

int sumBetween(int start, int end){
    int sum = 0, temp_digit = 0, temp = 0;
    for(int i = start; i <= end; i++ ){
         temp = i;
        while(temp > 0){
            //123 % 10 => 3
            temp_digit = temp % 10;
            sum += temp_digit; //3
            temp = temp / 10;
            // 1 / 10 = 0
        }
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