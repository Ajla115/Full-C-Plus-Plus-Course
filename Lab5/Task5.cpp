// Created by User on 23. 2. 2024..
// #5: Write a C++ function to check whether two characters appear equally in a given string.

#include <iostream>

using namespace std;
 void checkFrequency(string word, char a, char b){
     int firstCounter = 0, secondCounter = 0;
     for(int i = 0; i < word.length(); i++){
         if(word[i] == 'a'){
             firstCounter++;
         }
         if(word[i] == 'b'){
             secondCounter++;
         }
     }

     if (firstCounter != secondCounter){
         cout << "Two characters do not appear in the same amount in the given word\n";
     } else {
         cout << "Two characters appear in the same amount in the given word\n";
     }
 }

int main() {
    string word;
    char a, b;
    cout << "Enter a string: " << endl;
    getline(cin, word);

    cout << "Check for frequency of first letter: ";
    cin >> a;

    cout << "Check for frequency of second letter: ";
    cin >> b;

    checkFrequency(word, a, b);
}
