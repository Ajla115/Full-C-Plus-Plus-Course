
#include <iostream>
using namespace std;
bool check(string txt, char a, char b){
    int counter1 = 0, counter2 = 0;
    for(int i = 0; i <= txt.size()-1; i++){
        if(txt[i] == a){
            counter1++;
        }
        if(txt[i] == b){
            counter2++;
        }
    }

    if(counter1 == counter2){
        return true;
    }

    return false;
}
int main() {
    string txt;
    char a, b;

    cout << "Enter string: \n";
    getline(cin, txt);

    cout << "Enter chars: \n";
    cin >> a >> b;

    cout << check(txt, a, b);
}