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
                //text[i] == " "
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
            //aa BB
            //AA bb
            getline(cin, text);

            for(int i = 0; i < text.length(); i++){
                if(islower(text[i])){
                    //islower, isupper, tolower and toupper accept only single character
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
            //hello

            cout << "Search for this substring: " << endl;
            getline(cin, substr);
            //llo
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

