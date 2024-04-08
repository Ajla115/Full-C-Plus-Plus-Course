#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Input a number to find the last prime number occurs before the number: ";
    cin >> num1;
    //6
    // 5,4,3,2,

    // Loop from num1 - 1 down to 2
    for (int n = num1 - 1; n >= 2; n--) {
        bool isPrime = true;

        // Check if n is divisible by any number from 2 to n-1
        for (int m = 2; m * m <= n; m++) {
            if (n % m == 0) {
                isPrime = false;
                break;
            }
        }

        // If no divisors were found, n is prime
        if (isPrime) {
            cout << n << " is the last prime number before " << num1 << endl;

        }
    }
    return 0;
}