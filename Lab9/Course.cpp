//
// Created by User on 25. 2. 2024..
//

#include <iostream>
using namespace std;

class Course {
public:
    int year;
    string professor;
    int grade;

    Course(int x, string y, int z) {
        year = x;
        professor = y;
        grade = z;
    }
};

int main() {
    int avg_grade=0;
    Course programing(2023, "Adnan", 10);
    Course calculus(2022, "Eldin", 7);
    Course physics(2023, "Lejla", 6);

    avg_grade = (programing.grade + calculus.grade + physics.grade) /3;


    cout << avg_grade;

    return 0;
}