//#1: Write a C++ program to print all even numbers from 1 to 50 (inclusive).
#include <iostream>
using namespace std;

int main(){
    cout << "Even numbers are: " << endl;
    for(int i = 0; i <= 50; i++){  //if 50 was exclusive (excluded), then you would only write i < 50
        if(i % 2 == 0){            //here, i becomes every single number from 1 to 50
            cout << i << endl;
        }
    }
    return 0;
}

//#2: Write a C++ program to find and print the square of each odd number from 1 to user specified value.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int end, i = 1;
    cout << "Enter end value: \n";
    cin >> end;

    while(i < end){
        //with the while loop, the value of i has to be previously declared and initialized,
        //in contrary to the for loop, where i gets declared, initialized and used in the same line
        if (i % 2 != 0){
            cout << "Square of odd number " << i << " is " << pow(i, 2) << endl;
        }
        i++; //never forget this increment in while loop, otherwise you would get infinitive loop
    }
    return 0;
}

//#3: Write a C++ program to print all numbers  from 1 to 100, which divided by specified number have a remainder equal to 3.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a specific number: \n" << endl;
    cin >> num;
    cout << "Number between 1 and 100 that have remainder of 3 when divided with " << num << " are: \n";
    for(int i = 1; i <= 100; i++){
        if(i % num == 3){
            //do not confuse this % sign, with % sign that is used for discounts, attendance etc..
            //in c++, % stands for the remainder of divisions
            //calculating attendance or discount procentage has to be done by its formula, and not just by using this sign
            cout << i << endl;
        }
    }
    return 0;
}

//#4: The password will be initially set by the user.
//If the user enters wrong password 5 times, print out “Wrong password, better luck next time.”

#include <iostream>
#include <string>

using namespace std;

int main() {
    int attempt = 0;
    string initialPassword = "guess123", guessPass;

    cout << "Try to guess the password: \n";
    cin >> guessPass; //this is the first attempt to guess the password

    while(attempt < 5){

        if (guessPass == initialPassword){
            cout << "Congratulations! You have guessed the password\nExiting...";
            break;
        }
        else {
            cout << "Unfortunately, wrong password. Guess again: \n";
            cin >> guessPass;
        }

        attempt++;
    }
    return 0;
}

//#5: Write a C++ program to find the sum of 10 numbers (entered by user). If the user enters negative number,
// the loop is terminated and sum is displayed.

#include <iostream>
#include <string> // Include the string header for using std::string
using namespace std;

int main() {
    int entries, sum  = 0, counter = 1, number;

    while(entries < 10){
        cout << counter << ". number is: ";
        cin >> number;
        counter++; //this is used just to count numbers
        entries++; //this is the increment of the while loop

        if (number < 0){
            cout << "This is negative number, so exiting...\n";
            break;
        } else {
            sum += number;
        }

    }

    cout << "Total sum is " << sum << endl;
    return 0;
}

//#5. b)  Write a C++ program to find sum of 10 numbers, but this time skip over negative numbers

#include <iostream>
#include <string> // Include the string header for using std::string
using namespace std;

int main() {
    int entries, sum  = 0, counter = 1, number;

    while(entries < 10){
        cout << counter << ". number is:  ";
        cin >> number;
        counter++; //this is used just to count numbers
        entries++; //this is the increment of the while loop

        if (number < 0){
            cout << "This is negative number, so skip over it...\n";
            continue; //only here, you will replace break with continue
        } else {
            sum += number;
        }
    }

    cout << "Total sum is " << sum << endl;
    return 0;
}

//#6: Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + …..+ 1/n^n.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int end, i = 2, number;
    double  sum = 1.0;
    cout << "Enter end number: \n";
    cin >> end;

    while(i <= end){
        double number = 1.0 / (pow(i, i));
        //be careful, about the integer and double division
        sum += number;
        i++;
    }

    cout << "Final sum is: " << round(sum*100)/100 <<  endl;
    return 0;
}

//#7: Write a program in C++ to find the factorial of a number.
#include <iostream>
using namespace std;

int main(){
    int number, factorial = 1; //give factorial immediately value of 1
    cout << "Enter number: \n";
    cin >> number;

    for(int i = number; i > 0; i--){
        //be sure to exclude 0 from i > 0, otherwise whole result will be zero
        factorial *= i;
    }
    cout << "Factorial value of number " << number << " is " << factorial << endl;
    return 0;
}

//#8: Write a program in C++ to find the sum of the digits of a given number.
#include <iostream>
using namespace std;

int main(){

    int number, sum = 0, num_digit, copy;
    cout << "Enter number: \n";
    cin >> number;
    copy = number;
    //just copy the value of number into the another variable so we can print it out later

    while(number > 0){
        num_digit = number % 10;
        //123 % 10 => 3
        sum += num_digit;
        number = number / 10;
        //123 / 10 => 12
    }

    cout << "Sum of digits of a number " << copy << " is " << sum << endl;
    return 0;
}

//#9: Write a program in C++ to find the last prime number that occurs before the entered number.

#include <iostream>
using namespace std;
int main()
{
    int num1, ctr = 0;
    cout << "\n\n Find the last prime number occurs before the entered number:\n";
    cout << "-----------------------------------------------------------------\n";
    cout << " Input a number to find the last prime number occurs before the number: "<<endl;
    cin >> num1;
    for (int n = num1 - 1; n >= 1; n--)
    {
        for (int m = 2; m < n; m++)
        {
            if (n % m == 0)
                ctr++;
        }
        if (ctr == 0)
        {
            if (n == 1)
            {
                cout << "no prime number less than 2";
                break;
            }
            cout << n << " is the last prime number before " << num1 << endl;
            break;
        }
        ctr = 0;
    }
    return 0;
}

//#10: Write a program in C++ to print a square pattern with the # character.

//Sample Output:
//Input the number of characters for a side: 4
//# # # #
//# # # #
//# # # #
//# # # #

#include <iostream>
using namespace std;

int main(){
    int numOfChars;
    cout << "Enter a number of characters for each line: " << endl;
    cin >> numOfChars;

    for (int row = 1; row <= numOfChars; ++row)
    {
        for (int col = 1; col <= numOfChars; ++col)
        {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}

//#15: Write a C++ program to check whether a given number is a power of two or not.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int no;
    cout << "Enter number: " << endl;
    cin >> no;

    for(int x = 0; x < no; x++){
        if(pow(2, x) == no){
            cout << "Number " << no << " is a power of two.\n";
            break; //we put break, because we want the result only for this number, and not others
        }
        else if (pow(2, x) > no){
            cout << "Number " << no << " is not a power of 2.\n";
            break;

        }
    }
    return 0;
}

//#16s: Write a C++ program to reverse a string.

#include <iostream>
using namespace std;

int main(){
    string txt, copy;
    cout << "Enter string: " << endl;
    getline(cin, txt);
    copy = txt; //save it here just for comaprison for later

    for(int i = 0,j = txt.length() - 1; i < j;  i++, j--){

        if(i == ' '){
            i++;
        }

        if(j == ' '){
            j--;
        }

        char temp = txt[i]; //swamp characters
        txt[i] = txt[j];
        txt[j] = temp;

    }

    cout << "Original  string is: " << copy  << endl;
    cout << "Reversed string is: " << txt  << endl;

    return 0;
}
