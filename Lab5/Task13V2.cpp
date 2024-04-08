//
// Created by User on 28. 3. 2024..
//

#include <iostream>
using namespace std;
double sum(double x, int n){
    double term = 0.0, sum = 0.0;
    for(int k = 1; k <=n; k++){
        double sign = (k % 2 == 0) ? 1.0 : -1.0;
        term = sign / (x*(x+k));
       /* if(k % 2 == 0){
            term = 1.0 / (x*(x+k));
        } else {
            term = -1.0 / (x * (x+k));
        }*/

        sum += term;
    }

    return sum;

}
int main(){
    double x;
    int n;
    cout << "Enter real number: " << endl;
    cin >> x;

    cout << "Enter natural number: " << endl;
    cin >> n;

    cout << sum(x, n);

}