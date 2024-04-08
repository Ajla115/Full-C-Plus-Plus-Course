
#include <iostream>
using namespace std;

int main(){
    string cars[3] = {"Volvo", "Audi", "BMW"};
    cout << cars[1] << endl;
    cars[1] = "Range Rover";
    cout << cars[1] << endl;

    //loop using smhm similiar to for each loop in Python
    for(string k : cars){
        cout << "Car: " << k << endl;
    }

    //get an array size
    //sizeof - returns size in bytes
    cout << "Size of cars array is: " << sizeof(cars) << endl;
    cout << "Size of string is: " << sizeof(string) << endl;

    //find out about the number of elements
    cout << "Number of elements in car array is: " << sizeof(cars)/sizeof(string) << endl;

    //declare an empty array
    int base[5] = { };
    base[1] = 2;
    for(int i = 0; i < 5; i++){
        cout << base[i] << endl;
    }
}