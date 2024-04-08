//#15: Write a C++ program to check whether a given number is a power of two or not.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int no;
    cout << "Enter number: " << endl;
    cin >> no;
    //2
    //3

   for(int i = 0; i < no; i++){
       if(pow(2,i) == no){
           cout << "This is a power of two." << endl;
           break;
       }
       else if (pow(2, i) > no){
           cout << "This is not power of 2." << endl;
           break;
       }
   }
    return 0;
}