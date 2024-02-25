//
// Created by User on 25. 2. 2024..
//
#include <iostream>

using namespace std;

class Car {
public:
    string model;
    int year_created;
    string color;
    int price;

};


int main() {
    Car myCar;
    myCar.model = "Ford";
    myCar.year_created = 2020;
    myCar.color = "Red";
    myCar.price = 75000;

    cout << myCar.model << "\n";
    cout << myCar.year_created << "\n";
    cout << myCar.color << "\n";
    cout << myCar.price<< "\n";

    return 0;
}

