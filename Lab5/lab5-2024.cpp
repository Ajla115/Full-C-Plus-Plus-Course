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

//#2: Write a function in C++ to ask user to enter password as long as the user doesn’t enter correct password.

#include <iostream>
using namespace std;

bool guessPassword(string guess);

int main(){

    string guess;

    while(true){
        cout << "Enter your guess for password: " << endl;
        getline(cin, guess);

        if(guess == "Quit" || guess == "quit"){
            cout << "User has decided to quit." << endl;
            break;
        }

        if (guessPassword(guess)){
            cout << "User has guessed the password.\n";
            break;
        } else {
            cout << "Wring try! Try again!\n";
        }
    }

    return 0;
}

bool guessPassword(string guess){
    if (guess == "Programming12345"){
        return true;
    }
    else{
        return false;
    }
}

//#3: Write a function in C++ to display the cube of the number up to an integer.

#include <iostream>
using namespace std;

int cubeOfNumbers(int a){
    return a*a*a;
}

int main(){
    int num;
    cout << "Enter number: \n";
    cin >> num;

    for(int i = 1; i <= num; i++){
        cout << "The cube of number " << i << " is " << cubeOfNumbers(i) << endl;
    }

    return 0;
}

//#4: Write a C++ function to check whether the characters e and g are separated by
// exactly 2 places anywhere in a given string at least once.

#include <iostream>

using namespace std;

bool checkSpaces(string txt){
    for(int i = 0; i <= txt.size()-3; i++){
        if(txt[i] == 'e' && txt[i+2] == 'g'){
            return true;
            //at least once they are seperated by two spaces
        }
    }
    return false;
}
int main(){

    string txt;

    cout << "Enter your string: " << endl;
    getline(cin, txt);

    if (checkSpaces(txt)){
        cout << "Letters 'e' and 'g' are seperated at least once by 2 spaces.\n";
    } else {
        cout << "Letters 'e' and 'g' are not seperated at least once by 2 spaces.\n";
    }

    return 0;
}

//#5: Write a C++ function to check whether two characters appear equally in a given string.

#include <iostream>

using namespace std;

bool checkFrequency(string txt, char a, char b){
    int counter1 = 0, counter2 = 0;
    for(int i = 0; i < txt.size(); i++){
        if(txt[i] == a){
            counter1++;
        }
        if(txt[i] == b){
            counter2++;
        }
    }

    if(counter1 == counter2){
        return true;
        //same number of both charaters
    }
    return false;
}

int main(){
    string txt;
    char a, b;
    cout << "Enter your string: " << endl;
    getline(cin, txt);

    cout << "Enter two characters whose frequency you want to check: " << endl;
    cin >> a >> b;

    if(checkFrequency(txt, a, b)){
        cout << "Word " << txt << " has same number of characters " << a << " and " << b << endl;
    } else {
        cout << "Word " << txt << " does not have same number of characters " << a << " and " << b << endl;
    }

    return 0;

}

//#6: Write a C++ function to check if a given positive number is a multiple of 3 or a multiple of 7.

#include <iostream>

using namespace std;

bool checkNumber(int num){
    if(num < 0){
        return false;
    }
    if (num % 3 == 0 || num % 7 == 0){
        return true;
    }
    return false;
}

int main(){
    int num;
    cout << "Enter number: " << endl;
    cin >> num;

    if(checkNumber(num)){
        cout << "Number " << num << " is divisible by 3 or 7.\n";
    } else {
        cout << "Number " << num << " is not divisible by 3 or 7.\n";
    }

    return 0;
}

// Created by User on 23. 2. 2024..
// #6: Write a C++ function to check if a given positive number is a multiple of 3 or a multiple of 7.

#include <iostream>
using namespace std;

bool checkNumber(int a) {
    while (a < 0) {
        cout << "Please enter a number bigger than 0: ";
        cin >> a;
    }

    if (a % 3 == 0 || a % 7 == 0) {
        return true;
    }

    return false;
}

