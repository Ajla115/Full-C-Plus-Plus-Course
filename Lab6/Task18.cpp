//#18: Write a function to replace all occurrences of a specified
// character in a C string with another character.

#include <iostream>
using namespace std;
void replaceOccurences(char arr[], char a, char b){
    int length = 0;
    while(arr[length] != '\0'){
        if(arr[length] == a){
            arr[length] = b;
        }
        length++;
    }

    cout << arr;
}

int main(){
    char name[20] = "Laptops";
    replaceOccurences(name, 'p', '3');
    return 0;
}


