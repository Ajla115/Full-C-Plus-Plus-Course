//#17: Write a C++ function to convert a C string to uppercase and lowercase.

#include <iostream>
using namespace std;
void changeCases(char arr[]){
    int length = 0;
    while(arr[length] != '\0'){
        if(isupper(arr[length])){
            arr[length] = tolower(arr[length]);
        } else {
            arr[length] = toupper(arr[length]);
        }
        length++;
    }

    cout << arr;
}

int main(){
    char name[20] = "aa BB cc DD";
    changeCases(name);
    return 0;
}


