//
// Created by User on 20. 2. 2024..
//#11: Write a C++ program to calculate the average grade of a student at the end of the semester.
//The student had 4 courses: Calculus, Physics, Programming and English Language.
//The grades will be entered by the student. The average grade should be rounded to 2 decimal places.

#include <iostream>
#include <cmath>

using namespace std;

int main(){

   int grade1, grade2, grade3, grade4;
   double avgGrade;

    cout << "Enter grade for Calculus: "<<endl;
    cin >> grade1;

    cout << "Enter grade for Physics: "<<endl;
    cin >> grade2;

    cout << "Enter grade for Programming: "<<endl;
    cin >> grade3;

    cout << "Enter grade for English Language: "<<endl;
    cin >> grade4;

    avgGrade = (grade1 + grade2 + grade3 + grade4) / 4;
    cout << "Average grade for this 4 courses rounded to two zeros is:  " << round(avgGrade * 100)/100 << endl;

}