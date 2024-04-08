//#5: Write C++ program to remove duplicate elements from the array.

#include <iostream>
#include <vector>
using namespace std;


int main(){

    int numbers[8] = {34, 56, 34, 56, 78, 91, 24, 91};
    int noDuplicates[8] = {};

    for(int i = 0; i < 8; i++){
        //prolazi kroz numbers
        bool isDuplicate = false;
        for(int j = 0; j < 8; j++){
            if(i != j && numbers[i] == noDuplicates[j]){
                isDuplicate = true;
                break;
            }
        }

        noDuplicates[i] = numbers[i];
    }

    for(int single_item : noDuplicates){
        cout << single_item << endl;
    }

    return 0;



















    vector < int >  noDupsNumbers;
    for(int i = 0; i < 8; i++){
        bool copies = false;
        for(int k = 0; k < 8; k++){
            if( i != k && numbers[i] == numbers[k]){
                copies = true;
                break;
            }

        }

        if(!copies) {
            noDupsNumbers.push_back(numbers[i]);
        }
    }

    for(int s : noDupsNumbers){
        cout << s << endl;
    }
    return 0;

}