//Consider the following string sentence=”AMOR VINCIT OMNIA. ”
//Change the “VINCIT” to “NON VINCAT”.

#include <iostream>
using namespace std;

int main(){
    string sentence="AMOR VINCIT OMNIA.";
    //Remember, spaces count as one character as well, when indexing

    cout << sentence[5]; //letter V starts here
    cout << "String after replacement is: " << sentence.replace(5, 3, "NON VINCAT");
    //5 is the index from where we are starting replacement
    //6 is the length of the string that we want to replace, in this case VINCIT

    return 0;
}