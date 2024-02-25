// Created by User on 25. 2. 2024..
// #7: Write a C++ program to create a class called "Employee" with a name, salary,
// and hire date attributes, and a method to calculate years of service.

#include <iostream>
#include <cstring>

using namespace std;

class Employee{
private:
    string name;
    double salary;
    int hire_date;

public:
    Employee(string n, double s, int h_d){
        name=n;
        salary=s;
        hire_date=h_d;
    }

    void set_hire_date(int date){
        hire_date=date;
    }

    int get_hire_date(){
        return hire_date;
    }

    int calc_years(){
        return 2024 - hire_date;
    }
};

int main()
{
    Employee e("John", 200, 2000);

    cout<<e.calc_years();

    return 0;
}
