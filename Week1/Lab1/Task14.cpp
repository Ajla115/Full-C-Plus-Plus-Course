//
// Created by User on 26. 2. 2024..
//

#include <iostream>
using namespace std;
int main() {
    int number1 = 145;
    int number2 = 200;
    cout<<number1<<" "<<number2<<endl;
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    cout<<number1<<" "<<number2<<endl;
    return 0;
}
