//#16: Write a function that will take a number as input and print it out in words.
//Input: 456
//Output: four five six

#include <iostream>

using namespace std;
void printLetters(int num){
    int num_digit = 0, num_digit2 = 0, numReverse = 0;
    while(num > 0){
        num_digit = num % 10;
        numReverse = numReverse * 10 + num_digit;
        num = num / 10;
    }

    while(numReverse > 0){
        switch( numReverse % 10){
                case 0:
                    cout << "Zero ";
                    break;
                case 1:
                    cout << "One ";
                    break;
                case 2:
                    cout << "Two ";
                    break;
                case 3:
                    cout << "Three ";
                    break;
                case 4:
                    cout << "Four ";
                    break;
                case 5:
                    cout << "Five ";
                    break;
                case 6:
                    cout << "Six ";
                    break;
                case 7:
                    cout << "Seven ";
                    break;
                case 8:
                    cout << "Eight ";
                    break;
                case 9:
                    cout << "Nine ";
                    break;
        }

        numReverse = numReverse / 10;
    }
}
int main(){
    int num;
    cout << "Enter number: " << endl;
    cin >> num;

    printLetters(num);
    return 0;
}