//#14: Write a function that will remove zeros from a number.
// In case the number does not contain zeros, just return it as
// the output.
//Example:
//Input: 3050000
//Output: 35

#include <iostream>
#include <string>
using namespace std;
int removeZeroes(int a){
    string convert, convert2;

    convert = to_string(a);
    for(int i = 0; i<= convert.size()-1; i++){
        if(convert[i] == '0'){
            continue;
        }
        else {
            convert2 += convert[i];
        }
    }

    int final_no = stoi(convert2);
    return final_no;
}
int main(){
    cout << "Enter number: " << endl;
    int num;
    cin >> num;

    cout << "Entered number is: " << num << endl;
    cout << "Number without zeroes is: " << removeZeroes(num) << endl;
    return 0;
}