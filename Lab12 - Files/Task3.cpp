//
// Created by Ajla Korman on 30. 5. 2025..
//

#include <iostream>
#include <fstream>
using namespace std;
class Student{
public:
    string name;
    string surname;
    int calculus_grade;
    int programming_grade;
    int physics_grade;
    int english_grade;
    int german_grade;
    Student (string user_name, string user_surname, int
    user_calculus_grade, int user_prog_grade, int user_physics_grade, int
    user_english_grade, int user_german_grade){
        name=user_name;
        surname=user_surname;
        calculus_grade=user_calculus_grade;
        programming_grade=user_prog_grade;
        physics_grade=user_physics_grade;
        english_grade=user_english_grade;
        german_grade=user_german_grade;
    }
    void generate_report_card(){
        double average=0.0;
        double
        sum=(calculus_grade+programming_grade+physics_grade+english_grade+german_grade)*1.0;

        average=sum/5.0;
        ofstream report_card("ReportCard.txt");
        report_card<<"Name:"<<name<<"\n";
        report_card<<"Surname:"<<surname<<"\n";
        report_card<<"GRADES"<<"\n";
        report_card<<"CALCULUS:"<<calculus_grade<<"\n";
        report_card<<"PROGRAMMING:"<<programming_grade<<"\n";
        report_card<<"PHYSICS:"<<physics_grade<<"\n";
        report_card<<"ENGLISH:"<<english_grade<<"\n";
        report_card<<"GERMAN:"<<german_grade<<"\n";
        report_card<<"Average:"<<average;
        report_card.close();
    }
};
int main() {
    Student john=Student("John","Johnson",6,8,7,10,10);
    john.generate_report_card();
}