//
// Created by Ajla Korman on 27. 3. 2025..
// Write a function to remove all vowels from a C string.
#include <iostream>
using namespace std;

void removeVowels(char text[]) {
    int j = 0;
    for (int i = 0; text[i] != '\0'; ++i) {
        if (text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u' &&
            text[i] != 'A' && text[i] != 'E' && text[i] != 'I' && text[i] != 'O' && text[i] != 'U') {
            text[j] = text[i];
            ++j;
            }
    }
}

int main() {
    char input[100];

    cout << "Enter a string: ";
    cin.getline(input, 100);  // read C-style string

    removeVowels(input);

    cout << "String without vowels: " << input << endl;

    return 0;
}
