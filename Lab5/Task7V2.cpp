//7: Write a C++ function to find sum of all digits between two numbers.
#include <iostream>
using namespace std;
int sumAllDigits(int start, int end){
    int sum = 0, i_digit = 0;
    //123
    for(int i = start; i<=end; i++){
        int temp = i;
        while(temp > 0){
            i_digit = temp % 10;
            //123 % 10 => 3
            sum += i_digit; //3
            temp = temp / 10;
            //123 / 10 => 12
        }
    }

    return sum;

}
int main(){
    int start, end;

    cout << "Enter start number: \n";
    cin >> start;

    cout << "Enter end number: \n";
    cin >> end;

    cout << sumAllDigits(start, end);


    return 0;

}
