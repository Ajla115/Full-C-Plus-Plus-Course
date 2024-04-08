//#7: Write a C++ function that finds the middle element in the array.
// The middle element can be calculated using the following formula: M = L + (H - L)/2,
// where L element is the low (first element in the array) and H is high (last element in the array).
#include <iostream>

using namespace std;

int calculateMiddle(int arr[], int size){
    int low = arr[0];
    int high = arr[size-1];
    int middle = low + (high - low)/2;
    return middle;
}


int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

   cout << "Middle element is: " <<  calculateMiddle(numbers, size);

    return 0;
}
