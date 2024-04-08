//#17: Write a C++ program to count the total number of digits 1 appearing in all
// positive integers less than or equal to a given integer n.
//11


#include <iostream>
using namespace std;

int main(){
    int end_no, counter;
    cout << "Enter number: " << endl;
    cin >> end_no;

    cout << "Entered number is " << end_no << endl;

    for (int i = 1; i <= end_no; i++) { // we are starting from since 0 itself does not include 1
        int temp = i; // here, we copied i value into another variable because working all the way with i would affect for loop
        while (temp > 0) {
            if (temp % 10 == 1) {
                // 1 % 10 == 1
                // check if the last digit is 1
                counter++;
            }   // increment the count if it is
            temp /= 10;
            //10 / 10 = 1// remove the last digit

        }
    }
    cout << "Total number of 1's that appear until this number are " << counter << endl;
    return 0;
}