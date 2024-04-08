//#8. Ask the user to enter coordinates of two points, and find the distance between them.
//Round the distance to two decimal places.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int x1, x2, y1, y2;
    double dist;

    cout << "Enter coordinated for point 1: " << endl;
    cin >> x1 >> y1;

    cout << "Enter coordinated for point 2: " << endl;
    cin >> x2 >> y2;

    dist = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));


    cout << "Distance between these two points is: " << round(dist*100)/100;

    return 0;
}
