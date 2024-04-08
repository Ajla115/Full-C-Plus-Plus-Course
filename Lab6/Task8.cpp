//#8:  Write a C++ function to reverse the elements of a given array in place.

#include <iostream>
using namespace std;
void reverseArr(int arr[], int size){
    for(int i = 0, j = size - 1; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }

}
int main(){

    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    cout << "Reversed array is: \n";
    reverseArr(numbers, size);

    return 0;
}
