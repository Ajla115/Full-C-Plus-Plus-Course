// Created by User on 12. 2. 2024..
//Write a C program to convert 6 hours 40 minutes into seconds.

#include <iostream>
#include <cstring>

using namespace std;

int convertToSeconds (int hours, int minutes){
    int seconds = hours * 3600 + minutes * 60;
    return seconds;
}

int main (){
    while(true){
        cout <<"Please enter time in hours and minutes to be converted to seconds"<<endl;
        cout <<"If you decide to quit, please write -1"<<endl;
        int hours, minutes, seconds;

        cout << "Enter hours: "<<endl;
        cin >> hours;

        if (hours == -1){
            cout<<"You have exited the application"<<endl;
            break;
        }

        cout << "Enter minutes: "<<endl;
        cin >> minutes;

        if (minutes == -1){
            cout<<"You have exited the application"<<endl;
            break;
        }

        seconds = convertToSeconds(hours, minutes);
        cout << "Time of " << hours << " hours and " << minutes << " minutes " << "converted only to seconds is " << seconds << endl;
    }


}


