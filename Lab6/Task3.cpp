// #3: Display sum and average of array elements.

#include <iostream>

using namespace std;

int main(){
   int numbers[5] = {1,2,3,4,5};

   int sum = 0;

   for(int i = 0; i < 5; i++){
       sum += numbers[i];
   }

   int noOfElements = sizeof(numbers)/sizeof(int);
   int avg = sum / noOfElements;

   cout << "Sum is " << sum << endl;
   cout << "Avg is " << avg << endl;


   return 0;
}