//
// Created by User on 27. 2. 2024..
//
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