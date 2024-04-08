// #4: Write C++ program to find the maximum and minimum elements in the array.

#include <iostream>

using namespace std;

int main(){
    int numbers[] = {54, 67, 11, 119, 23};

    int size = sizeof(numbers)/sizeof(int);
    //cout << size;

    int max = numbers[0];
    int min = numbers[0];

    for(int i = 1; i < size; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
        if(numbers[i] < min){
            min = numbers[i];
        }

    }

    cout << "Max is: " << max << endl;
    cout << "Min is: " << min << endl;

    return 0;
}