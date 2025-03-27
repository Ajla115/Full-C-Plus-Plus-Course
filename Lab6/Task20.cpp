//Write a C++  function to perform a Caesar cipher encryption on a C string. The formula can be found on the figure below.
//
#include <iostream>
using namespace std;

void caesarCipher(char text[], int shift) {
    char upperAlphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowerAlphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; text[i] != '\0'; ++i) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            int index = text[i] - 'A';
            text[i] = upperAlphabet[(index + shift) % 26];
        }
        else if (text[i] >= 'a' && text[i] <= 'z') {
            int index = text[i] - 'a';
            text[i] = lowerAlphabet[(index + shift) % 26];
        }
    }
}

int main() {
    char message[100];

    cout << "Enter text to encrypt (lowercase or uppercase letters only): ";
    cin.getline(message, 100); // read C-string

    int shift;
    cout << "Enter shift value: ";
    cin >> shift;

    caesarCipher(message, shift);

    cout << "Encrypted text: " << message << endl;

    return 0;
}