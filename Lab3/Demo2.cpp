//
// Created by User on 10. 3. 2024..
//
//
// Created by User on 10. 3. 2024..
//

#include <iostream>

using namespace std;

string checkColor(string color1, string color2) {
    if ((color1 == "red" && color2 == "blue") || (color2 == "red" && color1 == "blue") ) {
        return "purple";
    }
    else if ((color1 == "yellow" && color2 == "blue") || (color2 == "yellow" && color1 == "blue")) {
        return "green";
    } else {
        return "invalid";
    }
}

int main(){

    cout << checkColor("red", "blue") << endl;
    cout << checkColor("yellow", "blue") << endl;
    cout << checkColor("red", "green") << endl;
    cout << checkColor("blue", "red") << endl;



    return 0;

}