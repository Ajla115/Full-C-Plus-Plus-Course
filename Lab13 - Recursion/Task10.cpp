//
// Created by Ajla Korman on 8. 6. 2025..
//

#include <iostream>
using namespace std;

// Recursive function to calculate binomial coefficient C(n, k)
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1; // Base case
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int n, k;
    cout << "Enter n and k (n >= k): ";
    cin >> n >> k;

    if (k > n || k < 0 || n < 0) {
        cout << "Invalid input. Ensure that 0 ≤ k ≤ n." << endl;
    } else {
        int result = binomialCoefficient(n, k);
        cout << "C(" << n << ", " << k << ") = " << result << endl;
    }

    return 0;
}
