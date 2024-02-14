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

bool isPalindrom(char a[256]){

    int k = strlen(a) - 1;
    int i = 0;
    while(i != k){

        if (a[i] == ' '){
            i++;
            continue;
        }
        if (a[k] == ' '){
            k--;
            continue;
        }

        if(a[i] == a[k] && a[i] != ' '){
            ++i;
            --k;
            continue;
        }

        if(a[i] != a[k]) {
            return false;
        }
    }

    return true;

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

int wordCounter (char b[256]){
    bool flag = false;
    int wordCount = 0;
    int i = 0;
    //for (int i = 0; i < strlen(b); i++){
        while(b[i] != '\0'){

        if(b[i] == ' '){
            if(flag){
                wordCount++;
                flag = false;
            }
        }
        else if (b[i] != ' '){
          flag = true;
        }
        i++;
    }
    if(flag){
        wordCount++;
    }

    return wordCount;

}

void convertToCamelCase(char *c) {
    bool flag = false;
    char a[256];
    int counter{0};
    for (int i = 0; c[i+1] != '\0'; i++) {
        if (c[i] == ' ' && c[i + 1] != ' ') {
            counter++;
            if (counter > 1)
                c[i + 1] = toupper(c[i + 1]);
        }
    }

    int i, j = 0;
    while (true){
        if (c[i] != ' '){
            i++;
            continue;
        }
        if (i > j) j = i + 1;
        if (c[j] == ' '){
            j++;
            continue;
        }
        if (c[i] == ' ' && c[j] != ' ' && j > i){
            // jel prvi copy da li ide upper case
            c[i] = c[j];
            if (c[j] != '\0') c[j] = ' ';
            i++;
        }
        if (c[j] == '\0'){
            c[i] = '\0';
            break;
        }
    }
    cout<<c<<endl;
}

int main() {

    std::string  a = "hamo pipa0";

    a.erase(2, 1);
    cout<<a<<endl;

    /*
    char camelCaseString[256];
    cout << "Welcome to the Palindrome Check Application." << endl;
    //cout << wordCounter("ana voli milovana");
    char tekst[20] = "  ana voli milu ";
    convertToCamelCase(tekst);
    cout << tekst;

    // R value   L value    X value

   /* while (true) {

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

    cout << isPalindrom(inputString)<<endl;
    cout << "Number of words is: "<< countWords(inputString)<<endl;

    convertToCamelCase(inputString, camelCaseString);
    cout << "Camel Case Version is: " << camelCaseString<<endl;

}
        cout << true;
    cout << "You have exited the application"<<endl;*/
    return 0;

}

