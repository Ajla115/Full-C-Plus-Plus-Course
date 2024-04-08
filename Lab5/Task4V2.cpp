//#4: Write a C++ function to check whether the characters e and g are separated by
// exactly 2 places anywhere in a given string at least once.

#include <iostream>

using namespace std;

bool checkSpaces(string txt){
    for(int i = 0; i <= txt.size()-3; i++){
        if(txt[i] == 'e' && txt[i+2] == 'g'){
            return true;
        }
    }

    return false;

}


int main(){

    string txt;
    cout << "Enter string: " << endl;
    getline(cin, txt);

   if(checkSpaces(txt))
   {
       cout << "E and g are seperated at least once by two spaces.\n";
   }
   else {
       cout << "E and g are not seperated at least once by two spaces.\n";
   }


    return 0;
}
