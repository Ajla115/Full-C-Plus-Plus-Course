//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a; // Base case: GCD found
    return gcd(b, a % b); // Recursive case
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    // Ensure positive input
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    int result = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
