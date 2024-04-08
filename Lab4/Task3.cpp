
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter number: " << endl;
    cin >> num;

    for(int i = 1; i < 101; i++){
        if( i % num == 3){
            cout << "The number is: " << i << endl;
        }
    }
    cout << "\n";

    int k = 1;
    while(k <= 100){
        if( k % num == 3){
            cout << "Number once again is: " << k << endl;
        }
        k++;
    }

    return 0;
}