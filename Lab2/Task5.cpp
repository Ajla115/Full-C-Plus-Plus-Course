// #5: Write a C++ program that asks the user for the number between
// 1 and 7 and
// converts the number to the day in the week, using switch statement.

#include <iostream>
using namespace std;

int main(){
   int day;
   cout << "Enter day: \n";
   cin >> day;

   switch(day){
       case 1: //if (day == 1)
           cout << "Mon\n";
           break;
       case 2:
           cout << "Tue\n";
           break;
       case 3:
           cout << "Wed\n";
           break;
       case 4:
           cout << "Thur\n";
           break;
       case 5:
           cout << "Fri\n";
           break;
       case 6:
           cout << "Sat\n";
           break;
       case 7:
           cout << "Sunn\n";
           break;
       default:
           cout << "No match";
   }


    return 0;
}