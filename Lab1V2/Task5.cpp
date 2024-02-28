// #5: Create following variables with corresponding values and print them to the screen:
//ch = 'A'
//str = "fresh2refresh.com"
//flt = 10.234
//no = 15
//dbl = 20.123456

#include <iostream>
using namespace std;

int main(){

    char ch = 'A';
    string word = "fresh2refresh.com";
    float flt = 10.234;
    int num = 15;
    double dbl = 10.2345678;

    cout << ch << "\n" << word << endl;
    cout << word << endl;
    cout << flt << endl;
    cout << num << endl;
    cout << (int) dbl << endl;

    cout << typeid(dbl).name() ;


    return 0;
}
