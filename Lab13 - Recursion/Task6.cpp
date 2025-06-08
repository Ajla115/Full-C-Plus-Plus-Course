//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive function to count the number of ways
int countWays(int n) {
    if (n == 0)
        return 1; // 1 way (stay at bottom)
    if (n < 0)
        return 0; // No way to reach if negative
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int stairs;
    cout << "Enter number of stairs: ";
    cin >> stairs;

    int ways = countWays(stairs);
    cout << "Number of ways to reach step " << stairs << " = " << ways << endl;

    return 0;
}
