// Created by User on 11. 2. 2024..
#include <iostream>
#include <cstring> // for strlen

using namespace std;

void checkIfPalindrom(char a[256]){
    char reverseString[256];
    int k = strlen(a);
    for (int i = k - 1, j = 0; i >= 0; i--, j++) {
        reverseString[j] = a[i];
    }
    reverseString[k] = '\0'; // ovo se mora dodati na kraj, to je nevidljivi karakter

    if (strcmp(a, reverseString) == 0) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

}

void removeSpaces(char str[256], char result[256]) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ')
            result[count] = str[i];
            count++;
    }
    result[count] = '\0';
}

int countWords(char b[256]) {
    int wordCount = 1;
    for (int i = 0; b[i]; i++) {
        //ovo a[i] znaci da ide do zadnjeg clana, a to je onaj \0
        if (b[i] == ' ') {
                wordCount++; // Increment word count
            }
        }

    return wordCount;
}

void convertToCamelCase(char c[256], char camelOutput[256]) {

    bool firstWord = true;
    int camelCaseIndex = 0;

    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] == ' ') {
            c[i+1] = toupper(c[i+1]);
        }
    }
    camelOutput[strlen(c)] = '\0'; // Add null terminator

}

int main() {
    cout << "Welcome to the Palindrome Check Application." << endl;
    while (true) {

    char inputString[128];
    char noSpacesString[256];
    char camelCaseString[256];

    cout << "Please enter a string to check if it is a palindrom or write 'break' if you want to exit: " << endl;
    //cin >> inputString;

    cin.getline(inputString, sizeof(inputString));
    //prvi parameter je sta cita, a drugi je dokle ce nastaviti da cita
    // Ovo ce procitati cijeli izraz jer inace mi je uzimalo samo prvu rijec
    //getLine omogucava multi-word ili multi-line input


    if (strcmp(inputString, "break") == 0){
        break;
    }

    removeSpaces(inputString, noSpacesString);
    checkIfPalindrom(noSpacesString);
    cout << "Number of words is: "<< countWords(inputString)<<endl;

    convertToCamelCase(inputString, camelCaseString);
    cout << "Camel Case Version is: " << camelCaseString<<endl;

}

    cout << "You have exited the application"<<endl;
    return 0;

}

