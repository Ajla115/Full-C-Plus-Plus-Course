#include <iostream>
#include <cmath>
using namespace std;

string checkIfPowerOfTwo(int n) {
    // Loop through integers from 0 to maximum integer value
    for (int x = 0; x < n; x++)
    {
        // Check if 2 raised to the power of 'x' is equal to 'n'
        if (pow(2, x) == n)
        {
            return "true";
        }
            // If 2 raised to the power of 'x' exceeds 'n', break the loop
        else if (pow(2, x) > n)  //n = 10, x = 4, 2 ^^ 4 = 16
        {
            break;
        }
    }
    return "false";
}

int main() {
    // Test cases
    cout << "Is 16 a power of 2: " << checkIfPowerOfTwo(16) << endl;
    cout << "Is 33 a power of 2: " << checkIfPowerOfTwo(33) << endl;
    cout << "Is 119 a power of 2: " << checkIfPowerOfTwo(119) << endl;
    return 0;
}