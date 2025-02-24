//#12: Make the user enter create a song. The song will be written by entering multiple strings.
// At the end, the strings will be concatenated and the song will be displayed to the user.

#include <iostream>
using namespace std;

int main(){

    string song, w1, w2, w3, w4, w5;

    cout << "Enter five words to create a song: " << endl;
    cin >> w1 >> w2 >> w3 >> w4 >> w5;

    song += w1 + " ";
    song += w2 + " ";
    song += w3 + " ";
    song += w4 + " ";
    song += w5;

    cout << "Newly created song is: " << song << endl;



    return 0;
}