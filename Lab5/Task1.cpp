//#1: Write a function in C++ to check if a number is prime.
//A prime number (or a prime) is a natural number greater than 1 with only two positive factors –
// themselves and 1 and that is not a product of two smaller natural numbers.
//Number is either composite (4,6,8,9,...) or prime(2,3,5,7, 11, 13).
//The definition of a prime number is any number that has no positive divisors other than itself and the number 1.
// A negative number can not be prime because when it is divided by 1, the result is a another negative number.

#include <iostream>
using namespace std;

bool checkIfPrime(int x){

    if ( x <= 1 ){
        //no prime numbers smaller or equal to 1
        return false;
    }

    for(int i = 2; i <= x/2; i++){
        //you can also put limit as i < x, but this is also efficient
        //because you only need to test divisors up to x / 2 because no integer greater than x / 2 can evenly divide x
        // (except x itself, but by definition, a prime number has no divisors other than 1 and itself).
        if(x % i == 0){
            return false; //it is divisible, therefore it is not prime
        }
    }

    return true; //the last possible option, this is a prime number
}


int main(){
    int num;

    while(true){
        cout << "Enter number to check, if it is prime or not: " << endl;
        cin >> num;

        if (num == -1){
            cout << "Exiting the program..." << endl;
            break;
        }
        if (checkIfPrime(num)){
            cout << num << " is a prime number." << endl;
        } else {
            cout << num << " is not a prime number." << endl;
        }

    }


    return 0;
}
