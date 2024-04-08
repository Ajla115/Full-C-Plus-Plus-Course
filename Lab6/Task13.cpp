//#13: Write a C++ function to check if the given array is palindrome
// or not (read the same frontwards and backwards).

#include <iostream>
using namespace std;
bool checkIfPalindrome(int arr[], int size){
    for(int i = 0, j = size - 1; i < j; i++, j--){
        if(arr[i] != arr[j]){
            return false;
        }
    }
    return true;
}
int main(){

    int numbers[] = {1, 2, 3, 3,2,1};
    int size = sizeof(numbers)/sizeof(int);

    cout << "Palindrome: " << checkIfPalindrome(numbers, size);

    return 0;
}


