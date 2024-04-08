//#13: Write a function that will accept the real number X and natural number N and will calculate the
// value of the sum (only one loop should be used, pow function is not allowed).

#include <iostream>

using namespace std;

double sum(double x, int n){
    //don't forget to put double as return data type
    //int return data type would give you back zero
    double sum = 0.0;
    for(int k = 1; k <=n; k++){
        double sign = (k % 2 == 0) ? 1.0 : -1.0;
        double term = sign / (x*(x+n));
        sum += term;
    }
    return sum;
}


int main() {

    double x;
    int n;

    cout << "Enter real number: " << endl;
    cin >> x;

    cout << "Enter natural number: " << endl;
    cin >> n;

    cout << "Sum is: " << sum(x,n) << endl;
    return 0;

}
