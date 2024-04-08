//#12: Write a function that will take two time periods as inputs (in the HH:MM:SS format).
// The function should return the time passed between the two periods.
//Enter the first time: 14 15 7
//Enter the second time: 16 9 34
//Time passed: 1 hour, 54 minutes and 27 seconds.
//Conversion into seconds=hours*3600+60*minutes+seconds
//Hours= diff/3600;
//Minutes=(diff%3600)/60;
//Seconds=diff%60;

#include <iostream>

using namespace std;

void calculateTime(int hour1, int minute1, int seconds1, int hour2, int minute2, int seconds2);

int main(){

    int h1, m1, s1, h2, m2, s2;

    cout << "Enter first time: " << endl;
    cin >> h1 >> m1 >> s1;

    cout << "Enter second time: " << endl;
    cin >> h2 >> m2 >> s2;

    cout << "First time is " << h1 << ":" << m1 << ":" << s1 << endl;
    cout << "Second time is " << h2 << ":" << m2 << ":" << s2 << endl;
    calculateTime(h1, m1, s1, h2, m2,s2);

    return 0;

}


void calculateTime(int hour1, int minute1, int seconds1, int hour2, int minute2, int seconds2){

    int sum1 = 0, sum2 = 0, diff = 0, nh, nm, ns;

    sum1 = hour1 * 3600 + minute1 * 60 + seconds1;
    sum2 = hour2 * 3600 + minute2 * 60 + seconds2;

    diff = sum2 - sum1;

    nh = diff / 3600;
    nm = (diff%3600)/60;
    ns = diff % 60;

    cout << "Time passed between these hours is: " << nh << ":" << nm << ":" << ns << endl;

}

