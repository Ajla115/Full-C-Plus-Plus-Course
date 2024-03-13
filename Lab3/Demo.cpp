//
// Created by User on 10. 3. 2024..
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    cout << "Min is " << min(5, 12) << endl;
    cout << "Max is " << max(3,7) << endl;
    //these two do not need cmath library, because they are part of the standard library

    cout << "Sqrt of 64 is " << sqrt(64) << endl;
    cout << round(2.5)<<endl;
    cout << log(2)<<endl;

    cout << abs(-4) << endl; //4
    cout << ceil(2.6) << endl; //3
    cout << floor(2.6) << endl; //2
    cout << cbrt(27) << endl; //3

    cout << floor(2.6) << endl; //2
    cout << floor(2.1) << endl; //2

    cout << ceil(2.6) << endl; //3
    cout << ceil(2.1) << endl; //3

    cout << round(2.6) << endl; //3
    cout << round(2.1) << endl; //2

    cout << "2 to the power of 3: " << pow(2, 3); //cmath

    return 0;

}