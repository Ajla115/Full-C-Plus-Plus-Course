//#11: Write a C++ function that will return the numbers of a specified array after
// removing even numbers from it.

#include <iostream>
using namespace std;
void removeEvensFromArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            arr[i] = arr[i+1];
        }
    }
    for(int k = 0; k < size; k++){
        cout << arr[k] << endl;
    }
}
int main(){

    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    cout << "Resulted array is: \n";
    removeEvensFromArr(numbers, size);

    return 0;
}

