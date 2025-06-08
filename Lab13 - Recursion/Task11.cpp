//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive function to generate balanced parentheses
void generateParentheses(int open, int close, string str) {
    if (open == 0 && close == 0) {
        cout << str << endl;
        return;
    }

    // Add an open parenthesis if available
    if (open > 0) {
        generateParentheses(open - 1, close, str + "(");
    }

    // Add a close parenthesis if it won't unbalance
    if (close > open) {
        generateParentheses(open, close - 1, str + ")");
    }
}

int main() {
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;

    generateParentheses(n, n, "");

    return 0;
}
