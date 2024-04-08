#include <iostream>
using namespace std;

int main() {
    int n, i, j, ctr, r;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 0; i < 10; i++) {
        cout << "The frequency of " << i << " = ";

        // Initialize the counter for the current digit's frequency
        ctr = 0;

        // Loop to extract each digit from the input number
        //11122
        for (j = n; j > 0; j = j / 10) { //i++, i--
            // Extract the last digit of the current number
            r = j % 10;

            // Check if the extracted digit matches the current digit being checked for frequency
            if (r == i) {
                // If it matches, increment the frequency counter
                ctr++;
            }
        }

        // Output the frequency of the current digit
        cout << ctr << endl;
    }

    return 0;
}
