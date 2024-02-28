// #11: Write a C++ program to calculate the average grade of a student at the end of the semester.
//The student had 4 courses: Calculus, Physics, Programming and English Language.
//The grades will be entered by the student. The average grade should be rounded to 2 decimal places.

#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout << "Enter grades for 4 subjects: Calculus, Physics, Programming and English Language: " << endl;
    cin >> a >> b >> c >> d;

    cout << "Average is: " << (double) (a+b+c+d/4) ;
    return 0;
}
