// Created by User on 1. 2. 2024.

#include <iostream>
using namespace std;
/*This program lets the user enter the amount in decimal
representing dollars and cents and output a report
listing the monetary equivalent in single dollars,
quarters, dimes, nickels, and pennies.
Dollar = 100 cents
Quarters = 25 cents
Dime = 10 cents
Nickel = 5 cents*/

int main(){

    double money;

    cout << "Enter money amount in dollars and cents: ";
    cin >> money;
    money = money * 100;

    int seperateDollars =  int(money) / 100 ;
    int  remainder = int(money) % 100;

    int numberOfquarters = remainder / 25;
    int  leftOverdimes = remainder % 25;

    int numberOfdimes = leftOverdimes / 10;
    int leftOverNickles = leftOverdimes % 10;


    cout << "Number of dollars is: " << seperateDollars << endl;

    cout <<"Total number of cents: " << remainder << endl;

    cout << "Total number of quarters: " << numberOfquarters << endl;

    cout << "Total number of dimes: " << numberOfdimes << endl;

    cout << "Total number of left over nickles: " << leftOverNickles << endl;


return 0;

}

