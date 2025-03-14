//#11. Suppose you need to estimate the area enclosed by four cities, given the GPS locations
// (latitude and longitude) of these cities, as shown in the following diagram.
// How would you write a program to solve this problem?

#include <iostream>
#include <cmath>

int main() {

    //charlotte
    double x1 = 35.2270869;
    double y1 = -80.8431267;

    //atlanta
    double x2 = 33.7489954;
    double y2 = -84.3879824;

    //orlando
    double x3 = 28.5383355;
    double y3 = -81.3792365;

    //savannah
    double x4 = 32.0835407;
    double y4 = -81.0998342;

    //distance between charlotte and atlanta
    double dx = x2 - x1;
    double dy = y2 - y1;

    //distance between orlando and atlanta
    double dx1 = x3 - x2;
    double dy1 = y3 - y2;

    //distance between orlando and savannah
    double dx2 = x4 - x3;
    double dy2 = y4 - y3;

    //distance between savannah and charlotte
    double dx3 = x1 - x4;
    double dy3 = y1 - y4;

    //straight distance between orlando and charlotte
    double dxmiddle = x3 - x1;
    double dymiddle = y3 - y1;

    double charlotte_atlanta_distance = std::sqrt(dx * dx + dy * dy);
    double atlanta_orlando_distance = std::sqrt(dx1 * dx1 + dy1 * dy1);
    double orlando_savannah_distance = std::sqrt(dx2 * dx2 + dy2 * dy2);
    double savannah_charlote_distance = std::sqrt(dx3 * dx3 + dy3 * dy3);
    double middle_distance = std::sqrt(dxmiddle * dxmiddle + dymiddle * dymiddle);


    double sA = (charlotte_atlanta_distance + atlanta_orlando_distance + middle_distance) / 2;
    double areaA = std::sqrt(sA * (sA - charlotte_atlanta_distance) * (sA - atlanta_orlando_distance) * (sA - middle_distance));

    double sB = (orlando_savannah_distance + savannah_charlote_distance + middle_distance) / 2;
    double areaB = std::sqrt(sB * (sB - orlando_savannah_distance) * (sB - savannah_charlote_distance) * (sB - middle_distance));

    std::cout<<areaA+areaB;


    return 0;
}