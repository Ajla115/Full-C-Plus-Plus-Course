//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
#include <fstream>
using namespace std;

// Recursive function to sum numbers from file
int sumNumbers(ifstream& file) {
    int number;
    if (!(file >> number))
        return 0; // Base case: no more numbers
    return number + sumNumbers(file); // Recursive case
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

    int total = sumNumbers(file);
    cout << "Sum of numbers in file: " << total << endl;

    file.close();
    return 0;
}
