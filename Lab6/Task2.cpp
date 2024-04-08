//Created by User on 23. 2. 2024..
// #2: Take 5 inputs from user and store them in an array.

#include <iostream>
using namespace std;

int main(){

   int numbers[5];

   for(int i = 0; i < 5; i++){
       cout << i + 1 << ". input is: ";
       cin >> numbers[i];
   }

   for(int single_item : numbers){
       cout << single_item << endl;
   }

   return 0;



}


