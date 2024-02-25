// Created by User on 25. 2. 2024..
// #5: Create class Room and methods to calculate the area and volume of the room.
//Area = length * breadth;
//Volume = length * breadth * height;
//Use constructors, get and set methods.

#include <iostream>
using namespace std;

class Room{
public:
    double width, height, breadth;

    Room(double x, double y, double z){
        width=x;
        height=y;
        breadth=z;
    }


    double getWidth() {
        return width;
    }

    double getHeight() {
        return height;
    }

    double getBreadth() {
        return breadth;
    }

    double calculateArea(double width, double breadth){
        return width * breadth;
    }

    double calculateVolume(double width, double breadth, double height){
        return width * breadth * height;
    }

};

int main() {
    Room room1(20,40.5,30);
    cout<<room1.calculateArea(room1.getWidth(), room1.getBreadth())<<endl;
    cout<<room1.calculateVolume(room1.getWidth(), room1.getBreadth(), room1.getHeight());



    return 0;
}
