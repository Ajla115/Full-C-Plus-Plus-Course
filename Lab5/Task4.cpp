#include <iostream>
using namespace std;
// #4: Write a C++ function to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least once.
// example amfEdG, the second letter after E has to be G. and not the third one, bc of the i++ part in for loop
void checkLettersEandG(string word) {
    bool e_letter_tracker = false;
    int counter = 0;
    for (int i = 0; i < word.length() - 2; i++) {
        if (word[i] == 'e') {
            e_letter_tracker = true;
            if (i + 2 < word.length() && word[i + 2] == 'g') {
                counter++;
            }
        }
    }
    if (!e_letter_tracker) {
        cout << "There is no letter 'e' in the word to start with." << endl;
    }

    cout << "The two-space distance between 'e' and 'g' is repeated: " << counter << " times." << endl;
}

int main() {
    string word;
    cout << "Enter a string: ";
    getline(cin, word);

    checkLettersEandG(word);

    return 0;
}
