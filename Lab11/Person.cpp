//
// Created by User on 25. 2. 2024.
//#8: Write a C++ program to create a class called "Person" with a name and age attribute.
// Create two instances of the "Person" class, set their attributes using the constructor, and print their name and age. 


#include <iostream>
#include <cstring>

using namespace std;

class Person{
private:
    string name;
    int age;

public:
    Person( string n, int a){
        name=n;
        age=a;
    }

    string getName(){
        return name;
    }

};

int main()
{
    Person p1("Amela", 12);
    Person p2("Lala", 22);

    cout<<p1.getName();
    cout<<p2.getName();

    return 0;
}
