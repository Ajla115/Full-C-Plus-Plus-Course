//Check if one string is the substring of the another string
#include <iostream>
using namespace std;

bool checkSubstring(string a, string b) {
    int m = a.length();
    int n = b.length();
    int i = 0, j = 0;
    // a= ape  b = apple
    while (i < m && j < n) {
        // If current character in b matches with current character in a, move to next character in a
        if (a[i] == b[j]) {
            i++;
        }
        // Move to next character in b
        j++;
    }

    // If all characters of a were found in b, then a is a subsequence of b
    return (i == m);
}

int main() {
    string a = "ape";
    string b = "apple";

    if (checkSubstring(a, b)) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    return 0;
}
