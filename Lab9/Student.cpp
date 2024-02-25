//
// Created by User on 25. 2. 2024..
// #3: Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
// Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.

#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int roll_no;
};


int main(){
    Student student;
    student.name = "John";
    student.roll_no = 2;

    cout << student.name << " " << student.roll_no << endl;
}