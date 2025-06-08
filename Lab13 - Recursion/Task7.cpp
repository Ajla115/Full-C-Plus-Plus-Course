//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
#include <fstream>
using namespace std;

// Recursive function to count lines in a file
int countLines(ifstream& file) {
    string line;
    if (!getline(file, line))
        return 0;  // Base case: no more lines
    return 1 + countLines(file);  // Recursive case: count this line + rest
}

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Error: Cannot open file." << endl;
        return 1;
    }

    int lineCount = countLines(file);
    cout << "Total number of lines: " << lineCount << endl;

    file.close();
    return 0;
}