int main() {
    int num1;
    cout << "Enter a number: ";
    cin >> num1;

    cout << checkNumber(num1)<<endl;
    cout << "<----1 stands for TRUE, 0 stands for FALSE---->";
    return 0;
}

//7: Write a C++ function to find sum of all digits between two numbers.
#include <iostream>
using namespace std;
void  sumOfDigits(int start, int end){
    while(end < start){
        cout << "Enter end value that is bigger than start value\n";
        cin >> end;
    }
    int sum = 0;
    for(int i = start; i <= end; i++){
        //this is to traverse between numbers
        int temp = i, temp_digit = 0;
        while(temp != 0){
            temp_digit = temp % 10;
            sum += temp_digit;
            temp = temp / 10;
        }
    }

    cout << "The sum of digits of all numbers between " <<  start << " and " << end << " is: " << sum << endl;
}
int main(){

    int start, end;
    cout << "Enter two numbers for start and end: " << endl;
    cin >> start >> end;

    sumOfDigits(start, end);
    return 0;

}

//#8: Write a function in C++ to check if a year is a leap year or not.
//Note: Leap year perfectly divisible by 400;
//- if not divisible by 400 and divisible by 100 it is NOT a leap year;
//- if not divisible by 100 but divisible by 4 it IS a leap year.

#include <iostream>
using namespace std;

bool checkIfLeap(int year){
    // Leap years were first introduced in the Gregorian calendar in 1582
    while(year < 1582){
        cout << "Enter year value bigger than 1582: " << endl;
        cin >> year;
    }

    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
        return true;
    }
    return false;
}

int main() {
    int year;
    cout << "Enter year: " << endl;
    cin >> year;

    if(checkIfLeap(year)){
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
}

//#9: Write a function to check if a word is palindrome or not.

#include <iostream>
using namespace std;

bool checkIfPalindrome(string txt){
    for(int i = 0, j = txt.size() - 1; i < j; i++, j--){
        if(txt[i] == ' '){
            i++;
        }
        if(txt[j] == ' '){
            j++;
        }

        if(txt[i] != txt[j]){
            return false;
        }
    }
    return true;
}
int main(){
    string txt;
    cout << "Enter word to check, if it is a palindrome: \n";
    getline(cin, txt);

    if(checkIfPalindrome(txt)){
        cout << "The word " << txt << " is a palindrome.\n";
    } else {
        cout << "The word " << txt << " is not a palindrome.\n";
    }
    return 0;
}

//#10: Write a function to duplicate the value of a number – using passing parameter by reference.


#include <iostream>
using namespace std;

void duplicateValue(int* x){
    *x = *x * 2;
}

int duplicate(int x){
    return x*2;
}

int main(){

    cout << "Pass by reference--------------------------------------------------\n";
    int x;
    cout << "Enter value to duplicate it: " << endl;
    cin >> x;
    cout << "Address before duplication: " << &x << endl;
    duplicateValue(&x);
    cout << "New value is: " << x << endl;
    cout << "Address after duplication: " << &x << endl;


    cout << "Pass by value---------------------------------------------------------\n";
    int y;
    cout << "Enter number to duplicate its value: " << endl;
    cin >> y;
    cout << "Address is: " << &y << endl;
    int newZ = duplicate(y);
    cout << "New duplicated value is: " << newZ << endl;
    cout << "New address is: " << &newZ << endl;

    return 0;

}

//#11: Write a function to swap the values of 2 numbers (using call by reference).

#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    cout << "Value of a before swap is " << a << ", and its address is " << &a << endl;
    cout << "Value of b before swap is " << b << ", and its address is " << &b << endl;
    swap(&a, &b);

    cout << "Value of a before swap is " << a << ", and its address is " << &a << endl;
    cout << "Value of b before swap is " << b << ", and its address is " << &b << endl;

    return 0;

}