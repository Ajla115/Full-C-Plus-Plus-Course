//#1: Write a function in C++ to check if a number is prime.
//A prime number (or a prime) is a natural number greater than 1 with only two positive factors –
// themselves and 1 and that is not a product of two smaller natural numbers.
//Number is either composite (4,6,8,9,...) or prime(2,3,5,7, 11, 13).
//The definition of a prime number is any number that has no positive divisors other than itself and the number 1.
// A negative number can not be prime because when it is divided by 1, the result is a another negative number.

#include <iostream>
using namespace std;

bool checkIfPrime(int x){

    if(x <= 1){
        return false;
    }

    for(int i = 2; i <= x/2; i++){
        if(x % i == 0){
            return false;
        }
    }

    return true;

}

int main(){
    int num;
    cout << "Enter number: " << endl;
    cin >> num;

    if(checkIfPrime(num)){
        cout << num << " is prime.";
    }
    else {
        cout << num << " is not prime.";
    }





    return 0;
}


