//  Created by User on 25. 2. 2024..
//  Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class
//  named 'Triangle' with a function to print the area and perimeter.

#include <iostream>
#include <math.h>
using namespace std;

class Triangle {
    public :
        int sideA;
        int sideB;
        int sideC;

        Triangle(int a, int b, int c){
            sideA = a;
            sideB = b;
            sideC = c;
        }

        void printPerimeter (){
            int perimeter = ( sideA + sideB + sideC);
            cout << "Perimeter is: " << perimeter << endl;
        }

        void printArea(){
            int sP = (sideA + sideB + sideC) / 2; //sp stads for semiPerimeter
            int area = sqrt( sP*(sP- sideA) * (sP - sideB) * (sP - sideC));
            cout << "The area is: " << area;
        }

};

int main(){
    Triangle triangle(4,3,5);
    triangle.printPerimeter();
    triangle.printArea();
    return 0;
}
