#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
    // Defining a 2D array
    int arr[2][3] = {{11, 33, 21}, {4, 5, 6}};

    // Calculating sum and average for each subarray
    for (int i = 0; i < 2; ++i) {
        int sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum += arr[i][j];
        }
        double avg = sum / 3.0;

        // Output the results
        cout << "Sum for subarray " << i << " is " << sum << endl;
        cout << "Average for subarray " << i << " is " << fixed << setprecision(2) << avg << endl;
    }

    return 0;
}
