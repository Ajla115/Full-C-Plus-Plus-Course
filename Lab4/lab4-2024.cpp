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

int main() {
    int num1;
    cout << "Input a number to find the last prime number occurs before the number: ";
    cin >> num1;

    // Loop from num1 - 1 down to 2
    for (int n = num1 - 1; n >= 2; n--) {
        bool isPrime = true;

        // Check if n is divisible by any number from 2 to n-1
        for (int m = 2; m * m <= n; m++) {
            if (n % m == 0) {
                isPrime = false;
                break;
            }
        }

        // If no divisors were found, n is prime
        if (isPrime) {
            cout << n << " is the last prime number before " << num1 << endl;

        }
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

#include <iostream>
using namespace std;

int main() {
    int n, i, j, ctr, r;

    cout << "Enter a number: ";
    cin >> n;


    for (i = 0; i < 10; i++) {
        cout << "The frequency of " << i << " = ";

        // Initialize the counter for the current digit's frequency
        ctr = 0;

        // Loop to extract each digit from the input number
        for (j = n; j > 0; j = j / 10) {
            // Extract the last digit of the current number
            r = j % 10;

            // Check if the extracted digit matches the current digit being checked for frequency
            if (r == i) {
                // If it matches, increment the frequency counter
                ctr++;
            }
        }

        // Output the frequency of the current digit
        cout << ctr << endl;
    }

    return 0;
}

//#12: Write a program in C++ to input any number and print it in words.
#include <iostream>
using namespace std;
int main()
{
    int n, num = 0, i;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

    for (i = num; i > 0; i = i / 10) {

        switch (i % 10) {
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
    }
    cout << endl;
    return 0;
}

//#13: Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
    cout << "\n\n Find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):\n";
    cout << "------------------------------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum += i * i;
        cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
    return 0;
}

//#14: Write a program in C++ to display the multiplication table vertically from 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int j, i, n;

    cout << "Display the multipliaction table vertically from 1 to n: " << endl;
    cout << "Input number: ";
    cin >> n;

    cout << "Multiplication table from 1 to " << n << endl;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
                cout << j << "x" << i << "=" << i * j <<endl;
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

//#16: Write a C++ program to reverse a string.

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

//16b. Write a C++ program to reverse a number.
#include <iostream>
using namespace std;

int main(){
    int number, reversedNumber = 0, num_digit;
    cout << "Enter a number: " << endl;
    cin >> number;

    cout << "Original number is: " << number << endl;

    while(number != 0){
        num_digit = number % 10;
        reversedNumber = reversedNumber * 10 + num_digit;
        number = number / 10;
    }

    cout << "Reversed number is: " << reversedNumber << endl;
    return 0;
}

//#17: Write a C++ program to count the total number of digits 1 appearing in all
// positive integers less than or equal to a given integer n.

#include <iostream>
using namespace std;

int main(){
    int end_no, counter;
    cout << "Enter number: " << endl;
    cin >> end_no;

    cout << "Entered number is " << end_no << endl;

    for (int i = 1; i <= end_no; i++) { // we are starting from since 0 itself does not include 1
        int temp = i; // here, we copied i value into another variable because working all the way with i would affect for loop
        while (temp > 0) {
            if (temp % 10 == 1) // check if the last digit is 1
                counter++;      // increment the count if it is
            temp /= 10;         // remove the last digit
        }
    }
    cout << "Total number of 1's that appear until this number are " << counter << endl;
    return 0;
}

//#18: Write a C++ program that will let a user choose an option and perform certain action:
//1 - capitalize the first letter of each word in a given string.
//      Words must be separated by only one space.
//2 - count all the vowels in a given string
//3 - count all the words in a given string
//4 - change the case (lower to upper and upper to lower cases) of each character in a given string
//5 -  check whether a given string is a subsequence of another given string.
//      Return 1 for true and 0 for false.

#include <iostream>
#include <string>
using namespace std;
int main(){

    int option,  counter = 0, wordCount = 0, endOfLine, textIndex = 0, substrIndex = 0;;
    string text, substr;
    bool isWord = false;
    cout << "1 - capitalize the first letter of each word in a given string. Words must be separated by only one space." << endl;
    cout << "2 - count all the vowels in a given string" << endl;
    cout << "3 - count all the words in a given string" << endl;
    cout << "4 - change the case (lower to upper and upper to lower cases) of each character in a given string" << endl;
    cout << "5 - check whether a given string is a subsequence of another given string. Return 1 for true and 0 for false. " << endl;
    cout << "Choose your option: " << endl;
    cin >> option;

    cin.ignore(); //Explained in Lab 3

    switch(option){
        case 1:
            cout << "Enter string:" << endl;
            getline(cin, text);

            for (int x = 0; x < text.length(); x++)
            {
                // If it's the first character of the string or after a space, capitalize it
                if (x == 0 || text[x - 1] == ' ')
                {
                    text[x] = toupper(text[x]); // Convert the character to uppercase
                }
            }
            cout << "Capitalized string is: " << text << endl;
            break;
        case 2:
            cout << "Enter word to count number of vowels: " << endl;
            getline(cin, text);

            for(int i = 0; i < text.length(); i++){
                text[i] = tolower(text[i]); //so that we don't have to take care of upper case letter seperately
                if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u'){
                    counter++;
                }
            }
            cout << "Number of vowels in this string is: " << counter << endl;
            break;
        case 3:
            cout << "Enter phrase to count number of words: " << endl;
            getline(cin, text);

            //Check if the string is null or empty then return zero
            if (text.empty()) {
                cout << "String is empty\n";
            }

            endOfLine = text.length() - 1;

            for (int i = 0; i < text.length(); i++) {

                // Check if the character is a letter and index of character array doesn't
                // equal to end of line that means, it is a word and set isWord by true
                if (isalpha(text[i]) && i != endOfLine) {
                    isWord = true;
                }

                    // Check if the character is not a letter  that means there is a space, then we
                    // increment the wordCount by one and set the isWord by false
                else if (!isalpha(text[i]) && isWord)
                {
                    wordCount++;
                    isWord = false;
                }

                    // Check for the last word of the sentence and increment the wordCount  by one
                else if (isalpha(text[i]) && i == endOfLine) {
                    wordCount++;
                }
            }
            cout << "Number of words in this phrase is: " << wordCount << endl;
            break;
        case 4:
            cout << "Enter phrase to change case of the letters: " << endl;
            getline(cin, text);

            for(int i = 0; i < text.length(); i++){
                if(islower(text[i])){  //islower, isupper, tolower and toupper accept only single character
                    text[i] = toupper(text[i]);
                }
                else if (isupper(text[i])){
                    text[i] = tolower(text[i]);
                }
            }
            cout << "The new phrase is: " << text << endl;
            break;
        case 5:
            cout << "Enter string to search for substring: " << endl;
            getline(cin, text);

            cout << "Search for this substring: " << endl;
            getline(cin, substr);
            // Check if substr is a subsequence of text

            while (textIndex < text.length() && substrIndex < substr.length()) {
                if (text[textIndex] == substr[substrIndex]) {
                    substrIndex++;
                }
                textIndex++;
            }

            if (substrIndex == substr.length()) {
                cout << "1 - The subsequence is present in the main string." << endl;
            } else {
                cout << " 0 - The subsequence is not present in the main string." << endl;
            }
            break;
        default:
            cout << "Invalid option selected!" << endl;
    }
    return 0;
}

