//#17: Write a function that will count how many times does a even number occur in a integer.
//Input: 44556
//Output: 3 even numbers

#include <iostream>

using namespace std;

int countEvenNums(int num){

    int counter = 0, num_digit;
    while(num > 0){
        num_digit = num % 10;
        if(num_digit % 2 == 0){
            counter++;
        }
        num = num / 10;
    }
    return counter;
}

int main(){
    cout << "Enter number: " << endl;
    int num;
    cin >> num;

    cout << "Number of even number occurences in " << num << " is " << countEvenNums(num) << endl;
    return 0;
}