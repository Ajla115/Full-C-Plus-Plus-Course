
// Created by User on 20. 2. 2024..
// #12: Make the user enter create a song. The song will be written by entering multiple strings.
// At the end, the strings will be concatenated and the song will be displayed to the user.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string song = "";

    cout << "Enter the lines of your song. Type 'exit' to finish:\n";

    while (true) {
        string line;
        getline(cin, line);

        if (line == "exit") {
            break;
        }

        song += line + "\n";
    }

    cout << "\nYour song is :\n" << song << endl;

    return 0;
}
