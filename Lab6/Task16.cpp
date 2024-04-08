//#16: Write a C++ function to find the length of a C string (excluding the null terminator).

#include <iostream>
using namespace std;
int countLength(char arr[]){
    int length = 0;
    while(arr[length] != '\0'){
        length++;
    }

    return length;
}
int main(){
    char name[20] = "Firstname Lastname";
    cout << countLength(name);
    return 0;
}


