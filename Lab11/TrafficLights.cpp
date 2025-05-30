//
// Created by User on 25. 2. 2024..
//#9: Write a C++ program to create class called "TrafficLight" with attributes for color and duration,
// and methods to change the color and check for red or green.


#include <iostream>
#include <cstring>

using namespace std;

class TrafficLight{
public:
    string color;
    int duration;

    TrafficLight(string c, int d){
        color=c;
        duration=d;
    }

    void setColor(string co){
        color=co;
    }

    void checkColor(){
        if (color=="red"){
            cout<<"red";
        }
        else{
            cout<<"green";
        }
    }
};

int main()
{
    TrafficLight tl1("red", 20);


    tl1.setColor("green");
    tl1.checkColor();

    return 0;
}
