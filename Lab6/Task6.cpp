// #6: Write a C++ function that implements the linear search algorithm.
// Linear search is the algorithm that takes array and key
// (the element we are searching for in the array) as the function parameters.
// It is searching for the element in the array by comparing the key with every element and returns
// the index if the key is found. If the key is not found, it returns -1.

#include <iostream>
using namespace std;
int searchAlg(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
       if(arr[i] == key){
           return i;
            }
        }

    return -1;
}

int main(){
    int numbers[5] = {1,2,3,4, 5};
    int size = 5;
    int key = 7;
    cout << searchAlg(numbers, size, key);
    return 0;
}
