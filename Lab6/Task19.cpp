#include <iostream>
using namespace std;

int findOccurrence(char arr[], char sub[]) {
    int i = 0;
    while (arr[i] != '\0') { // Loop through each character of arr
        int j = 0;
        int start = i; // Start from the current position i in arr

        // Loop through each character of sub to check against arr
        while (sub[j] != '\0' && arr[start] != '\0' && arr[start] == sub[j]) {
            start++; // Move to the next character in arr
            j++; // Move to the next character in sub
        }

        // If we've reached the end of sub, then all characters matched
        if (sub[j] == '\0') {
            return i; // Return the starting index of the substring in arr
        }

        i++; // Move to the next starting position in arr for comparison
    }

    return -1; // Substring not found
}

int main() {
    char name[20] = "Laptops";
    char substring[20] = "ap";
    int position = findOccurrence(name, substring);
    if (position != -1) {
        cout << "Substring found at index: " << position << endl;
    } else {
        cout << "Substring not found" << endl;
    }
    return 0;
}
